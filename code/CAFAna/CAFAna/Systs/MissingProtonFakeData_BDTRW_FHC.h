#include "BDTReweighter.h"
class MissingProtonFakeData_BDTRW_FHC : public BDTReweighter {
 public :
 MissingProtonFakeData_BDTRW_FHC() : BDTReweighter(1.0355) {;}
  ~MissingProtonFakeData_BDTRW_FHC() {;}

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
  if ( (data[6].fvalue < 0.47832975)) {
    if ( (data[6].fvalue < 0.25608724)) {
      if ( (data[6].fvalue < 2.7374268e-05)) {
        if ( (data[5].fvalue < 10.865977)) {
          if ( (data[5].fvalue < 7.2281017)) {
            if ( (data[5].fvalue < 2.9308839)) {
              sum += (float)0.13908452;
            } else {
              sum += (float)0.1411117;
            }
          } else {
            if ( (data[7].fvalue < 0.30704832)) {
              sum += (float)0.13866274;
            } else {
              sum += (float)0.13192855;
            }
          }
        } else {
          if ( (data[5].fvalue < 17.108854)) {
            if ( (data[7].fvalue < 0.2574749)) {
              sum += (float)0.13665287;
            } else {
              sum += (float)0.12847225;
            }
          } else {
            sum += (float)0.12660782;
          }
        }
      } else {
        if ( (data[6].fvalue < 0.10865536)) {
          if ( (data[6].fvalue < 0.04563611)) {
            if ( (data[6].fvalue < 0.026297301)) {
              sum += (float)0.076348208;
            } else {
              sum += (float)0.083224781;
            }
          } else {
            if ( (data[7].fvalue < 0.36465555)) {
              sum += (float)0.092325412;
            } else {
              sum += (float)0.084047355;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.20478392)) {
            if ( (data[7].fvalue < 0.31756738)) {
              sum += (float)0.10635639;
            } else {
              sum += (float)0.091930024;
            }
          } else {
            if ( (data[7].fvalue < 0.3340134)) {
              sum += (float)0.12517323;
            } else {
              sum += (float)0.10314767;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.36848971)) {
        if ( (data[7].fvalue < 0.36063069)) {
          if ( (data[6].fvalue < 0.31652397)) {
            if ( (data[5].fvalue < 5.534708)) {
              sum += (float)0.14468747;
            } else {
              sum += (float)0.12885855;
            }
          } else {
            if ( (data[5].fvalue < 5.7161369)) {
              sum += (float)0.16333207;
            } else {
              sum += (float)0.1327875;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.31529739)) {
            if ( (data[7].fvalue < 0.4692902)) {
              sum += (float)0.11813305;
            } else {
              sum += (float)0.10602202;
            }
          } else {
            if ( (data[7].fvalue < 0.49268883)) {
              sum += (float)0.13309625;
            } else {
              sum += (float)0.11994492;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.41833073)) {
          if ( (data[5].fvalue < 6.3180442)) {
            if ( (data[6].fvalue < 0.43877873)) {
              sum += (float)0.17967784;
            } else {
              sum += (float)0.20030847;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.15116596;
            } else {
              sum += (float)0.12883499;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.44779927)) {
            if ( (data[5].fvalue < 6.1841497)) {
              sum += (float)0.14018346;
            } else {
              sum += (float)0.099482253;
            }
          } else {
            if ( (data[7].fvalue < 0.59014678)) {
              sum += (float)0.16538802;
            } else {
              sum += (float)0.14832644;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.80548126)) {
      if ( (data[6].fvalue < 0.62460458)) {
        if ( (data[7].fvalue < 0.47078723)) {
          if ( (data[5].fvalue < 6.6672983)) {
            if ( (data[6].fvalue < 0.53313923)) {
              sum += (float)0.22269441;
            } else {
              sum += (float)0.25066739;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.18330649;
            } else {
              sum += (float)0.15163372;
            }
          }
        } else {
          if ( (data[5].fvalue < 6.2663774)) {
            if ( (data[7].fvalue < 0.64459038)) {
              sum += (float)0.1907535;
            } else {
              sum += (float)0.16953626;
            }
          } else {
            if ( (data[5].fvalue < 8.1067638)) {
              sum += (float)0.13607472;
            } else {
              sum += (float)0.10799026;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.52192968)) {
          if ( (data[5].fvalue < 6.3045754)) {
            if ( (data[6].fvalue < 0.69509077)) {
              sum += (float)0.28548899;
            } else {
              sum += (float)0.32130483;
            }
          } else {
            if ( (data[7].fvalue < 0.20663738)) {
              sum += (float)0.22387624;
            } else {
              sum += (float)0.17788069;
            }
          }
        } else {
          if ( (data[5].fvalue < 6.1552734)) {
            if ( (data[7].fvalue < 0.68772477)) {
              sum += (float)0.23869266;
            } else {
              sum += (float)0.21104573;
            }
          } else {
            if ( (data[5].fvalue < 8.1261387)) {
              sum += (float)0.16377385;
            } else {
              sum += (float)0.12935708;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 1.4051204)) {
        if ( (data[5].fvalue < 6.5130954)) {
          if ( (data[7].fvalue < 0.55956769)) {
            if ( (data[6].fvalue < 1.04831)) {
              sum += (float)0.37469947;
            } else {
              sum += (float)0.45238683;
            }
          } else {
            if ( (data[6].fvalue < 1.0423359)) {
              sum += (float)0.27987853;
            } else {
              sum += (float)0.34229866;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.23643839)) {
            if ( (data[6].fvalue < 1.0138416)) {
              sum += (float)0.26025632;
            } else {
              sum += (float)0.30527323;
            }
          } else {
            if ( (data[5].fvalue < 8.9143543)) {
              sum += (float)0.23527446;
            } else {
              sum += (float)0.19134016;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 6.5754733)) {
          if ( (data[6].fvalue < 1.8866062)) {
            if ( (data[7].fvalue < 0.59542739)) {
              sum += (float)0.55062962;
            } else {
              sum += (float)0.44784221;
            }
          } else {
            if ( (data[6].fvalue < 2.3433371)) {
              sum += (float)0.62582541;
            } else {
              sum += (float)0.74797332;
            }
          }
        } else {
          if ( (data[6].fvalue < 2.0751369)) {
            if ( (data[7].fvalue < 0.28488475)) {
              sum += (float)0.35182139;
            } else {
              sum += (float)0.27831519;
            }
          } else {
            if ( (data[5].fvalue < 15.534826)) {
              sum += (float)0.43123221;
            } else {
              sum += (float)0.37333536;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.50068265)) {
    if ( (data[6].fvalue < 0.23451166)) {
      if ( (data[6].fvalue < 6.9702146e-05)) {
        if ( (data[5].fvalue < 13.500049)) {
          if ( (data[5].fvalue < 6.0972347)) {
            if ( (data[5].fvalue < 2.8274307)) {
              sum += (float)0.09730199;
            } else {
              sum += (float)0.09887401;
            }
          } else {
            if ( (data[3].fvalue < 0.5)) {
              sum += (float)0.095941469;
            } else {
              sum += (float)0.08860939;
            }
          }
        } else {
          if ( (data[5].fvalue < 17.668243)) {
            if ( (data[7].fvalue < 0.18606183)) {
              sum += (float)0.095428012;
            } else {
              sum += (float)0.088773362;
            }
          } else {
            if ( (data[3].fvalue < 0.5)) {
              sum += (float)0.088989541;
            } else {
              sum += (float)0.078906536;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.1132132)) {
          if ( (data[6].fvalue < 0.045572907)) {
            if ( (data[6].fvalue < 0.026424285)) {
              sum += (float)0.053437486;
            } else {
              sum += (float)0.058267433;
            }
          } else {
            if ( (data[7].fvalue < 0.46491784)) {
              sum += (float)0.064632401;
            } else {
              sum += (float)0.057166878;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.39371973)) {
            if ( (data[6].fvalue < 0.18227872)) {
              sum += (float)0.072742715;
            } else {
              sum += (float)0.081666559;
            }
          } else {
            if ( (data[7].fvalue < 0.5723685)) {
              sum += (float)0.066679291;
            } else {
              sum += (float)0.059668008;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.37728161)) {
        if ( (data[7].fvalue < 0.32185411)) {
          if ( (data[6].fvalue < 0.30175352)) {
            if ( (data[5].fvalue < 5.6956606)) {
              sum += (float)0.099164881;
            } else {
              sum += (float)0.087187663;
            }
          } else {
            if ( (data[5].fvalue < 6.8616562)) {
              sum += (float)0.11450521;
            } else {
              sum += (float)0.092266768;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.31822509)) {
            if ( (data[7].fvalue < 0.44074392)) {
              sum += (float)0.084327467;
            } else {
              sum += (float)0.073927611;
            }
          } else {
            if ( (data[7].fvalue < 0.42512468)) {
              sum += (float)0.098605685;
            } else {
              sum += (float)0.086062282;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.39403811)) {
          if ( (data[5].fvalue < 5.807127)) {
            if ( (data[6].fvalue < 0.45882508)) {
              sum += (float)0.13002627;
            } else {
              sum += (float)0.15086223;
            }
          } else {
            if ( (data[7].fvalue < 0.19390501)) {
              sum += (float)0.10793626;
            } else {
              sum += (float)0.086988397;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.45628604)) {
            if ( (data[7].fvalue < 0.51397884)) {
              sum += (float)0.1070198;
            } else {
              sum += (float)0.09530697;
            }
          } else {
            if ( (data[5].fvalue < 5.5105848)) {
              sum += (float)0.11441328;
            } else {
              sum += (float)0.07395234;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.85797238)) {
      if ( (data[6].fvalue < 0.66175938)) {
        if ( (data[7].fvalue < 0.45029217)) {
          if ( (data[5].fvalue < 5.8144922)) {
            if ( (data[6].fvalue < 0.58207011)) {
              sum += (float)0.16661182;
            } else {
              sum += (float)0.19351256;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.13633244;
            } else {
              sum += (float)0.11227176;
            }
          }
        } else {
          if ( (data[5].fvalue < 5.8270068)) {
            if ( (data[7].fvalue < 0.66118944)) {
              sum += (float)0.14042602;
            } else {
              sum += (float)0.12243512;
            }
          } else {
            if ( (data[5].fvalue < 7.2670603)) {
              sum += (float)0.1051364;
            } else {
              sum += (float)0.078559205;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.47555238)) {
          if ( (data[5].fvalue < 5.786797)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.2382133;
            } else {
              sum += (float)0.19619191;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.17581144;
            } else {
              sum += (float)0.13756026;
            }
          }
        } else {
          if ( (data[5].fvalue < 6.6451426)) {
            if ( (data[7].fvalue < 0.66316569)) {
              sum += (float)0.1825359;
            } else {
              sum += (float)0.15714169;
            }
          } else {
            if ( (data[7].fvalue < 0.60690284)) {
              sum += (float)0.103565;
            } else {
              sum += (float)0.088097885;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 1.6286561)) {
        if ( (data[5].fvalue < 6.1917434)) {
          if ( (data[7].fvalue < 0.48355556)) {
            if ( (data[6].fvalue < 1.1675475)) {
              sum += (float)0.29317167;
            } else {
              sum += (float)0.36308911;
            }
          } else {
            if ( (data[6].fvalue < 1.1978276)) {
              sum += (float)0.21400115;
            } else {
              sum += (float)0.27851111;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.21259716)) {
            if ( (data[6].fvalue < 1.1947939)) {
              sum += (float)0.19751866;
            } else {
              sum += (float)0.23980786;
            }
          } else {
            if ( (data[5].fvalue < 9.8381081)) {
              sum += (float)0.17862824;
            } else {
              sum += (float)0.13956754;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 7.2945347)) {
          if ( (data[6].fvalue < 2.105679)) {
            if ( (data[7].fvalue < 0.75147992)) {
              sum += (float)0.41090447;
            } else {
              sum += (float)0.35800236;
            }
          } else {
            if ( (data[5].fvalue < 3.2359343)) {
              sum += (float)0.42528;
            } else {
              sum += (float)0.51549321;
            }
          }
        } else {
          if ( (data[6].fvalue < 2.443162)) {
            if ( (data[7].fvalue < 0.29458719)) {
              sum += (float)0.26947081;
            } else {
              sum += (float)0.21372531;
            }
          } else {
            if ( (data[5].fvalue < 15.633931)) {
              sum += (float)0.32046866;
            } else {
              sum += (float)0.27820221;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.51850951)) {
    if ( (data[6].fvalue < 0.27706859)) {
      if ( (data[6].fvalue < 0.00011370849)) {
        if ( (data[5].fvalue < 10.871042)) {
          if ( (data[7].fvalue < 0.92221469)) {
            if ( (data[5].fvalue < 0.51701725)) {
              sum += (float)0.083119452;
            } else {
              sum += (float)0.068404324;
            }
          } else {
            if ( (data[5].fvalue < 3.0769868)) {
              sum += (float)0.09849526;
            } else {
              sum += (float)0.078027621;
            }
          }
        } else {
          if ( (data[5].fvalue < 16.319342)) {
            if ( (data[7].fvalue < 0.25254774)) {
              sum += (float)0.067450061;
            } else {
              sum += (float)0.062343549;
            }
          } else {
            if ( (data[7].fvalue < 0.41541684)) {
              sum += (float)0.061531831;
            } else {
              sum += (float)0.067585066;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.1132132)) {
          if ( (data[6].fvalue < 0.037369721)) {
            if ( (data[7].fvalue < 0.3100284)) {
              sum += (float)0.039071515;
            } else {
              sum += (float)0.03369258;
            }
          } else {
            if ( (data[5].fvalue < 1.0392528)) {
              sum += (float)0.037660483;
            } else {
              sum += (float)0.044964463;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.21377878)) {
            if ( (data[7].fvalue < 0.27349925)) {
              sum += (float)0.053225834;
            } else {
              sum += (float)0.045337111;
            }
          } else {
            if ( (data[7].fvalue < 0.29171568)) {
              sum += (float)0.06406416;
            } else {
              sum += (float)0.051908489;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.39971665)) {
        if ( (data[7].fvalue < 0.33713409)) {
          if ( (data[5].fvalue < 5.4951673)) {
            if ( (data[6].fvalue < 0.33770055)) {
              sum += (float)0.075235635;
            } else {
              sum += (float)0.085376129;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.068800405;
            } else {
              sum += (float)0.055377167;
            }
          }
        } else {
          if ( (data[5].fvalue < 7.2600765)) {
            if ( (data[7].fvalue < 0.62265629)) {
              sum += (float)0.064309895;
            } else {
              sum += (float)0.054419443;
            }
          } else {
            if ( (data[5].fvalue < 12.111166)) {
              sum += (float)0.035840232;
            } else {
              sum += (float)0.027024494;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.45372552)) {
          if ( (data[5].fvalue < 7.0958986)) {
            if ( (data[6].fvalue < 0.46666369)) {
              sum += (float)0.093191862;
            } else {
              sum += (float)0.10692574;
            }
          } else {
            if ( (data[7].fvalue < 0.22985712)) {
              sum += (float)0.075108357;
            } else {
              sum += (float)0.051249143;
            }
          }
        } else {
          if ( (data[5].fvalue < 7.5205936)) {
            if ( (data[7].fvalue < 0.72858489)) {
              sum += (float)0.076119877;
            } else {
              sum += (float)0.064486161;
            }
          } else {
            if ( (data[6].fvalue < 0.47844112)) {
              sum += (float)0.033236507;
            } else {
              sum += (float)0.044982962;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.93231142)) {
      if ( (data[6].fvalue < 0.70939887)) {
        if ( (data[7].fvalue < 0.42437187)) {
          if ( (data[5].fvalue < 7.0846434)) {
            if ( (data[6].fvalue < 0.60035896)) {
              sum += (float)0.12102055;
            } else {
              sum += (float)0.14280939;
            }
          } else {
            if ( (data[7].fvalue < 0.16712695)) {
              sum += (float)0.095100991;
            } else {
              sum += (float)0.071400888;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.57369387)) {
            if ( (data[5].fvalue < 6.8982964)) {
              sum += (float)0.10780012;
            } else {
              sum += (float)0.059327181;
            }
          } else {
            if ( (data[6].fvalue < 0.59199071)) {
              sum += (float)0.083530083;
            } else {
              sum += (float)0.096560635;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 7.2382021)) {
          if ( (data[7].fvalue < 0.4342007)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.18155868;
            } else {
              sum += (float)0.14507505;
            }
          } else {
            if ( (data[7].fvalue < 0.64794648)) {
              sum += (float)0.14163069;
            } else {
              sum += (float)0.11715707;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.18192077)) {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.11835533;
            } else {
              sum += (float)0.13579728;
            }
          } else {
            if ( (data[7].fvalue < 0.35390785)) {
              sum += (float)0.091462299;
            } else {
              sum += (float)0.066122733;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 6.979588)) {
        if ( (data[6].fvalue < 1.5715046)) {
          if ( (data[7].fvalue < 0.65899479)) {
            if ( (data[5].fvalue < 2.7125766)) {
              sum += (float)0.17967287;
            } else {
              sum += (float)0.22682738;
            }
          } else {
            if ( (data[6].fvalue < 1.2735515)) {
              sum += (float)0.14213254;
            } else {
              sum += (float)0.18515216;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.9575279)) {
            if ( (data[7].fvalue < 0.6340524)) {
              sum += (float)0.29725024;
            } else {
              sum += (float)0.24392033;
            }
          } else {
            if ( (data[5].fvalue < 5.6047211)) {
              sum += (float)0.34625071;
            } else {
              sum += (float)0.24402213;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 1.7800827)) {
          if ( (data[7].fvalue < 0.29900092)) {
            if ( (data[5].fvalue < 14.008396)) {
              sum += (float)0.16470569;
            } else {
              sum += (float)0.12757771;
            }
          } else {
            if ( (data[7].fvalue < 0.58118236)) {
              sum += (float)0.10956164;
            } else {
              sum += (float)0.072895892;
            }
          }
        } else {
          if ( (data[1].fvalue < 0.5)) {
            sum += (float)0.24757157;
          } else {
            if ( (data[6].fvalue < 2.3449287)) {
              sum += (float)0.16790068;
            } else {
              sum += (float)0.20788351;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.54035735)) {
    if ( (data[6].fvalue < 0.28616861)) {
      if ( (data[6].fvalue < 0.00018325806)) {
        if ( (data[5].fvalue < 7.619957)) {
          if ( (data[7].fvalue < 0.82499111)) {
            if ( (data[5].fvalue < 3.1818142)) {
              sum += (float)0.047503229;
            } else {
              sum += (float)0.048667621;
            }
          } else {
            if ( (data[7].fvalue < 0.92221469)) {
              sum += (float)0.050886497;
            } else {
              sum += (float)0.060497273;
            }
          }
        } else {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[3].fvalue < 0.5)) {
              sum += (float)0.045256305;
            } else {
              sum += (float)0.039970323;
            }
          } else {
            if ( (data[7].fvalue < 0.072768942)) {
              sum += (float)0.051648084;
            } else {
              sum += (float)0.045267127;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.18227081)) {
          if ( (data[6].fvalue < 0.055657074)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.027964134;
            } else {
              sum += (float)0.022798751;
            }
          } else {
            if ( (data[5].fvalue < 1.1427059)) {
              sum += (float)0.026285857;
            } else {
              sum += (float)0.033848803;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.41423166)) {
            if ( (data[5].fvalue < 1.2318172)) {
              sum += (float)0.032087442;
            } else {
              sum += (float)0.044219635;
            }
          } else {
            if ( (data[7].fvalue < 0.66529608)) {
              sum += (float)0.035036162;
            } else {
              sum += (float)0.028294934;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.42712092)) {
        if ( (data[7].fvalue < 0.30740944)) {
          if ( (data[5].fvalue < 5.4230638)) {
            if ( (data[6].fvalue < 0.34815213)) {
              sum += (float)0.05445563;
            } else {
              sum += (float)0.062860079;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.048633818;
            } else {
              sum += (float)0.040158838;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.321594)) {
            if ( (data[6].fvalue < 0.34153426)) {
              sum += (float)0.033574622;
            } else {
              sum += (float)0.041858397;
            }
          } else {
            if ( (data[7].fvalue < 0.57761192)) {
              sum += (float)0.050850037;
            } else {
              sum += (float)0.039646264;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.37828475)) {
          if ( (data[5].fvalue < 5.2407708)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.078867152;
            } else {
              sum += (float)0.065200962;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.059306439;
            } else {
              sum += (float)0.047317661;
            }
          }
        } else {
          if ( (data[5].fvalue < 5.337822)) {
            if ( (data[7].fvalue < 0.53307372)) {
              sum += (float)0.061144009;
            } else {
              sum += (float)0.051824067;
            }
          } else {
            if ( (data[5].fvalue < 8.9984026)) {
              sum += (float)0.038549609;
            } else {
              sum += (float)0.023378206;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 1.1368915)) {
      if ( (data[6].fvalue < 0.75284564)) {
        if ( (data[7].fvalue < 0.39790899)) {
          if ( (data[5].fvalue < 5.4069242)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.10344157;
            } else {
              sum += (float)0.078550361;
            }
          } else {
            if ( (data[7].fvalue < 0.24978146)) {
              sum += (float)0.071223155;
            } else {
              sum += (float)0.053351603;
            }
          }
        } else {
          if ( (data[5].fvalue < 6.2907352)) {
            if ( (data[7].fvalue < 0.55584913)) {
              sum += (float)0.080362529;
            } else {
              sum += (float)0.067796826;
            }
          } else {
            if ( (data[7].fvalue < 0.59509659)) {
              sum += (float)0.045335889;
            } else {
              sum += (float)0.031004338;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 5.7613544)) {
          if ( (data[7].fvalue < 0.60293865)) {
            if ( (data[5].fvalue < 2.5666661)) {
              sum += (float)0.10578357;
            } else {
              sum += (float)0.14137636;
            }
          } else {
            if ( (data[7].fvalue < 0.73972905)) {
              sum += (float)0.10106046;
            } else {
              sum += (float)0.081666052;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.21434876)) {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.082912534;
            } else {
              sum += (float)0.10521156;
            }
          } else {
            if ( (data[7].fvalue < 0.56020564)) {
              sum += (float)0.061459329;
            } else {
              sum += (float)0.036476221;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 5.619215)) {
        if ( (data[6].fvalue < 1.795734)) {
          if ( (data[7].fvalue < 0.62224036)) {
            if ( (data[6].fvalue < 1.3100848)) {
              sum += (float)0.16666248;
            } else {
              sum += (float)0.21542731;
            }
          } else {
            if ( (data[6].fvalue < 1.5036706)) {
              sum += (float)0.12228601;
            } else {
              sum += (float)0.15856992;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.1910748)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.19478266;
            } else {
              sum += (float)0.14593801;
            }
          } else {
            if ( (data[7].fvalue < 0.86607873)) {
              sum += (float)0.27838594;
            } else {
              sum += (float)0.2156498;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 1.7687242)) {
          if ( (data[1].fvalue < 0.5)) {
            if ( (data[6].fvalue < 1.2979133)) {
              sum += (float)0.1233316;
            } else {
              sum += (float)0.15500733;
            }
          } else {
            if ( (data[7].fvalue < 0.40076414)) {
              sum += (float)0.10133838;
            } else {
              sum += (float)0.07379926;
            }
          }
        } else {
          if ( (data[5].fvalue < 14.259617)) {
            if ( (data[6].fvalue < 2.2304969)) {
              sum += (float)0.13666043;
            } else {
              sum += (float)0.1686196;
            }
          } else {
            if ( (data[7].fvalue < 0.19637951)) {
              sum += (float)0.16034999;
            } else {
              sum += (float)0.098040923;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.56822461)) {
    if ( (data[6].fvalue < 0.23404968)) {
      if ( (data[6].fvalue < 3.7841796e-06)) {
        if ( (data[5].fvalue < 15.881857)) {
          if ( (data[5].fvalue < 0.51158923)) {
            sum += (float)0.045001835;
          } else {
            if ( (data[7].fvalue < 0.79845041)) {
              sum += (float)0.033398978;
            } else {
              sum += (float)0.035503116;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.41541684)) {
            if ( (data[7].fvalue < 0.23939642)) {
              sum += (float)0.030344509;
            } else {
              sum += (float)0.02487641;
            }
          } else {
            if ( (data[5].fvalue < 51.754543)) {
              sum += (float)0.034314435;
            } else {
              sum += (float)0.0027307929;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.10865524)) {
          if ( (data[6].fvalue < 0.026296051)) {
            if ( (data[7].fvalue < 0.46781766)) {
              sum += (float)0.017997885;
            } else {
              sum += (float)0.013608302;
            }
          } else {
            if ( (data[7].fvalue < 0.29164949)) {
              sum += (float)0.022087784;
            } else {
              sum += (float)0.018183796;
            }
          }
        } else {
          if ( (data[5].fvalue < 7.3476715)) {
            if ( (data[5].fvalue < 1.3150998)) {
              sum += (float)0.019284623;
            } else {
              sum += (float)0.027092973;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.018174756;
            } else {
              sum += (float)0.0078884568;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.39079624)) {
        if ( (data[7].fvalue < 0.2780357)) {
          if ( (data[5].fvalue < 7.5990582)) {
            if ( (data[6].fvalue < 0.32358035)) {
              sum += (float)0.036265183;
            } else {
              sum += (float)0.041574441;
            }
          } else {
            if ( (data[7].fvalue < 0.10808919)) {
              sum += (float)0.031516798;
            } else {
              sum += (float)0.02333444;
            }
          }
        } else {
          if ( (data[5].fvalue < 6.4921827)) {
            if ( (data[5].fvalue < 1.3808616)) {
              sum += (float)0.024445198;
            } else {
              sum += (float)0.03193637;
            }
          } else {
            if ( (data[5].fvalue < 8.283638)) {
              sum += (float)0.016178602;
            } else {
              sum += (float)0.0058518997;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.34178749)) {
          if ( (data[5].fvalue < 7.60783)) {
            if ( (data[6].fvalue < 0.4730159)) {
              sum += (float)0.047200602;
            } else {
              sum += (float)0.057384003;
            }
          } else {
            if ( (data[7].fvalue < 0.14914823)) {
              sum += (float)0.037497096;
            } else {
              sum += (float)0.025461381;
            }
          }
        } else {
          if ( (data[5].fvalue < 5.2843838)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.039972357;
            } else {
              sum += (float)0.030584818;
            }
          } else {
            if ( (data[5].fvalue < 9.1793118)) {
              sum += (float)0.025277209;
            } else {
              sum += (float)0.013671691;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.99837494)) {
      if ( (data[5].fvalue < 8.109334)) {
        if ( (data[7].fvalue < 0.37918955)) {
          if ( (data[6].fvalue < 0.73983508)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.074736558;
            } else {
              sum += (float)0.056337215;
            }
          } else {
            if ( (data[5].fvalue < 4.7593436)) {
              sum += (float)0.10341178;
            } else {
              sum += (float)0.068505086;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.77489698)) {
            if ( (data[7].fvalue < 0.71948731)) {
              sum += (float)0.056205753;
            } else {
              sum += (float)0.043644458;
            }
          } else {
            if ( (data[7].fvalue < 0.68348712)) {
              sum += (float)0.07467787;
            } else {
              sum += (float)0.056673899;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.15359354)) {
          if ( (data[6].fvalue < 0.70952439)) {
            if ( (data[7].fvalue < 0.10185894)) {
              sum += (float)0.052400097;
            } else {
              sum += (float)0.040711321;
            }
          } else {
            if ( (data[5].fvalue < 11.204782)) {
              sum += (float)0.074715503;
            } else {
              sum += (float)0.060129087;
            }
          }
        } else {
          if ( (data[5].fvalue < 16.963318)) {
            if ( (data[7].fvalue < 0.34728485)) {
              sum += (float)0.043163598;
            } else {
              sum += (float)0.028528593;
            }
          } else {
            if ( (data[5].fvalue < 19.663704)) {
              sum += (float)0.022372417;
            } else {
              sum += (float)0.012267296;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 5.4721956)) {
        if ( (data[6].fvalue < 1.7104874)) {
          if ( (data[7].fvalue < 0.71726757)) {
            if ( (data[5].fvalue < 2.7370684)) {
              sum += (float)0.092722967;
            } else {
              sum += (float)0.12911063;
            }
          } else {
            if ( (data[6].fvalue < 1.3211803)) {
              sum += (float)0.068591356;
            } else {
              sum += (float)0.091907293;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.3388739)) {
            if ( (data[7].fvalue < 0.81933284)) {
              sum += (float)0.14804478;
            } else {
              sum += (float)0.110948;
            }
          } else {
            if ( (data[6].fvalue < 2.2255347)) {
              sum += (float)0.16571774;
            } else {
              sum += (float)0.2204444;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 1.9091136)) {
          if ( (data[1].fvalue < 0.5)) {
            if ( (data[6].fvalue < 1.2370682)) {
              sum += (float)0.081752688;
            } else {
              sum += (float)0.10735904;
            }
          } else {
            if ( (data[5].fvalue < 15.888821)) {
              sum += (float)0.066962644;
            } else {
              sum += (float)0.041457698;
            }
          }
        } else {
          if ( (data[5].fvalue < 9.4987526)) {
            if ( (data[6].fvalue < 2.9191022)) {
              sum += (float)0.11949893;
            } else {
              sum += (float)0.16313151;
            }
          } else {
            if ( (data[7].fvalue < 0.22795671)) {
              sum += (float)0.11921899;
            } else {
              sum += (float)0.081964836;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.46666369)) {
    if ( (data[6].fvalue < 0.23400021)) {
      if ( (data[6].fvalue < 0.00043054199)) {
        if ( (data[5].fvalue < 5.3586731)) {
          if ( (data[5].fvalue < 3.1659744)) {
            if ( (data[7].fvalue < 0.77123755)) {
              sum += (float)0.023102682;
            } else {
              sum += (float)0.025618447;
            }
          } else {
            if ( (data[7].fvalue < 0.6615954)) {
              sum += (float)0.024574267;
            } else {
              sum += (float)0.022765554;
            }
          }
        } else {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[3].fvalue < 0.5)) {
              sum += (float)0.022074956;
            } else {
              sum += (float)0.018232087;
            }
          } else {
            if ( (data[7].fvalue < 0.060523398)) {
              sum += (float)0.026873603;
            } else {
              sum += (float)0.022807341;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.10864368)) {
          if ( (data[7].fvalue < 0.61358809)) {
            if ( (data[6].fvalue < 0.026295137)) {
              sum += (float)0.012472858;
            } else {
              sum += (float)0.015218794;
            }
          } else {
            if ( (data[5].fvalue < 7.0465784)) {
              sum += (float)0.0092012333;
            } else {
              sum += (float)-0.0020306553;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.49871907)) {
            if ( (data[5].fvalue < 5.4620819)) {
              sum += (float)0.019155394;
            } else {
              sum += (float)0.011433972;
            }
          } else {
            if ( (data[7].fvalue < 0.70933878)) {
              sum += (float)0.012757568;
            } else {
              sum += (float)0.0074686576;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.44471282)) {
        if ( (data[5].fvalue < 1.3049583)) {
          if ( (data[5].fvalue < 0.92942595)) {
            if ( (data[5].fvalue < 0.85627693)) {
              sum += (float)0.0093400637;
            } else {
              sum += (float)0.01281817;
            }
          } else {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.020989481;
            } else {
              sum += (float)0.015748344;
            }
          }
        } else {
          if ( (data[5].fvalue < 4.9832053)) {
            if ( (data[6].fvalue < 0.33116835)) {
              sum += (float)0.025659144;
            } else {
              sum += (float)0.031394247;
            }
          } else {
            if ( (data[7].fvalue < 0.23578808)) {
              sum += (float)0.022524115;
            } else {
              sum += (float)0.011219935;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.33650333)) {
          if ( (data[7].fvalue < 0.72392559)) {
            if ( (data[5].fvalue < 1.8580256)) {
              sum += (float)0.014753202;
            } else {
              sum += (float)0.02068031;
            }
          } else {
            if ( (data[5].fvalue < 1.3314568)) {
              sum += (float)0.02071709;
            } else {
              sum += (float)0.0096356869;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.66655695)) {
            if ( (data[5].fvalue < 1.7110897)) {
              sum += (float)0.021126149;
            } else {
              sum += (float)0.027654886;
            }
          } else {
            if ( (data[7].fvalue < 0.79013932)) {
              sum += (float)0.019902444;
            } else {
              sum += (float)0.01417264;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.82546496)) {
      if ( (data[6].fvalue < 0.61314487)) {
        if ( (data[7].fvalue < 0.50963843)) {
          if ( (data[5].fvalue < 5.0054598)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.042634495;
            } else {
              sum += (float)0.029522082;
            }
          } else {
            if ( (data[7].fvalue < 0.21934454)) {
              sum += (float)0.03079096;
            } else {
              sum += (float)0.018455161;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.73310852)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.029726604;
            } else {
              sum += (float)0.022935199;
            }
          } else {
            if ( (data[5].fvalue < 1.9085841)) {
              sum += (float)0.027782751;
            } else {
              sum += (float)0.020610269;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 2.4570303)) {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[7].fvalue < 0.70625436)) {
              sum += (float)0.042916495;
            } else {
              sum += (float)0.031195397;
            }
          } else {
            if ( (data[5].fvalue < 2.0039783)) {
              sum += (float)0.020143623;
            } else {
              sum += (float)0.038467199;
            }
          }
        } else {
          if ( (data[5].fvalue < 4.884613)) {
            if ( (data[7].fvalue < 0.63515306)) {
              sum += (float)0.058839425;
            } else {
              sum += (float)0.038299561;
            }
          } else {
            if ( (data[7].fvalue < 0.21216437)) {
              sum += (float)0.039743885;
            } else {
              sum += (float)0.027577685;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 1.3025689)) {
        if ( (data[5].fvalue < 5.2075043)) {
          if ( (data[7].fvalue < 0.62881482)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.078990228;
            } else {
              sum += (float)0.03768567;
            }
          } else {
            if ( (data[7].fvalue < 0.7844547)) {
              sum += (float)0.051713713;
            } else {
              sum += (float)0.038174015;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.33101913)) {
            if ( (data[5].fvalue < 15.221074)) {
              sum += (float)0.052370925;
            } else {
              sum += (float)0.032716826;
            }
          } else {
            if ( (data[7].fvalue < 0.67368394)) {
              sum += (float)0.024391379;
            } else {
              sum += (float)0.0069720768;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 8.0347595)) {
          if ( (data[6].fvalue < 1.864112)) {
            if ( (data[7].fvalue < 0.71719229)) {
              sum += (float)0.099868529;
            } else {
              sum += (float)0.065926373;
            }
          } else {
            if ( (data[6].fvalue < 2.3831277)) {
              sum += (float)0.10524471;
            } else {
              sum += (float)0.14602572;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.19577211)) {
            if ( (data[5].fvalue < 27.003368)) {
              sum += (float)0.090074539;
            } else {
              sum += (float)0.059266116;
            }
          } else {
            if ( (data[6].fvalue < 2.5780344)) {
              sum += (float)0.042150814;
            } else {
              sum += (float)0.077881292;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.48415193)) {
    if ( (data[6].fvalue < 0.26535207)) {
      if ( (data[6].fvalue < 0.00042990112)) {
        if ( (data[5].fvalue < 18.974613)) {
          if ( (data[5].fvalue < 0.55927032)) {
            if ( (data[7].fvalue < 0.12752475)) {
              sum += (float)0.019244134;
            } else {
              sum += (float)0.02609982;
            }
          } else {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.01618492;
            } else {
              sum += (float)0.01701349;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.3444733)) {
            if ( (data[7].fvalue < 0.2380977)) {
              sum += (float)0.014006754;
            } else {
              sum += (float)0.0067613083;
            }
          } else {
            if ( (data[5].fvalue < 28.415482)) {
              sum += (float)0.014930737;
            } else {
              sum += (float)0.025672501;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.16370432)) {
          if ( (data[5].fvalue < 0.99100518)) {
            if ( (data[5].fvalue < 0.50458491)) {
              sum += (float)0.014495418;
            } else {
              sum += (float)0.0055475929;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.01112707;
            } else {
              sum += (float)0.0074190409;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.1077203)) {
            if ( (data[5].fvalue < 0.86370504)) {
              sum += (float)0.0047348877;
            } else {
              sum += (float)0.0091537787;
            }
          } else {
            if ( (data[5].fvalue < 5.9067483)) {
              sum += (float)0.014899496;
            } else {
              sum += (float)0.0081657358;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.290088)) {
        if ( (data[6].fvalue < 0.40835789)) {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[5].fvalue < 4.803977)) {
              sum += (float)0.021448581;
            } else {
              sum += (float)0.015992735;
            }
          } else {
            if ( (data[5].fvalue < 2.5894365)) {
              sum += (float)0.014040002;
            } else {
              sum += (float)0.017486883;
            }
          }
        } else {
          if ( (data[5].fvalue < 7.8852339)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.027781969;
            } else {
              sum += (float)0.02023601;
            }
          } else {
            if ( (data[6].fvalue < 0.45892197)) {
              sum += (float)0.014046222;
            } else {
              sum += (float)0.021487597;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 7.5561905)) {
          if ( (data[6].fvalue < 0.33101392)) {
            if ( (data[7].fvalue < 0.6980648)) {
              sum += (float)0.013469464;
            } else {
              sum += (float)0.0075533646;
            }
          } else {
            if ( (data[7].fvalue < 0.65402406)) {
              sum += (float)0.01835002;
            } else {
              sum += (float)0.013298928;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.46204495)) {
            if ( (data[5].fvalue < 13.419659)) {
              sum += (float)0.0026305073;
            } else {
              sum += (float)-0.0020622371;
            }
          } else {
            if ( (data[7].fvalue < 0.49577892)) {
              sum += (float)0.015296875;
            } else {
              sum += (float)-0.00023745027;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.9555915)) {
      if ( (data[6].fvalue < 0.64123654)) {
        if ( (data[7].fvalue < 0.32403296)) {
          if ( (data[5].fvalue < 5.1891088)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.034607753;
            } else {
              sum += (float)0.024645945;
            }
          } else {
            if ( (data[5].fvalue < 11.372278)) {
              sum += (float)0.022689013;
            } else {
              sum += (float)0.016390458;
            }
          }
        } else {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[7].fvalue < 0.63609898)) {
              sum += (float)0.024243519;
            } else {
              sum += (float)0.017421192;
            }
          } else {
            if ( (data[5].fvalue < 1.9142352)) {
              sum += (float)0.011790815;
            } else {
              sum += (float)0.036087472;
            }
          }
        }
      } else {
        if ( (data[2].fvalue < 0.5)) {
          if ( (data[4].fvalue < 0.5)) {
            if ( (data[5].fvalue < 2.599411)) {
              sum += (float)0.019302964;
            } else {
              sum += (float)0.029024752;
            }
          } else {
            if ( (data[5].fvalue < 2.7832725)) {
              sum += (float)0.030020429;
            } else {
              sum += (float)0.048249315;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.33874992)) {
            if ( (data[5].fvalue < 4.772419)) {
              sum += (float)0.059986662;
            } else {
              sum += (float)0.034034323;
            }
          } else {
            if ( (data[5].fvalue < 1.6253477)) {
              sum += (float)0.042583071;
            } else {
              sum += (float)0.030946827;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 5.4721956)) {
        if ( (data[5].fvalue < 3.0349112)) {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[7].fvalue < 0.68766642)) {
              sum += (float)0.056314159;
            } else {
              sum += (float)0.039242677;
            }
          } else {
            if ( (data[7].fvalue < 0.53353441)) {
              sum += (float)-0.00031698949;
            } else {
              sum += (float)0.027962819;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.5544612)) {
            if ( (data[7].fvalue < 0.80698395)) {
              sum += (float)0.064935654;
            } else {
              sum += (float)0.030668048;
            }
          } else {
            if ( (data[7].fvalue < 0.85203642)) {
              sum += (float)0.099646948;
            } else {
              sum += (float)0.054616299;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.12770897)) {
          if ( (data[6].fvalue < 1.3382159)) {
            if ( (data[7].fvalue < 0.057912752)) {
              sum += (float)0.069837414;
            } else {
              sum += (float)0.045738094;
            }
          } else {
            if ( (data[5].fvalue < 28.645782)) {
              sum += (float)0.084912896;
            } else {
              sum += (float)0.051603787;
            }
          }
        } else {
          if ( (data[5].fvalue < 14.25621)) {
            if ( (data[7].fvalue < 0.37808913)) {
              sum += (float)0.047956001;
            } else {
              sum += (float)0.027699728;
            }
          } else {
            if ( (data[6].fvalue < 2.4758358)) {
              sum += (float)0.0089270426;
            } else {
              sum += (float)0.051720243;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.56272304)) {
    if ( (data[6].fvalue < 0.29958612)) {
      if ( (data[5].fvalue < 1.5906732)) {
        if ( (data[6].fvalue < 3.6621093e-06)) {
          if ( (data[7].fvalue < 0.51330507)) {
            if ( (data[5].fvalue < 0.61683285)) {
              sum += (float)0.015397426;
            } else {
              sum += (float)0.0097053479;
            }
          } else {
            if ( (data[7].fvalue < 0.86897016)) {
              sum += (float)0.014152757;
            } else {
              sum += (float)0.034981038;
            }
          }
        } else {
          if ( (data[5].fvalue < 0.84080762)) {
            if ( (data[5].fvalue < 0.49929523)) {
              sum += (float)0.010576564;
            } else {
              sum += (float)0.0026868463;
            }
          } else {
            if ( (data[7].fvalue < 0.42927074)) {
              sum += (float)0.0071235821;
            } else {
              sum += (float)0.0041571725;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 7.6724863)) {
          if ( (data[6].fvalue < 0.18216775)) {
            if ( (data[6].fvalue < 0.00070211792)) {
              sum += (float)0.011592418;
            } else {
              sum += (float)0.008214063;
            }
          } else {
            if ( (data[7].fvalue < 0.63154805)) {
              sum += (float)0.011954474;
            } else {
              sum += (float)0.0043925797;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.00091601559)) {
            if ( (data[7].fvalue < 0.29643384)) {
              sum += (float)0.011478427;
            } else {
              sum += (float)0.0084991436;
            }
          } else {
            if ( (data[7].fvalue < 0.14412704)) {
              sum += (float)0.0063008848;
            } else {
              sum += (float)-0.0031915209;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 1.4982693)) {
        if ( (data[0].fvalue < 0.5)) {
          if ( (data[6].fvalue < 0.45820534)) {
            if ( (data[7].fvalue < 0.84002686)) {
              sum += (float)0.0099979313;
            } else {
              sum += (float)0.037775908;
            }
          } else {
            if ( (data[6].fvalue < 0.55431426)) {
              sum += (float)0.013662211;
            } else {
              sum += (float)0.022600444;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.56117529)) {
            if ( (data[6].fvalue < 0.53732544)) {
              sum += (float)0.0057242913;
            } else {
              sum += (float)-0.0044523971;
            }
          } else {
            if ( (data[5].fvalue < 0.92033839)) {
              sum += (float)0.0073977625;
            } else {
              sum += (float)0.017418213;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.60451639)) {
          if ( (data[5].fvalue < 4.7160416)) {
            if ( (data[6].fvalue < 0.44652498)) {
              sum += (float)0.014994414;
            } else {
              sum += (float)0.019662568;
            }
          } else {
            if ( (data[7].fvalue < 0.2166885)) {
              sum += (float)0.012981806;
            } else {
              sum += (float)0.0053487951;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.79588401)) {
            if ( (data[5].fvalue < 2.5793121)) {
              sum += (float)0.0088960873;
            } else {
              sum += (float)0.012240146;
            }
          } else {
            if ( (data[5].fvalue < 2.6462998)) {
              sum += (float)0.0075565581;
            } else {
              sum += (float)0.0032485221;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 1.2245687)) {
      if ( (data[5].fvalue < 4.9349823)) {
        if ( (data[5].fvalue < 2.7742581)) {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[7].fvalue < 0.64632356)) {
              sum += (float)0.024074355;
            } else {
              sum += (float)0.016325762;
            }
          } else {
            if ( (data[5].fvalue < 1.6543268)) {
              sum += (float)0.0074804723;
            } else {
              sum += (float)0.016080026;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.77647018)) {
            if ( (data[7].fvalue < 0.75463068)) {
              sum += (float)0.028147887;
            } else {
              sum += (float)0.015336562;
            }
          } else {
            if ( (data[7].fvalue < 0.34596279)) {
              sum += (float)0.049307577;
            } else {
              sum += (float)0.031596251;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.25429362)) {
          if ( (data[5].fvalue < 26.31662)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.022805549;
            } else {
              sum += (float)0.011889938;
            }
          } else {
            if ( (data[7].fvalue < 0.068245143)) {
              sum += (float)0.020885982;
            } else {
              sum += (float)-0.012030791;
            }
          }
        } else {
          if ( (data[5].fvalue < 11.90086)) {
            if ( (data[7].fvalue < 0.83755857)) {
              sum += (float)0.010923479;
            } else {
              sum += (float)-0.0031822871;
            }
          } else {
            if ( (data[7].fvalue < 0.60362732)) {
              sum += (float)0.0028628875;
            } else {
              sum += (float)-0.0085004084;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 9.8350496)) {
        if ( (data[7].fvalue < 0.8189553)) {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[6].fvalue < 1.5265223)) {
              sum += (float)0.045391873;
            } else {
              sum += (float)0.061613545;
            }
          } else {
            if ( (data[6].fvalue < 2.1289043)) {
              sum += (float)0.019162018;
            } else {
              sum += (float)0.080364324;
            }
          }
        } else {
          if ( (data[6].fvalue < 2.0524304)) {
            if ( (data[5].fvalue < 6.0554104)) {
              sum += (float)0.021720972;
            } else {
              sum += (float)-0.021823067;
            }
          } else {
            if ( (data[6].fvalue < 2.4941802)) {
              sum += (float)0.048949417;
            } else {
              sum += (float)0.09084712;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.19079208)) {
          if ( (data[6].fvalue < 1.5348523)) {
            if ( (data[7].fvalue < 0.081720605)) {
              sum += (float)0.068231903;
            } else {
              sum += (float)0.025220435;
            }
          } else {
            if ( (data[5].fvalue < 18.999464)) {
              sum += (float)0.067728207;
            } else {
              sum += (float)0.042738106;
            }
          }
        } else {
          if ( (data[5].fvalue < 19.358204)) {
            if ( (data[6].fvalue < 2.2511959)) {
              sum += (float)0.020276587;
            } else {
              sum += (float)0.044134401;
            }
          } else {
            if ( (data[6].fvalue < 2.1021934)) {
              sum += (float)-0.011591622;
            } else {
              sum += (float)0.018542847;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.60035896)) {
    if ( (data[6].fvalue < 0.3413291)) {
      if ( (data[5].fvalue < 1.8218665)) {
        if ( (data[6].fvalue < 0.0003387146)) {
          if ( (data[7].fvalue < 0.60680079)) {
            if ( (data[5].fvalue < 0.48938203)) {
              sum += (float)0.014848778;
            } else {
              sum += (float)0.0072136042;
            }
          } else {
            if ( (data[7].fvalue < 0.87049353)) {
              sum += (float)0.010024878;
            } else {
              sum += (float)0.022869326;
            }
          }
        } else {
          if ( (data[5].fvalue < 0.90844572)) {
            if ( (data[7].fvalue < 0.7756089)) {
              sum += (float)0.0022773393;
            } else {
              sum += (float)0.02888553;
            }
          } else {
            if ( (data[7].fvalue < 0.51502466)) {
              sum += (float)0.0053203199;
            } else {
              sum += (float)0.0021943739;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.1378096)) {
          if ( (data[6].fvalue < 0.00092095952)) {
            if ( (data[7].fvalue < 0.31357282)) {
              sum += (float)0.0085084019;
            } else {
              sum += (float)0.0073921219;
            }
          } else {
            if ( (data[6].fvalue < 0.0018201598)) {
              sum += (float)-0.011171773;
            } else {
              sum += (float)0.0052600801;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.73783219)) {
            if ( (data[5].fvalue < 5.31989)) {
              sum += (float)0.0084373383;
            } else {
              sum += (float)0.0048881229;
            }
          } else {
            if ( (data[6].fvalue < 0.18327121)) {
              sum += (float)-0.0028691338;
            } else {
              sum += (float)0.0012886593;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.29598671)) {
        if ( (data[0].fvalue < 0.5)) {
          if ( (data[5].fvalue < 8.1073017)) {
            if ( (data[6].fvalue < 0.44601804)) {
              sum += (float)0.012281638;
            } else {
              sum += (float)0.017069232;
            }
          } else {
            if ( (data[7].fvalue < 0.10367469)) {
              sum += (float)0.010296215;
            } else {
              sum += (float)0.0037155026;
            }
          }
        } else {
          if ( (data[5].fvalue < 2.6394663)) {
            if ( (data[7].fvalue < 0.1893696)) {
              sum += (float)0.002777064;
            } else {
              sum += (float)0.0067129312;
            }
          } else {
            if ( (data[7].fvalue < 0.17942795)) {
              sum += (float)0.0084359013;
            } else {
              sum += (float)0.016302299;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 5.2843838)) {
          if ( (data[5].fvalue < 1.4284693)) {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.0052283164;
            } else {
              sum += (float)0.0097480686;
            }
          } else {
            if ( (data[7].fvalue < 0.54952168)) {
              sum += (float)0.011636007;
            } else {
              sum += (float)0.0074685835;
            }
          }
        } else {
          if ( (data[5].fvalue < 13.412777)) {
            if ( (data[6].fvalue < 0.41784269)) {
              sum += (float)-0.00094094669;
            } else {
              sum += (float)0.0039627589;
            }
          } else {
            if ( (data[5].fvalue < 17.797653)) {
              sum += (float)-0.003336828;
            } else {
              sum += (float)-0.011243839;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 1.1081837)) {
      if ( (data[2].fvalue < 0.5)) {
        if ( (data[5].fvalue < 9.1143103)) {
          if ( (data[5].fvalue < 2.8940439)) {
            if ( (data[7].fvalue < 0.77149439)) {
              sum += (float)0.012011294;
            } else {
              sum += (float)0.0045795268;
            }
          } else {
            if ( (data[5].fvalue < 4.7456174)) {
              sum += (float)0.020780332;
            } else {
              sum += (float)0.011497638;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.12768891)) {
            if ( (data[6].fvalue < 0.79650635)) {
              sum += (float)0.010204312;
            } else {
              sum += (float)0.020277884;
            }
          } else {
            if ( (data[5].fvalue < 15.070162)) {
              sum += (float)0.0045194929;
            } else {
              sum += (float)-0.0069018356;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.31542432)) {
          if ( (data[5].fvalue < 4.1969156)) {
            if ( (data[6].fvalue < 0.8468864)) {
              sum += (float)0.032643478;
            } else {
              sum += (float)0.068555802;
            }
          } else {
            if ( (data[6].fvalue < 0.89437723)) {
              sum += (float)0.016404225;
            } else {
              sum += (float)0.03127123;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.78810298)) {
            if ( (data[5].fvalue < 1.5196786)) {
              sum += (float)0.021602422;
            } else {
              sum += (float)0.011767237;
            }
          } else {
            if ( (data[7].fvalue < 0.43339539)) {
              sum += (float)0.030709764;
            } else {
              sum += (float)0.017980861;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 4.9391398)) {
        if ( (data[5].fvalue < 3.1949649)) {
          if ( (data[7].fvalue < 0.7512337)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.03651832;
            } else {
              sum += (float)0.010380998;
            }
          } else {
            if ( (data[6].fvalue < 1.6991616)) {
              sum += (float)0.013512007;
            } else {
              sum += (float)0.032493383;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.85505462)) {
            if ( (data[6].fvalue < 1.4706426)) {
              sum += (float)0.038104713;
            } else {
              sum += (float)0.061949912;
            }
          } else {
            if ( (data[6].fvalue < 1.9529026)) {
              sum += (float)0.011276367;
            } else {
              sum += (float)0.045317158;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.49421164)) {
          if ( (data[5].fvalue < 17.441868)) {
            if ( (data[6].fvalue < 1.7689381)) {
              sum += (float)0.022841977;
            } else {
              sum += (float)0.041046835;
            }
          } else {
            if ( (data[7].fvalue < 0.09727443)) {
              sum += (float)0.039974362;
            } else {
              sum += (float)0.0059605213;
            }
          }
        } else {
          if ( (data[6].fvalue < 2.2965868)) {
            if ( (data[7].fvalue < 0.63505459)) {
              sum += (float)0.0092464071;
            } else {
              sum += (float)-0.0078072026;
            }
          } else {
            if ( (data[7].fvalue < 0.91718483)) {
              sum += (float)0.021690316;
            } else {
              sum += (float)0.084009826;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.68197399)) {
    if ( (data[6].fvalue < 0.24040446)) {
      if ( (data[6].fvalue < 0.0012577209)) {
        if ( (data[7].fvalue < 0.92843342)) {
          if ( (data[3].fvalue < 0.5)) {
            if ( (data[5].fvalue < 16.612387)) {
              sum += (float)0.0057564666;
            } else {
              sum += (float)0.0042474847;
            }
          } else {
            if ( (data[7].fvalue < 0.25870177)) {
              sum += (float)0.006096248;
            } else {
              sum += (float)0.0024239637;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.0769868)) {
            if ( (data[7].fvalue < 0.92905712)) {
              sum += (float)0.005197987;
            } else {
              sum += (float)0.025002979;
            }
          } else {
            if ( (data[5].fvalue < 11.315746)) {
              sum += (float)0.012137054;
            } else {
              sum += (float)0.0028217237;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.0018201598)) {
          if ( (data[5].fvalue < 1.8230263)) {
            if ( (data[5].fvalue < 0.48080406)) {
              sum += (float)-0.011359502;
            } else {
              sum += (float)-0.021259036;
            }
          } else {
            if ( (data[7].fvalue < 0.044117205)) {
              sum += (float)-0.01394692;
            } else {
              sum += (float)-0.015424357;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.63627672)) {
            if ( (data[6].fvalue < 0.055257447)) {
              sum += (float)0.0025417404;
            } else {
              sum += (float)0.0044806162;
            }
          } else {
            if ( (data[7].fvalue < 0.76751655)) {
              sum += (float)0.00086863642;
            } else {
              sum += (float)-0.0019303983;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 2.2555799)) {
        if ( (data[0].fvalue < 0.5)) {
          if ( (data[7].fvalue < 0.50244325)) {
            if ( (data[5].fvalue < 1.0526128)) {
              sum += (float)0.0018897662;
            } else {
              sum += (float)0.007430695;
            }
          } else {
            if ( (data[7].fvalue < 0.87272525)) {
              sum += (float)0.0043656598;
            } else {
              sum += (float)0.02228923;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.6314522)) {
            if ( (data[5].fvalue < 1.292094)) {
              sum += (float)0.0021540946;
            } else {
              sum += (float)0.0047787335;
            }
          } else {
            if ( (data[6].fvalue < 0.469877)) {
              sum += (float)0.0057934984;
            } else {
              sum += (float)0.014888289;
            }
          }
        }
      } else {
        if ( (data[1].fvalue < 0.5)) {
          if ( (data[6].fvalue < 0.44827762)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.0079568699;
            } else {
              sum += (float)0.0056778295;
            }
          } else {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.01151678;
            } else {
              sum += (float)0.0066978917;
            }
          }
        } else {
          if ( (data[5].fvalue < 12.835629)) {
            if ( (data[7].fvalue < 0.75539106)) {
              sum += (float)0.0070475088;
            } else {
              sum += (float)0.0012566086;
            }
          } else {
            if ( (data[7].fvalue < 0.07080622)) {
              sum += (float)0.0092548532;
            } else {
              sum += (float)-0.0023344341;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 1.5039506)) {
      if ( (data[7].fvalue < 0.76931572)) {
        if ( (data[5].fvalue < 4.7594509)) {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[7].fvalue < 0.30601403)) {
              sum += (float)0.03086439;
            } else {
              sum += (float)0.016686182;
            }
          } else {
            if ( (data[5].fvalue < 1.5899467)) {
              sum += (float)0.00059178262;
            } else {
              sum += (float)0.0082186628;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.19421895)) {
            if ( (data[5].fvalue < 23.800579)) {
              sum += (float)0.014985238;
            } else {
              sum += (float)0.0014005034;
            }
          } else {
            if ( (data[5].fvalue < 11.555084)) {
              sum += (float)0.0080695543;
            } else {
              sum += (float)-0.00097975007;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.91978717)) {
          if ( (data[5].fvalue < 2.064106)) {
            if ( (data[6].fvalue < 1.0333143)) {
              sum += (float)0.008534912;
            } else {
              sum += (float)0.020896515;
            }
          } else {
            if ( (data[7].fvalue < 0.8677392)) {
              sum += (float)0.0041210535;
            } else {
              sum += (float)-0.0057376763;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.9409032)) {
            if ( (data[7].fvalue < 0.94315839)) {
              sum += (float)0.042650383;
            } else {
              sum += (float)0.10813627;
            }
          } else {
            if ( (data[5].fvalue < 4.0038958)) {
              sum += (float)-0.071238689;
            } else {
              sum += (float)0.014525997;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 6.1922827)) {
        if ( (data[0].fvalue < 0.5)) {
          if ( (data[7].fvalue < 0.85098588)) {
            if ( (data[6].fvalue < 1.7832301)) {
              sum += (float)0.030853098;
            } else {
              sum += (float)0.045497857;
            }
          } else {
            if ( (data[7].fvalue < 0.93300855)) {
              sum += (float)0.010208609;
            } else {
              sum += (float)0.099856392;
            }
          }
        } else {
          if ( (data[5].fvalue < 5.7509909)) {
            if ( (data[5].fvalue < 2.0937796)) {
              sum += (float)0.049364764;
            } else {
              sum += (float)0.0021274458;
            }
          } else {
            sum += (float)0.14719036;
          }
        }
      } else {
        if ( (data[7].fvalue < 0.34329584)) {
          if ( (data[5].fvalue < 12.679163)) {
            if ( (data[5].fvalue < 6.8969574)) {
              sum += (float)-0.014685162;
            } else {
              sum += (float)0.04338599;
            }
          } else {
            if ( (data[7].fvalue < 0.15229934)) {
              sum += (float)0.035448369;
            } else {
              sum += (float)0.012106886;
            }
          }
        } else {
          if ( (data[6].fvalue < 3.0031009)) {
            if ( (data[7].fvalue < 0.7022208)) {
              sum += (float)0.0065760072;
            } else {
              sum += (float)-0.017584013;
            }
          } else {
            if ( (data[5].fvalue < 7.4672337)) {
              sum += (float)0.10075854;
            } else {
              sum += (float)0.025925767;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.44921684)) {
    if ( (data[6].fvalue < 0.23204929)) {
      if ( (data[5].fvalue < 8.0997686)) {
        if ( (data[5].fvalue < 1.7017857)) {
          if ( (data[6].fvalue < 0.0005204163)) {
            if ( (data[7].fvalue < 0.27702773)) {
              sum += (float)0.0026515997;
            } else {
              sum += (float)0.0047668424;
            }
          } else {
            if ( (data[5].fvalue < 0.77518517)) {
              sum += (float)-0.00020477078;
            } else {
              sum += (float)0.0016467636;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.55988503)) {
            if ( (data[6].fvalue < 0.055659913)) {
              sum += (float)0.0028610127;
            } else {
              sum += (float)0.0038516209;
            }
          } else {
            if ( (data[6].fvalue < 0.00090850831)) {
              sum += (float)0.0031790358;
            } else {
              sum += (float)0.00054042879;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.056058619)) {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[6].fvalue < 0.055292569)) {
              sum += (float)0.0052690534;
            } else {
              sum += (float)0.0023968203;
            }
          } else {
            if ( (data[6].fvalue < 0.00038146973)) {
              sum += (float)0.0037308799;
            } else {
              sum += (float)-7.6244978e-05;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.0012901307)) {
            if ( (data[3].fvalue < 0.5)) {
              sum += (float)0.003292175;
            } else {
              sum += (float)-0.0039976677;
            }
          } else {
            if ( (data[7].fvalue < 0.20137244)) {
              sum += (float)-0.0020892348;
            } else {
              sum += (float)-0.0074029956;
            }
          }
        }
      }
    } else {
      if ( (data[4].fvalue < 0.5)) {
        if ( (data[1].fvalue < 0.5)) {
          if ( (data[5].fvalue < 2.6197107)) {
            if ( (data[6].fvalue < 0.34675115)) {
              sum += (float)0.0028938365;
            } else {
              sum += (float)0.0043037771;
            }
          } else {
            if ( (data[7].fvalue < 0.11258739)) {
              sum += (float)0.0032340894;
            } else {
              sum += (float)0.0055478965;
            }
          }
        } else {
          if ( (data[5].fvalue < 17.941191)) {
            if ( (data[7].fvalue < 0.69803596)) {
              sum += (float)0.0030962739;
            } else {
              sum += (float)0.00061245169;
            }
          } else {
            if ( (data[7].fvalue < 0.067748152)) {
              sum += (float)0.0024513416;
            } else {
              sum += (float)-0.0050053499;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 1.2509031)) {
          if ( (data[7].fvalue < 0.32975721)) {
            if ( (data[6].fvalue < 0.27274877)) {
              sum += (float)0.0020317875;
            } else {
              sum += (float)-0.0030128672;
            }
          } else {
            if ( (data[5].fvalue < 1.0334315)) {
              sum += (float)0.0013052879;
            } else {
              sum += (float)0.0056634918;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.11680578)) {
            if ( (data[5].fvalue < 3.3443685)) {
              sum += (float)0.0031266457;
            } else {
              sum += (float)0.0063146427;
            }
          } else {
            if ( (data[5].fvalue < 2.5932896)) {
              sum += (float)0.0061461017;
            } else {
              sum += (float)0.0086679822;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.89366621)) {
      if ( (data[0].fvalue < 0.5)) {
        if ( (data[7].fvalue < 0.28084993)) {
          if ( (data[5].fvalue < 8.8128271)) {
            if ( (data[6].fvalue < 0.74413633)) {
              sum += (float)0.0099478643;
            } else {
              sum += (float)0.021015048;
            }
          } else {
            if ( (data[7].fvalue < 0.09649542)) {
              sum += (float)0.0092526507;
            } else {
              sum += (float)9.4689953e-05;
            }
          }
        } else {
          if ( (data[5].fvalue < 4.7522931)) {
            if ( (data[7].fvalue < 0.9179281)) {
              sum += (float)0.0061678551;
            } else {
              sum += (float)0.035921901;
            }
          } else {
            if ( (data[6].fvalue < 0.79463476)) {
              sum += (float)0.0015822001;
            } else {
              sum += (float)-0.0054136822;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.89074564)) {
          if ( (data[5].fvalue < 2.0043416)) {
            if ( (data[7].fvalue < 0.63142836)) {
              sum += (float)-0.0002520566;
            } else {
              sum += (float)0.0097681545;
            }
          } else {
            if ( (data[7].fvalue < 0.27272278)) {
              sum += (float)0.0032991273;
            } else {
              sum += (float)0.013323057;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.89262915)) {
            if ( (data[7].fvalue < 0.19291776)) {
              sum += (float)0.0083404751;
            } else {
              sum += (float)-0.082664855;
            }
          } else {
            if ( (data[6].fvalue < 0.89335006)) {
              sum += (float)0.084930718;
            } else {
              sum += (float)-0.03564107;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 4.8205881)) {
        if ( (data[7].fvalue < 0.42785394)) {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[7].fvalue < 0.3154251)) {
              sum += (float)0.048422102;
            } else {
              sum += (float)0.026340581;
            }
          } else {
            if ( (data[5].fvalue < 3.0008411)) {
              sum += (float)-0.027094161;
            } else {
              sum += (float)0.0099498881;
            }
          }
        } else {
          if ( (data[6].fvalue < 2.0896511)) {
            if ( (data[7].fvalue < 0.75287127)) {
              sum += (float)0.014413838;
            } else {
              sum += (float)0.0065461393;
            }
          } else {
            if ( (data[5].fvalue < 3.5263991)) {
              sum += (float)0.020760097;
            } else {
              sum += (float)0.051077891;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.11402094)) {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[5].fvalue < 17.790649)) {
              sum += (float)0.035458624;
            } else {
              sum += (float)0.01616879;
            }
          } else {
            if ( (data[5].fvalue < 8.4932423)) {
              sum += (float)-0.067831516;
            } else {
              sum += (float)0.0091162743;
            }
          }
        } else {
          if ( (data[5].fvalue < 23.7019)) {
            if ( (data[6].fvalue < 1.1650474)) {
              sum += (float)0.0018300739;
            } else {
              sum += (float)0.011101373;
            }
          } else {
            if ( (data[6].fvalue < 2.0658145)) {
              sum += (float)-0.016935438;
            } else {
              sum += (float)0.0054637073;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.68284088)) {
    if ( (data[6].fvalue < 0.35407943)) {
      if ( (data[5].fvalue < 2.5942261)) {
        if ( (data[7].fvalue < 0.52061403)) {
          if ( (data[5].fvalue < 1.0772431)) {
            if ( (data[5].fvalue < 0.52763212)) {
              sum += (float)0.0050608213;
            } else {
              sum += (float)0.00037826312;
            }
          } else {
            if ( (data[6].fvalue < 0.055965912)) {
              sum += (float)0.0013492766;
            } else {
              sum += (float)0.0024924085;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.0013290711)) {
            if ( (data[7].fvalue < 0.71017843)) {
              sum += (float)0.0017108055;
            } else {
              sum += (float)0.0043084603;
            }
          } else {
            if ( (data[7].fvalue < 0.9138009)) {
              sum += (float)4.8494735e-06;
            } else {
              sum += (float)0.015637726;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 4.7196946)) {
          if ( (data[7].fvalue < 0.10642248)) {
            if ( (data[5].fvalue < 3.0323706)) {
              sum += (float)0.0015486547;
            } else {
              sum += (float)0.0026587422;
            }
          } else {
            if ( (data[7].fvalue < 0.69539809)) {
              sum += (float)0.0037183957;
            } else {
              sum += (float)0.0010936145;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.10176106)) {
            if ( (data[6].fvalue < 0.25718933)) {
              sum += (float)0.0014483348;
            } else {
              sum += (float)0.0037865867;
            }
          } else {
            if ( (data[6].fvalue < 0.00074407959)) {
              sum += (float)0.0021627785;
            } else {
              sum += (float)-0.0011110685;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.23672336)) {
        if ( (data[5].fvalue < 5.4040356)) {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[5].fvalue < 3.3829229)) {
              sum += (float)0.0032152378;
            } else {
              sum += (float)0.0059515503;
            }
          } else {
            if ( (data[6].fvalue < 0.50852942)) {
              sum += (float)0.0071505518;
            } else {
              sum += (float)0.013792872;
            }
          }
        } else {
          if ( (data[5].fvalue < 22.592337)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.0020887984;
            } else {
              sum += (float)0.0052919751;
            }
          } else {
            if ( (data[7].fvalue < 0.058943473)) {
              sum += (float)0.0025117155;
            } else {
              sum += (float)-0.0065099653;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 4.6616535)) {
          if ( (data[5].fvalue < 2.4141979)) {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.0019201784;
            } else {
              sum += (float)0.0036707851;
            }
          } else {
            if ( (data[6].fvalue < 0.50999117)) {
              sum += (float)0.0028109676;
            } else {
              sum += (float)0.0059939921;
            }
          }
        } else {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[5].fvalue < 9.8442459)) {
              sum += (float)0.00040606194;
            } else {
              sum += (float)-0.0027069659;
            }
          } else {
            if ( (data[7].fvalue < 0.38910025)) {
              sum += (float)0.00083984731;
            } else {
              sum += (float)0.021005806;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 1.1516504)) {
      if ( (data[7].fvalue < 0.7042098)) {
        if ( (data[0].fvalue < 0.5)) {
          if ( (data[5].fvalue < 4.0675592)) {
            if ( (data[5].fvalue < 2.4918346)) {
              sum += (float)0.0060357149;
            } else {
              sum += (float)0.012656949;
            }
          } else {
            if ( (data[7].fvalue < 0.27334782)) {
              sum += (float)0.0068997503;
            } else {
              sum += (float)0.00038616257;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.746714)) {
            if ( (data[5].fvalue < 1.5290554)) {
              sum += (float)-0.0024079951;
            } else {
              sum += (float)0.012205418;
            }
          } else {
            if ( (data[6].fvalue < 0.77103448)) {
              sum += (float)-0.0095056137;
            } else {
              sum += (float)0.00026709674;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 1.6709452)) {
          if ( (data[6].fvalue < 0.70516658)) {
            if ( (data[6].fvalue < 0.68529391)) {
              sum += (float)-0.038746353;
            } else {
              sum += (float)-0.0057613282;
            }
          } else {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.020239679;
            } else {
              sum += (float)0.0042253202;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.91927803)) {
            if ( (data[6].fvalue < 1.0816009)) {
              sum += (float)-0.00045986802;
            } else {
              sum += (float)0.0067880973;
            }
          } else {
            if ( (data[5].fvalue < 3.6572249)) {
              sum += (float)0.044549849;
            } else {
              sum += (float)0.010431519;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 13.798828)) {
        if ( (data[7].fvalue < 0.40487808)) {
          if ( (data[5].fvalue < 4.920805)) {
            if ( (data[6].fvalue < 1.2198772)) {
              sum += (float)0.014456674;
            } else {
              sum += (float)0.046499398;
            }
          } else {
            if ( (data[6].fvalue < 1.7689381)) {
              sum += (float)0.014157351;
            } else {
              sum += (float)0.025832595;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.9157808)) {
            if ( (data[5].fvalue < 3.2002015)) {
              sum += (float)0.0092117554;
            } else {
              sum += (float)0.025640514;
            }
          } else {
            if ( (data[6].fvalue < 2.2308946)) {
              sum += (float)-0.0018649795;
            } else {
              sum += (float)0.023937074;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.13847929)) {
          if ( (data[5].fvalue < 24.433117)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.012285584;
            } else {
              sum += (float)0.035243969;
            }
          } else {
            if ( (data[7].fvalue < 0.076639891)) {
              sum += (float)0.025985282;
            } else {
              sum += (float)-0.0089196581;
            }
          }
        } else {
          if ( (data[6].fvalue < 2.5770869)) {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)-0.0035841351;
            } else {
              sum += (float)-0.027793853;
            }
          } else {
            if ( (data[7].fvalue < 0.29931805)) {
              sum += (float)0.038829681;
            } else {
              sum += (float)0.0039093662;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.73020637)) {
    if ( (data[6].fvalue < 0.18411621)) {
      if ( (data[6].fvalue < 0.0012577209)) {
        if ( (data[7].fvalue < 0.51194733)) {
          if ( (data[5].fvalue < 12.984156)) {
            if ( (data[5].fvalue < 1.5405543)) {
              sum += (float)0.001713955;
            } else {
              sum += (float)0.002713854;
            }
          } else {
            if ( (data[7].fvalue < 0.12204811)) {
              sum += (float)0.0023550098;
            } else {
              sum += (float)5.8208254e-05;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.3950148)) {
            if ( (data[7].fvalue < 0.8327083)) {
              sum += (float)0.0042266515;
            } else {
              sum += (float)0.0145876;
            }
          } else {
            if ( (data[3].fvalue < 0.5)) {
              sum += (float)0.001697414;
            } else {
              sum += (float)-0.0038395734;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.0018201598)) {
          if ( (data[5].fvalue < 1.8230263)) {
            sum += (float)-0.01558607;
          } else {
            sum += (float)-0.011724568;
          }
        } else {
          if ( (data[7].fvalue < 0.23480485)) {
            if ( (data[6].fvalue < 0.045639556)) {
              sum += (float)0.00052532816;
            } else {
              sum += (float)0.0017126728;
            }
          } else {
            if ( (data[5].fvalue < 8.6311455)) {
              sum += (float)0.00043096801;
            } else {
              sum += (float)-0.006103354;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.78015983)) {
        if ( (data[5].fvalue < 9.8381081)) {
          if ( (data[5].fvalue < 2.599184)) {
            if ( (data[7].fvalue < 0.55018747)) {
              sum += (float)0.0021952691;
            } else {
              sum += (float)0.00095471594;
            }
          } else {
            if ( (data[6].fvalue < 0.51000357)) {
              sum += (float)0.0026435684;
            } else {
              sum += (float)0.0048118043;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.12754458)) {
            if ( (data[6].fvalue < 0.72861165)) {
              sum += (float)0.0018613433;
            } else {
              sum += (float)-0.03970883;
            }
          } else {
            if ( (data[5].fvalue < 17.86035)) {
              sum += (float)-0.0012907798;
            } else {
              sum += (float)-0.0069444329;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 1.5222507)) {
          if ( (data[7].fvalue < 0.87272525)) {
            if ( (data[5].fvalue < 1.1828721)) {
              sum += (float)0.017258141;
            } else {
              sum += (float)0.0058028921;
            }
          } else {
            if ( (data[7].fvalue < 0.89404988)) {
              sum += (float)0.039566413;
            } else {
              sum += (float)0.0087200124;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.92179859)) {
            if ( (data[7].fvalue < 0.86359406)) {
              sum += (float)-0.00058325921;
            } else {
              sum += (float)-0.0054281526;
            }
          } else {
            if ( (data[5].fvalue < 3.3122914)) {
              sum += (float)0.024450853;
            } else {
              sum += (float)0.0023342229;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].fvalue < 0.79450774)) {
      if ( (data[0].fvalue < 0.5)) {
        if ( (data[5].fvalue < 10.515272)) {
          if ( (data[6].fvalue < 1.2919812)) {
            if ( (data[7].fvalue < 0.30824012)) {
              sum += (float)0.012843403;
            } else {
              sum += (float)0.0048125433;
            }
          } else {
            if ( (data[5].fvalue < 4.418911)) {
              sum += (float)0.02041623;
            } else {
              sum += (float)0.0079255886;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.096398674)) {
            if ( (data[5].fvalue < 30.884735)) {
              sum += (float)0.015553084;
            } else {
              sum += (float)0.0040040859;
            }
          } else {
            if ( (data[6].fvalue < 2.0334749)) {
              sum += (float)-0.0016284179;
            } else {
              sum += (float)0.0091246758;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.73105776)) {
          if ( (data[7].fvalue < 0.36062163)) {
            if ( (data[5].fvalue < 4.9145651)) {
              sum += (float)0.11098609;
            } else {
              sum += (float)0.012433417;
            }
          } else {
            if ( (data[5].fvalue < 1.8986912)) {
              sum += (float)0.033330873;
            } else {
              sum += (float)-0.010693632;
            }
          }
        } else {
          if ( (data[6].fvalue < 2.1289043)) {
            if ( (data[6].fvalue < 0.746714)) {
              sum += (float)0.011846465;
            } else {
              sum += (float)-0.00033378878;
            }
          } else {
            if ( (data[7].fvalue < 0.74988675)) {
              sum += (float)0.042255633;
            } else {
              sum += (float)0.014024136;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.92985439)) {
        if ( (data[5].fvalue < 6.0554104)) {
          if ( (data[6].fvalue < 1.6432662)) {
            if ( (data[6].fvalue < 1.6351008)) {
              sum += (float)-0.00037912582;
            } else {
              sum += (float)-0.076068506;
            }
          } else {
            if ( (data[6].fvalue < 1.6444316)) {
              sum += (float)0.15650184;
            } else {
              sum += (float)0.0097200787;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.2921774)) {
            if ( (data[5].fvalue < 6.2288113)) {
              sum += (float)-0.062972717;
            } else {
              sum += (float)-0.0014754229;
            }
          } else {
            if ( (data[6].fvalue < 2.6141315)) {
              sum += (float)-0.035609148;
            } else {
              sum += (float)0.0015492187;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 1.3705882)) {
          if ( (data[5].fvalue < 3.6684198)) {
            if ( (data[7].fvalue < 0.94251931)) {
              sum += (float)0.003689979;
            } else {
              sum += (float)0.070897162;
            }
          } else {
            if ( (data[6].fvalue < 1.2917757)) {
              sum += (float)0.0058901608;
            } else {
              sum += (float)-0.033250265;
            }
          }
        } else {
          if ( (data[5].fvalue < 8.2759113)) {
            if ( (data[5].fvalue < 3.9042869)) {
              sum += (float)0.10064907;
            } else {
              sum += (float)0.059125487;
            }
          } else {
            if ( (data[5].fvalue < 12.335166)) {
              sum += (float)-0.01074674;
            } else {
              sum += (float)0.052677881;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.9056657)) {
    if ( (data[6].fvalue < 0.35668916)) {
      if ( (data[5].fvalue < 5.5248652)) {
        if ( (data[5].fvalue < 2.7843652)) {
          if ( (data[7].fvalue < 0.42164531)) {
            if ( (data[5].fvalue < 0.94541359)) {
              sum += (float)-0.00012820956;
            } else {
              sum += (float)0.0010571766;
            }
          } else {
            if ( (data[7].fvalue < 0.91990399)) {
              sum += (float)0.00022083863;
            } else {
              sum += (float)0.01384189;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.12668429)) {
            if ( (data[5].fvalue < 4.5520687)) {
              sum += (float)0.0012476384;
            } else {
              sum += (float)-0.00013531934;
            }
          } else {
            if ( (data[7].fvalue < 0.74612296)) {
              sum += (float)0.002269472;
            } else {
              sum += (float)0.00023426327;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.079397768)) {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[6].fvalue < 0.055273712)) {
              sum += (float)0.0029823969;
            } else {
              sum += (float)0.00099551654;
            }
          } else {
            if ( (data[6].fvalue < 0.17677838)) {
              sum += (float)-0.00096091797;
            } else {
              sum += (float)0.0013629865;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.0012901307)) {
            if ( (data[3].fvalue < 0.5)) {
              sum += (float)0.0010771992;
            } else {
              sum += (float)-0.0054818727;
            }
          } else {
            if ( (data[5].fvalue < 15.432077)) {
              sum += (float)-0.00092323474;
            } else {
              sum += (float)-0.0058174841;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 4.5399714)) {
        if ( (data[7].fvalue < 0.20697844)) {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[6].fvalue < 0.75175393)) {
              sum += (float)0.0022718157;
            } else {
              sum += (float)-0.01537066;
            }
          } else {
            if ( (data[6].fvalue < 0.5671249)) {
              sum += (float)0.0069913352;
            } else {
              sum += (float)0.019114705;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.94672436)) {
            if ( (data[6].fvalue < 0.90352654)) {
              sum += (float)0.0019293663;
            } else {
              sum += (float)-0.014456282;
            }
          } else {
            if ( (data[6].fvalue < 0.52064276)) {
              sum += (float)0.0051552746;
            } else {
              sum += (float)0.049227461;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.15307266)) {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[5].fvalue < 15.084917)) {
              sum += (float)0.0042144917;
            } else {
              sum += (float)-0.00040303654;
            }
          } else {
            if ( (data[6].fvalue < 0.8806901)) {
              sum += (float)-0.0011333894;
            } else {
              sum += (float)0.028993865;
            }
          }
        } else {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.0074555147;
            } else {
              sum += (float)0.00017646109;
            }
          } else {
            if ( (data[7].fvalue < 0.23174787)) {
              sum += (float)-0.0020442586;
            } else {
              sum += (float)-0.0080252206;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].fvalue < 0.63309306)) {
      if ( (data[5].fvalue < 4.9161963)) {
        if ( (data[6].fvalue < 1.8975668)) {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[7].fvalue < 0.33006084)) {
              sum += (float)0.027033171;
            } else {
              sum += (float)0.0099119972;
            }
          } else {
            if ( (data[6].fvalue < 1.8807704)) {
              sum += (float)0.00064487656;
            } else {
              sum += (float)-0.16929919;
            }
          }
        } else {
          if ( (data[5].fvalue < 4.361074)) {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.10148641;
            } else {
              sum += (float)0.043295201;
            }
          } else {
            if ( (data[5].fvalue < 4.6474457)) {
              sum += (float)-0.036142603;
            } else {
              sum += (float)0.071250059;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 1.0315435)) {
          if ( (data[7].fvalue < 0.11404987)) {
            if ( (data[7].fvalue < 0.11009273)) {
              sum += (float)0.003856085;
            } else {
              sum += (float)0.04486924;
            }
          } else {
            if ( (data[6].fvalue < 0.93815476)) {
              sum += (float)0.0013577607;
            } else {
              sum += (float)-0.0066470192;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.17387058)) {
            if ( (data[5].fvalue < 17.153687)) {
              sum += (float)0.016796032;
            } else {
              sum += (float)0.0043107932;
            }
          } else {
            if ( (data[5].fvalue < 13.674461)) {
              sum += (float)0.0052487799;
            } else {
              sum += (float)-0.0020938725;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 1.8695362)) {
        if ( (data[6].fvalue < 1.1595643)) {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[5].fvalue < 1.5052655)) {
              sum += (float)0.02565839;
            } else {
              sum += (float)0.0097254133;
            }
          } else {
            if ( (data[6].fvalue < 0.95965207)) {
              sum += (float)-0.012715121;
            } else {
              sum += (float)0.0053502149;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.82657516)) {
            if ( (data[7].fvalue < 0.79600167)) {
              sum += (float)0.01865834;
            } else {
              sum += (float)0.061030868;
            }
          } else {
            sum += (float)-0.088537499;
          }
        }
      } else {
        if ( (data[5].fvalue < 7.477571)) {
          if ( (data[6].fvalue < 2.4525771)) {
            if ( (data[6].fvalue < 2.4324424)) {
              sum += (float)0.0013319339;
            } else {
              sum += (float)-0.097491704;
            }
          } else {
            if ( (data[5].fvalue < 3.8481805)) {
              sum += (float)0.0057169683;
            } else {
              sum += (float)0.041196015;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.93394172)) {
            if ( (data[5].fvalue < 11.763978)) {
              sum += (float)-0.01856662;
            } else {
              sum += (float)-0.004019428;
            }
          } else {
            if ( (data[6].fvalue < 2.2136307)) {
              sum += (float)-0.00014205671;
            } else {
              sum += (float)0.048773315;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 1.085613)) {
    if ( (data[6].fvalue < 0.41202903)) {
      if ( (data[4].fvalue < 0.5)) {
        if ( (data[6].fvalue < 3.7841796e-06)) {
          if ( (data[7].fvalue < 0.812289)) {
            if ( (data[7].fvalue < 0.51201129)) {
              sum += (float)0.0013757369;
            } else {
              sum += (float)0.00071173703;
            }
          } else {
            if ( (data[5].fvalue < 4.8384542)) {
              sum += (float)0.003473616;
            } else {
              sum += (float)-0.002119262;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.026525268)) {
            if ( (data[6].fvalue < 0.0018217163)) {
              sum += (float)-0.0032666905;
            } else {
              sum += (float)-0.00037370046;
            }
          } else {
            if ( (data[5].fvalue < 9.9103031)) {
              sum += (float)0.00066005514;
            } else {
              sum += (float)-0.00071353844;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.18226609)) {
          if ( (data[6].fvalue < 0.046051636)) {
            if ( (data[5].fvalue < 1.5420171)) {
              sum += (float)-0.00079180376;
            } else {
              sum += (float)0.00031060411;
            }
          } else {
            if ( (data[5].fvalue < 0.77930617)) {
              sum += (float)-0.0017332596;
            } else {
              sum += (float)0.0012822837;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.0341456)) {
            if ( (data[6].fvalue < 0.39876828)) {
              sum += (float)0.00035367502;
            } else {
              sum += (float)-0.0093221944;
            }
          } else {
            if ( (data[7].fvalue < 0.28950095)) {
              sum += (float)0.0021151025;
            } else {
              sum += (float)0.0037749959;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 1.0854862)) {
        if ( (data[7].fvalue < 0.70423436)) {
          if ( (data[5].fvalue < 4.0549111)) {
            if ( (data[5].fvalue < 2.3476167)) {
              sum += (float)0.0011297286;
            } else {
              sum += (float)0.0031465667;
            }
          } else {
            if ( (data[5].fvalue < 4.0788732)) {
              sum += (float)-0.0092200758;
            } else {
              sum += (float)0.00093755347;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.6408625)) {
            if ( (data[7].fvalue < 0.87282312)) {
              sum += (float)0.00491064;
            } else {
              sum += (float)0.032549027;
            }
          } else {
            if ( (data[7].fvalue < 0.90483695)) {
              sum += (float)-0.0014821751;
            } else {
              sum += (float)0.010199798;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.76615238)) {
          sum += (float)-0.12333483;
        } else {
          sum += (float)-0.0097413901;
        }
      }
    }
  } else {
    if ( (data[7].fvalue < 0.88148189)) {
      if ( (data[5].fvalue < 27.122047)) {
        if ( (data[5].fvalue < 2.8561497)) {
          if ( (data[5].fvalue < 1.9134088)) {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.00508411;
            } else {
              sum += (float)0.017952133;
            }
          } else {
            if ( (data[5].fvalue < 1.9148498)) {
              sum += (float)-0.13329262;
            } else {
              sum += (float)0.00063825469;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.9125776)) {
            if ( (data[7].fvalue < 0.80716324)) {
              sum += (float)0.016051836;
            } else {
              sum += (float)0.0016912051;
            }
          } else {
            if ( (data[7].fvalue < 0.32860586)) {
              sum += (float)0.0080316914;
            } else {
              sum += (float)0.00026953578;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.057873413)) {
          if ( (data[5].fvalue < 53.294701)) {
            if ( (data[7].fvalue < 0.022582322)) {
              sum += (float)0.068193302;
            } else {
              sum += (float)0.024449794;
            }
          } else {
            if ( (data[5].fvalue < 54.357323)) {
              sum += (float)-0.044120122;
            } else {
              sum += (float)0.012538486;
            }
          }
        } else {
          if ( (data[6].fvalue < 2.8958492)) {
            if ( (data[6].fvalue < 1.2101915)) {
              sum += (float)-0.031170707;
            } else {
              sum += (float)-0.011124235;
            }
          } else {
            if ( (data[7].fvalue < 0.26338828)) {
              sum += (float)0.030768329;
            } else {
              sum += (float)-0.001230675;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 3.2593424)) {
        if ( (data[7].fvalue < 0.92982739)) {
          if ( (data[6].fvalue < 2.0207267)) {
            if ( (data[7].fvalue < 0.8825509)) {
              sum += (float)-0.068858221;
            } else {
              sum += (float)-0.0070739947;
            }
          } else {
            if ( (data[6].fvalue < 2.2290001)) {
              sum += (float)-0.092411928;
            } else {
              sum += (float)-0.010872941;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.3705882)) {
            if ( (data[7].fvalue < 0.93529963)) {
              sum += (float)0.029960087;
            } else {
              sum += (float)-0.011367841;
            }
          } else {
            if ( (data[5].fvalue < 8.9614639)) {
              sum += (float)0.047802206;
            } else {
              sum += (float)-0.0038165869;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 7.9147992)) {
          sum += (float)0.078527361;
        } else {
          if ( (data[5].fvalue < 12.220037)) {
            if ( (data[6].fvalue < 3.7399054)) {
              sum += (float)0.014023328;
            } else {
              sum += (float)-0.016136248;
            }
          } else {
            sum += (float)0.083790779;
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 1.3231776)) {
    if ( (data[6].fvalue < 0.57405686)) {
      if ( (data[4].fvalue < 0.5)) {
        if ( (data[5].fvalue < 16.721592)) {
          if ( (data[7].fvalue < 0.22675841)) {
            if ( (data[6].fvalue < 0.43282813)) {
              sum += (float)0.00058373244;
            } else {
              sum += (float)0.001997058;
            }
          } else {
            if ( (data[5].fvalue < 5.6557827)) {
              sum += (float)0.00033309706;
            } else {
              sum += (float)-0.0011434726;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.031434286)) {
            if ( (data[6].fvalue < 0.56549215)) {
              sum += (float)0.0011339455;
            } else {
              sum += (float)-0.030116109;
            }
          } else {
            if ( (data[6].fvalue < 0.53943706)) {
              sum += (float)-0.0020126004;
            } else {
              sum += (float)-0.01036264;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.10916498)) {
          if ( (data[6].fvalue < 0.026214812)) {
            if ( (data[5].fvalue < 5.1834946)) {
              sum += (float)-0.00032956223;
            } else {
              sum += (float)0.0012999127;
            }
          } else {
            if ( (data[5].fvalue < 17.968159)) {
              sum += (float)0.00052929518;
            } else {
              sum += (float)0.0026516668;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.1875808)) {
            if ( (data[7].fvalue < 0.5699386)) {
              sum += (float)-0.00061348738;
            } else {
              sum += (float)0.0030881385;
            }
          } else {
            if ( (data[6].fvalue < 0.54095066)) {
              sum += (float)0.0017239995;
            } else {
              sum += (float)-0.0018469488;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.60293865)) {
        if ( (data[0].fvalue < 0.5)) {
          if ( (data[5].fvalue < 3.4583383)) {
            if ( (data[4].fvalue < 0.5)) {
              sum += (float)0.0058702598;
            } else {
              sum += (float)-0.0015650775;
            }
          } else {
            if ( (data[7].fvalue < 0.55553299)) {
              sum += (float)0.00093226932;
            } else {
              sum += (float)0.0099112745;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.57843089)) {
            if ( (data[7].fvalue < 0.22107482)) {
              sum += (float)0.0015102654;
            } else {
              sum += (float)0.020859571;
            }
          } else {
            if ( (data[7].fvalue < 0.46239901)) {
              sum += (float)-0.0028584893;
            } else {
              sum += (float)0.0020814149;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 1.8333635)) {
          if ( (data[7].fvalue < 0.62468314)) {
            if ( (data[7].fvalue < 0.60296476)) {
              sum += (float)-0.089759387;
            } else {
              sum += (float)-0.0025883908;
            }
          } else {
            if ( (data[5].fvalue < 1.4485636)) {
              sum += (float)0.0073423446;
            } else {
              sum += (float)0.0027444104;
            }
          }
        } else {
          if ( (data[5].fvalue < 2.6325431)) {
            if ( (data[5].fvalue < 2.0128911)) {
              sum += (float)9.1658934e-05;
            } else {
              sum += (float)-0.0054328311;
            }
          } else {
            if ( (data[5].fvalue < 5.9764042)) {
              sum += (float)0.0029646391;
            } else {
              sum += (float)-0.0066751083;
            }
          }
        }
      }
    }
  } else {
    if ( (data[7].fvalue < 0.88086045)) {
      if ( (data[5].fvalue < 4.6110625)) {
        if ( (data[7].fvalue < 0.56340665)) {
          if ( (data[0].fvalue < 0.5)) {
            if ( (data[5].fvalue < 4.2428865)) {
              sum += (float)0.041702867;
            } else {
              sum += (float)0.011177612;
            }
          } else {
            if ( (data[5].fvalue < 4.1703682)) {
              sum += (float)-0.030034468;
            } else {
              sum += (float)0.02294874;
            }
          }
        } else {
          if ( (data[1].fvalue < 0.5)) {
            if ( (data[5].fvalue < 3.3301916)) {
              sum += (float)-0.004639593;
            } else {
              sum += (float)0.015157567;
            }
          } else {
            if ( (data[6].fvalue < 2.0517623)) {
              sum += (float)0.008883439;
            } else {
              sum += (float)0.024729764;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.43297416)) {
          if ( (data[5].fvalue < 4.920805)) {
            if ( (data[6].fvalue < 1.6838264)) {
              sum += (float)0.024129136;
            } else {
              sum += (float)0.094347343;
            }
          } else {
            if ( (data[6].fvalue < 2.9733381)) {
              sum += (float)0.0041103661;
            } else {
              sum += (float)0.020493153;
            }
          }
        } else {
          if ( (data[5].fvalue < 4.6943741)) {
            if ( (data[7].fvalue < 0.45307061)) {
              sum += (float)-0.017955316;
            } else {
              sum += (float)-0.084634848;
            }
          } else {
            if ( (data[7].fvalue < 0.86420476)) {
              sum += (float)-0.0031616618;
            } else {
              sum += (float)0.038708597;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.93304431)) {
        if ( (data[6].fvalue < 3.2593424)) {
          if ( (data[6].fvalue < 2.0207267)) {
            if ( (data[6].fvalue < 1.8966806)) {
              sum += (float)-0.015500593;
            } else {
              sum += (float)0.043430708;
            }
          } else {
            if ( (data[6].fvalue < 2.1536834)) {
              sum += (float)-0.081548311;
            } else {
              sum += (float)-0.013278468;
            }
          }
        } else {
          if ( (data[5].fvalue < 7.938652)) {
            if ( (data[7].fvalue < 0.90285075)) {
              sum += (float)0.073158987;
            } else {
              sum += (float)0.025765661;
            }
          } else {
            if ( (data[6].fvalue < 3.7399054)) {
              sum += (float)0.012099409;
            } else {
              sum += (float)-0.017893916;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 3.0215898)) {
          if ( (data[5].fvalue < 2.8151293)) {
            sum += (float)0.0051655793;
          } else {
            sum += (float)-0.055627238;
          }
        } else {
          if ( (data[5].fvalue < 3.9042869)) {
            if ( (data[6].fvalue < 1.5753186)) {
              sum += (float)0.041084744;
            } else {
              sum += (float)0.12429088;
            }
          } else {
            if ( (data[7].fvalue < 0.96325171)) {
              sum += (float)0.022667799;
            } else {
              sum += (float)-0.020948129;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 1.7828434)) {
    if ( (data[6].fvalue < 1.78055)) {
      if ( (data[7].fvalue < 0.94718707)) {
        if ( (data[7].fvalue < 0.81936687)) {
          if ( (data[6].fvalue < 0.67342442)) {
            if ( (data[5].fvalue < 2.1714237)) {
              sum += (float)0.00012708592;
            } else {
              sum += (float)0.00054711086;
            }
          } else {
            if ( (data[5].fvalue < 17.108992)) {
              sum += (float)0.0016315904;
            } else {
              sum += (float)-0.0034633868;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.6075287)) {
            if ( (data[5].fvalue < 1.1365957)) {
              sum += (float)0.022246152;
            } else {
              sum += (float)0.0070901099;
            }
          } else {
            if ( (data[6].fvalue < 1.6859139)) {
              sum += (float)-0.0014733284;
            } else {
              sum += (float)-0.018261217;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 4.088376)) {
          if ( (data[7].fvalue < 0.95912695)) {
            if ( (data[6].fvalue < 1.1386029)) {
              sum += (float)0.02619198;
            } else {
              sum += (float)-0.0091004316;
            }
          } else {
            if ( (data[6].fvalue < 0.61881077)) {
              sum += (float)0.01917877;
            } else {
              sum += (float)0.10516661;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.97204936)) {
            if ( (data[6].fvalue < 1.3030322)) {
              sum += (float)0.00088293961;
            } else {
              sum += (float)-0.034168467;
            }
          } else {
            if ( (data[7].fvalue < 0.9789989)) {
              sum += (float)0.02589174;
            } else {
              sum += (float)-0.0055946186;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 1.7808127)) {
        sum += (float)-0.16144797;
      } else {
        if ( (data[6].fvalue < 1.7809262)) {
          sum += (float)0.059524156;
        } else {
          if ( (data[7].fvalue < 0.7517463)) {
            if ( (data[6].fvalue < 1.7816975)) {
              sum += (float)0.00098792568;
            } else {
              sum += (float)-0.037502613;
            }
          } else {
            sum += (float)-0.062492821;
          }
        }
      }
    }
  } else {
    if ( (data[5].fvalue < 2.3115196)) {
      if ( (data[7].fvalue < 0.81397259)) {
        if ( (data[6].fvalue < 1.798946)) {
          sum += (float)-0.040357001;
        } else {
          sum += (float)0.035166852;
        }
      } else {
        if ( (data[6].fvalue < 1.8951375)) {
          sum += (float)-0.076686844;
        } else {
          sum += (float)-0.019368006;
        }
      }
    } else {
      if ( (data[5].fvalue < 2.3386445)) {
        sum += (float)0.08066234;
      } else {
        if ( (data[6].fvalue < 1.8017979)) {
          if ( (data[7].fvalue < 0.85487604)) {
            if ( (data[7].fvalue < 0.82498372)) {
              sum += (float)0.021847909;
            } else {
              sum += (float)0.082339101;
            }
          } else {
            if ( (data[6].fvalue < 1.7950625)) {
              sum += (float)-0.069592118;
            } else {
              sum += (float)0.069366477;
            }
          }
        } else {
          if ( (data[5].fvalue < 16.099316)) {
            if ( (data[6].fvalue < 3.5302343)) {
              sum += (float)0.0051297373;
            } else {
              sum += (float)0.024415018;
            }
          } else {
            if ( (data[7].fvalue < 0.49561128)) {
              sum += (float)0.0019369556;
            } else {
              sum += (float)-0.019654889;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 1.4526956)) {
    if ( (data[6].fvalue < 1.4069637)) {
      if ( (data[6].fvalue < 1.3749647)) {
        if ( (data[6].fvalue < 1.3745325)) {
          if ( (data[6].fvalue < 0.19213915)) {
            if ( (data[6].fvalue < 0.0012577209)) {
              sum += (float)0.00071874505;
            } else {
              sum += (float)2.7739898e-06;
            }
          } else {
            if ( (data[0].fvalue < 0.5)) {
              sum += (float)0.00070487772;
            } else {
              sum += (float)-0.00016018296;
            }
          }
        } else {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[6].fvalue < 1.3748748)) {
              sum += (float)-0.025715949;
            } else {
              sum += (float)0.026041998;
            }
          } else {
            sum += (float)-0.089518897;
          }
        }
      } else {
        if ( (data[5].fvalue < 3.0446284)) {
          if ( (data[7].fvalue < 0.85068774)) {
            if ( (data[6].fvalue < 1.3838447)) {
              sum += (float)0.046283439;
            } else {
              sum += (float)0.022156363;
            }
          } else {
            if ( (data[6].fvalue < 1.3816185)) {
              sum += (float)-0.090280637;
            } else {
              sum += (float)-0.002499473;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.57826865)) {
            if ( (data[5].fvalue < 3.9293473)) {
              sum += (float)0.0388042;
            } else {
              sum += (float)0.0055758567;
            }
          } else {
            if ( (data[7].fvalue < 0.68638158)) {
              sum += (float)-0.032584298;
            } else {
              sum += (float)-0.0020757071;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 2.1863213)) {
        if ( (data[7].fvalue < 0.76173502)) {
          if ( (data[5].fvalue < 1.9305015)) {
            sum += (float)0.044846781;
          } else {
            if ( (data[7].fvalue < 0.71148872)) {
              sum += (float)0.00021810488;
            } else {
              sum += (float)-0.036613666;
            }
          }
        } else {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[7].fvalue < 0.8031289)) {
              sum += (float)-0.027429506;
            } else {
              sum += (float)-0.069366552;
            }
          } else {
            if ( (data[7].fvalue < 0.80346793)) {
              sum += (float)-0.092567101;
            } else {
              sum += (float)-0.045086365;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.77832699)) {
          if ( (data[5].fvalue < 4.0369382)) {
            if ( (data[7].fvalue < 0.76026487)) {
              sum += (float)0.0011840973;
            } else {
              sum += (float)0.039949242;
            }
          } else {
            if ( (data[5].fvalue < 4.2975783)) {
              sum += (float)-0.068772987;
            } else {
              sum += (float)-0.0084416829;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.81185186)) {
            if ( (data[6].fvalue < 1.4455106)) {
              sum += (float)-0.024567438;
            } else {
              sum += (float)-0.12246683;
            }
          } else {
            if ( (data[7].fvalue < 0.81350684)) {
              sum += (float)0.099334419;
            } else {
              sum += (float)-0.01668386;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].fvalue < 2.2599027)) {
      if ( (data[0].fvalue < 0.5)) {
        if ( (data[7].fvalue < 0.84386379)) {
          if ( (data[6].fvalue < 1.5132225)) {
            if ( (data[6].fvalue < 1.4865074)) {
              sum += (float)0.042436156;
            } else {
              sum += (float)-0.019763783;
            }
          } else {
            if ( (data[6].fvalue < 1.6651467)) {
              sum += (float)0.039442543;
            } else {
              sum += (float)0.070890851;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.5412879)) {
            sum += (float)-0.020699343;
          } else {
            sum += (float)-0.072297417;
          }
        }
      } else {
        if ( (data[5].fvalue < 2.2592478)) {
          if ( (data[6].fvalue < 1.7651327)) {
            if ( (data[6].fvalue < 1.6991616)) {
              sum += (float)-0.0052394522;
            } else {
              sum += (float)0.052303854;
            }
          } else {
            sum += (float)-0.05117834;
          }
        } else {
          sum += (float)0.088603303;
        }
      }
    } else {
      if ( (data[7].fvalue < 0.23229238)) {
        if ( (data[5].fvalue < 27.003368)) {
          if ( (data[6].fvalue < 2.1034799)) {
            if ( (data[7].fvalue < 0.23097301)) {
              sum += (float)0.0083123296;
            } else {
              sum += (float)0.059981335;
            }
          } else {
            if ( (data[5].fvalue < 24.378708)) {
              sum += (float)0.030799489;
            } else {
              sum += (float)0.0039763828;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.4691088)) {
            sum += (float)-0.074834555;
          } else {
            if ( (data[5].fvalue < 28.469917)) {
              sum += (float)-0.03081377;
            } else {
              sum += (float)0.0010949818;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 1.4583727)) {
          if ( (data[5].fvalue < 4.275538)) {
            if ( (data[6].fvalue < 1.4554915)) {
              sum += (float)-0.034581061;
            } else {
              sum += (float)0.042235594;
            }
          } else {
            if ( (data[5].fvalue < 6.9609551)) {
              sum += (float)0.089190416;
            } else {
              sum += (float)0.032656066;
            }
          }
        } else {
          if ( (data[5].fvalue < 19.894516)) {
            if ( (data[5].fvalue < 2.2669349)) {
              sum += (float)-0.064860404;
            } else {
              sum += (float)0.0016874591;
            }
          } else {
            if ( (data[6].fvalue < 3.4198577)) {
              sum += (float)-0.013242355;
            } else {
              sum += (float)0.0070187473;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 3.2515025)) {
    if ( (data[5].fvalue < 4.6433754)) {
      if ( (data[5].fvalue < 2.859225)) {
        if ( (data[6].fvalue < 2.4148209)) {
          if ( (data[7].fvalue < 0.92905712)) {
            if ( (data[6].fvalue < 2.1867306)) {
              sum += (float)7.6020893e-05;
            } else {
              sum += (float)0.03810215;
            }
          } else {
            if ( (data[6].fvalue < 0.50977015)) {
              sum += (float)0.010296573;
            } else {
              sum += (float)0.040524054;
            }
          }
        } else {
          sum += (float)-0.12721799;
        }
      } else {
        if ( (data[6].fvalue < 0.83007818)) {
          if ( (data[7].fvalue < 0.41267437)) {
            if ( (data[7].fvalue < 0.25177771)) {
              sum += (float)0.00071183656;
            } else {
              sum += (float)-0.00091120304;
            }
          } else {
            if ( (data[6].fvalue < 0.57225204)) {
              sum += (float)0.0011602635;
            } else {
              sum += (float)0.0056331777;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.7002573)) {
            if ( (data[5].fvalue < 3.4153023)) {
              sum += (float)0.0090088174;
            } else {
              sum += (float)0.0026402525;
            }
          } else {
            if ( (data[7].fvalue < 0.95705044)) {
              sum += (float)0.00017601582;
            } else {
              sum += (float)0.083234012;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.14657491)) {
        if ( (data[6].fvalue < 0.81618762)) {
          if ( (data[6].fvalue < 0.80902761)) {
            if ( (data[6].fvalue < 0.45533493)) {
              sum += (float)-0.00012381651;
            } else {
              sum += (float)0.0013822035;
            }
          } else {
            if ( (data[5].fvalue < 11.926225)) {
              sum += (float)-0.002074688;
            } else {
              sum += (float)-0.027056646;
            }
          }
        } else {
          if ( (data[5].fvalue < 30.014706)) {
            if ( (data[7].fvalue < 0.11465091)) {
              sum += (float)0.0085685635;
            } else {
              sum += (float)0.0014904053;
            }
          } else {
            if ( (data[5].fvalue < 30.28784)) {
              sum += (float)-0.060018402;
            } else {
              sum += (float)-0.0017992193;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 13.402143)) {
          if ( (data[7].fvalue < 0.31672347)) {
            if ( (data[6].fvalue < 1.1685929)) {
              sum += (float)-0.00016611256;
            } else {
              sum += (float)0.0073882421;
            }
          } else {
            if ( (data[6].fvalue < 0.80484056)) {
              sum += (float)-0.000467623;
            } else {
              sum += (float)-0.0035446419;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.36525989)) {
            if ( (data[6].fvalue < 2.0424995)) {
              sum += (float)-0.0047051096;
            } else {
              sum += (float)0.0059208968;
            }
          } else {
            if ( (data[6].fvalue < 1.9937108)) {
              sum += (float)0.0014864742;
            } else {
              sum += (float)-0.0094616711;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].fvalue < 7.9831753)) {
      if ( (data[7].fvalue < 0.74287534)) {
        sum += (float)0.08269161;
      } else {
        if ( (data[7].fvalue < 0.81226575)) {
          if ( (data[5].fvalue < 7.2184629)) {
            sum += (float)-0.042998724;
          } else {
            sum += (float)-0.0016384722;
          }
        } else {
          if ( (data[5].fvalue < 5.6638556)) {
            if ( (data[7].fvalue < 0.89016116)) {
              sum += (float)0.078513198;
            } else {
              sum += (float)0.027785543;
            }
          } else {
            if ( (data[6].fvalue < 4.8854637)) {
              sum += (float)-0.011498454;
            } else {
              sum += (float)0.045716409;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.95351017)) {
        if ( (data[7].fvalue < 0.74762797)) {
          if ( (data[5].fvalue < 23.77706)) {
            if ( (data[7].fvalue < 0.31073004)) {
              sum += (float)0.031310383;
            } else {
              sum += (float)0.0093806675;
            }
          } else {
            if ( (data[6].fvalue < 3.4236932)) {
              sum += (float)-0.046049215;
            } else {
              sum += (float)0.0059523936;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.83724105)) {
            if ( (data[5].fvalue < 13.549425)) {
              sum += (float)-0.012667706;
            } else {
              sum += (float)-0.039649453;
            }
          } else {
            if ( (data[7].fvalue < 0.87974501)) {
              sum += (float)0.031418923;
            } else {
              sum += (float)-0.0095630232;
            }
          }
        }
      } else {
        sum += (float)0.06679938;
      }
    }
  }
  if ( (data[7].fvalue < 0.6881237)) {
    if ( (data[6].fvalue < 1.1730825)) {
      if ( (data[6].fvalue < 1.1708773)) {
        if ( (data[6].fvalue < 1.170248)) {
          if ( (data[5].fvalue < 17.978746)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.00014331023;
            } else {
              sum += (float)0.0006695349;
            }
          } else {
            if ( (data[7].fvalue < 0.067815937)) {
              sum += (float)0.00053013093;
            } else {
              sum += (float)-0.0030794267;
            }
          }
        } else {
          if ( (data[5].fvalue < 10.381461)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.0052528894;
            } else {
              sum += (float)0.07314828;
            }
          } else {
            sum += (float)-0.005384034;
          }
        }
      } else {
        if ( (data[2].fvalue < 0.5)) {
          if ( (data[6].fvalue < 1.1726613)) {
            if ( (data[6].fvalue < 1.1713743)) {
              sum += (float)-0.027783467;
            } else {
              sum += (float)0.016141731;
            }
          } else {
            if ( (data[6].fvalue < 1.1730028)) {
              sum += (float)-0.048741844;
            } else {
              sum += (float)-0.0027060262;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.12311986)) {
            sum += (float)0.00046357699;
          } else {
            if ( (data[7].fvalue < 0.32218069)) {
              sum += (float)-0.10847722;
            } else {
              sum += (float)-0.028228298;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 5.2076263)) {
        if ( (data[0].fvalue < 0.5)) {
          if ( (data[7].fvalue < 0.33725139)) {
            if ( (data[6].fvalue < 1.275669)) {
              sum += (float)0.024776777;
            } else {
              sum += (float)0.06279511;
            }
          } else {
            if ( (data[6].fvalue < 1.7739401)) {
              sum += (float)0.0056198193;
            } else {
              sum += (float)0.025823647;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.5915351)) {
            if ( (data[7].fvalue < 0.48550421)) {
              sum += (float)-0.01926719;
            } else {
              sum += (float)0.0052253036;
            }
          } else {
            if ( (data[6].fvalue < 1.9678733)) {
              sum += (float)-0.039529599;
            } else {
              sum += (float)0.011556439;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 6.5327935)) {
          if ( (data[5].fvalue < 6.3196068)) {
            if ( (data[5].fvalue < 5.7055507)) {
              sum += (float)-0.010702393;
            } else {
              sum += (float)0.011836115;
            }
          } else {
            if ( (data[5].fvalue < 6.3323288)) {
              sum += (float)-0.10545405;
            } else {
              sum += (float)-0.032449879;
            }
          }
        } else {
          if ( (data[5].fvalue < 8.6291151)) {
            if ( (data[7].fvalue < 0.43071353)) {
              sum += (float)0.012830641;
            } else {
              sum += (float)-0.00044975153;
            }
          } else {
            if ( (data[7].fvalue < 0.16948503)) {
              sum += (float)0.0053005321;
            } else {
              sum += (float)-0.0012492827;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].fvalue < 1.6327093)) {
      if ( (data[6].fvalue < 0.70532906)) {
        if ( (data[7].fvalue < 0.86142337)) {
          if ( (data[5].fvalue < 1.0277672)) {
            if ( (data[7].fvalue < 0.79251581)) {
              sum += (float)0.0066761174;
            } else {
              sum += (float)0.016939793;
            }
          } else {
            if ( (data[6].fvalue < 0.68300247)) {
              sum += (float)0.00033565582;
            } else {
              sum += (float)-0.010204066;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.90850472)) {
            if ( (data[7].fvalue < 0.87609208)) {
              sum += (float)0.0072770054;
            } else {
              sum += (float)0.017193846;
            }
          } else {
            if ( (data[6].fvalue < 0.28428102)) {
              sum += (float)0.0082363756;
            } else {
              sum += (float)-0.014957421;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.80821097)) {
          if ( (data[5].fvalue < 1.5583742)) {
            if ( (data[7].fvalue < 0.72194308)) {
              sum += (float)0.004269775;
            } else {
              sum += (float)0.015206094;
            }
          } else {
            if ( (data[5].fvalue < 1.6214116)) {
              sum += (float)0.025116891;
            } else {
              sum += (float)-0.010916808;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.81062907)) {
            if ( (data[6].fvalue < 0.80851173)) {
              sum += (float)-0.015476683;
            } else {
              sum += (float)-0.0633182;
            }
          } else {
            if ( (data[5].fvalue < 1.5428164)) {
              sum += (float)0.0084064063;
            } else {
              sum += (float)-0.0012122805;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 3.208384)) {
        if ( (data[6].fvalue < 0.001341095)) {
          if ( (data[7].fvalue < 0.76306677)) {
            if ( (data[5].fvalue < 2.3153548)) {
              sum += (float)0.0018027147;
            } else {
              sum += (float)-0.0028311743;
            }
          } else {
            if ( (data[7].fvalue < 0.91360456)) {
              sum += (float)0.0017408254;
            } else {
              sum += (float)0.0073291794;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.634528)) {
            if ( (data[6].fvalue < 0.95439202)) {
              sum += (float)-0.010533731;
            } else {
              sum += (float)-0.11478624;
            }
          } else {
            if ( (data[5].fvalue < 2.0642869)) {
              sum += (float)-0.00068104168;
            } else {
              sum += (float)-0.0023299595;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 3.2089548)) {
          if ( (data[6].fvalue < 1.7161567)) {
            if ( (data[6].fvalue < 0.65377378)) {
              sum += (float)0.005409705;
            } else {
              sum += (float)0.038321875;
            }
          } else {
            sum += (float)0.18930583;
          }
        } else {
          if ( (data[7].fvalue < 0.87126791)) {
            if ( (data[6].fvalue < 2.3846803)) {
              sum += (float)0.0009089635;
            } else {
              sum += (float)0.01448241;
            }
          } else {
            if ( (data[7].fvalue < 0.90483212)) {
              sum += (float)-0.0056753913;
            } else {
              sum += (float)0.0026412751;
            }
          }
        }
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
