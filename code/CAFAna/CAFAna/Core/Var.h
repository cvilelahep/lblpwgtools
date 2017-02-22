#pragma once

// This file defines the basic Var object. For specific variables, and examples
// of how to implement your own, see Vars.h

#include <functional>
#include <set>
#include <string>

#include "CAFAna/Core/Binning.h"

namespace caf{class StandardRecord; class SRSpill; class SRSpillTruthBranch;}

namespace ana
{

  /// Most useful for combining weights.
  // need to declare these functions first
  // (this needed because of reasons detailed in https://en.wikibooks.org/wiki/More_C%2B%2B_Idioms/Making_New_Friends;
  //  we want a 'one-to-one' relationship.)
  template<class T> class GenericVar;
  template<class T> GenericVar<T> operator*(const GenericVar<T>& a, const GenericVar<T>& b);
  template<class T> GenericVar<T> operator/(const GenericVar<T>& a, const GenericVar<T>& b);
  template<class T> GenericVar<T> operator+(const GenericVar<T>& a, const GenericVar<T>& b);
  template<class T> GenericVar<T> operator-(const GenericVar<T>& a, const GenericVar<T>& b);

  /// Template for Var and SpillVar
  template<class T> class GenericVar
  {
  public:
    /// The type of the function part of a var
    typedef double (VarFunc_t)(const T* sr);

    /// std::function can wrap a real function, function object, or lambda
    GenericVar(const std::set<std::string>& reqs,
               const std::function<VarFunc_t>& fun)
      : fReqs(reqs), fFunc(fun), fID(fgNextID++)
    {
    }

    /// The list of branches required to be active
    const std::set<std::string>& Requires() const {return fReqs;}

    /// Allows a variable to be called with double value = myVar(sr) syntax
    double operator()(const T* sr) const
    {
      return fFunc(sr);
    }

    /// Vars with the same definition will have the same ID
    int ID() const {return fID;}

    static int MaxID() {return fgNextID-1;}
  protected:
    // Give this guy access to the constructor that sets ID
    friend GenericVar<T> operator*<>(const GenericVar<T>& a, const GenericVar<T>& b);
    friend GenericVar<T> operator/<>(const GenericVar<T>& a, const GenericVar<T>& b);
    friend GenericVar<T> operator+<>(const GenericVar<T>& a, const GenericVar<T>& b);
    friend GenericVar<T> operator-<>(const GenericVar<T>& a, const GenericVar<T>& b);

    GenericVar(const std::set<std::string>& reqs,
               const std::function<VarFunc_t>& fun,
	       int id)
      : fReqs(reqs), fFunc(fun), fID(id)
    {
    }

    std::set<std::string> fReqs;
    std::function<VarFunc_t> fFunc;

    int fID;
    /// The next ID that hasn't yet been assigned
    static int fgNextID;
  };

  /// \brief Representation of a variable to be retrieved from a \ref
  /// caf::StandardRecord object
  ///
  /// A Var consists of a function, taking a StandardRecord and returning the
  /// value of the variable (which may be some complicated function), plus a
  /// list of the branch names that must be active in the tree. This explicit
  /// naming of required branches leads to a significant speedup in CAF
  /// loading. However, if you neglect a necessary branch, that field will be
  /// uninitialized in the StandardRecord you are passed.
  typedef GenericVar<caf::StandardRecord> Var;

  /// \brief Equivalent of \ref Var acting on \ref caf::SRSpill. For use in
  /// making plots of POT per run etc
  typedef GenericVar<caf::SRSpill> SpillVar;

  /// \brief Var designed to be used over the nuTree, ie all neutrinos, not
  /// just those that got slices.
  typedef GenericVar<caf::SRSpillTruthBranch> SpillTruthVar;

  /// \brief For Vars where literally all you need is a single CAF variable
  ///
  /// eg Var myVar = SIMPLEVAR(my.var.str);
  /// NB lack of quotes quotes around my.var.str
#define SIMPLEVAR(CAFNAME) Var({#CAFNAME}, [](const caf::StandardRecord* sr){return sr->CAFNAME;})

  /// The simplest possible Var, always 1. Used as a default weight.
  const Var kUnweighted({}, [](const caf::StandardRecord*){return 1;});

  const SpillVar kSpillUnweighted({}, [](const caf::SRSpill*){return 1;});

  const SpillTruthVar kSpillTruthUnweighted({}, [](const caf::SRSpillTruthBranch*){return 1;});

  /// \brief Variable formed from two input variables
  ///
  /// The binning of each variable has to be given to allow conversion into a
  /// 1D binned representation.
  template<class T> GenericVar<T>
  Var2D(const GenericVar<T>& a, const Binning& binsa,
        const GenericVar<T>& b, const Binning& binsb);

  /// \brief Variable formed from two input variables
  ///
  /// The binning of each variable has to be given to allow conversion into a
  /// 1D binned representation.
  template<class T> GenericVar<T>
  Var2D(const GenericVar<T>& a, int na, double a0, double a1,
        const GenericVar<T>& b, int nb, double b0, double b1);

  /// This is just like a Var2D, but useful for 3D Spectra
  template<class T> GenericVar<T>
  Var3D(const GenericVar<T>& a, const Binning& binsa,
        const GenericVar<T>& b, const Binning& binsb,
        const GenericVar<T>& c, const Binning& binsc);

  /// This is just like a Var2D, but useful for 3D Spectra
  template<class T> GenericVar<T>
  Var3D(const GenericVar<T>& a, int na, double a0, double a1,
        const GenericVar<T>& b, int nb, double b0, double b1,
        const GenericVar<T>& c, int nc, double c0, double c1);

  // TODO - remove once no more legacy callers exist
  #define SpillTruthVar2D Var2D
  #define SpillTruthVar3D Var3D

  /// Use to rescale another variable.
  Var Scaled(const Var& v, double s);

  /// Use to weight events up and down by some factor
  Var Constant(double c);

  /// Use to take sqrt of a var
  Var Sqrt(const Var& v);

  /// Enable combining requirements with 'v1.Requires() + v2.Requires()' syntax
  //  (Note that this function could in principle be written to work for
  //   any type, not just std::string, by templating it.  I'm not sure that this
  //   is the right header for something as global as that -- plus it'd need
  //   to live somewhere besides ana:: namespace -- so it's left specialized.)
  std::set<std::string> operator+(const std::set<std::string>& r1, const std::set<std::string>& r2);
} // namespace
