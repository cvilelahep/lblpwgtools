#include "BDTReweighter.h"
class MissingProtonFakeData_BDTRW_RHC : public BDTReweighter {
 public :
 MissingProtonFakeData_BDTRW_RHC() : BDTReweighter(0.9933) {;}
  ~MissingProtonFakeData_BDTRW_RHC() {;}

size_t get_num_output_group(void) {
  return 1;
}

size_t get_num_feature(void) {
  return 8;
}

static inline float pred_transform(float margin) {
  return margin;
}

   float predict(union BDTReweighter::BDTReweighterFeature* data, int pred_margin) {
  float sum = 0.0f;
  unsigned int tmp;
  if ( (data[6].fvalue < 0.4690963)) {
    if ( (data[6].fvalue < 0.16332012)) {
      if ( (data[6].fvalue < 9.9792487e-06)) {
        if ( (data[7].fvalue < 0.50045466)) {
          if ( (data[1].fvalue < 0.5)) {
            sum += (float)0.14789745;
          } else {
            sum += (float)0.14521447;
          }
        } else {
          if ( (data[5].fvalue < 4.0986643)) {
            sum += (float)0.15361977;
          } else {
            sum += (float)0.14085284;
          }
        }
      } else {
        if ( (data[6].fvalue < 0.055328734)) {
          if ( (data[6].fvalue < 0.046912324)) {
            if ( (data[7].fvalue < 0.38950926)) {
              sum += (float)0.10903674;
            } else {
              sum += (float)0.10399035;
            }
          } else {
            if ( (data[7].fvalue < 0.38510254)) {
              sum += (float)0.11811694;
            } else {
              sum += (float)0.11085104;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.14586569)) {
            if ( (data[6].fvalue < 0.096048981)) {
              sum += (float)0.13348964;
            } else {
              sum += (float)0.13864736;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.15553276;
            } else {
              sum += (float)0.14331779;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.30904639)) {
        if ( (data[1].fvalue < 0.5)) {
          if ( (data[6].fvalue < 0.2141892)) {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.16993596;
            } else {
              sum += (float)0.15967117;
            }
          } else {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.18891217;
            } else {
              sum += (float)0.17260905;
            }
          }
        } else {
          if ( (data[5].fvalue < 5.2489681)) {
            if ( (data[7].fvalue < 0.37464875)) {
              sum += (float)0.16453527;
            } else {
              sum += (float)0.14943187;
            }
          } else {
            if ( (data[7].fvalue < 0.3523407)) {
              sum += (float)0.14421622;
            } else {
              sum += (float)0.12843502;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 5.7074933)) {
          if ( (data[6].fvalue < 0.369394)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.20095846;
            } else {
              sum += (float)0.18211481;
            }
          } else {
            if ( (data[7].fvalue < 0.39546981)) {
              sum += (float)0.22176886;
            } else {
              sum += (float)0.20313475;
            }
          }
        } else {
          if ( (data[5].fvalue < 14.508604)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.18436669;
            } else {
              sum += (float)0.16432811;
            }
          } else {
            if ( (data[7].fvalue < 0.067952521)) {
              sum += (float)0.15211916;
            } else {
              sum += (float)0.13558213;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.75377464)) {
      if ( (data[5].fvalue < 6.0844517)) {
        if ( (data[6].fvalue < 0.62279129)) {
          if ( (data[6].fvalue < 0.53009927)) {
            if ( (data[7].fvalue < 0.42844772)) {
              sum += (float)0.24710323;
            } else {
              sum += (float)0.22702427;
            }
          } else {
            if ( (data[5].fvalue < 2.6072235)) {
              sum += (float)0.25173151;
            } else {
              sum += (float)0.27104163;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.66229093)) {
            sum += (float)0.29645219;
          } else {
            if ( (data[7].fvalue < 0.53544217)) {
              sum += (float)0.32962462;
            } else {
              sum += (float)0.30259299;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.61221969)) {
          if ( (data[5].fvalue < 14.50091)) {
            if ( (data[7].fvalue < 0.1939519)) {
              sum += (float)0.20523626;
            } else {
              sum += (float)0.18827827;
            }
          } else {
            sum += (float)0.16203417;
          }
        } else {
          if ( (data[5].fvalue < 7.4796519)) {
            if ( (data[6].fvalue < 0.67154765)) {
              sum += (float)0.22491418;
            } else {
              sum += (float)0.28079864;
            }
          } else {
            if ( (data[7].fvalue < 0.22253439)) {
              sum += (float)0.22518203;
            } else {
              sum += (float)0.19661099;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 7.8206654)) {
        if ( (data[6].fvalue < 1.1938875)) {
          if ( (data[6].fvalue < 0.94181806)) {
            if ( (data[5].fvalue < 6.4049244)) {
              sum += (float)0.35992184;
            } else {
              sum += (float)0.28205985;
            }
          } else {
            if ( (data[5].fvalue < 6.3997722)) {
              sum += (float)0.4152703;
            } else {
              sum += (float)0.34063202;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.5640197)) {
            if ( (data[5].fvalue < 6.4627113)) {
              sum += (float)0.50197136;
            } else {
              sum += (float)0.39159131;
            }
          } else {
            sum += (float)0.60332197;
          }
        }
      } else {
        if ( (data[6].fvalue < 1.3025817)) {
          if ( (data[6].fvalue < 0.91300178)) {
            if ( (data[7].fvalue < 0.17980956)) {
              sum += (float)0.25413564;
            } else {
              sum += (float)0.22902942;
            }
          } else {
            if ( (data[7].fvalue < 0.19738546)) {
              sum += (float)0.28649718;
            } else {
              sum += (float)0.26111186;
            }
          }
        } else {
          if ( (data[5].fvalue < 9.2115631)) {
            sum += (float)0.37409243;
          } else {
            sum += (float)0.3232787;
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.42736411)) {
    if ( (data[6].fvalue < 0.16331674)) {
      if ( (data[6].fvalue < 9.9792487e-06)) {
        if ( (data[7].fvalue < 0.46573716)) {
          if ( (data[1].fvalue < 0.5)) {
            sum += (float)0.10350817;
          } else {
            if ( (data[5].fvalue < 3.8110065)) {
              sum += (float)0.10308617;
            } else {
              sum += (float)0.10034259;
            }
          }
        } else {
          if ( (data[5].fvalue < 4.3102164)) {
            sum += (float)0.10731994;
          } else {
            sum += (float)0.097282261;
          }
        }
      } else {
        if ( (data[6].fvalue < 0.05534552)) {
          if ( (data[6].fvalue < 0.046912324)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.076454088;
            } else {
              sum += (float)0.073585279;
            }
          } else {
            if ( (data[7].fvalue < 0.25838852)) {
              sum += (float)0.0830561;
            } else {
              sum += (float)0.078964263;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.1458126)) {
            if ( (data[7].fvalue < 0.31784824)) {
              sum += (float)0.096003346;
            } else {
              sum += (float)0.090050332;
            }
          } else {
            if ( (data[7].fvalue < 0.27298266)) {
              sum += (float)0.10955499;
            } else {
              sum += (float)0.099347778;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.29715818)) {
        if ( (data[1].fvalue < 0.5)) {
          if ( (data[6].fvalue < 0.21408999)) {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.11894727;
            } else {
              sum += (float)0.1117825;
            }
          } else {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.13138109;
            } else {
              sum += (float)0.11947867;
            }
          }
        } else {
          if ( (data[5].fvalue < 5.7208252)) {
            if ( (data[7].fvalue < 0.30031216)) {
              sum += (float)0.11551694;
            } else {
              sum += (float)0.10514892;
            }
          } else {
            if ( (data[7].fvalue < 0.14795978)) {
              sum += (float)0.10414571;
            } else {
              sum += (float)0.093129486;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 5.4736824)) {
          if ( (data[7].fvalue < 0.32370999)) {
            if ( (data[6].fvalue < 0.34144562)) {
              sum += (float)0.13837448;
            } else {
              sum += (float)0.15092365;
            }
          } else {
            if ( (data[6].fvalue < 0.3518497)) {
              sum += (float)0.12268551;
            } else {
              sum += (float)0.13938551;
            }
          }
        } else {
          if ( (data[5].fvalue < 15.463459)) {
            if ( (data[7].fvalue < 0.17135626)) {
              sum += (float)0.12414794;
            } else {
              sum += (float)0.10832527;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.10722851;
            } else {
              sum += (float)0.092255637;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.66095966)) {
      if ( (data[5].fvalue < 5.755362)) {
        if ( (data[6].fvalue < 0.56456113)) {
          if ( (data[6].fvalue < 0.49972811)) {
            if ( (data[7].fvalue < 0.34641436)) {
              sum += (float)0.16697511;
            } else {
              sum += (float)0.15231018;
            }
          } else {
            if ( (data[5].fvalue < 2.7666302)) {
              sum += (float)0.1681879;
            } else {
              sum += (float)0.18258007;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.60142136)) {
            if ( (data[5].fvalue < 2.7464011)) {
              sum += (float)0.1759145;
            } else {
              sum += (float)0.19309698;
            }
          } else {
            if ( (data[7].fvalue < 0.46696711)) {
              sum += (float)0.2091631;
            } else {
              sum += (float)0.19066398;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 15.1399)) {
          if ( (data[6].fvalue < 0.53124994)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.14129139;
            } else {
              sum += (float)0.12551853;
            }
          } else {
            if ( (data[5].fvalue < 7.6134701)) {
              sum += (float)0.16428483;
            } else {
              sum += (float)0.14259945;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.18319727)) {
            if ( (data[6].fvalue < 0.5615561)) {
              sum += (float)0.10782656;
            } else {
              sum += (float)0.12896413;
            }
          } else {
            sum += (float)0.095279254;
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 7.4836698)) {
        if ( (data[6].fvalue < 1.0427558)) {
          if ( (data[6].fvalue < 0.85786164)) {
            if ( (data[5].fvalue < 2.8962202)) {
              sum += (float)0.2189222;
            } else {
              sum += (float)0.23788813;
            }
          } else {
            if ( (data[5].fvalue < 6.4183493)) {
              sum += (float)0.27197066;
            } else {
              sum += (float)0.22012492;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.3814008)) {
            if ( (data[5].fvalue < 6.4158325)) {
              sum += (float)0.31982854;
            } else {
              sum += (float)0.25624689;
            }
          } else {
            sum += (float)0.40880886;
          }
        }
      } else {
        if ( (data[6].fvalue < 1.1525452)) {
          if ( (data[6].fvalue < 0.84323472)) {
            if ( (data[7].fvalue < 0.24705638)) {
              sum += (float)0.16670635;
            } else {
              sum += (float)0.14228451;
            }
          } else {
            if ( (data[7].fvalue < 0.16008827)) {
              sum += (float)0.19820222;
            } else {
              sum += (float)0.17806515;
            }
          }
        } else {
          if ( (data[5].fvalue < 8.4645672)) {
            if ( (data[6].fvalue < 1.6974816)) {
              sum += (float)0.26492482;
            } else {
              sum += (float)0.35861269;
            }
          } else {
            if ( (data[6].fvalue < 1.5946479)) {
              sum += (float)0.20654576;
            } else {
              sum += (float)0.24020343;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.41319877)) {
    if ( (data[6].fvalue < 0.16144818)) {
      if ( (data[6].fvalue < 6.0729981e-06)) {
        if ( (data[7].fvalue < 0.47269571)) {
          if ( (data[1].fvalue < 0.5)) {
            sum += (float)0.072458558;
          } else {
            if ( (data[5].fvalue < 4.7992525)) {
              sum += (float)0.071929738;
            } else {
              sum += (float)0.069925904;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.7865868)) {
            sum += (float)0.075437956;
          } else {
            sum += (float)0.069086015;
          }
        }
      } else {
        if ( (data[6].fvalue < 0.055328734)) {
          if ( (data[6].fvalue < 0.046908632)) {
            if ( (data[7].fvalue < 0.26524836)) {
              sum += (float)0.053613853;
            } else {
              sum += (float)0.051283561;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.058186512;
            } else {
              sum += (float)0.054279938;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.1235112)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.066457525;
            } else {
              sum += (float)0.061966509;
            }
          } else {
            if ( (data[7].fvalue < 0.39678833)) {
              sum += (float)0.072914794;
            } else {
              sum += (float)0.063777983;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.29542196)) {
        if ( (data[5].fvalue < 5.3516817)) {
          if ( (data[7].fvalue < 0.28735146)) {
            if ( (data[6].fvalue < 0.22205961)) {
              sum += (float)0.082312703;
            } else {
              sum += (float)0.090467893;
            }
          } else {
            if ( (data[5].fvalue < 3.276345)) {
              sum += (float)0.078920938;
            } else {
              sum += (float)0.069302596;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.086792096)) {
            if ( (data[6].fvalue < 0.24552503)) {
              sum += (float)0.072649695;
            } else {
              sum += (float)0.078458339;
            }
          } else {
            if ( (data[5].fvalue < 7.6302085)) {
              sum += (float)0.070890874;
            } else {
              sum += (float)0.065259822;
            }
          }
        }
      } else {
        if ( (data[1].fvalue < 0.5)) {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[5].fvalue < 6.3902454)) {
              sum += (float)0.10994805;
            } else {
              sum += (float)0.094302461;
            }
          } else {
            if ( (data[5].fvalue < 5.2432423)) {
              sum += (float)0.097777508;
            } else {
              sum += (float)0.082068168;
            }
          }
        } else {
          if ( (data[5].fvalue < 6.7254381)) {
            if ( (data[7].fvalue < 0.39281386)) {
              sum += (float)0.09227933;
            } else {
              sum += (float)0.080564916;
            }
          } else {
            if ( (data[7].fvalue < 0.40493083)) {
              sum += (float)0.074174441;
            } else {
              sum += (float)0.053116132;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.67996764)) {
      if ( (data[5].fvalue < 5.6671515)) {
        if ( (data[6].fvalue < 0.57708454)) {
          if ( (data[6].fvalue < 0.48128471)) {
            if ( (data[7].fvalue < 0.27547008)) {
              sum += (float)0.11665201;
            } else {
              sum += (float)0.10656708;
            }
          } else {
            if ( (data[7].fvalue < 0.43045115)) {
              sum += (float)0.1269723;
            } else {
              sum += (float)0.11488418;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.62677419)) {
            if ( (data[7].fvalue < 0.47069117)) {
              sum += (float)0.13961616;
            } else {
              sum += (float)0.12474969;
            }
          } else {
            if ( (data[6].fvalue < 0.67755079)) {
              sum += (float)0.15082446;
            } else {
              sum += (float)0.10945797;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 14.505955)) {
          if ( (data[6].fvalue < 0.5652259)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.10072257;
            } else {
              sum += (float)0.088777304;
            }
          } else {
            if ( (data[5].fvalue < 8.1254921)) {
              sum += (float)0.11622935;
            } else {
              sum += (float)0.10339387;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.57503784)) {
            if ( (data[7].fvalue < 0.10102041)) {
              sum += (float)0.077757522;
            } else {
              sum += (float)0.068010248;
            }
          } else {
            if ( (data[7].fvalue < 0.21640989)) {
              sum += (float)0.095955171;
            } else {
              sum += (float)0.066730455;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 6.7751837)) {
        if ( (data[6].fvalue < 1.0956602)) {
          if ( (data[6].fvalue < 0.82006752)) {
            if ( (data[5].fvalue < 2.9174061)) {
              sum += (float)0.15233515;
            } else {
              sum += (float)0.16841623;
            }
          } else {
            if ( (data[7].fvalue < 0.44839281)) {
              sum += (float)0.196714;
            } else {
              sum += (float)0.17552562;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.5033754)) {
            if ( (data[5].fvalue < 2.4103808)) {
              sum += (float)0.19130233;
            } else {
              sum += (float)0.23919562;
            }
          } else {
            sum += (float)0.30823648;
          }
        }
      } else {
        if ( (data[6].fvalue < 1.2231216)) {
          if ( (data[6].fvalue < 0.84563023)) {
            if ( (data[5].fvalue < 15.293501)) {
              sum += (float)0.12066951;
            } else {
              sum += (float)0.096032485;
            }
          } else {
            if ( (data[5].fvalue < 9.1006603)) {
              sum += (float)0.15122285;
            } else {
              sum += (float)0.12863827;
            }
          }
        } else {
          if ( (data[5].fvalue < 8.5282278)) {
            if ( (data[6].fvalue < 1.8549742)) {
              sum += (float)0.18869905;
            } else {
              sum += (float)0.27422667;
            }
          } else {
            if ( (data[7].fvalue < 0.15294527)) {
              sum += (float)0.18087043;
            } else {
              sum += (float)0.15140828;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.39563251)) {
    if ( (data[6].fvalue < 0.1460683)) {
      if ( (data[6].fvalue < 1.2023926e-05)) {
        if ( (data[7].fvalue < 0.53045887)) {
          if ( (data[1].fvalue < 0.5)) {
            if ( (data[7].fvalue < 0.42026645)) {
              sum += (float)0.050701048;
            } else {
              sum += (float)0.052218702;
            }
          } else {
            if ( (data[5].fvalue < 3.8122711)) {
              sum += (float)0.050723244;
            } else {
              sum += (float)0.049018722;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.548099)) {
            sum += (float)0.053173691;
          } else {
            sum += (float)0.049000904;
          }
        }
      } else {
        if ( (data[6].fvalue < 0.055328734)) {
          if ( (data[6].fvalue < 0.046696808)) {
            if ( (data[7].fvalue < 0.4502517)) {
              sum += (float)0.037415642;
            } else {
              sum += (float)0.034115456;
            }
          } else {
            if ( (data[7].fvalue < 0.21559832)) {
              sum += (float)0.040904555;
            } else {
              sum += (float)0.038492572;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.095948853)) {
            if ( (data[7].fvalue < 0.25478953)) {
              sum += (float)0.045804761;
            } else {
              sum += (float)0.0427211;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.048954219;
            } else {
              sum += (float)0.044585053;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.23011445)) {
        if ( (data[1].fvalue < 0.5)) {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[5].fvalue < 5.5970569)) {
              sum += (float)0.06008881;
            } else {
              sum += (float)0.05433305;
            }
          } else {
            if ( (data[5].fvalue < 5.3676944)) {
              sum += (float)0.054696493;
            } else {
              sum += (float)0.047076505;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.43535268)) {
            if ( (data[5].fvalue < 3.5199103)) {
              sum += (float)0.053507913;
            } else {
              sum += (float)0.047088891;
            }
          } else {
            if ( (data[5].fvalue < 3.6562109)) {
              sum += (float)0.045574769;
            } else {
              sum += (float)0.034038726;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 5.0739985)) {
          if ( (data[7].fvalue < 0.24097577)) {
            if ( (data[6].fvalue < 0.31336099)) {
              sum += (float)0.065537743;
            } else {
              sum += (float)0.074303061;
            }
          } else {
            if ( (data[6].fvalue < 0.34097928)) {
              sum += (float)0.058288444;
            } else {
              sum += (float)0.067733109;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.38252741)) {
            if ( (data[5].fvalue < 14.1777)) {
              sum += (float)0.056537803;
            } else {
              sum += (float)0.048177287;
            }
          } else {
            if ( (data[5].fvalue < 6.2397537)) {
              sum += (float)0.048097547;
            } else {
              sum += (float)0.036301728;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.70533156)) {
      if ( (data[5].fvalue < 6.3983307)) {
        if ( (data[6].fvalue < 0.59343576)) {
          if ( (data[6].fvalue < 0.500256)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.081248038;
            } else {
              sum += (float)0.072524466;
            }
          } else {
            if ( (data[7].fvalue < 0.57784379)) {
              sum += (float)0.089799315;
            } else {
              sum += (float)0.078463003;
            }
          }
        } else {
          if ( (data[5].fvalue < 4.7103944)) {
            if ( (data[5].fvalue < 2.6965718)) {
              sum += (float)0.094053335;
            } else {
              sum += (float)0.10994865;
            }
          } else {
            if ( (data[6].fvalue < 0.69714487)) {
              sum += (float)0.089479715;
            } else {
              sum += (float)0.048360191;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 15.287283)) {
          if ( (data[6].fvalue < 0.59417343)) {
            if ( (data[7].fvalue < 0.15748298)) {
              sum += (float)0.068443753;
            } else {
              sum += (float)0.057595607;
            }
          } else {
            if ( (data[7].fvalue < 0.2912465)) {
              sum += (float)0.080550522;
            } else {
              sum += (float)0.059506029;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.37289888)) {
            if ( (data[6].fvalue < 0.49897546)) {
              sum += (float)0.048755009;
            } else {
              sum += (float)0.05889529;
            }
          } else {
            if ( (data[5].fvalue < 33.086426)) {
              sum += (float)0.029510034;
            } else {
              sum += (float)-0.0058133304;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 8.5023251)) {
        if ( (data[6].fvalue < 1.1335509)) {
          if ( (data[6].fvalue < 0.85786164)) {
            if ( (data[5].fvalue < 5.2949219)) {
              sum += (float)0.11864874;
            } else {
              sum += (float)0.093180507;
            }
          } else {
            if ( (data[5].fvalue < 5.3785686)) {
              sum += (float)0.13790496;
            } else {
              sum += (float)0.11162417;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.6214588)) {
            if ( (data[5].fvalue < 5.486608)) {
              sum += (float)0.17620315;
            } else {
              sum += (float)0.13801399;
            }
          } else {
            if ( (data[7].fvalue < 0.28105789)) {
              sum += (float)0.069352828;
            } else {
              sum += (float)0.22267736;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 1.4794958)) {
          if ( (data[7].fvalue < 0.22197619)) {
            if ( (data[6].fvalue < 1.0132627)) {
              sum += (float)0.089927264;
            } else {
              sum += (float)0.10606722;
            }
          } else {
            if ( (data[5].fvalue < 9.522459)) {
              sum += (float)0.095490515;
            } else {
              sum += (float)0.071587987;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.18804853)) {
            if ( (data[5].fvalue < 14.398808)) {
              sum += (float)0.10101067;
            } else {
              sum += (float)0.1447085;
            }
          } else {
            if ( (data[5].fvalue < 10.053095)) {
              sum += (float)0.14443582;
            } else {
              sum += (float)0.10425927;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.45230496)) {
    if ( (data[6].fvalue < 0.19188099)) {
      if ( (data[6].fvalue < 1.2023926e-05)) {
        if ( (data[3].fvalue < 0.5)) {
          if ( (data[7].fvalue < 0.19315535)) {
            sum += (float)0.03558195;
          } else {
            if ( (data[5].fvalue < 3.3610468)) {
              sum += (float)0.035542142;
            } else {
              sum += (float)0.03389702;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.44136691)) {
            sum += (float)0.036212347;
          } else {
            sum += (float)0.039928738;
          }
        }
      } else {
        if ( (data[6].fvalue < 0.05534552)) {
          if ( (data[6].fvalue < 0.046933625)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.026296841;
            } else {
              sum += (float)0.024678007;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.028613975;
            } else {
              sum += (float)0.026177224;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.1246589)) {
            if ( (data[7].fvalue < 0.40268129)) {
              sum += (float)0.032509152;
            } else {
              sum += (float)0.028153174;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.037056375;
            } else {
              sum += (float)0.032031756;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.34098452)) {
        if ( (data[1].fvalue < 0.5)) {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[6].fvalue < 0.24462551)) {
              sum += (float)0.043963548;
            } else {
              sum += (float)0.050981447;
            }
          } else {
            if ( (data[5].fvalue < 4.100925)) {
              sum += (float)0.042446442;
            } else {
              sum += (float)0.036284886;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.5270486)) {
            if ( (data[7].fvalue < 0.60905182)) {
              sum += (float)0.041313767;
            } else {
              sum += (float)0.031037755;
            }
          } else {
            if ( (data[7].fvalue < 0.40517414)) {
              sum += (float)0.036048908;
            } else {
              sum += (float)0.027350973;
            }
          }
        }
      } else {
        if ( (data[1].fvalue < 0.5)) {
          if ( (data[5].fvalue < 5.3250637)) {
            if ( (data[7].fvalue < 0.21668327)) {
              sum += (float)0.05875032;
            } else {
              sum += (float)0.052115891;
            }
          } else {
            if ( (data[5].fvalue < 14.270535)) {
              sum += (float)0.046592899;
            } else {
              sum += (float)0.033795319;
            }
          }
        } else {
          if ( (data[5].fvalue < 8.36798)) {
            if ( (data[7].fvalue < 0.44486576)) {
              sum += (float)0.047751065;
            } else {
              sum += (float)0.039443746;
            }
          } else {
            if ( (data[7].fvalue < 0.40286446)) {
              sum += (float)0.036383841;
            } else {
              sum += (float)0.023684343;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.77323008)) {
      if ( (data[5].fvalue < 5.0596204)) {
        if ( (data[6].fvalue < 0.6370154)) {
          if ( (data[5].fvalue < 2.7188282)) {
            if ( (data[5].fvalue < 2.711827)) {
              sum += (float)0.055838544;
            } else {
              sum += (float)0.018871184;
            }
          } else {
            if ( (data[5].fvalue < 3.7575545)) {
              sum += (float)0.067157179;
            } else {
              sum += (float)0.058924105;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.14607)) {
            if ( (data[7].fvalue < 0.2980988)) {
              sum += (float)0.1020966;
            } else {
              sum += (float)0.0695737;
            }
          } else {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.084832788;
            } else {
              sum += (float)0.051851202;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 9.3283587)) {
          if ( (data[6].fvalue < 0.49127865)) {
            if ( (data[5].fvalue < 5.0842524)) {
              sum += (float)7.24282e-05;
            } else {
              sum += (float)0.047333464;
            }
          } else {
            if ( (data[7].fvalue < 0.30281931)) {
              sum += (float)0.054542795;
            } else {
              sum += (float)0.064798281;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.22228976)) {
            if ( (data[6].fvalue < 0.57548541)) {
              sum += (float)0.042704787;
            } else {
              sum += (float)0.054284062;
            }
          } else {
            if ( (data[7].fvalue < 0.42786539)) {
              sum += (float)0.038456794;
            } else {
              sum += (float)0.022742145;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 6.7671027)) {
        if ( (data[6].fvalue < 1.2827902)) {
          if ( (data[5].fvalue < 3.1251068)) {
            if ( (data[7].fvalue < 0.37149256)) {
              sum += (float)0.097908117;
            } else {
              sum += (float)0.079362035;
            }
          } else {
            if ( (data[6].fvalue < 0.99793911)) {
              sum += (float)0.094912;
            } else {
              sum += (float)0.11412614;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.7482588)) {
            if ( (data[7].fvalue < 0.83360338)) {
              sum += (float)0.13559188;
            } else {
              sum += (float)0.060968406;
            }
          } else {
            sum += (float)0.17619893;
          }
        }
      } else {
        if ( (data[6].fvalue < 1.801424)) {
          if ( (data[6].fvalue < 1.0118151)) {
            if ( (data[7].fvalue < 0.15234141)) {
              sum += (float)0.067931123;
            } else {
              sum += (float)0.054029193;
            }
          } else {
            if ( (data[5].fvalue < 8.1675339)) {
              sum += (float)0.091990225;
            } else {
              sum += (float)0.069948122;
            }
          }
        } else {
          if ( (data[5].fvalue < 9.8944511)) {
            if ( (data[7].fvalue < 0.23962282)) {
              sum += (float)0.046227872;
            } else {
              sum += (float)0.13660793;
            }
          } else {
            if ( (data[7].fvalue < 0.17771226)) {
              sum += (float)0.11282577;
            } else {
              sum += (float)0.080167636;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.48157388)) {
    if ( (data[6].fvalue < 0.20701012)) {
      if ( (data[6].fvalue < 1.2023926e-05)) {
        if ( (data[7].fvalue < 0.50929528)) {
          if ( (data[7].fvalue < 0.24437365)) {
            if ( (data[5].fvalue < 11.131884)) {
              sum += (float)0.024923403;
            } else {
              sum += (float)0.0243803;
            }
          } else {
            if ( (data[5].fvalue < 3.8647571)) {
              sum += (float)0.024639795;
            } else {
              sum += (float)0.023062538;
            }
          }
        } else {
          if ( (data[1].fvalue < 0.5)) {
            sum += (float)0.027078418;
          } else {
            if ( (data[5].fvalue < 5.1161356)) {
              sum += (float)0.025368787;
            } else {
              sum += (float)0.022058552;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.055328734)) {
          if ( (data[6].fvalue < 0.046654876)) {
            if ( (data[7].fvalue < 0.20360744)) {
              sum += (float)0.018520031;
            } else {
              sum += (float)0.01743271;
            }
          } else {
            if ( (data[5].fvalue < 3.1981444)) {
              sum += (float)0.020360867;
            } else {
              sum += (float)0.018695595;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.14586569)) {
            if ( (data[7].fvalue < 0.21814978)) {
              sum += (float)0.023362812;
            } else {
              sum += (float)0.021213088;
            }
          } else {
            if ( (data[7].fvalue < 0.22865883)) {
              sum += (float)0.027963405;
            } else {
              sum += (float)0.02330602;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.35331327)) {
        if ( (data[7].fvalue < 0.44044223)) {
          if ( (data[5].fvalue < 2.5547328)) {
            if ( (data[6].fvalue < 0.27936962)) {
              sum += (float)0.033408687;
            } else {
              sum += (float)0.039647348;
            }
          } else {
            if ( (data[5].fvalue < 5.9009104)) {
              sum += (float)0.03020403;
            } else {
              sum += (float)0.02461274;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.4748682)) {
            if ( (data[7].fvalue < 0.64462453)) {
              sum += (float)0.034952529;
            } else {
              sum += (float)0.018960923;
            }
          } else {
            if ( (data[5].fvalue < 2.0959883)) {
              sum += (float)0.023520811;
            } else {
              sum += (float)0.01904151;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 4.4438152)) {
          if ( (data[7].fvalue < 0.45028239)) {
            if ( (data[7].fvalue < 0.18124463)) {
              sum += (float)0.045497626;
            } else {
              sum += (float)0.037982449;
            }
          } else {
            if ( (data[5].fvalue < 1.7661092)) {
              sum += (float)0.035919353;
            } else {
              sum += (float)0.028296197;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.43029654)) {
            if ( (data[5].fvalue < 13.999575)) {
              sum += (float)0.031593043;
            } else {
              sum += (float)0.021889366;
            }
          } else {
            if ( (data[7].fvalue < 0.46089101)) {
              sum += (float)0.0034147617;
            } else {
              sum += (float)0.018602286;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.78218508)) {
      if ( (data[5].fvalue < 4.8686485)) {
        if ( (data[6].fvalue < 0.59959447)) {
          if ( (data[7].fvalue < 0.25639153)) {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.042856243;
            } else {
              sum += (float)0.057767913;
            }
          } else {
            if ( (data[6].fvalue < 0.55041027)) {
              sum += (float)0.0390063;
            } else {
              sum += (float)0.046414029;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.69593763)) {
            if ( (data[5].fvalue < 2.7190671)) {
              sum += (float)0.048469122;
            } else {
              sum += (float)0.056940265;
            }
          } else {
            if ( (data[6].fvalue < 0.70867264)) {
              sum += (float)0.045745336;
            } else {
              sum += (float)0.02057595;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 15.293501)) {
          if ( (data[6].fvalue < 0.61922151)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.039310835;
            } else {
              sum += (float)0.031834997;
            }
          } else {
            if ( (data[5].fvalue < 4.8936925)) {
              sum += (float)-0.027586907;
            } else {
              sum += (float)0.042868696;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.76097858)) {
            if ( (data[6].fvalue < 0.75173879)) {
              sum += (float)0.027034044;
            } else {
              sum += (float)-0.012595515;
            }
          } else {
            if ( (data[7].fvalue < 0.37981582)) {
              sum += (float)0.064948678;
            } else {
              sum += (float)-0.031225134;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 6.4171267)) {
        if ( (data[6].fvalue < 1.3325288)) {
          if ( (data[5].fvalue < 3.1283159)) {
            if ( (data[5].fvalue < 3.1267171)) {
              sum += (float)0.058018658;
            } else {
              sum += (float)-0.026548291;
            }
          } else {
            if ( (data[5].fvalue < 4.811965)) {
              sum += (float)0.077621803;
            } else {
              sum += (float)0.059474383;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.61245048)) {
            if ( (data[5].fvalue < 3.7619267)) {
              sum += (float)0.16849747;
            } else {
              sum += (float)0.10690138;
            }
          } else {
            if ( (data[6].fvalue < 1.8049836)) {
              sum += (float)0.079427741;
            } else {
              sum += (float)0.12258895;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 1.8108777)) {
          if ( (data[6].fvalue < 1.0118151)) {
            if ( (data[5].fvalue < 6.5625029)) {
              sum += (float)-0.0011011345;
            } else {
              sum += (float)0.042382658;
            }
          } else {
            if ( (data[5].fvalue < 8.5568905)) {
              sum += (float)0.062511727;
            } else {
              sum += (float)0.048632368;
            }
          }
        } else {
          if ( (data[5].fvalue < 9.8944511)) {
            if ( (data[7].fvalue < 0.534361)) {
              sum += (float)0.086642258;
            } else {
              sum += (float)0.1385247;
            }
          } else {
            if ( (data[7].fvalue < 0.21875635)) {
              sum += (float)0.07514637;
            } else {
              sum += (float)0.054021001;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.3889212)) {
    if ( (data[6].fvalue < 0.17874527)) {
      if ( (data[6].fvalue < 0.00010058594)) {
        if ( (data[7].fvalue < 0.4460465)) {
          if ( (data[7].fvalue < 0.27684778)) {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.017488897;
            } else {
              sum += (float)0.017236007;
            }
          } else {
            if ( (data[5].fvalue < 2.3548107)) {
              sum += (float)0.017546484;
            } else {
              sum += (float)0.016397079;
            }
          }
        } else {
          if ( (data[5].fvalue < 4.1927004)) {
            if ( (data[3].fvalue < 0.5)) {
              sum += (float)0.018357757;
            } else {
              sum += (float)0.0204252;
            }
          } else {
            if ( (data[7].fvalue < 0.49745542)) {
              sum += (float)0.013287894;
            } else {
              sum += (float)0.016307754;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.055413697)) {
          if ( (data[7].fvalue < 0.42221147)) {
            if ( (data[6].fvalue < 0.046654876)) {
              sum += (float)0.012864236;
            } else {
              sum += (float)0.014045884;
            }
          } else {
            if ( (data[5].fvalue < 4.0809512)) {
              sum += (float)0.012244789;
            } else {
              sum += (float)0.0010120535;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.4979904)) {
            if ( (data[6].fvalue < 0.095985688)) {
              sum += (float)0.015265769;
            } else {
              sum += (float)0.017464509;
            }
          } else {
            if ( (data[5].fvalue < 4.0035052)) {
              sum += (float)0.012802037;
            } else {
              sum += (float)0.00036157639;
            }
          }
        }
      }
    } else {
      if ( (data[1].fvalue < 0.5)) {
        if ( (data[2].fvalue < 0.5)) {
          if ( (data[6].fvalue < 0.29745629)) {
            if ( (data[5].fvalue < 5.3440437)) {
              sum += (float)0.023358006;
            } else {
              sum += (float)0.017038494;
            }
          } else {
            if ( (data[7].fvalue < 0.34205219)) {
              sum += (float)0.028811885;
            } else {
              sum += (float)0.035775065;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.36767107)) {
            if ( (data[5].fvalue < 2.385828)) {
              sum += (float)0.028115308;
            } else {
              sum += (float)0.020355903;
            }
          } else {
            if ( (data[5].fvalue < 1.5648801)) {
              sum += (float)0.021445274;
            } else {
              sum += (float)0.013358517;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 2.7540648)) {
          if ( (data[7].fvalue < 0.59865975)) {
            if ( (data[5].fvalue < 1.4468729)) {
              sum += (float)0.031082854;
            } else {
              sum += (float)0.021702766;
            }
          } else {
            if ( (data[7].fvalue < 0.83990532)) {
              sum += (float)0.016049223;
            } else {
              sum += (float)-0.0040479945;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.19214621)) {
            if ( (data[5].fvalue < 13.394)) {
              sum += (float)0.021176048;
            } else {
              sum += (float)0.013791286;
            }
          } else {
            if ( (data[5].fvalue < 3.6942)) {
              sum += (float)0.017093381;
            } else {
              sum += (float)0.013442401;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.66136169)) {
      if ( (data[5].fvalue < 4.5186253)) {
        if ( (data[7].fvalue < 0.30213034)) {
          if ( (data[6].fvalue < 0.60772777)) {
            if ( (data[5].fvalue < 2.6853733)) {
              sum += (float)0.025494335;
            } else {
              sum += (float)0.03276534;
            }
          } else {
            if ( (data[7].fvalue < 0.24910821)) {
              sum += (float)0.033479366;
            } else {
              sum += (float)0.051603995;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.54194093)) {
            if ( (data[5].fvalue < 3.7476468)) {
              sum += (float)0.026291251;
            } else {
              sum += (float)0.019391723;
            }
          } else {
            if ( (data[7].fvalue < 0.82957673)) {
              sum += (float)0.031500831;
            } else {
              sum += (float)-0.01167334;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 8.3678284)) {
          if ( (data[6].fvalue < 0.59407091)) {
            if ( (data[7].fvalue < 0.58804786)) {
              sum += (float)0.024185413;
            } else {
              sum += (float)0.0047992188;
            }
          } else {
            if ( (data[6].fvalue < 0.64929545)) {
              sum += (float)0.034732357;
            } else {
              sum += (float)0.010118106;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.10770714)) {
            if ( (data[5].fvalue < 17.626469)) {
              sum += (float)0.025912149;
            } else {
              sum += (float)0.018975208;
            }
          } else {
            if ( (data[5].fvalue < 16.669838)) {
              sum += (float)0.017927151;
            } else {
              sum += (float)0.0086263977;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 7.3214607)) {
        if ( (data[6].fvalue < 1.0048242)) {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[6].fvalue < 1.0045867)) {
              sum += (float)0.041305356;
            } else {
              sum += (float)-0.073045522;
            }
          } else {
            if ( (data[5].fvalue < 3.1965022)) {
              sum += (float)-0.01208858;
            } else {
              sum += (float)0.023755237;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.4528424)) {
            if ( (data[6].fvalue < 1.4462843)) {
              sum += (float)0.056499515;
            } else {
              sum += (float)-0.059546899;
            }
          } else {
            if ( (data[6].fvalue < 1.4756322)) {
              sum += (float)0.13086656;
            } else {
              sum += (float)0.07503888;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 1.32178)) {
          if ( (data[7].fvalue < 0.17349534)) {
            if ( (data[6].fvalue < 0.71207225)) {
              sum += (float)0.02686605;
            } else {
              sum += (float)0.036024164;
            }
          } else {
            if ( (data[5].fvalue < 9.4651871)) {
              sum += (float)0.033682514;
            } else {
              sum += (float)0.019808952;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.54274559)) {
            if ( (data[7].fvalue < 0.20056342)) {
              sum += (float)0.050508026;
            } else {
              sum += (float)0.03511906;
            }
          } else {
            if ( (data[5].fvalue < 14.570335)) {
              sum += (float)0.081876509;
            } else {
              sum += (float)0.017817652;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.48561656)) {
    if ( (data[6].fvalue < 0.21483994)) {
      if ( (data[6].fvalue < 6.0729981e-06)) {
        if ( (data[3].fvalue < 0.5)) {
          if ( (data[5].fvalue < 8.7125435)) {
            if ( (data[7].fvalue < 0.42913866)) {
              sum += (float)0.01214696;
            } else {
              sum += (float)0.012669385;
            }
          } else {
            if ( (data[7].fvalue < 0.14078663)) {
              sum += (float)0.012084965;
            } else {
              sum += (float)0.010297625;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.25852245)) {
            sum += (float)0.012489215;
          } else {
            if ( (data[7].fvalue < 0.40684992)) {
              sum += (float)0.013235113;
            } else {
              sum += (float)0.014240779;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.088929236)) {
          if ( (data[6].fvalue < 0.055319794)) {
            if ( (data[5].fvalue < 3.4971504)) {
              sum += (float)0.009263061;
            } else {
              sum += (float)0.0084446259;
            }
          } else {
            if ( (data[5].fvalue < 4.6786947)) {
              sum += (float)0.010827052;
            } else {
              sum += (float)0.0084140338;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.931016)) {
            if ( (data[7].fvalue < 0.52965176)) {
              sum += (float)0.012980158;
            } else {
              sum += (float)0.0081119929;
            }
          } else {
            if ( (data[7].fvalue < 0.15302297)) {
              sum += (float)0.011969505;
            } else {
              sum += (float)0.006044717;
            }
          }
        }
      }
    } else {
      if ( (data[4].fvalue < 0.5)) {
        if ( (data[5].fvalue < 3.9610357)) {
          if ( (data[7].fvalue < 0.22080645)) {
            if ( (data[6].fvalue < 0.28391087)) {
              sum += (float)0.01664005;
            } else {
              sum += (float)0.021921767;
            }
          } else {
            if ( (data[6].fvalue < 0.3472141)) {
              sum += (float)0.013327942;
            } else {
              sum += (float)0.017044539;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.16604117)) {
            if ( (data[5].fvalue < 8.5177803)) {
              sum += (float)0.017998235;
            } else {
              sum += (float)0.01175175;
            }
          } else {
            if ( (data[6].fvalue < 0.32662386)) {
              sum += (float)0.0086705191;
            } else {
              sum += (float)0.012329686;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.31172937)) {
          if ( (data[6].fvalue < 0.23779336)) {
            if ( (data[7].fvalue < 0.61551189)) {
              sum += (float)0.014037763;
            } else {
              sum += (float)-0.024234159;
            }
          } else {
            if ( (data[6].fvalue < 0.31085214)) {
              sum += (float)0.018505268;
            } else {
              sum += (float)0.00474376;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.1026922)) {
            if ( (data[5].fvalue < 1.0796134)) {
              sum += (float)0.009407714;
            } else {
              sum += (float)-0.023090431;
            }
          } else {
            if ( (data[7].fvalue < 0.31823397)) {
              sum += (float)0.022582576;
            } else {
              sum += (float)0.026729053;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.90149826)) {
      if ( (data[5].fvalue < 4.8644094)) {
        if ( (data[5].fvalue < 2.8963561)) {
          if ( (data[7].fvalue < 0.29649523)) {
            if ( (data[6].fvalue < 0.62634325)) {
              sum += (float)0.024481766;
            } else {
              sum += (float)0.059314761;
            }
          } else {
            if ( (data[5].fvalue < 2.8949189)) {
              sum += (float)0.020032924;
            } else {
              sum += (float)-0.059162024;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.74370933)) {
            if ( (data[7].fvalue < 0.7553758)) {
              sum += (float)0.025580633;
            } else {
              sum += (float)-0.0065600513;
            }
          } else {
            if ( (data[6].fvalue < 0.74901074)) {
              sum += (float)0.056625832;
            } else {
              sum += (float)0.033241097;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 15.304847)) {
          if ( (data[5].fvalue < 4.9139032)) {
            if ( (data[7].fvalue < 0.32166052)) {
              sum += (float)0.0087046809;
            } else {
              sum += (float)-0.040120021;
            }
          } else {
            if ( (data[6].fvalue < 0.89930964)) {
              sum += (float)0.01975107;
            } else {
              sum += (float)-0.012909284;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.37981582)) {
            if ( (data[7].fvalue < 0.037311278)) {
              sum += (float)0.026434995;
            } else {
              sum += (float)0.012218371;
            }
          } else {
            if ( (data[7].fvalue < 0.57504833)) {
              sum += (float)-0.02809125;
            } else {
              sum += (float)0.030534124;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 5.3838978)) {
        if ( (data[6].fvalue < 1.2472643)) {
          if ( (data[7].fvalue < 0.36861539)) {
            if ( (data[7].fvalue < 0.36753279)) {
              sum += (float)0.050056975;
            } else {
              sum += (float)0.13093801;
            }
          } else {
            if ( (data[7].fvalue < 0.37038183)) {
              sum += (float)-0.016994944;
            } else {
              sum += (float)0.03144915;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.61297858)) {
            if ( (data[6].fvalue < 1.5382097)) {
              sum += (float)0.053705055;
            } else {
              sum += (float)0.081223622;
            }
          } else {
            if ( (data[5].fvalue < 2.305057)) {
              sum += (float)0.00043928149;
            } else {
              sum += (float)0.043862417;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 1.9121501)) {
          if ( (data[7].fvalue < 0.1201538)) {
            if ( (data[5].fvalue < 40.411911)) {
              sum += (float)0.03690761;
            } else {
              sum += (float)-0.02518665;
            }
          } else {
            if ( (data[7].fvalue < 0.70564973)) {
              sum += (float)0.022267882;
            } else {
              sum += (float)0.061813828;
            }
          }
        } else {
          if ( (data[5].fvalue < 9.8944511)) {
            if ( (data[7].fvalue < 0.534361)) {
              sum += (float)0.049617615;
            } else {
              sum += (float)0.084973693;
            }
          } else {
            if ( (data[5].fvalue < 15.941153)) {
              sum += (float)0.025429921;
            } else {
              sum += (float)0.04462681;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.51799357)) {
    if ( (data[6].fvalue < 0.25515971)) {
      if ( (data[6].fvalue < 0.00010058594)) {
        if ( (data[3].fvalue < 0.5)) {
          if ( (data[7].fvalue < 0.22751936)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.0085376278;
            } else {
              sum += (float)0.0090074521;
            }
          } else {
            if ( (data[5].fvalue < 2.48312)) {
              sum += (float)0.0087633142;
            } else {
              sum += (float)0.0078878971;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.23152815)) {
            sum += (float)0.0087071583;
          } else {
            if ( (data[7].fvalue < 0.41473866)) {
              sum += (float)0.0092582488;
            } else {
              sum += (float)0.010009605;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.099932253)) {
          if ( (data[6].fvalue < 0.047285005)) {
            if ( (data[7].fvalue < 0.176071)) {
              sum += (float)0.0064410432;
            } else {
              sum += (float)0.0057551679;
            }
          } else {
            if ( (data[5].fvalue < 2.5895591)) {
              sum += (float)0.0081025036;
            } else {
              sum += (float)0.0067517166;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.23830551)) {
            if ( (data[5].fvalue < 5.894722)) {
              sum += (float)0.0099739656;
            } else {
              sum += (float)0.00666164;
            }
          } else {
            if ( (data[5].fvalue < 2.3447986)) {
              sum += (float)0.010184518;
            } else {
              sum += (float)0.0055088145;
            }
          }
        }
      }
    } else {
      if ( (data[1].fvalue < 0.5)) {
        if ( (data[7].fvalue < 0.59496987)) {
          if ( (data[6].fvalue < 0.33443999)) {
            if ( (data[5].fvalue < 2.6587882)) {
              sum += (float)0.013495833;
            } else {
              sum += (float)0.010390406;
            }
          } else {
            if ( (data[5].fvalue < 1.6291562)) {
              sum += (float)0.020350443;
            } else {
              sum += (float)0.013872655;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.86052984)) {
            if ( (data[6].fvalue < 0.36352634)) {
              sum += (float)0.002538983;
            } else {
              sum += (float)0.0084475791;
            }
          } else {
            sum += (float)-0.043319352;
          }
        }
      } else {
        if ( (data[5].fvalue < 3.0392079)) {
          if ( (data[7].fvalue < 0.60669911)) {
            if ( (data[5].fvalue < 1.4750648)) {
              sum += (float)0.018640475;
            } else {
              sum += (float)0.012249143;
            }
          } else {
            if ( (data[6].fvalue < 0.50469065)) {
              sum += (float)0.0066061378;
            } else {
              sum += (float)0.024679391;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.43853006)) {
            if ( (data[5].fvalue < 16.039682)) {
              sum += (float)0.0097056385;
            } else {
              sum += (float)0.0043823351;
            }
          } else {
            if ( (data[5].fvalue < 4.0304165)) {
              sum += (float)0.0080283172;
            } else {
              sum += (float)0.00086068502;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.90274)) {
      if ( (data[2].fvalue < 0.5)) {
        if ( (data[5].fvalue < 6.4015031)) {
          if ( (data[6].fvalue < 0.90270269)) {
            if ( (data[7].fvalue < 0.197833)) {
              sum += (float)0.0067190542;
            } else {
              sum += (float)0.016515166;
            }
          } else {
            sum += (float)-0.077309437;
          }
        } else {
          if ( (data[5].fvalue < 6.4077296)) {
            sum += (float)-0.058466159;
          } else {
            if ( (data[7].fvalue < 0.40997553)) {
              sum += (float)0.011094367;
            } else {
              sum += (float)0.0030980965;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.66160077)) {
          if ( (data[6].fvalue < 0.66152704)) {
            if ( (data[7].fvalue < 0.32437786)) {
              sum += (float)0.019116234;
            } else {
              sum += (float)0.014192936;
            }
          } else {
            sum += (float)-0.05946013;
          }
        } else {
          if ( (data[7].fvalue < 0.73595834)) {
            if ( (data[7].fvalue < 0.4061344)) {
              sum += (float)0.026280571;
            } else {
              sum += (float)0.017999878;
            }
          } else {
            if ( (data[7].fvalue < 0.74111772)) {
              sum += (float)-0.069881216;
            } else {
              sum += (float)-0.0053236112;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 8.8655071)) {
        if ( (data[6].fvalue < 1.5403581)) {
          if ( (data[5].fvalue < 4.5281157)) {
            if ( (data[7].fvalue < 0.37617761)) {
              sum += (float)0.041756406;
            } else {
              sum += (float)0.025283268;
            }
          } else {
            if ( (data[7].fvalue < 0.51961339)) {
              sum += (float)0.022585826;
            } else {
              sum += (float)-0.0064216089;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.4570453)) {
            if ( (data[5].fvalue < 3.251451)) {
              sum += (float)0.024232266;
            } else {
              sum += (float)-0.038903035;
            }
          } else {
            if ( (data[6].fvalue < 1.6066998)) {
              sum += (float)0.071627982;
            } else {
              sum += (float)0.040865749;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 15.259407)) {
          if ( (data[6].fvalue < 2.2362132)) {
            if ( (data[5].fvalue < 11.022545)) {
              sum += (float)0.015204489;
            } else {
              sum += (float)0.0082473634;
            }
          } else {
            if ( (data[5].fvalue < 11.308792)) {
              sum += (float)0.055103313;
            } else {
              sum += (float)0.013876768;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.20216274)) {
            if ( (data[5].fvalue < 32.58078)) {
              sum += (float)0.03115738;
            } else {
              sum += (float)0.0091133164;
            }
          } else {
            if ( (data[6].fvalue < 2.6686425)) {
              sum += (float)0.013341601;
            } else {
              sum += (float)0.031157402;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.39213419)) {
    if ( (data[6].fvalue < 0.14586569)) {
      if ( (data[6].fvalue < 0.00010058594)) {
        if ( (data[5].fvalue < 12.338799)) {
          if ( (data[7].fvalue < 0.41831529)) {
            if ( (data[7].fvalue < 0.30790582)) {
              sum += (float)0.0059972666;
            } else {
              sum += (float)0.0054993662;
            }
          } else {
            if ( (data[5].fvalue < 3.8700955)) {
              sum += (float)0.0066354084;
            } else {
              sum += (float)0.0045627449;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.07465487)) {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.0062689972;
            } else {
              sum += (float)0.0057675554;
            }
          } else {
            if ( (data[7].fvalue < 0.31437689)) {
              sum += (float)0.0047457833;
            } else {
              sum += (float)0.0028838059;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 1.5786219)) {
          if ( (data[6].fvalue < 0.048267059)) {
            if ( (data[7].fvalue < 0.26524422)) {
              sum += (float)0.0046555256;
            } else {
              sum += (float)0.0059223128;
            }
          } else {
            if ( (data[7].fvalue < 0.29547346)) {
              sum += (float)0.0060008019;
            } else {
              sum += (float)0.0080676638;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.35185823)) {
            if ( (data[6].fvalue < 0.046654876)) {
              sum += (float)0.0043860935;
            } else {
              sum += (float)0.0053173159;
            }
          } else {
            if ( (data[5].fvalue < 3.3819141)) {
              sum += (float)0.0031810759;
            } else {
              sum += (float)-0.0016338162;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.49990964)) {
        if ( (data[5].fvalue < 2.1194835)) {
          if ( (data[5].fvalue < 1.3798133)) {
            if ( (data[6].fvalue < 0.29755712)) {
              sum += (float)0.012440401;
            } else {
              sum += (float)0.01829019;
            }
          } else {
            if ( (data[6].fvalue < 0.22534487)) {
              sum += (float)0.008307172;
            } else {
              sum += (float)0.011658564;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.20055385)) {
            if ( (data[5].fvalue < 5.4735279)) {
              sum += (float)0.008860928;
            } else {
              sum += (float)0.0053904597;
            }
          } else {
            if ( (data[5].fvalue < 3.0286059)) {
              sum += (float)0.0073391953;
            } else {
              sum += (float)0.0041704071;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 1.1800525)) {
          if ( (data[7].fvalue < 0.65848589)) {
            if ( (data[6].fvalue < 0.23740858)) {
              sum += (float)0.007609217;
            } else {
              sum += (float)0.01384071;
            }
          } else {
            if ( (data[5].fvalue < 1.1103618)) {
              sum += (float)-0.012129403;
            } else {
              sum += (float)0.0024644679;
            }
          }
        } else {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[5].fvalue < 2.0843143)) {
              sum += (float)0.0068619391;
            } else {
              sum += (float)0.0022784041;
            }
          } else {
            if ( (data[6].fvalue < 0.36352634)) {
              sum += (float)-9.2270355e-05;
            } else {
              sum += (float)0.0082899285;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.65401775)) {
      if ( (data[5].fvalue < 4.3279576)) {
        if ( (data[5].fvalue < 2.8333786)) {
          if ( (data[7].fvalue < 0.18362221)) {
            if ( (data[5].fvalue < 2.5012922)) {
              sum += (float)0.005807342;
            } else {
              sum += (float)0.029478217;
            }
          } else {
            if ( (data[7].fvalue < 0.8925308)) {
              sum += (float)0.0081980452;
            } else {
              sum += (float)-0.025351429;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.65109062)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.014092385;
            } else {
              sum += (float)0.01010357;
            }
          } else {
            if ( (data[6].fvalue < 0.65224409)) {
              sum += (float)-0.052357741;
            } else {
              sum += (float)0.0058102584;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.64929545)) {
          if ( (data[6].fvalue < 0.64874601)) {
            if ( (data[6].fvalue < 0.63543361)) {
              sum += (float)0.0068363603;
            } else {
              sum += (float)0.014955257;
            }
          } else {
            sum += (float)0.066500433;
          }
        } else {
          if ( (data[5].fvalue < 5.2628622)) {
            if ( (data[7].fvalue < 0.25249201)) {
              sum += (float)-0.0073415996;
            } else {
              sum += (float)-0.059272848;
            }
          } else {
            if ( (data[6].fvalue < 0.65253711)) {
              sum += (float)0.012973111;
            } else {
              sum += (float)-0.02179515;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 5.3838978)) {
        if ( (data[6].fvalue < 1.1898849)) {
          if ( (data[6].fvalue < 1.181077)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.015870092;
            } else {
              sum += (float)-0.011150144;
            }
          } else {
            if ( (data[7].fvalue < 0.37056896)) {
              sum += (float)0.032642052;
            } else {
              sum += (float)-0.10258239;
            }
          }
        } else {
          if ( (data[5].fvalue < 5.3243837)) {
            if ( (data[7].fvalue < 0.42744002)) {
              sum += (float)0.039462041;
            } else {
              sum += (float)0.022701142;
            }
          } else {
            if ( (data[6].fvalue < 1.3442118)) {
              sum += (float)0.12108103;
            } else {
              sum += (float)-0.0030792833;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 5.4218941)) {
          if ( (data[7].fvalue < 0.22145991)) {
            if ( (data[6].fvalue < 0.79122239)) {
              sum += (float)-0.030078089;
            } else {
              sum += (float)0.02280568;
            }
          } else {
            sum += (float)-0.065067962;
          }
        } else {
          if ( (data[6].fvalue < 1.9121501)) {
            if ( (data[7].fvalue < 0.70564973)) {
              sum += (float)0.010493662;
            } else {
              sum += (float)0.043379899;
            }
          } else {
            if ( (data[7].fvalue < 0.48119247)) {
              sum += (float)0.017890094;
            } else {
              sum += (float)0.041474678;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.52798581)) {
    if ( (data[6].fvalue < 0.20052573)) {
      if ( (data[6].fvalue < 7.1044924e-05)) {
        if ( (data[3].fvalue < 0.5)) {
          if ( (data[5].fvalue < 6.6306348)) {
            if ( (data[7].fvalue < 0.42913866)) {
              sum += (float)0.0041668382;
            } else {
              sum += (float)0.0044734995;
            }
          } else {
            if ( (data[7].fvalue < 0.37064165)) {
              sum += (float)0.0040131821;
            } else {
              sum += (float)0.0020629247;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.20915748)) {
            if ( (data[5].fvalue < 3.2826705)) {
              sum += (float)0.0041017705;
            } else {
              sum += (float)0.004496533;
            }
          } else {
            if ( (data[5].fvalue < 1.968483)) {
              sum += (float)0.0044507543;
            } else {
              sum += (float)0.0049883183;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.4569388)) {
          if ( (data[6].fvalue < 0.057477847)) {
            if ( (data[5].fvalue < 5.4636211)) {
              sum += (float)0.0032137001;
            } else {
              sum += (float)0.0023669139;
            }
          } else {
            if ( (data[5].fvalue < 2.9023085)) {
              sum += (float)0.0046147252;
            } else {
              sum += (float)0.0034980264;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.9432845)) {
            if ( (data[5].fvalue < 1.3630556)) {
              sum += (float)0.0051119295;
            } else {
              sum += (float)0.0022938347;
            }
          } else {
            if ( (data[5].fvalue < 3.9860177)) {
              sum += (float)0.00040214841;
            } else {
              sum += (float)-0.0037573492;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.45038939)) {
        if ( (data[5].fvalue < 2.0596719)) {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[7].fvalue < 0.25349101)) {
              sum += (float)0.0043845428;
            } else {
              sum += (float)0.00911442;
            }
          } else {
            if ( (data[6].fvalue < 0.32907921)) {
              sum += (float)0.0092568137;
            } else {
              sum += (float)0.015606055;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.14753394)) {
            if ( (data[5].fvalue < 10.91655)) {
              sum += (float)0.0078624794;
            } else {
              sum += (float)0.0034622964;
            }
          } else {
            if ( (data[5].fvalue < 3.6190038)) {
              sum += (float)0.0059164255;
            } else {
              sum += (float)0.0035312097;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.52683902)) {
          if ( (data[5].fvalue < 1.5700963)) {
            if ( (data[7].fvalue < 0.7409364)) {
              sum += (float)0.0069863913;
            } else {
              sum += (float)-0.012894426;
            }
          } else {
            if ( (data[7].fvalue < 0.45502627)) {
              sum += (float)-0.0060871011;
            } else {
              sum += (float)0.0029510157;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.52761263)) {
            sum += (float)-0.037098434;
          } else {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)-0.026053388;
            } else {
              sum += (float)-0.0048799226;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 1.0166242)) {
      if ( (data[2].fvalue < 0.5)) {
        if ( (data[5].fvalue < 9.2570114)) {
          if ( (data[7].fvalue < 0.2451382)) {
            if ( (data[5].fvalue < 4.0539131)) {
              sum += (float)0.010914788;
            } else {
              sum += (float)0.0010519464;
            }
          } else {
            if ( (data[5].fvalue < 3.1293805)) {
              sum += (float)0.0049783587;
            } else {
              sum += (float)0.011374192;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.22197619)) {
            if ( (data[6].fvalue < 0.99491817)) {
              sum += (float)0.006558192;
            } else {
              sum += (float)-0.012667082;
            }
          } else {
            if ( (data[7].fvalue < 0.2266188)) {
              sum += (float)-0.021798646;
            } else {
              sum += (float)-0.00039512568;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.57587057)) {
          if ( (data[5].fvalue < 4.5956612)) {
            if ( (data[6].fvalue < 0.72070771)) {
              sum += (float)0.010313149;
            } else {
              sum += (float)0.017368566;
            }
          } else {
            if ( (data[5].fvalue < 6.581759)) {
              sum += (float)0.0027368013;
            } else {
              sum += (float)0.010919344;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.7711542)) {
            if ( (data[7].fvalue < 0.71249145)) {
              sum += (float)0.014147236;
            } else {
              sum += (float)-0.00038672014;
            }
          } else {
            if ( (data[7].fvalue < 0.78529698)) {
              sum += (float)-0.0045076115;
            } else {
              sum += (float)0.026799522;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 3.7647562)) {
        if ( (data[5].fvalue < 2.9181955)) {
          if ( (data[6].fvalue < 1.2982494)) {
            if ( (data[6].fvalue < 1.1507015)) {
              sum += (float)0.013124784;
            } else {
              sum += (float)-0.0068262764;
            }
          } else {
            if ( (data[6].fvalue < 1.4357129)) {
              sum += (float)0.037210763;
            } else {
              sum += (float)0.0078954194;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.33603114)) {
            if ( (data[6].fvalue < 1.0559669)) {
              sum += (float)0.019887762;
            } else {
              sum += (float)0.092123166;
            }
          } else {
            if ( (data[6].fvalue < 1.142938)) {
              sum += (float)0.015436883;
            } else {
              sum += (float)0.033410463;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 3.7730482)) {
          if ( (data[6].fvalue < 1.0791663)) {
            sum += (float)0.0080669587;
          } else {
            if ( (data[5].fvalue < 3.7662849)) {
              sum += (float)-0.032965567;
            } else {
              sum += (float)-0.12026159;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.7473967)) {
            if ( (data[7].fvalue < 0.42744002)) {
              sum += (float)0.012122535;
            } else {
              sum += (float)0.0004810484;
            }
          } else {
            if ( (data[5].fvalue < 6.7569065)) {
              sum += (float)0.03994989;
            } else {
              sum += (float)0.012464752;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.32697439)) {
    if ( (data[6].fvalue < 0.14586569)) {
      if ( (data[6].fvalue < 0.0025739747)) {
        if ( (data[2].fvalue < 0.5)) {
          if ( (data[7].fvalue < 0.7691294)) {
            if ( (data[5].fvalue < 14.11414)) {
              sum += (float)0.0029787368;
            } else {
              sum += (float)0.0025383665;
            }
          } else {
            if ( (data[5].fvalue < 2.3073223)) {
              sum += (float)0.0034430476;
            } else {
              sum += (float)0.001169326;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.41352415)) {
            if ( (data[7].fvalue < 0.27684778)) {
              sum += (float)0.0028341264;
            } else {
              sum += (float)0.002416902;
            }
          } else {
            if ( (data[5].fvalue < 3.9496593)) {
              sum += (float)0.0034954099;
            } else {
              sum += (float)-0.0026722646;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.16341534)) {
          if ( (data[6].fvalue < 0.046654876)) {
            if ( (data[5].fvalue < 14.182796)) {
              sum += (float)0.0022697765;
            } else {
              sum += (float)0.0013504236;
            }
          } else {
            if ( (data[5].fvalue < 9.7684841)) {
              sum += (float)0.0030365966;
            } else {
              sum += (float)0.0017999692;
            }
          }
        } else {
          if ( (data[5].fvalue < 2.889679)) {
            if ( (data[5].fvalue < 1.6288543)) {
              sum += (float)0.0035117159;
            } else {
              sum += (float)0.0023840205;
            }
          } else {
            if ( (data[5].fvalue < 5.4531798)) {
              sum += (float)0.0008482816;
            } else {
              sum += (float)-0.0024961554;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.33463511)) {
        if ( (data[5].fvalue < 4.8057051)) {
          if ( (data[7].fvalue < 0.18023467)) {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.0041372878;
            } else {
              sum += (float)0.0062968316;
            }
          } else {
            if ( (data[5].fvalue < 3.3995245)) {
              sum += (float)0.0042181634;
            } else {
              sum += (float)0.0014200956;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.073561743)) {
            if ( (data[6].fvalue < 0.15889502)) {
              sum += (float)0.0099786259;
            } else {
              sum += (float)0.0037264146;
            }
          } else {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.0018770285;
            } else {
              sum += (float)-0.0015952151;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 1.5689218)) {
          if ( (data[7].fvalue < 0.5394088)) {
            if ( (data[6].fvalue < 0.32412979)) {
              sum += (float)0.0063194064;
            } else {
              sum += (float)0.021478944;
            }
          } else {
            if ( (data[5].fvalue < 1.0299194)) {
              sum += (float)0.0095056137;
            } else {
              sum += (float)0.00063481758;
            }
          }
        } else {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[6].fvalue < 0.31069106)) {
              sum += (float)0.0024877386;
            } else {
              sum += (float)-0.0028070905;
            }
          } else {
            if ( (data[6].fvalue < 0.31570607)) {
              sum += (float)-0.00076802325;
            } else {
              sum += (float)-0.0055037867;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 1.0159919)) {
      if ( (data[6].fvalue < 1.0153224)) {
        if ( (data[5].fvalue < 9.3297234)) {
          if ( (data[7].fvalue < 0.88957977)) {
            if ( (data[6].fvalue < 0.64362967)) {
              sum += (float)0.004928078;
            } else {
              sum += (float)0.0070811487;
            }
          } else {
            if ( (data[7].fvalue < 0.91398102)) {
              sum += (float)-0.037225381;
            } else {
              sum += (float)0.014456088;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.0038294)) {
            if ( (data[7].fvalue < 0.10730809)) {
              sum += (float)0.00527546;
            } else {
              sum += (float)0.0015527746;
            }
          } else {
            if ( (data[7].fvalue < 0.07243482)) {
              sum += (float)0.02247599;
            } else {
              sum += (float)-0.021254875;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 8.3270607)) {
          sum += (float)-0.10187175;
        } else {
          sum += (float)0.010087809;
        }
      }
    } else {
      if ( (data[5].fvalue < 10.116508)) {
        if ( (data[6].fvalue < 2.2444329)) {
          if ( (data[7].fvalue < 0.90909767)) {
            if ( (data[7].fvalue < 0.56251281)) {
              sum += (float)0.012730503;
            } else {
              sum += (float)0.0053713187;
            }
          } else {
            sum += (float)0.056533828;
          }
        } else {
          if ( (data[7].fvalue < 0.56960225)) {
            if ( (data[7].fvalue < 0.48822814)) {
              sum += (float)0.035732914;
            } else {
              sum += (float)0.0068913768;
            }
          } else {
            sum += (float)0.041631378;
          }
        }
      } else {
        if ( (data[7].fvalue < 0.23148963)) {
          if ( (data[5].fvalue < 13.602327)) {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.005579534;
            } else {
              sum += (float)-0.0058986885;
            }
          } else {
            if ( (data[7].fvalue < 0.072501428)) {
              sum += (float)-0.0029216444;
            } else {
              sum += (float)0.015908344;
            }
          }
        } else {
          if ( (data[6].fvalue < 4.5175452)) {
            if ( (data[5].fvalue < 11.313749)) {
              sum += (float)0.0053841434;
            } else {
              sum += (float)-0.0047553945;
            }
          } else {
            sum += (float)0.035062652;
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.28254402)) {
    if ( (data[2].fvalue < 0.5)) {
      if ( (data[6].fvalue < 0.10427304)) {
        if ( (data[6].fvalue < 6.0729981e-06)) {
          if ( (data[7].fvalue < 0.72360635)) {
            if ( (data[5].fvalue < 18.304165)) {
              sum += (float)0.0020931116;
            } else {
              sum += (float)0.0015905013;
            }
          } else {
            if ( (data[5].fvalue < 1.5611619)) {
              sum += (float)0.0049719634;
            } else {
              sum += (float)0.0012324882;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.39931554)) {
            if ( (data[5].fvalue < 9.3820944)) {
              sum += (float)0.0018273878;
            } else {
              sum += (float)0.00077220681;
            }
          } else {
            if ( (data[5].fvalue < 3.14081)) {
              sum += (float)0.0017891788;
            } else {
              sum += (float)-0.0017597739;
            }
          }
        }
      } else {
        if ( (data[1].fvalue < 0.5)) {
          if ( (data[7].fvalue < 0.25949773)) {
            if ( (data[5].fvalue < 3.0250793)) {
              sum += (float)0.0022048897;
            } else {
              sum += (float)0.0034391009;
            }
          } else {
            if ( (data[5].fvalue < 1.5759158)) {
              sum += (float)0.0041939067;
            } else {
              sum += (float)0.0063428213;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.3981901)) {
            if ( (data[7].fvalue < 0.77780378)) {
              sum += (float)0.0068111029;
            } else {
              sum += (float)-0.011051307;
            }
          } else {
            if ( (data[7].fvalue < 0.064832151)) {
              sum += (float)0.0061787358;
            } else {
              sum += (float)0.0014338181;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.0026907348)) {
        if ( (data[5].fvalue < 3.0067801)) {
          if ( (data[7].fvalue < 0.57377166)) {
            if ( (data[7].fvalue < 0.57305676)) {
              sum += (float)0.0020875267;
            } else {
              sum += (float)-0.0029452923;
            }
          } else {
            if ( (data[5].fvalue < 1.2499712)) {
              sum += (float)0.0040353383;
            } else {
              sum += (float)0.0025720769;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.15179189)) {
            if ( (data[5].fvalue < 5.8914385)) {
              sum += (float)0.0021343124;
            } else {
              sum += (float)0.0017813169;
            }
          } else {
            if ( (data[5].fvalue < 4.261539)) {
              sum += (float)0.0016682023;
            } else {
              sum += (float)0.0010946242;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 3.3307137)) {
          if ( (data[6].fvalue < 0.16302618)) {
            if ( (data[5].fvalue < 2.3456974)) {
              sum += (float)0.0018404037;
            } else {
              sum += (float)0.0010823715;
            }
          } else {
            if ( (data[7].fvalue < 0.32955891)) {
              sum += (float)0.0039570401;
            } else {
              sum += (float)1.6878919e-06;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.15303437)) {
            if ( (data[5].fvalue < 8.7463207)) {
              sum += (float)0.0018959361;
            } else {
              sum += (float)0.00013911641;
            }
          } else {
            if ( (data[6].fvalue < 0.22970814)) {
              sum += (float)-1.5039446e-05;
            } else {
              sum += (float)-0.0023086085;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.84645641)) {
      if ( (data[6].fvalue < 0.84548426)) {
        if ( (data[5].fvalue < 16.060398)) {
          if ( (data[7].fvalue < 0.1748137)) {
            if ( (data[5].fvalue < 3.9115868)) {
              sum += (float)0.0075744083;
            } else {
              sum += (float)0.0042793225;
            }
          } else {
            if ( (data[5].fvalue < 3.7447195)) {
              sum += (float)0.0035612439;
            } else {
              sum += (float)0.0020268559;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.80368018)) {
            if ( (data[6].fvalue < 0.76097858)) {
              sum += (float)-0.00046639852;
            } else {
              sum += (float)0.017006798;
            }
          } else {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)-0.039881438;
            } else {
              sum += (float)0.022087235;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.44581825)) {
          if ( (data[7].fvalue < 0.36179459)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.0095910598;
            } else {
              sum += (float)-0.040157039;
            }
          } else {
            if ( (data[5].fvalue < 8.1419954)) {
              sum += (float)0.02146741;
            } else {
              sum += (float)0.0057561994;
            }
          }
        } else {
          if ( (data[5].fvalue < 2.6847887)) {
            sum += (float)-0.026157476;
          } else {
            sum += (float)-0.10519277;
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.84981)) {
        if ( (data[1].fvalue < 0.5)) {
          if ( (data[6].fvalue < 0.8481251)) {
            if ( (data[6].fvalue < 0.84762162)) {
              sum += (float)0.0097581483;
            } else {
              sum += (float)-0.035097118;
            }
          } else {
            if ( (data[6].fvalue < 0.84843719)) {
              sum += (float)0.046769943;
            } else {
              sum += (float)0.0087879244;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.2026486)) {
            if ( (data[5].fvalue < 2.9834063)) {
              sum += (float)0.018980578;
            } else {
              sum += (float)-0.014477242;
            }
          } else {
            if ( (data[5].fvalue < 4.0417395)) {
              sum += (float)0.067503743;
            } else {
              sum += (float)0.031670805;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.85055292)) {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[5].fvalue < 5.7562943)) {
              sum += (float)-0.079911128;
            } else {
              sum += (float)-0.0065697762;
            }
          } else {
            sum += (float)0.0059547932;
          }
        } else {
          if ( (data[7].fvalue < 0.91362107)) {
            if ( (data[7].fvalue < 0.883111)) {
              sum += (float)0.0058528134;
            } else {
              sum += (float)-0.060778785;
            }
          } else {
            if ( (data[6].fvalue < 1.526003)) {
              sum += (float)0.048187304;
            } else {
              sum += (float)0.02158987;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.50007188)) {
    if ( (data[6].fvalue < 0.49753362)) {
      if ( (data[6].fvalue < 0.27484596)) {
        if ( (data[7].fvalue < 0.22571898)) {
          if ( (data[6].fvalue < 0.095856696)) {
            if ( (data[6].fvalue < 6.0729981e-06)) {
              sum += (float)0.0014579876;
            } else {
              sum += (float)0.0011620154;
            }
          } else {
            if ( (data[5].fvalue < 4.6376266)) {
              sum += (float)0.0019771012;
            } else {
              sum += (float)0.00079259754;
            }
          }
        } else {
          if ( (data[5].fvalue < 2.6236532)) {
            if ( (data[7].fvalue < 0.51488757)) {
              sum += (float)0.0017850487;
            } else {
              sum += (float)0.00074226648;
            }
          } else {
            if ( (data[6].fvalue < 0.016572846)) {
              sum += (float)0.0012516916;
            } else {
              sum += (float)-0.00017805463;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.40887809)) {
          if ( (data[5].fvalue < 2.1695247)) {
            if ( (data[6].fvalue < 0.48218107)) {
              sum += (float)0.0060603251;
            } else {
              sum += (float)-0.012073128;
            }
          } else {
            if ( (data[7].fvalue < 0.11733841)) {
              sum += (float)0.0039732731;
            } else {
              sum += (float)0.0019379809;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.5713794)) {
            if ( (data[7].fvalue < 0.74067307)) {
              sum += (float)0.0035416989;
            } else {
              sum += (float)-0.011575915;
            }
          } else {
            if ( (data[4].fvalue < 0.5)) {
              sum += (float)-0.00035593985;
            } else {
              sum += (float)0.0096039763;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.49779314)) {
        if ( (data[5].fvalue < 3.5050702)) {
          if ( (data[7].fvalue < 0.45406523)) {
            sum += (float)-0.050522003;
          } else {
            sum += (float)-0.0080096843;
          }
        } else {
          if ( (data[1].fvalue < 0.5)) {
            sum += (float)0.0029619455;
          } else {
            if ( (data[7].fvalue < 0.16946906)) {
              sum += (float)-0.027138295;
            } else {
              sum += (float)-0.0042980434;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 3.7670872)) {
          if ( (data[5].fvalue < 2.8892069)) {
            if ( (data[6].fvalue < 0.4997375)) {
              sum += (float)-0.011169976;
            } else {
              sum += (float)0.025837433;
            }
          } else {
            if ( (data[7].fvalue < 0.40170157)) {
              sum += (float)0.0047371527;
            } else {
              sum += (float)0.045113318;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.8338456)) {
            sum += (float)-0.050220255;
          } else {
            if ( (data[6].fvalue < 0.49996042)) {
              sum += (float)-0.0035561712;
            } else {
              sum += (float)-0.029506696;
            }
          }
        }
      }
    }
  } else {
    if ( (data[2].fvalue < 0.5)) {
      if ( (data[6].fvalue < 1.3309164)) {
        if ( (data[6].fvalue < 1.2525545)) {
          if ( (data[6].fvalue < 1.2472643)) {
            if ( (data[6].fvalue < 1.2277174)) {
              sum += (float)0.0023560997;
            } else {
              sum += (float)-0.011667546;
            }
          } else {
            if ( (data[5].fvalue < 4.109005)) {
              sum += (float)0.080702782;
            } else {
              sum += (float)-0.02426842;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.2535028)) {
            if ( (data[6].fvalue < 1.2528079)) {
              sum += (float)-0.017024875;
            } else {
              sum += (float)-0.08825431;
            }
          } else {
            if ( (data[5].fvalue < 3.2659237)) {
              sum += (float)-0.028176688;
            } else {
              sum += (float)0.00012337606;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 1.3408583)) {
          if ( (data[5].fvalue < 7.9767141)) {
            if ( (data[7].fvalue < 0.42787254)) {
              sum += (float)0.11407328;
            } else {
              sum += (float)0.042998984;
            }
          } else {
            if ( (data[5].fvalue < 15.200016)) {
              sum += (float)0.011658275;
            } else {
              sum += (float)0.032024469;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.2093632)) {
            if ( (data[5].fvalue < 2.5772619)) {
              sum += (float)-0.0041051554;
            } else {
              sum += (float)0.035108421;
            }
          } else {
            if ( (data[5].fvalue < 3.2624872)) {
              sum += (float)-0.11623244;
            } else {
              sum += (float)0.0058667283;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.70719385)) {
        if ( (data[7].fvalue < 0.33014292)) {
          if ( (data[5].fvalue < 4.5197201)) {
            if ( (data[6].fvalue < 0.73738027)) {
              sum += (float)0.0075518969;
            } else {
              sum += (float)0.020665536;
            }
          } else {
            if ( (data[5].fvalue < 4.5393734)) {
              sum += (float)-0.042227224;
            } else {
              sum += (float)0.0029760238;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.33660156)) {
            if ( (data[6].fvalue < 0.68612438)) {
              sum += (float)0.0013702314;
            } else {
              sum += (float)-0.029105173;
            }
          } else {
            if ( (data[7].fvalue < 0.33869934)) {
              sum += (float)0.029569043;
            } else {
              sum += (float)0.0033436259;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.98270935)) {
          if ( (data[5].fvalue < 2.0130243)) {
            if ( (data[5].fvalue < 1.5839232)) {
              sum += (float)0.013150061;
            } else {
              sum += (float)-0.018690268;
            }
          } else {
            if ( (data[5].fvalue < 2.8319359)) {
              sum += (float)0.017400848;
            } else {
              sum += (float)-0.02858606;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.0743558)) {
            if ( (data[5].fvalue < 1.7347589)) {
              sum += (float)0.048127711;
            } else {
              sum += (float)-0.039053522;
            }
          } else {
            sum += (float)0.056464199;
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.57341027)) {
    if ( (data[6].fvalue < 0.57323718)) {
      if ( (data[5].fvalue < 10.205208)) {
        if ( (data[6].fvalue < 0.17001145)) {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[6].fvalue < 0.14585626)) {
              sum += (float)0.00098918728;
            } else {
              sum += (float)0.0020687324;
            }
          } else {
            if ( (data[6].fvalue < 0.0027733154)) {
              sum += (float)0.00095147692;
            } else {
              sum += (float)0.00050668535;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.22853786)) {
            if ( (data[6].fvalue < 0.44008136)) {
              sum += (float)0.0017277837;
            } else {
              sum += (float)0.004754757;
            }
          } else {
            if ( (data[5].fvalue < 1.4799943)) {
              sum += (float)0.0027314071;
            } else {
              sum += (float)0.0007954326;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.064177573)) {
          if ( (data[5].fvalue < 24.522705)) {
            if ( (data[6].fvalue < 0.049286224)) {
              sum += (float)0.0012890736;
            } else {
              sum += (float)0.0028645066;
            }
          } else {
            if ( (data[7].fvalue < 0.036884271)) {
              sum += (float)0.0015115961;
            } else {
              sum += (float)-0.0030762057;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.021833923)) {
            if ( (data[7].fvalue < 0.37438047)) {
              sum += (float)0.00051951275;
            } else {
              sum += (float)-0.0004077965;
            }
          } else {
            if ( (data[6].fvalue < 0.22494268)) {
              sum += (float)-0.0035369289;
            } else {
              sum += (float)-0.0012121097;
            }
          }
        }
      }
    } else {
      sum += (float)-0.048688002;
    }
  } else {
    if ( (data[5].fvalue < 1.4588039)) {
      if ( (data[5].fvalue < 1.3519756)) {
        if ( (data[7].fvalue < 0.62101257)) {
          if ( (data[6].fvalue < 0.62232244)) {
            if ( (data[6].fvalue < 0.61017781)) {
              sum += (float)0.0057168542;
            } else {
              sum += (float)0.0013139665;
            }
          } else {
            if ( (data[5].fvalue < 1.324729)) {
              sum += (float)-0.045164071;
            } else {
              sum += (float)-0.0053939247;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.64583153)) {
            if ( (data[6].fvalue < 0.62034464)) {
              sum += (float)0.004406333;
            } else {
              sum += (float)-0.013747019;
            }
          } else {
            sum += (float)0.039562322;
          }
        }
      } else {
        if ( (data[6].fvalue < 0.60016525)) {
          if ( (data[5].fvalue < 1.4114704)) {
            sum += (float)0.016955823;
          } else {
            if ( (data[5].fvalue < 1.429091)) {
              sum += (float)-0.013403065;
            } else {
              sum += (float)0.0059549781;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.7112301)) {
            if ( (data[5].fvalue < 1.3769846)) {
              sum += (float)0.013192432;
            } else {
              sum += (float)0.045594461;
            }
          } else {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)-0.017887278;
            } else {
              sum += (float)0.021263277;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 2.7244077)) {
        if ( (data[5].fvalue < 2.49159)) {
          if ( (data[5].fvalue < 2.0255861)) {
            if ( (data[5].fvalue < 2.0220404)) {
              sum += (float)-0.00032871973;
            } else {
              sum += (float)-0.10222744;
            }
          } else {
            if ( (data[5].fvalue < 2.058991)) {
              sum += (float)0.028989844;
            } else {
              sum += (float)0.0039787074;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.7652179)) {
            if ( (data[6].fvalue < 1.5442603)) {
              sum += (float)-0.0060559693;
            } else {
              sum += (float)-0.064623997;
            }
          } else {
            if ( (data[5].fvalue < 2.5443206)) {
              sum += (float)-0.044078253;
            } else {
              sum += (float)0.036202375;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 3.7617655)) {
          if ( (data[6].fvalue < 1.142938)) {
            if ( (data[7].fvalue < 0.27762863)) {
              sum += (float)0.014306045;
            } else {
              sum += (float)0.0030055917;
            }
          } else {
            if ( (data[5].fvalue < 3.6342807)) {
              sum += (float)0.010475389;
            } else {
              sum += (float)0.054147478;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.8076222)) {
            if ( (data[7].fvalue < 0.27485046)) {
              sum += (float)0.010668812;
            } else {
              sum += (float)-0.015371175;
            }
          } else {
            if ( (data[5].fvalue < 3.811743)) {
              sum += (float)0.050367847;
            } else {
              sum += (float)0.0019538745;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.42143047)) {
    if ( (data[6].fvalue < 0.41903472)) {
      if ( (data[6].fvalue < 0.40955311)) {
        if ( (data[6].fvalue < 0.40898472)) {
          if ( (data[7].fvalue < 0.37986785)) {
            if ( (data[6].fvalue < 0.13123898)) {
              sum += (float)0.00064008386;
            } else {
              sum += (float)0.00098395173;
            }
          } else {
            if ( (data[5].fvalue < 1.9397151)) {
              sum += (float)0.0010396556;
            } else {
              sum += (float)-0.00032225405;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.4091019)) {
            if ( (data[5].fvalue < 5.0081153)) {
              sum += (float)-0.04681921;
            } else {
              sum += (float)-0.0060116085;
            }
          } else {
            if ( (data[5].fvalue < 4.9458981)) {
              sum += (float)-0.0093709147;
            } else {
              sum += (float)0.0078904312;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.18902028)) {
          if ( (data[6].fvalue < 0.41009468)) {
            if ( (data[6].fvalue < 0.40984499)) {
              sum += (float)0.0025888283;
            } else {
              sum += (float)0.020204958;
            }
          } else {
            if ( (data[7].fvalue < 0.18022075)) {
              sum += (float)-0.0024931214;
            } else {
              sum += (float)-0.019375773;
            }
          }
        } else {
          if ( (data[5].fvalue < 2.9615955)) {
            if ( (data[6].fvalue < 0.41570663)) {
              sum += (float)-0.0029191785;
            } else {
              sum += (float)0.0066137053;
            }
          } else {
            if ( (data[6].fvalue < 0.41431743)) {
              sum += (float)0.013130359;
            } else {
              sum += (float)0.0047008796;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 3.104708)) {
        if ( (data[7].fvalue < 0.70874298)) {
          if ( (data[7].fvalue < 0.20379288)) {
            if ( (data[5].fvalue < 3.0567002)) {
              sum += (float)0.023954589;
            } else {
              sum += (float)0.0033496679;
            }
          } else {
            if ( (data[7].fvalue < 0.20612946)) {
              sum += (float)-0.027821383;
            } else {
              sum += (float)0.00060875644;
            }
          }
        } else {
          sum += (float)-0.034594044;
        }
      } else {
        if ( (data[7].fvalue < 0.14289378)) {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[6].fvalue < 0.42047152)) {
              sum += (float)0.0073000216;
            } else {
              sum += (float)0.019945119;
            }
          } else {
            if ( (data[5].fvalue < 5.6754584)) {
              sum += (float)0.007264792;
            } else {
              sum += (float)-0.01190732;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.41922355)) {
            if ( (data[5].fvalue < 3.9372406)) {
              sum += (float)-0.044805784;
            } else {
              sum += (float)-0.017438;
            }
          } else {
            if ( (data[6].fvalue < 0.42019346)) {
              sum += (float)-0.0009280821;
            } else {
              sum += (float)-0.020180402;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].fvalue < 2.7244077)) {
      if ( (data[7].fvalue < 0.75406605)) {
        if ( (data[7].fvalue < 0.73613322)) {
          if ( (data[6].fvalue < 1.2196174)) {
            if ( (data[6].fvalue < 1.2100961)) {
              sum += (float)-7.8362493e-05;
            } else {
              sum += (float)-0.085411675;
            }
          } else {
            if ( (data[7].fvalue < 0.60710239)) {
              sum += (float)0.074606888;
            } else {
              sum += (float)0.012713915;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.2923322)) {
            if ( (data[7].fvalue < 0.73781061)) {
              sum += (float)-0.057303276;
            } else {
              sum += (float)-0.0066790464;
            }
          } else {
            if ( (data[5].fvalue < 2.210227)) {
              sum += (float)-0.12047581;
            } else {
              sum += (float)-0.032283168;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.84381449)) {
          if ( (data[5].fvalue < 2.6185205)) {
            if ( (data[5].fvalue < 1.9387399)) {
              sum += (float)0.021436805;
            } else {
              sum += (float)0.0016794027;
            }
          } else {
            if ( (data[6].fvalue < 1.0038186)) {
              sum += (float)-0.0083276564;
            } else {
              sum += (float)0.058865629;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.84496331)) {
            sum += (float)-0.049462669;
          } else {
            if ( (data[7].fvalue < 0.84913558)) {
              sum += (float)0.018059155;
            } else {
              sum += (float)-0.014486961;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 3.7608867)) {
        if ( (data[6].fvalue < 0.74364209)) {
          if ( (data[6].fvalue < 0.72470134)) {
            if ( (data[7].fvalue < 0.22157799)) {
              sum += (float)0.008017092;
            } else {
              sum += (float)0.0019805899;
            }
          } else {
            if ( (data[6].fvalue < 0.72935528)) {
              sum += (float)-0.039288431;
            } else {
              sum += (float)-0.0021920206;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.5249166)) {
            if ( (data[6].fvalue < 1.3366554)) {
              sum += (float)0.0066891625;
            } else {
              sum += (float)0.036478009;
            }
          } else {
            if ( (data[5].fvalue < 3.4570453)) {
              sum += (float)-0.030445907;
            } else {
              sum += (float)0.015404834;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.42733842)) {
          if ( (data[7].fvalue < 0.42144805)) {
            if ( (data[7].fvalue < 0.41474721)) {
              sum += (float)0.0015248462;
            } else {
              sum += (float)-0.019047135;
            }
          } else {
            if ( (data[6].fvalue < 1.3076895)) {
              sum += (float)0.0093502048;
            } else {
              sum += (float)0.075914674;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.7123067)) {
            if ( (data[6].fvalue < 1.3032345)) {
              sum += (float)-0.002015997;
            } else {
              sum += (float)-0.016733499;
            }
          } else {
            if ( (data[5].fvalue < 13.000027)) {
              sum += (float)0.01965568;
            } else {
              sum += (float)-0.017523106;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.56667471)) {
    if ( (data[6].fvalue < 0.56009984)) {
      if ( (data[6].fvalue < 0.55946958)) {
        if ( (data[6].fvalue < 0.55909765)) {
          if ( (data[5].fvalue < 7.7307472)) {
            if ( (data[6].fvalue < 0.55856144)) {
              sum += (float)0.00050626101;
            } else {
              sum += (float)0.013576665;
            }
          } else {
            if ( (data[7].fvalue < 0.073849164)) {
              sum += (float)0.00099397148;
            } else {
              sum += (float)-0.00098050793;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.30868942)) {
            if ( (data[4].fvalue < 0.5)) {
              sum += (float)0.014043774;
            } else {
              sum += (float)-0.022356475;
            }
          } else {
            if ( (data[5].fvalue < 1.9278874)) {
              sum += (float)0.0072607044;
            } else {
              sum += (float)-0.033706862;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 8.0463562)) {
          if ( (data[5].fvalue < 2.7493286)) {
            if ( (data[7].fvalue < 0.5437234)) {
              sum += (float)-0.0047940291;
            } else {
              sum += (float)0.022687044;
            }
          } else {
            sum += (float)0.025690004;
          }
        } else {
          if ( (data[5].fvalue < 11.547168)) {
            sum += (float)-0.022153366;
          } else {
            sum += (float)0.015100694;
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.56061971)) {
        if ( (data[5].fvalue < 2.7485838)) {
          if ( (data[5].fvalue < 2.4517565)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)-0.033125337;
            } else {
              sum += (float)0.020023817;
            }
          } else {
            sum += (float)0.017420355;
          }
        } else {
          if ( (data[4].fvalue < 0.5)) {
            if ( (data[5].fvalue < 13.170889)) {
              sum += (float)-0.045510847;
            } else {
              sum += (float)-0.0063649118;
            }
          } else {
            sum += (float)0.0035663904;
          }
        }
      } else {
        if ( (data[7].fvalue < 0.54821527)) {
          if ( (data[5].fvalue < 3.9941325)) {
            if ( (data[5].fvalue < 3.5994785)) {
              sum += (float)0.0013196028;
            } else {
              sum += (float)0.020745881;
            }
          } else {
            if ( (data[5].fvalue < 4.0367641)) {
              sum += (float)-0.044522583;
            } else {
              sum += (float)-0.0019435516;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.8937874)) {
            if ( (data[5].fvalue < 1.3973348)) {
              sum += (float)-0.018484676;
            } else {
              sum += (float)0.01230686;
            }
          } else {
            if ( (data[7].fvalue < 0.62237489)) {
              sum += (float)-0.062186867;
            } else {
              sum += (float)-0.013377949;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.56687403)) {
      if ( (data[6].fvalue < 0.56671631)) {
        if ( (data[1].fvalue < 0.5)) {
          sum += (float)-0.00027386914;
        } else {
          sum += (float)0.016895289;
        }
      } else {
        sum += (float)0.029692722;
      }
    } else {
      if ( (data[4].fvalue < 0.5)) {
        if ( (data[5].fvalue < 1.4985846)) {
          if ( (data[5].fvalue < 1.3519756)) {
            if ( (data[5].fvalue < 1.2568958)) {
              sum += (float)0.0092997039;
            } else {
              sum += (float)-0.01537044;
            }
          } else {
            if ( (data[6].fvalue < 0.5689742)) {
              sum += (float)-0.0447702;
            } else {
              sum += (float)0.021030081;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.5233364)) {
            if ( (data[7].fvalue < 0.67936444)) {
              sum += (float)-0.017216116;
            } else {
              sum += (float)-0.073389836;
            }
          } else {
            if ( (data[7].fvalue < 0.25164443)) {
              sum += (float)0.00019352935;
            } else {
              sum += (float)0.0019814619;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.62794113)) {
          if ( (data[6].fvalue < 0.60623813)) {
            if ( (data[6].fvalue < 0.59806627)) {
              sum += (float)0.005625729;
            } else {
              sum += (float)-0.014772755;
            }
          } else {
            if ( (data[7].fvalue < 0.17452537)) {
              sum += (float)0.03637467;
            } else {
              sum += (float)0.012529662;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.63863254)) {
            if ( (data[6].fvalue < 0.62900007)) {
              sum += (float)-0.0011861206;
            } else {
              sum += (float)-0.033676531;
            }
          } else {
            if ( (data[5].fvalue < 3.6640854)) {
              sum += (float)-0.012130908;
            } else {
              sum += (float)0.0031050167;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 2.2362132)) {
    if ( (data[6].fvalue < 2.1246166)) {
      if ( (data[6].fvalue < 0.27484596)) {
        if ( (data[2].fvalue < 0.5)) {
          if ( (data[6].fvalue < 0.21485752)) {
            if ( (data[6].fvalue < 0.16204947)) {
              sum += (float)0.000384321;
            } else {
              sum += (float)-8.2425126e-05;
            }
          } else {
            if ( (data[7].fvalue < 0.26070759)) {
              sum += (float)0.00025717885;
            } else {
              sum += (float)0.0022392825;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.19818839)) {
            if ( (data[5].fvalue < 4.5841351)) {
              sum += (float)0.00050420465;
            } else {
              sum += (float)-0.00019247235;
            }
          } else {
            if ( (data[5].fvalue < 2.0512233)) {
              sum += (float)0.00051637256;
            } else {
              sum += (float)-0.00030926801;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 9.0011444)) {
          if ( (data[6].fvalue < 1.0048242)) {
            if ( (data[6].fvalue < 1.0046737)) {
              sum += (float)0.00073425833;
            } else {
              sum += (float)-0.080528453;
            }
          } else {
            if ( (data[6].fvalue < 1.0114565)) {
              sum += (float)0.024886724;
            } else {
              sum += (float)0.0028134668;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.15692636)) {
            if ( (data[6].fvalue < 0.69373834)) {
              sum += (float)-0.00035297789;
            } else {
              sum += (float)0.0041942159;
            }
          } else {
            if ( (data[7].fvalue < 0.15763313)) {
              sum += (float)-0.036292858;
            } else {
              sum += (float)-0.0017052977;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 5.7787137)) {
        sum += (float)0.019029254;
      } else {
        if ( (data[5].fvalue < 10.803257)) {
          if ( (data[5].fvalue < 9.3504734)) {
            sum += (float)-0.039690435;
          } else {
            if ( (data[5].fvalue < 10.257668)) {
              sum += (float)-0.0027655363;
            } else {
              sum += (float)-0.020410269;
            }
          }
        } else {
          if ( (data[6].fvalue < 2.2117627)) {
            if ( (data[5].fvalue < 13.879635)) {
              sum += (float)0.0030975135;
            } else {
              sum += (float)-0.025689932;
            }
          } else {
            if ( (data[5].fvalue < 16.077442)) {
              sum += (float)-0.00020104052;
            } else {
              sum += (float)0.015592098;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].fvalue < 11.308792)) {
      if ( (data[5].fvalue < 11.054832)) {
        if ( (data[5].fvalue < 10.642574)) {
          if ( (data[5].fvalue < 9.83887)) {
            if ( (data[7].fvalue < 0.56582749)) {
              sum += (float)0.0045967558;
            } else {
              sum += (float)0.019196395;
            }
          } else {
            sum += (float)0.046574179;
          }
        } else {
          sum += (float)-0.013893277;
        }
      } else {
        sum += (float)0.048182104;
      }
    } else {
      if ( (data[5].fvalue < 14.908966)) {
        if ( (data[7].fvalue < 0.46742868)) {
          if ( (data[7].fvalue < 0.43102509)) {
            if ( (data[6].fvalue < 2.9582222)) {
              sum += (float)-0.00394915;
            } else {
              sum += (float)-0.012915199;
            }
          } else {
            sum += (float)-0.037166931;
          }
        } else {
          if ( (data[7].fvalue < 0.51528949)) {
            if ( (data[6].fvalue < 2.5936847)) {
              sum += (float)0.0066879811;
            } else {
              sum += (float)0.026436258;
            }
          } else {
            if ( (data[6].fvalue < 3.2111173)) {
              sum += (float)0.0048872237;
            } else {
              sum += (float)-0.0026297988;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.36494464)) {
          if ( (data[5].fvalue < 41.344536)) {
            if ( (data[7].fvalue < 0.29745883)) {
              sum += (float)0.019811813;
            } else {
              sum += (float)0.0062587163;
            }
          } else {
            sum += (float)-0.022720098;
          }
        } else {
          if ( (data[5].fvalue < 19.996012)) {
            if ( (data[6].fvalue < 3.3037825)) {
              sum += (float)-0.006712738;
            } else {
              sum += (float)0.0070304754;
            }
          } else {
            sum += (float)-0.017214322;
          }
        }
      }
    }
  }
  if ( (data[7].fvalue < 0.42640108)) {
    if ( (data[6].fvalue < 0.71621734)) {
      if ( (data[6].fvalue < 0.71604192)) {
        if ( (data[6].fvalue < 0.71023339)) {
          if ( (data[6].fvalue < 0.70858103)) {
            if ( (data[6].fvalue < 0.70832479)) {
              sum += (float)0.00026217836;
            } else {
              sum += (float)-0.073798567;
            }
          } else {
            if ( (data[7].fvalue < 0.40927288)) {
              sum += (float)0.043583684;
            } else {
              sum += (float)-0.017126603;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.7103548)) {
            sum += (float)-0.054242253;
          } else {
            if ( (data[7].fvalue < 0.4060784)) {
              sum += (float)-0.007848327;
            } else {
              sum += (float)0.03584246;
            }
          }
        }
      } else {
        sum += (float)-0.04742508;
      }
    } else {
      if ( (data[7].fvalue < 0.42142904)) {
        if ( (data[6].fvalue < 0.72464502)) {
          if ( (data[7].fvalue < 0.39082026)) {
            if ( (data[7].fvalue < 0.33162278)) {
              sum += (float)0.018675372;
            } else {
              sum += (float)-0.0090683773;
            }
          } else {
            sum += (float)0.051725227;
          }
        } else {
          if ( (data[6].fvalue < 0.7262181)) {
            if ( (data[5].fvalue < 2.8232174)) {
              sum += (float)0.024214147;
            } else {
              sum += (float)-0.039617132;
            }
          } else {
            if ( (data[7].fvalue < 0.41064987)) {
              sum += (float)0.001378794;
            } else {
              sum += (float)-0.014506093;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 1.3076895)) {
          if ( (data[6].fvalue < 1.074403)) {
            if ( (data[7].fvalue < 0.42584562)) {
              sum += (float)0.037478257;
            } else {
              sum += (float)0.0034203485;
            }
          } else {
            if ( (data[7].fvalue < 0.42594612)) {
              sum += (float)-0.033094652;
            } else {
              sum += (float)0.036997728;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.8317466)) {
            sum += (float)0.072552785;
          } else {
            if ( (data[5].fvalue < 13.92761)) {
              sum += (float)0.015543128;
            } else {
              sum += (float)-0.018659592;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].fvalue < 4.0112925)) {
      if ( (data[5].fvalue < 3.9702239)) {
        if ( (data[7].fvalue < 0.42649105)) {
          if ( (data[6].fvalue < 0.34348777)) {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)-0.0058648293;
            } else {
              sum += (float)0.0010385964;
            }
          } else {
            if ( (data[5].fvalue < 3.3035021)) {
              sum += (float)-0.047000941;
            } else {
              sum += (float)0.016143948;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.4094666)) {
            if ( (data[6].fvalue < 1.3796915)) {
              sum += (float)8.7061075e-05;
            } else {
              sum += (float)0.061725486;
            }
          } else {
            if ( (data[6].fvalue < 1.4498961)) {
              sum += (float)-0.051001478;
            } else {
              sum += (float)0.00064260158;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 3.9717715)) {
          if ( (data[6].fvalue < 0.26485783)) {
            if ( (data[5].fvalue < 3.9712863)) {
              sum += (float)-0.00064197782;
            } else {
              sum += (float)0.0042036385;
            }
          } else {
            sum += (float)0.081052937;
          }
        } else {
          if ( (data[6].fvalue < 1.187989)) {
            if ( (data[6].fvalue < 0.78427124)) {
              sum += (float)0.0044927937;
            } else {
              sum += (float)0.027468912;
            }
          } else {
            if ( (data[7].fvalue < 0.44946355)) {
              sum += (float)3.4010412e-05;
            } else {
              sum += (float)-0.018750086;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 4.0166106)) {
        if ( (data[7].fvalue < 0.43343741)) {
          sum += (float)-0.12239628;
        } else {
          if ( (data[7].fvalue < 0.56564534)) {
            if ( (data[6].fvalue < 0.21857339)) {
              sum += (float)-0.0097106015;
            } else {
              sum += (float)0.00048419501;
            }
          } else {
            sum += (float)-0.040308323;
          }
        }
      } else {
        if ( (data[5].fvalue < 5.0763659)) {
          if ( (data[6].fvalue < 0.55444735)) {
            if ( (data[6].fvalue < 0.51942563)) {
              sum += (float)-0.0023292985;
            } else {
              sum += (float)0.014732049;
            }
          } else {
            if ( (data[7].fvalue < 0.4308016)) {
              sum += (float)-0.045888782;
            } else {
              sum += (float)-0.0086159771;
            }
          }
        } else {
          if ( (data[5].fvalue < 5.0787172)) {
            sum += (float)0.087009326;
          } else {
            if ( (data[7].fvalue < 0.45374894)) {
              sum += (float)-0.0048494716;
            } else {
              sum += (float)0.0013067484;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 1.9121501)) {
    if ( (data[6].fvalue < 1.8630308)) {
      if ( (data[6].fvalue < 1.8129919)) {
        if ( (data[6].fvalue < 1.7843639)) {
          if ( (data[6].fvalue < 1.7803683)) {
            if ( (data[6].fvalue < 1.6061757)) {
              sum += (float)0.00017287611;
            } else {
              sum += (float)-0.0042606904;
            }
          } else {
            if ( (data[7].fvalue < 0.45311299)) {
              sum += (float)0.027941782;
            } else {
              sum += (float)0.00305779;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.57898825)) {
            if ( (data[5].fvalue < 6.7221274)) {
              sum += (float)0.019412853;
            } else {
              sum += (float)-0.013448243;
            }
          } else {
            sum += (float)-0.061321381;
          }
        }
      } else {
        if ( (data[5].fvalue < 9.0134697)) {
          if ( (data[1].fvalue < 0.5)) {
            sum += (float)0.0087750321;
          } else {
            sum += (float)0.029581182;
          }
        } else {
          if ( (data[5].fvalue < 14.487357)) {
            if ( (data[7].fvalue < 0.22114432)) {
              sum += (float)-0.015875867;
            } else {
              sum += (float)0.0012225658;
            }
          } else {
            if ( (data[7].fvalue < 0.24464747)) {
              sum += (float)0.015589599;
            } else {
              sum += (float)-0.0010662389;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 5.4757762)) {
        if ( (data[5].fvalue < 4.4843297)) {
          if ( (data[5].fvalue < 3.4534466)) {
            sum += (float)-0.0082132109;
          } else {
            sum += (float)0.018270565;
          }
        } else {
          sum += (float)-0.13558634;
        }
      } else {
        if ( (data[5].fvalue < 10.450083)) {
          if ( (data[5].fvalue < 8.5984631)) {
            sum += (float)0.039918855;
          } else {
            sum += (float)0.010744733;
          }
        } else {
          if ( (data[7].fvalue < 0.14155477)) {
            sum += (float)0.0094366744;
          } else {
            if ( (data[5].fvalue < 14.484032)) {
              sum += (float)-0.0072760019;
            } else {
              sum += (float)-0.03378785;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].fvalue < 5.7787137)) {
      if ( (data[5].fvalue < 3.7205505)) {
        if ( (data[5].fvalue < 3.488013)) {
          if ( (data[6].fvalue < 1.9804026)) {
            if ( (data[5].fvalue < 2.9894977)) {
              sum += (float)-0.00031106474;
            } else {
              sum += (float)-0.014499665;
            }
          } else {
            if ( (data[7].fvalue < 0.75206399)) {
              sum += (float)0.0032109621;
            } else {
              sum += (float)0.016139707;
            }
          }
        } else {
          sum += (float)-0.021096075;
        }
      } else {
        if ( (data[6].fvalue < 2.3696928)) {
          sum += (float)0.027014567;
        } else {
          if ( (data[5].fvalue < 5.1917582)) {
            sum += (float)0.014110137;
          } else {
            sum += (float)0.0036448361;
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.7127254)) {
        if ( (data[7].fvalue < 0.57421172)) {
          if ( (data[5].fvalue < 15.941153)) {
            if ( (data[7].fvalue < 0.34559029)) {
              sum += (float)-0.005902837;
            } else {
              sum += (float)0.0059824283;
            }
          } else {
            if ( (data[7].fvalue < 0.32364833)) {
              sum += (float)0.011525401;
            } else {
              sum += (float)-0.0048178937;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.60705948)) {
            sum += (float)0.033807583;
          } else {
            if ( (data[6].fvalue < 2.9207387)) {
              sum += (float)-0.0014585048;
            } else {
              sum += (float)0.013038612;
            }
          }
        }
      } else {
        sum += (float)-0.035643376;
      }
    }
  }
  sum = sum + (float)(0.5);
  if (!pred_margin) {
    return pred_transform(sum);
  } else {
    return sum;
  }
}
};
