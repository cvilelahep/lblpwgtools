#pragma once

#include <string>
#include <vector>
#include <map>

namespace ana
{
  std::vector<std::string> GetGenieWeightNames();

  // -1 if not found, and an error printout unless quiet=true
  int GetGenieIndex(const std::string& name, bool quiet = false);

  std::vector<std::string> const &GenieOnOffList();
  bool GetGenieIsOnOff(const std::string& name);

  std::vector<std::string> const &GetGenieBadDialList();
  std::vector<std::string> const &GetGenieDoNotFitList();

  std::string GetGenieWeightName(int index);

  double GetGenieMin(int index);

  double GetGenieMax(int index);

  std::pair<double,double> GetGenieDialLimits(const std::string& name);

}
