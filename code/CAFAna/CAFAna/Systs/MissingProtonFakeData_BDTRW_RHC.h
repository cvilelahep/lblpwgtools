#include "BDTReweighter.h"
class MissingProtonFakeData_BDTRW_RHC : public BDTReweighter {
 public :
 MissingProtonFakeData_BDTRW_RHC() : BDTReweighter(1.) {;}
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
  if ( (data[6].fvalue < 0.40991932)) {
    if ( (data[5].fvalue < 1.3044219)) {
      if ( (data[7].fvalue < 0.095390499)) {
        if ( (data[5].fvalue < 1.2609141)) {
          if ( (data[0].fvalue < 0.5)) {
            sum += (float)0.56263453;
          } else {
            sum += (float)3.053673;
          }
        } else {
          if ( (data[7].fvalue < 0.047376782)) {
            sum += (float)0.19934183;
          } else {
            if ( (data[5].fvalue < 1.3003856)) {
              sum += (float)1.0496657;
            } else {
              sum += (float)0.18582225;
            }
          }
        }
      } else {
        sum += (float)6.8734717;
      }
    } else {
      if ( (data[6].fvalue < 0.1985715)) {
        if ( (data[6].fvalue < 0.00012835694)) {
          if ( (data[5].fvalue < 1.6294349)) {
            if ( (data[7].fvalue < 0.26883161)) {
              sum += (float)0.15540457;
            } else {
              sum += (float)12.678585;
            }
          } else {
            if ( (data[7].fvalue < 0.47196937)) {
              sum += (float)0.1418428;
            } else {
              sum += (float)0.16748552;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.0548172)) {
            if ( (data[5].fvalue < 1.3400528)) {
              sum += (float)0.73834884;
            } else {
              sum += (float)0.10102075;
            }
          } else {
            if ( (data[5].fvalue < 1.6486704)) {
              sum += (float)0.21749598;
            } else {
              sum += (float)0.1363875;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.59261918)) {
          if ( (data[6].fvalue < 0.30795649)) {
            if ( (data[5].fvalue < 6.3109727)) {
              sum += (float)0.17533812;
            } else {
              sum += (float)0.15209016;
            }
          } else {
            if ( (data[5].fvalue < 6.4008322)) {
              sum += (float)0.20009167;
            } else {
              sum += (float)0.1684761;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.0982547)) {
            sum += (float)8.9487982;
          } else {
            if ( (data[5].fvalue < 3.5467057)) {
              sum += (float)1.4409713;
            } else {
              sum += (float)0.14795269;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.70337373)) {
      if ( (data[6].fvalue < 0.41007)) {
        if ( (data[7].fvalue < 0.34904647)) {
          sum += (float)0.17829792;
        } else {
          sum += (float)3.168617;
        }
      } else {
        if ( (data[5].fvalue < 6.3505125)) {
          if ( (data[7].fvalue < 0.58833337)) {
            if ( (data[6].fvalue < 0.58540881)) {
              sum += (float)0.23316582;
            } else {
              sum += (float)0.29078379;
            }
          } else {
            if ( (data[5].fvalue < 3.3216512)) {
              sum += (float)5.4905701;
            } else {
              sum += (float)0.20908433;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.56294048)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.19325849;
            } else {
              sum += (float)0.17643893;
            }
          } else {
            if ( (data[5].fvalue < 7.892952)) {
              sum += (float)0.23776846;
            } else {
              sum += (float)0.20539658;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 2.2073765)) {
        if ( (data[5].fvalue < 2.1691852)) {
          sum += (float)0.2856496;
        } else {
          sum += (float)11.133965;
        }
      } else {
        if ( (data[5].fvalue < 6.7731848)) {
          if ( (data[6].fvalue < 1.4011693)) {
            if ( (data[6].fvalue < 0.94292182)) {
              sum += (float)0.35798827;
            } else {
              sum += (float)0.42535195;
            }
          } else {
            if ( (data[5].fvalue < 3.1702304)) {
              sum += (float)1.724077;
            } else {
              sum += (float)0.55610865;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.4473345)) {
            if ( (data[5].fvalue < 16.562826)) {
              sum += (float)0.28028768;
            } else {
              sum += (float)0.23354085;
            }
          } else {
            if ( (data[5].fvalue < 8.6323233)) {
              sum += (float)0.46843019;
            } else {
              sum += (float)0.35380429;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.46635926)) {
    if ( (data[5].fvalue < 1.2774968)) {
      if ( (data[7].fvalue < 0.075105011)) {
        if ( (data[7].fvalue < 0.056684881)) {
          sum += (float)0.57487512;
        } else {
          if ( (data[5].fvalue < 1.2529188)) {
            sum += (float)2.301141;
          } else {
            sum += (float)0.88994926;
          }
        }
      } else {
        sum += (float)5.0997491;
      }
    } else {
      if ( (data[6].fvalue < 0.21825698)) {
        if ( (data[5].fvalue < 1.3171041)) {
          if ( (data[7].fvalue < 0.096115604)) {
            if ( (data[7].fvalue < 0.08317855)) {
              sum += (float)0.17601384;
            } else {
              sum += (float)0.81798738;
            }
          } else {
            sum += (float)3.7506075;
          }
        } else {
          if ( (data[6].fvalue < 0.00014819336)) {
            if ( (data[5].fvalue < 1.6294349)) {
              sum += (float)0.1367768;
            } else {
              sum += (float)0.099525817;
            }
          } else {
            if ( (data[6].fvalue < 0.055395506)) {
              sum += (float)0.070886515;
            } else {
              sum += (float)0.096771114;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.59276289)) {
          if ( (data[5].fvalue < 4.0265365)) {
            if ( (data[6].fvalue < 0.33098772)) {
              sum += (float)0.13001685;
            } else {
              sum += (float)0.14941227;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.12766381;
            } else {
              sum += (float)0.1119236;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.3090353)) {
            sum += (float)7.3068271;
          } else {
            if ( (data[5].fvalue < 3.5467057)) {
              sum += (float)0.93419868;
            } else {
              sum += (float)0.10816851;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.74282122)) {
      if ( (data[5].fvalue < 4.648809)) {
        if ( (data[7].fvalue < 0.58833337)) {
          if ( (data[6].fvalue < 0.64155996)) {
            if ( (data[5].fvalue < 2.2414405)) {
              sum += (float)0.29280397;
            } else {
              sum += (float)0.17701054;
            }
          } else {
            if ( (data[6].fvalue < 0.64183247)) {
              sum += (float)1.0237849;
            } else {
              sum += (float)0.227837;
            }
          }
        } else {
          if ( (data[5].fvalue < 2.9657645)) {
            sum += (float)5.5751576;
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)-0.37621626;
            } else {
              sum += (float)0.15982708;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 7.4538636)) {
          if ( (data[6].fvalue < 0.63330317)) {
            if ( (data[6].fvalue < 0.5318675)) {
              sum += (float)0.14925991;
            } else {
              sum += (float)0.16255274;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.20122604;
            } else {
              sum += (float)0.1767623;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.59500086)) {
            if ( (data[5].fvalue < 22.779205)) {
              sum += (float)0.13298588;
            } else {
              sum += (float)0.10712771;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.16726156;
            } else {
              sum += (float)0.14207341;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 2.2073765)) {
        sum += (float)6.8000989;
      } else {
        if ( (data[5].fvalue < 7.874382)) {
          if ( (data[6].fvalue < 1.5429819)) {
            if ( (data[6].fvalue < 1.0898702)) {
              sum += (float)0.25943887;
            } else {
              sum += (float)0.31851852;
            }
          } else {
            if ( (data[5].fvalue < 3.2079828)) {
              sum += (float)2.4225147;
            } else {
              sum += (float)0.4153218;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.3035736)) {
            if ( (data[7].fvalue < 0.22535986)) {
              sum += (float)0.19461249;
            } else {
              sum += (float)0.16031584;
            }
          } else {
            if ( (data[5].fvalue < 15.567749)) {
              sum += (float)0.26360336;
            } else {
              sum += (float)0.20914555;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.50007188)) {
    if ( (data[5].fvalue < 1.2699394)) {
      if ( (data[7].fvalue < 0.07239674)) {
        if ( (data[7].fvalue < 0.056684881)) {
          sum += (float)0.42625743;
        } else {
          if ( (data[5].fvalue < 1.2529188)) {
            sum += (float)1.9059167;
          } else {
            sum += (float)0.63291085;
          }
        }
      } else {
        sum += (float)4.6243358;
      }
    } else {
      if ( (data[6].fvalue < 0.16762632)) {
        if ( (data[5].fvalue < 1.3171041)) {
          if ( (data[7].fvalue < 0.098677352)) {
            if ( (data[7].fvalue < 0.067120045)) {
              sum += (float)0.13139845;
            } else {
              sum += (float)0.62573558;
            }
          } else {
            sum += (float)3.181813;
          }
        } else {
          if ( (data[6].fvalue < 0.00016567993)) {
            if ( (data[5].fvalue < 1.6294349)) {
              sum += (float)0.095759213;
            } else {
              sum += (float)0.069668263;
            }
          } else {
            if ( (data[6].fvalue < 0.053439729)) {
              sum += (float)0.049323641;
            } else {
              sum += (float)0.06458839;
            }
          }
        }
      } else {
        if ( (data[7].fvalue < 0.59276289)) {
          if ( (data[6].fvalue < 0.31753725)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.08738254;
            } else {
              sum += (float)0.074413016;
            }
          } else {
            if ( (data[5].fvalue < 2.0747995)) {
              sum += (float)0.18406421;
            } else {
              sum += (float)0.098644421;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.3090353)) {
            sum += (float)5.8454618;
          } else {
            if ( (data[5].fvalue < 3.5467057)) {
              sum += (float)0.70064902;
            } else {
              sum += (float)0.072334796;
            }
          }
        }
      }
    }
  } else {
    if ( (data[5].fvalue < 2.2073765)) {
      if ( (data[7].fvalue < 0.45512724)) {
        if ( (data[7].fvalue < 0.43699604)) {
          if ( (data[6].fvalue < 0.68915248)) {
            if ( (data[7].fvalue < 0.41999269)) {
              sum += (float)0.10543157;
            } else {
              sum += (float)0.25018668;
            }
          } else {
            sum += (float)-0.47135654;
          }
        } else {
          sum += (float)1.6040834;
        }
      } else {
        sum += (float)6.847506;
      }
    } else {
      if ( (data[6].fvalue < 0.79778355)) {
        if ( (data[5].fvalue < 4.6400366)) {
          if ( (data[7].fvalue < 0.58833337)) {
            if ( (data[6].fvalue < 0.6620822)) {
              sum += (float)0.13024734;
            } else {
              sum += (float)0.16952136;
            }
          } else {
            if ( (data[5].fvalue < 2.9657645)) {
              sum += (float)4.738884;
            } else {
              sum += (float)0.058803551;
            }
          }
        } else {
          if ( (data[5].fvalue < 7.4538636)) {
            if ( (data[6].fvalue < 0.62459326)) {
              sum += (float)0.11143106;
            } else {
              sum += (float)0.13194178;
            }
          } else {
            if ( (data[7].fvalue < 0.18452418)) {
              sum += (float)0.10617248;
            } else {
              sum += (float)0.088954471;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 4.8059092)) {
          if ( (data[6].fvalue < 1.5402077)) {
            if ( (data[6].fvalue < 1.0238727)) {
              sum += (float)0.20138867;
            } else {
              sum += (float)0.24136665;
            }
          } else {
            if ( (data[5].fvalue < 3.2079828)) {
              sum += (float)2.0591376;
            } else {
              sum += (float)0.34788749;
            }
          }
        } else {
          if ( (data[6].fvalue < 1.5628717)) {
            if ( (data[5].fvalue < 16.369102)) {
              sum += (float)0.1512523;
            } else {
              sum += (float)0.11266901;
            }
          } else {
            if ( (data[5].fvalue < 9.0789013)) {
              sum += (float)0.25768071;
            } else {
              sum += (float)0.17873427;
            }
          }
        }
      }
    }
  }
  if ( (data[6].fvalue < 0.40999681)) {
    if ( (data[5].fvalue < 1.2699394)) {
      if ( (data[7].fvalue < 0.07239674)) {
        if ( (data[7].fvalue < 0.056684881)) {
          sum += (float)0.33123258;
        } else {
          if ( (data[5].fvalue < 1.2529188)) {
            sum += (float)1.5785731;
          } else {
            sum += (float)0.50966084;
          }
        }
      } else {
        sum += (float)3.8275993;
      }
    } else {
      if ( (data[6].fvalue < 0.13971362)) {
        if ( (data[5].fvalue < 1.3156848)) {
          if ( (data[7].fvalue < 0.10876876)) {
            if ( (data[7].fvalue < 0.08317855)) {
              sum += (float)0.13537729;
            } else {
              sum += (float)0.78496897;
            }
          } else {
            sum += (float)2.8411758;
          }
        } else {
          if ( (data[6].fvalue < 3.2836913e-05)) {
            if ( (data[7].fvalue < 0.31256145)) {
              sum += (float)0.048304614;
            } else {
              sum += (float)0.058344755;
            }
          } else {
            if ( (data[5].fvalue < 1.5019097)) {
              sum += (float)0.13572125;
            } else {
              sum += (float)0.038154036;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 1.6488681)) {
          if ( (data[5].fvalue < 1.6453419)) {
            if ( (data[7].fvalue < 0.17745864)) {
              sum += (float)0.03964166;
            } else {
              sum += (float)0.30508924;
            }
          } else {
            sum += (float)2.2916293;
          }
        } else {
          if ( (data[7].fvalue < 0.59261918)) {
            if ( (data[6].fvalue < 0.24360234)) {
              sum += (float)0.054870691;
            } else {
              sum += (float)0.064962454;
            }
          } else {
            if ( (data[5].fvalue < 3.0982547)) {
              sum += (float)5.6336355;
            } else {
              sum += (float)0.071358569;
            }
          }
        }
      }
    }
  } else {
    if ( (data[6].fvalue < 0.41007)) {
      if ( (data[5].fvalue < 2.4246917)) {
        sum += (float)2.8132465;
      } else {
        sum += (float)0.07034871;
      }
    } else {
      if ( (data[6].fvalue < 0.77567995)) {
        if ( (data[6].fvalue < 0.5307765)) {
          if ( (data[7].fvalue < 0.64132369)) {
            if ( (data[5].fvalue < 7.1991167)) {
              sum += (float)0.077127315;
            } else {
              sum += (float)0.056654751;
            }
          } else {
            if ( (data[5].fvalue < 3.8869162)) {
              sum += (float)1.3809185;
            } else {
              sum += (float)0.064477727;
            }
          }
        } else {
          if ( (data[5].fvalue < 2.7768316)) {
            if ( (data[7].fvalue < 0.54838079)) {
              sum += (float)0.12250174;
            } else {
              sum += (float)4.0280514;
            }
          } else {
            if ( (data[5].fvalue < 4.1892815)) {
              sum += (float)0.10050041;
            } else {
              sum += (float)0.078958668;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 2.2073765)) {
          sum += (float)6.2154555;
        } else {
          if ( (data[5].fvalue < 4.5819864)) {
            if ( (data[6].fvalue < 1.5877815)) {
              sum += (float)0.15089813;
            } else {
              sum += (float)0.36364317;
            }
          } else {
            if ( (data[6].fvalue < 1.1475046)) {
              sum += (float)0.09225399;
            } else {
              sum += (float)0.13001776;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.2699394)) {
    if ( (data[7].fvalue < 0.07239674)) {
      if ( (data[7].fvalue < 0.056684881)) {
        if ( (data[5].fvalue < 1.2651092)) {
          sum += (float)0.30746481;
        } else {
          sum += (float)0.088022567;
        }
      } else {
        if ( (data[5].fvalue < 1.2529188)) {
          sum += (float)1.3074509;
        } else {
          sum += (float)0.41041198;
        }
      }
    } else {
      sum += (float)3.1681349;
    }
  } else {
    if ( (data[6].fvalue < 0.37060201)) {
      if ( (data[5].fvalue < 1.3044219)) {
        if ( (data[7].fvalue < 0.098677352)) {
          if ( (data[7].fvalue < 0.069010317)) {
            if ( (data[7].fvalue < 0.043475267)) {
              sum += (float)-0.018403903;
            } else {
              sum += (float)0.18671194;
            }
          } else {
            sum += (float)0.57461315;
          }
        } else {
          sum += (float)2.08113;
        }
      } else {
        if ( (data[6].fvalue < 0.12034601)) {
          if ( (data[6].fvalue < 0.00016653442)) {
            if ( (data[5].fvalue < 1.6294349)) {
              sum += (float)0.052512147;
            } else {
              sum += (float)0.034042336;
            }
          } else {
            if ( (data[5].fvalue < 1.3400528)) {
              sum += (float)0.31938064;
            } else {
              sum += (float)0.025968591;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.648755)) {
            if ( (data[7].fvalue < 0.257961)) {
              sum += (float)0.054631151;
            } else {
              sum += (float)2.8530688;
            }
          } else {
            if ( (data[7].fvalue < 0.59261918)) {
              sum += (float)0.040207695;
            } else {
              sum += (float)0.13443671;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.66096562)) {
        if ( (data[5].fvalue < 2.1608319)) {
          if ( (data[7].fvalue < 0.43680355)) {
            if ( (data[7].fvalue < 0.39010009)) {
              sum += (float)0.048800748;
            } else {
              sum += (float)0.27216479;
            }
          } else {
            sum += (float)2.7224422;
          }
        } else {
          if ( (data[5].fvalue < 3.7405326)) {
            if ( (data[7].fvalue < 0.58842421)) {
              sum += (float)0.059480764;
            } else {
              sum += (float)0.79682875;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.052766722;
            } else {
              sum += (float)0.04229622;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 2.2073765)) {
          if ( (data[6].fvalue < 0.78644437)) {
            sum += (float)-0.27952766;
          } else {
            sum += (float)4.9818463;
          }
        } else {
          if ( (data[5].fvalue < 5.7652478)) {
            if ( (data[6].fvalue < 1.5387645)) {
              sum += (float)0.094439499;
            } else {
              sum += (float)0.21311404;
            }
          } else {
            if ( (data[6].fvalue < 1.0101755)) {
              sum += (float)0.05536126;
            } else {
              sum += (float)0.082452282;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.2699394)) {
    if ( (data[5].fvalue < 1.2690272)) {
      if ( (data[7].fvalue < 0.052340932)) {
        if ( (data[0].fvalue < 0.5)) {
          sum += (float)0.23136939;
        } else {
          sum += (float)0.053564534;
        }
      } else {
        if ( (data[7].fvalue < 0.064642295)) {
          if ( (data[5].fvalue < 1.2529188)) {
            sum += (float)1.0828943;
          } else {
            sum += (float)0.17034723;
          }
        } else {
          sum += (float)0.20901272;
        }
      }
    } else {
      sum += (float)2.7756293;
    }
  } else {
    if ( (data[6].fvalue < 0.27074179)) {
      if ( (data[5].fvalue < 1.3044219)) {
        if ( (data[7].fvalue < 0.098677352)) {
          if ( (data[7].fvalue < 0.065697372)) {
            if ( (data[7].fvalue < 0.045858406)) {
              sum += (float)-0.0087387208;
            } else {
              sum += (float)0.13550429;
            }
          } else {
            sum += (float)0.41640005;
          }
        } else {
          sum += (float)1.7224041;
        }
      } else {
        if ( (data[5].fvalue < 1.6644573)) {
          if ( (data[7].fvalue < 0.29880705)) {
            if ( (data[7].fvalue < 0.23638114)) {
              sum += (float)0.014353698;
            } else {
              sum += (float)1.2933995;
            }
          } else {
            sum += (float)12.822094;
          }
        } else {
          if ( (data[5].fvalue < 5.757885)) {
            if ( (data[6].fvalue < 0.10048486)) {
              sum += (float)0.021706086;
            } else {
              sum += (float)0.027914992;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.01766075;
            } else {
              sum += (float)0.0095727229;
            }
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.27083626)) {
        if ( (data[6].fvalue < 0.27082479)) {
          if ( (data[2].fvalue < 0.5)) {
            sum += (float)0.043508891;
          } else {
            sum += (float)0.01527554;
          }
        } else {
          sum += (float)2.8697438;
        }
      } else {
        if ( (data[6].fvalue < 0.83114517)) {
          if ( (data[7].fvalue < 0.58845043)) {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)0.041828722;
            } else {
              sum += (float)0.030892445;
            }
          } else {
            if ( (data[5].fvalue < 2.9771113)) {
              sum += (float)5.3818293;
            } else {
              sum += (float)0.0098368833;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.8313297)) {
            sum += (float)4.5840783;
          } else {
            if ( (data[5].fvalue < 8.512785)) {
              sum += (float)0.079792887;
            } else {
              sum += (float)0.046785962;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.2699394)) {
    if ( (data[7].fvalue < 0.07239674)) {
      if ( (data[5].fvalue < 1.2652568)) {
        if ( (data[7].fvalue < 0.052340932)) {
          sum += (float)0.22016026;
        } else {
          if ( (data[5].fvalue < 1.2529188)) {
            sum += (float)0.89690584;
          } else {
            sum += (float)0.29488757;
          }
        }
      } else {
        sum += (float)-0.15508719;
      }
    } else {
      sum += (float)2.3493261;
    }
  } else {
    if ( (data[6].fvalue < 0.52920485)) {
      if ( (data[5].fvalue < 1.4064286)) {
        if ( (data[7].fvalue < 0.12883443)) {
          if ( (data[7].fvalue < 0.1063969)) {
            if ( (data[7].fvalue < 0.069938965)) {
              sum += (float)-0.02540051;
            } else {
              sum += (float)0.057840507;
            }
          } else {
            if ( (data[5].fvalue < 1.3725548)) {
              sum += (float)0.96770889;
            } else {
              sum += (float)0.1596082;
            }
          }
        } else {
          if ( (data[4].fvalue < 0.5)) {
            sum += (float)3.7474592;
          } else {
            if ( (data[5].fvalue < 1.3965116)) {
              sum += (float)0.49741822;
            } else {
              sum += (float)1.5247818;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.22684997)) {
          if ( (data[6].fvalue < 6.0729981e-06)) {
            if ( (data[5].fvalue < 1.6281692)) {
              sum += (float)0.00052681408;
            } else {
              sum += (float)0.01788252;
            }
          } else {
            if ( (data[6].fvalue < 0.034274321)) {
              sum += (float)0.0058642891;
            } else {
              sum += (float)0.016213277;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.59276289)) {
            if ( (data[5].fvalue < 3.8824234)) {
              sum += (float)0.026572069;
            } else {
              sum += (float)0.016940342;
            }
          } else {
            if ( (data[5].fvalue < 3.3090353)) {
              sum += (float)3.3426206;
            } else {
              sum += (float)0.018901221;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 2.2439396)) {
        if ( (data[7].fvalue < 0.47038442)) {
          if ( (data[7].fvalue < 0.43699604)) {
            if ( (data[6].fvalue < 0.75940025)) {
              sum += (float)0.033101499;
            } else {
              sum += (float)-0.43595448;
            }
          } else {
            sum += (float)0.89299291;
          }
        } else {
          sum += (float)3.3824792;
        }
      } else {
        if ( (data[5].fvalue < 15.56189)) {
          if ( (data[6].fvalue < 1.1428697)) {
            if ( (data[5].fvalue < 3.2978458)) {
              sum += (float)0.04925422;
            } else {
              sum += (float)0.033320576;
            }
          } else {
            if ( (data[5].fvalue < 3.16904)) {
              sum += (float)0.27396461;
            } else {
              sum += (float)0.063054308;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.21048492)) {
            if ( (data[6].fvalue < 1.8413477)) {
              sum += (float)0.018835442;
            } else {
              sum += (float)0.07075233;
            }
          } else {
            if ( (data[6].fvalue < 2.9102802)) {
              sum += (float)-0.0082800379;
            } else {
              sum += (float)0.043216888;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.2699394)) {
    if ( (data[5].fvalue < 1.2690272)) {
      if ( (data[5].fvalue < 1.2391868)) {
        sum += (float)0.62296247;
      } else {
        if ( (data[5].fvalue < 1.2589641)) {
          sum += (float)-0.071886465;
        } else {
          if ( (data[7].fvalue < 0.055104434)) {
            sum += (float)0.041010678;
          } else {
            sum += (float)0.34336883;
          }
        }
      }
    } else {
      sum += (float)2.0934396;
    }
  } else {
    if ( (data[6].fvalue < 0.58364749)) {
      if ( (data[5].fvalue < 1.3044219)) {
        if ( (data[5].fvalue < 1.3008599)) {
          if ( (data[7].fvalue < 0.045858406)) {
            if ( (data[7].fvalue < 0.032040998)) {
              sum += (float)-0.022937249;
            } else {
              sum += (float)0.026220182;
            }
          } else {
            if ( (data[7].fvalue < 0.069010317)) {
              sum += (float)0.111214;
            } else {
              sum += (float)0.26560462;
            }
          }
        } else {
          sum += (float)1.1775558;
        }
      } else {
        if ( (data[5].fvalue < 1.6367102)) {
          if ( (data[7].fvalue < 0.28022632)) {
            if ( (data[7].fvalue < 0.23820207)) {
              sum += (float)0.0061639603;
            } else {
              sum += (float)1.5221438;
            }
          } else {
            sum += (float)11.290738;
          }
        } else {
          if ( (data[5].fvalue < 3.5902696)) {
            if ( (data[7].fvalue < 0.63320357)) {
              sum += (float)0.012620452;
            } else {
              sum += (float)1.9918898;
            }
          } else {
            if ( (data[7].fvalue < 0.2408985)) {
              sum += (float)0.0096571315;
            } else {
              sum += (float)0.0026338212;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 2.2087038)) {
        if ( (data[5].fvalue < 2.2061603)) {
          if ( (data[6].fvalue < 0.74086642)) {
            if ( (data[7].fvalue < 0.42424798)) {
              sum += (float)0.02630166;
            } else {
              sum += (float)0.54465282;
            }
          } else {
            sum += (float)-1.1587297;
          }
        } else {
          sum += (float)3.6200087;
        }
      } else {
        if ( (data[6].fvalue < 0.58455133)) {
          if ( (data[6].fvalue < 0.58451277)) {
            if ( (data[7].fvalue < 0.30545598)) {
              sum += (float)0.049769655;
            } else {
              sum += (float)0.0089620035;
            }
          } else {
            sum += (float)2.4896569;
          }
        } else {
          if ( (data[5].fvalue < 3.8677688)) {
            if ( (data[7].fvalue < 0.62954664)) {
              sum += (float)0.037049558;
            } else {
              sum += (float)0.53987247;
            }
          } else {
            if ( (data[6].fvalue < 1.801424)) {
              sum += (float)0.0214337;
            } else {
              sum += (float)0.05636505;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.2699394)) {
    if ( (data[7].fvalue < 0.07239674)) {
      if ( (data[5].fvalue < 1.2652568)) {
        if ( (data[7].fvalue < 0.052340932)) {
          sum += (float)0.10447615;
        } else {
          if ( (data[5].fvalue < 1.2529188)) {
            sum += (float)0.70125067;
          } else {
            sum += (float)0.1987243;
          }
        }
      } else {
        sum += (float)-0.30108002;
      }
    } else {
      sum += (float)1.757036;
    }
  } else {
    if ( (data[6].fvalue < 0.22933212)) {
      if ( (data[5].fvalue < 1.4063835)) {
        if ( (data[7].fvalue < 0.12883443)) {
          if ( (data[7].fvalue < 0.1086042)) {
            if ( (data[7].fvalue < 0.092019185)) {
              sum += (float)-0.015068817;
            } else {
              sum += (float)0.079582416;
            }
          } else {
            if ( (data[5].fvalue < 1.3725548)) {
              sum += (float)0.81926745;
            } else {
              sum += (float)0.13493536;
            }
          }
        } else {
          if ( (data[4].fvalue < 0.5)) {
            sum += (float)2.8793998;
          } else {
            sum += (float)1.0592686;
          }
        }
      } else {
        if ( (data[1].fvalue < 0.5)) {
          if ( (data[7].fvalue < 0.47190583)) {
            if ( (data[7].fvalue < 0.41203415)) {
              sum += (float)0.0075628846;
            } else {
              sum += (float)0.034325201;
            }
          } else {
            if ( (data[5].fvalue < 2.3747902)) {
              sum += (float)6.7406855;
            } else {
              sum += (float)0.026598593;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.00028173829)) {
            if ( (data[5].fvalue < 22.723886)) {
              sum += (float)0.0067531369;
            } else {
              sum += (float)-0.0066414108;
            }
          } else {
            if ( (data[5].fvalue < 3.4745541)) {
              sum += (float)0.0052424488;
            } else {
              sum += (float)-0.0028888334;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 2.2444208)) {
        if ( (data[7].fvalue < 0.44472954)) {
          if ( (data[6].fvalue < 0.75940025)) {
            if ( (data[7].fvalue < 0.4136214)) {
              sum += (float)0.017485773;
            } else {
              sum += (float)0.20879264;
            }
          } else {
            sum += (float)-0.42715669;
          }
        } else {
          if ( (data[5].fvalue < 2.1956024)) {
            if ( (data[6].fvalue < 0.5559783)) {
              sum += (float)2.6959012;
            } else {
              sum += (float)-0.12854038;
            }
          } else {
            sum += (float)3.1868217;
          }
        }
      } else {
        if ( (data[7].fvalue < 0.58845043)) {
          if ( (data[6].fvalue < 0.89239508)) {
            if ( (data[5].fvalue < 7.6083069)) {
              sum += (float)0.014679362;
            } else {
              sum += (float)0.005209134;
            }
          } else {
            if ( (data[5].fvalue < 9.2314177)) {
              sum += (float)0.036478363;
            } else {
              sum += (float)0.014191358;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.1761987)) {
            sum += (float)3.5518904;
          } else {
            if ( (data[5].fvalue < 3.4748111)) {
              sum += (float)-0.41173449;
            } else {
              sum += (float)0.018511109;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.2741427)) {
    if ( (data[5].fvalue < 1.2698146)) {
      if ( (data[5].fvalue < 1.2391868)) {
        sum += (float)0.44679654;
      } else {
        if ( (data[5].fvalue < 1.2589641)) {
          sum += (float)-0.23156904;
        } else {
          if ( (data[5].fvalue < 1.2652568)) {
            sum += (float)0.24062695;
          } else {
            sum += (float)-0.25021043;
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.0015419007)) {
        sum += (float)1.9435546;
      } else {
        sum += (float)0.15781295;
      }
    }
  } else {
    if ( (data[6].fvalue < 0.44188762)) {
      if ( (data[5].fvalue < 1.4063835)) {
        if ( (data[7].fvalue < 0.12883443)) {
          if ( (data[7].fvalue < 0.11268218)) {
            if ( (data[7].fvalue < 0.078291297)) {
              sum += (float)-0.01902801;
            } else {
              sum += (float)0.048520084;
            }
          } else {
            if ( (data[5].fvalue < 1.3480988)) {
              sum += (float)0.82736158;
            } else {
              sum += (float)0.15138163;
            }
          }
        } else {
          if ( (data[4].fvalue < 0.5)) {
            sum += (float)2.2652097;
          } else {
            if ( (data[5].fvalue < 1.3965116)) {
              sum += (float)0.226146;
            } else {
              sum += (float)0.96664441;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 2.1556911)) {
          if ( (data[7].fvalue < 0.4444758)) {
            if ( (data[7].fvalue < 0.42206332)) {
              sum += (float)0.0074801985;
            } else {
              sum += (float)2.1274524;
            }
          } else {
            if ( (data[1].fvalue < 0.5)) {
              sum += (float)8.1869354;
            } else {
              sum += (float)1.9316806;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.2607311)) {
            if ( (data[6].fvalue < 0.10417783)) {
              sum += (float)0.0044510057;
            } else {
              sum += (float)0.0095101967;
            }
          } else {
            if ( (data[5].fvalue < 2.8245873)) {
              sum += (float)0.0048453379;
            } else {
              sum += (float)-0.00092493801;
            }
          }
        }
      }
    } else {
      if ( (data[5].fvalue < 2.2073765)) {
        if ( (data[5].fvalue < 2.206213)) {
          if ( (data[6].fvalue < 0.74086642)) {
            if ( (data[7].fvalue < 0.42708883)) {
              sum += (float)0.0079555502;
            } else {
              sum += (float)0.48105612;
            }
          } else {
            sum += (float)-0.8737973;
          }
        } else {
          sum += (float)2.9349046;
        }
      } else {
        if ( (data[5].fvalue < 2.2087038)) {
          sum += (float)-0.34443414;
        } else {
          if ( (data[5].fvalue < 22.400543)) {
            if ( (data[6].fvalue < 1.202088)) {
              sum += (float)0.013540908;
            } else {
              sum += (float)0.028493332;
            }
          } else {
            if ( (data[7].fvalue < 0.12836991)) {
              sum += (float)-0.0034745669;
            } else {
              sum += (float)-0.025699696;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.2699394)) {
    if ( (data[5].fvalue < 1.2690272)) {
      if ( (data[7].fvalue < 0.064642295)) {
        if ( (data[7].fvalue < 0.052340932)) {
          if ( (data[0].fvalue < 0.5)) {
            sum += (float)-0.013156357;
          } else {
            sum += (float)0.05600347;
          }
        } else {
          if ( (data[5].fvalue < 1.2529188)) {
            sum += (float)0.56790531;
          } else {
            sum += (float)0.038184687;
          }
        }
      } else {
        sum += (float)-0.23364161;
      }
    } else {
      sum += (float)1.4342192;
    }
  } else {
    if ( (data[5].fvalue < 1.6294349)) {
      if ( (data[5].fvalue < 1.6293519)) {
        if ( (data[7].fvalue < 0.25601858)) {
          if ( (data[7].fvalue < 0.20973)) {
            if ( (data[7].fvalue < 0.12949051)) {
              sum += (float)-0.013823043;
            } else {
              sum += (float)0.044504698;
            }
          } else {
            if ( (data[5].fvalue < 1.5113426)) {
              sum += (float)4.08183;
            } else {
              sum += (float)0.082723476;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.6099322)) {
            sum += (float)3.5591967;
          } else {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)0.063133314;
            } else {
              sum += (float)-0.98880255;
            }
          }
        }
      } else {
        sum += (float)9.7332087;
      }
    } else {
      if ( (data[6].fvalue < 0.13123251)) {
        if ( (data[6].fvalue < 0.00016738891)) {
          if ( (data[7].fvalue < 0.42225674)) {
            if ( (data[5].fvalue < 22.513485)) {
              sum += (float)0.0049230484;
            } else {
              sum += (float)-0.0085098445;
            }
          } else {
            if ( (data[5].fvalue < 2.1223955)) {
              sum += (float)7.1419358;
            } else {
              sum += (float)0.0028561978;
            }
          }
        } else {
          if ( (data[6].fvalue < 0.033081084)) {
            if ( (data[7].fvalue < 0.29520914)) {
              sum += (float)-0.0044135628;
            } else {
              sum += (float)0.008131641;
            }
          } else {
            if ( (data[6].fvalue < 0.033083741)) {
              sum += (float)1.6419284;
            } else {
              sum += (float)0.0031253975;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 3.7697515)) {
          if ( (data[7].fvalue < 0.62954664)) {
            if ( (data[7].fvalue < 0.58842421)) {
              sum += (float)0.0089836633;
            } else {
              sum += (float)0.20067057;
            }
          } else {
            if ( (data[5].fvalue < 3.5785556)) {
              sum += (float)1.72109;
            } else {
              sum += (float)-0.0038125098;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.20339027)) {
            if ( (data[5].fvalue < 22.841175)) {
              sum += (float)0.0071484428;
            } else {
              sum += (float)-0.0093739387;
            }
          } else {
            if ( (data[5].fvalue < 9.4668379)) {
              sum += (float)0.0021994615;
            } else {
              sum += (float)-0.012265761;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.2717276)) {
    if ( (data[5].fvalue < 1.2698146)) {
      if ( (data[5].fvalue < 1.2391868)) {
        sum += (float)0.32610521;
      } else {
        if ( (data[5].fvalue < 1.2652568)) {
          if ( (data[5].fvalue < 1.2589641)) {
            sum += (float)-0.21469051;
          } else {
            sum += (float)0.20303507;
          }
        } else {
          sum += (float)-0.32837531;
        }
      }
    } else {
      if ( (data[0].fvalue < 0.5)) {
        sum += (float)0.10536637;
      } else {
        sum += (float)1.5598794;
      }
    }
  } else {
    if ( (data[5].fvalue < 1.4064286)) {
      if ( (data[7].fvalue < 0.12883443)) {
        if ( (data[7].fvalue < 0.1086042)) {
          if ( (data[6].fvalue < 0.0043422543)) {
            if ( (data[5].fvalue < 1.3622491)) {
              sum += (float)0.032992344;
            } else {
              sum += (float)0.0026447705;
            }
          } else {
            if ( (data[5].fvalue < 1.3396982)) {
              sum += (float)-0.1215416;
            } else {
              sum += (float)-0.0034259071;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.331738)) {
            sum += (float)0.6728332;
          } else {
            if ( (data[5].fvalue < 1.4016114)) {
              sum += (float)0.18714164;
            } else {
              sum += (float)-0.0096741542;
            }
          }
        }
      } else {
        if ( (data[4].fvalue < 0.5)) {
          sum += (float)1.7725358;
        } else {
          if ( (data[5].fvalue < 1.3965116)) {
            sum += (float)0.17916775;
          } else {
            sum += (float)0.74876285;
          }
        }
      }
    } else {
      if ( (data[6].fvalue < 0.62632)) {
        if ( (data[5].fvalue < 6.6083479)) {
          if ( (data[7].fvalue < 0.67347932)) {
            if ( (data[7].fvalue < 0.59432536)) {
              sum += (float)0.0031707366;
            } else {
              sum += (float)-0.029252471;
            }
          } else {
            if ( (data[5].fvalue < 3.6787772)) {
              sum += (float)1.876862;
            } else {
              sum += (float)-0.00038855453;
            }
          }
        } else {
          if ( (data[5].fvalue < 22.669901)) {
            if ( (data[7].fvalue < 0.1214355)) {
              sum += (float)0.0013303873;
            } else {
              sum += (float)-0.0041582268;
            }
          } else {
            if ( (data[6].fvalue < 0.00070294191)) {
              sum += (float)-0.006085143;
            } else {
              sum += (float)-0.013520298;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 2.2073765)) {
          if ( (data[5].fvalue < 2.1901178)) {
            if ( (data[6].fvalue < 0.74086642)) {
              sum += (float)0.12763314;
            } else {
              sum += (float)-0.70239598;
            }
          } else {
            sum += (float)2.6626351;
          }
        } else {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[5].fvalue < 2.2261467)) {
              sum += (float)-0.29411653;
            } else {
              sum += (float)0.0063506532;
            }
          } else {
            if ( (data[5].fvalue < 2.2831688)) {
              sum += (float)0.24875323;
            } else {
              sum += (float)0.018625466;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.2699394)) {
    if ( (data[7].fvalue < 0.056684881)) {
      if ( (data[7].fvalue < 0.042299632)) {
        sum += (float)-0.0031910052;
      } else {
        sum += (float)-0.32240856;
      }
    } else {
      if ( (data[5].fvalue < 1.2610617)) {
        if ( (data[7].fvalue < 0.064642295)) {
          sum += (float)0.35596108;
        } else {
          sum += (float)-0.19329289;
        }
      } else {
        sum += (float)1.4314866;
      }
    }
  } else {
    if ( (data[5].fvalue < 1.5704589)) {
      if ( (data[7].fvalue < 0.23820207)) {
        if ( (data[7].fvalue < 0.20927744)) {
          if ( (data[7].fvalue < 0.16029719)) {
            if ( (data[5].fvalue < 1.3866928)) {
              sum += (float)0.0324452;
            } else {
              sum += (float)-0.014608628;
            }
          } else {
            if ( (data[5].fvalue < 1.4577576)) {
              sum += (float)0.97217327;
            } else {
              sum += (float)0.03090279;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.5321378)) {
            sum += (float)1.2251054;
          } else {
            if ( (data[5].fvalue < 1.566422)) {
              sum += (float)0.27935055;
            } else {
              sum += (float)0.065807119;
            }
          }
        }
      } else {
        sum += (float)4.036644;
      }
    } else {
      if ( (data[5].fvalue < 1.6294262)) {
        if ( (data[5].fvalue < 1.6292157)) {
          if ( (data[7].fvalue < 0.23643884)) {
            if ( (data[7].fvalue < 0.23151046)) {
              sum += (float)-0.013165993;
            } else {
              sum += (float)0.20646887;
            }
          } else {
            if ( (data[5].fvalue < 1.6131637)) {
              sum += (float)0.12331731;
            } else {
              sum += (float)-0.64571959;
            }
          }
        } else {
          sum += (float)-0.87790877;
        }
      } else {
        if ( (data[5].fvalue < 1.6294806)) {
          sum += (float)9.1271114;
        } else {
          if ( (data[7].fvalue < 0.40437216)) {
            if ( (data[6].fvalue < 0.098449521)) {
              sum += (float)0.0010817173;
            } else {
              sum += (float)0.003320901;
            }
          } else {
            if ( (data[5].fvalue < 2.1222048)) {
              sum += (float)1.9785396;
            } else {
              sum += (float)0.0037175061;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.2704647)) {
    if ( (data[5].fvalue < 1.2698146)) {
      if ( (data[5].fvalue < 1.2391868)) {
        sum += (float)0.24134773;
      } else {
        if ( (data[7].fvalue < 0.05229881)) {
          sum += (float)0.085552558;
        } else {
          if ( (data[5].fvalue < 1.2610617)) {
            if ( (data[5].fvalue < 1.2529188)) {
              sum += (float)-0.22510245;
            } else {
              sum += (float)0.12160137;
            }
          } else {
            sum += (float)-0.37621567;
          }
        }
      }
    } else {
      sum += (float)1.1295747;
    }
  } else {
    if ( (data[5].fvalue < 1.6294349)) {
      if ( (data[5].fvalue < 1.6293519)) {
        if ( (data[7].fvalue < 0.21473941)) {
          if ( (data[5].fvalue < 1.4064286)) {
            if ( (data[7].fvalue < 0.11764129)) {
              sum += (float)-0.0026991039;
            } else {
              sum += (float)0.71124989;
            }
          } else {
            if ( (data[7].fvalue < 0.20386788)) {
              sum += (float)-0.0089907059;
            } else {
              sum += (float)0.056770276;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.558532)) {
            if ( (data[7].fvalue < 0.22215976)) {
              sum += (float)0.44832936;
            } else {
              sum += (float)3.1779602;
            }
          } else {
            if ( (data[5].fvalue < 1.6131637)) {
              sum += (float)0.19601403;
            } else {
              sum += (float)-0.34754506;
            }
          }
        }
      } else {
        sum += (float)6.9908166;
      }
    } else {
      if ( (data[5].fvalue < 1.6295297)) {
        sum += (float)-0.75395703;
      } else {
        if ( (data[6].fvalue < 0.45267808)) {
          if ( (data[6].fvalue < 0.00016897582)) {
            if ( (data[7].fvalue < 0.47185534)) {
              sum += (float)0.002215758;
            } else {
              sum += (float)0.012858973;
            }
          } else {
            if ( (data[6].fvalue < 0.033051025)) {
              sum += (float)-0.0038001584;
            } else {
              sum += (float)0.0013070941;
            }
          }
        } else {
          if ( (data[5].fvalue < 2.2811794)) {
            if ( (data[6].fvalue < 0.81512833)) {
              sum += (float)-0.0039737318;
            } else {
              sum += (float)2.3524532;
            }
          } else {
            if ( (data[6].fvalue < 1.9054713)) {
              sum += (float)0.004934439;
            } else {
              sum += (float)0.028713262;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.2699394)) {
    if ( (data[7].fvalue < 0.064642295)) {
      if ( (data[5].fvalue < 1.2529188)) {
        if ( (data[0].fvalue < 0.5)) {
          sum += (float)-0.096046247;
        } else {
          sum += (float)0.40654969;
        }
      } else {
        if ( (data[7].fvalue < 0.05229881)) {
          sum += (float)0.071180515;
        } else {
          sum += (float)-0.28503615;
        }
      }
    } else {
      sum += (float)0.79505587;
    }
  } else {
    if ( (data[5].fvalue < 3.1849537)) {
      if ( (data[7].fvalue < 0.5876379)) {
        if ( (data[7].fvalue < 0.47189456)) {
          if ( (data[5].fvalue < 1.6294349)) {
            if ( (data[7].fvalue < 0.26883161)) {
              sum += (float)0.0004461479;
            } else {
              sum += (float)4.3543534;
            }
          } else {
            if ( (data[5].fvalue < 1.6295297)) {
              sum += (float)-0.62784481;
            } else {
              sum += (float)0.0014422153;
            }
          }
        } else {
          if ( (data[5].fvalue < 2.2236159)) {
            sum += (float)4.6999993;
          } else {
            if ( (data[5].fvalue < 2.4659452)) {
              sum += (float)0.64783496;
            } else {
              sum += (float)0.0057569249;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 2.8864765)) {
          sum += (float)2.9616945;
        } else {
          if ( (data[5].fvalue < 3.1240087)) {
            sum += (float)0.12510201;
          } else {
            sum += (float)0.73223722;
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.28769606)) {
        if ( (data[6].fvalue < 0.33928922)) {
          if ( (data[6].fvalue < 0.00016918944)) {
            if ( (data[5].fvalue < 22.033638)) {
              sum += (float)0.0024845954;
            } else {
              sum += (float)-0.0051150187;
            }
          } else {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)-0.00016983051;
            } else {
              sum += (float)-0.003966717;
            }
          }
        } else {
          if ( (data[5].fvalue < 17.169758)) {
            if ( (data[6].fvalue < 1.6414874)) {
              sum += (float)0.0055265459;
            } else {
              sum += (float)0.034905516;
            }
          } else {
            if ( (data[7].fvalue < 0.20094492)) {
              sum += (float)-0.001375663;
            } else {
              sum += (float)-0.016752591;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 3.1861229)) {
          if ( (data[7].fvalue < 0.45283943)) {
            if ( (data[5].fvalue < 3.1851149)) {
              sum += (float)-0.048498996;
            } else {
              sum += (float)0.0038867309;
            }
          } else {
            sum += (float)-0.49259454;
          }
        } else {
          if ( (data[5].fvalue < 9.3560619)) {
            if ( (data[6].fvalue < 1.1942178)) {
              sum += (float)-0.0035411776;
            } else {
              sum += (float)0.020592265;
            }
          } else {
            if ( (data[6].fvalue < 0.73639369)) {
              sum += (float)-0.0086412523;
            } else {
              sum += (float)-0.025549;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.2699394)) {
    if ( (data[5].fvalue < 1.2690272)) {
      if ( (data[7].fvalue < 0.064642295)) {
        if ( (data[0].fvalue < 0.5)) {
          sum += (float)-0.081600234;
        } else {
          if ( (data[5].fvalue < 1.2529188)) {
            sum += (float)0.33672428;
          } else {
            if ( (data[7].fvalue < 0.05438396)) {
              sum += (float)0.059222832;
            } else {
              sum += (float)-0.045267854;
            }
          }
        }
      } else {
        sum += (float)-0.28339815;
      }
    } else {
      sum += (float)0.8353821;
    }
  } else {
    if ( (data[5].fvalue < 5.0606737)) {
      if ( (data[7].fvalue < 0.67347932)) {
        if ( (data[6].fvalue < 0.83103406)) {
          if ( (data[7].fvalue < 0.59432536)) {
            if ( (data[7].fvalue < 0.59283328)) {
              sum += (float)0.0010288357;
            } else {
              sum += (float)0.40255073;
            }
          } else {
            if ( (data[5].fvalue < 3.4915159)) {
              sum += (float)-0.2054306;
            } else {
              sum += (float)-0.0073268167;
            }
          }
        } else {
          if ( (data[5].fvalue < 2.2707076)) {
            sum += (float)1.4154514;
          } else {
            if ( (data[6].fvalue < 0.83158052)) {
              sum += (float)-0.36845341;
            } else {
              sum += (float)0.012862756;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 3.6787772)) {
          sum += (float)1.5951102;
        } else {
          if ( (data[5].fvalue < 3.8814867)) {
            sum += (float)0.055737022;
          } else {
            if ( (data[6].fvalue < 0.33866346)) {
              sum += (float)-0.010542288;
            } else {
              sum += (float)0.014127941;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.18380544)) {
        if ( (data[6].fvalue < 0.65551829)) {
          if ( (data[5].fvalue < 22.211227)) {
            if ( (data[6].fvalue < 9.9426266e-05)) {
              sum += (float)0.0013895208;
            } else {
              sum += (float)-0.0014035577;
            }
          } else {
            if ( (data[6].fvalue < 0.00059109495)) {
              sum += (float)-0.0038813176;
            } else {
              sum += (float)-0.0093182018;
            }
          }
        } else {
          if ( (data[5].fvalue < 19.870613)) {
            if ( (data[6].fvalue < 1.0154891)) {
              sum += (float)0.009267306;
            } else {
              sum += (float)0.021995774;
            }
          } else {
            if ( (data[7].fvalue < 0.056242093)) {
              sum += (float)0.014092457;
            } else {
              sum += (float)-0.0091749411;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 1.9260978)) {
          if ( (data[6].fvalue < 0.0018456725)) {
            if ( (data[7].fvalue < 0.47060394)) {
              sum += (float)0.0011657708;
            } else {
              sum += (float)-0.011479732;
            }
          } else {
            if ( (data[5].fvalue < 10.736973)) {
              sum += (float)-0.0053770803;
            } else {
              sum += (float)-0.010206537;
            }
          }
        } else {
          if ( (data[5].fvalue < 8.1300373)) {
            if ( (data[5].fvalue < 6.0912895)) {
              sum += (float)0.084269717;
            } else {
              sum += (float)0.040208437;
            }
          } else {
            if ( (data[7].fvalue < 0.34099025)) {
              sum += (float)0.017371068;
            } else {
              sum += (float)-0.012650329;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.2699394)) {
    if ( (data[7].fvalue < 0.056684881)) {
      if ( (data[7].fvalue < 0.042299632)) {
        sum += (float)-0.026071785;
      } else {
        sum += (float)-0.30142361;
      }
    } else {
      if ( (data[5].fvalue < 1.2610617)) {
        if ( (data[7].fvalue < 0.064642295)) {
          sum += (float)0.20027979;
        } else {
          sum += (float)-0.23661958;
        }
      } else {
        sum += (float)0.98490852;
      }
    }
  } else {
    if ( (data[5].fvalue < 1.5704589)) {
      if ( (data[7].fvalue < 0.23820207)) {
        if ( (data[7].fvalue < 0.20273595)) {
          if ( (data[7].fvalue < 0.16029719)) {
            if ( (data[5].fvalue < 1.3533756)) {
              sum += (float)0.029259898;
            } else {
              sum += (float)-0.0078768702;
            }
          } else {
            if ( (data[5].fvalue < 1.4753293)) {
              sum += (float)0.57755631;
            } else {
              sum += (float)0.0066133533;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.5321378)) {
            sum += (float)0.63037235;
          } else {
            if ( (data[6].fvalue < 0.0075831907)) {
              sum += (float)0.20744611;
            } else {
              sum += (float)0.057580695;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.017013244)) {
          sum += (float)2.7882667;
        } else {
          sum += (float)0.91767138;
        }
      }
    } else {
      if ( (data[5].fvalue < 1.6294262)) {
        if ( (data[5].fvalue < 1.6292157)) {
          if ( (data[7].fvalue < 0.270248)) {
            if ( (data[7].fvalue < 0.23643884)) {
              sum += (float)-0.0067870445;
            } else {
              sum += (float)-0.16063748;
            }
          } else {
            sum += (float)-1.1210334;
          }
        } else {
          sum += (float)-1.3456899;
        }
      } else {
        if ( (data[5].fvalue < 1.6294806)) {
          sum += (float)6.2812562;
        } else {
          if ( (data[6].fvalue < 0.056350313)) {
            if ( (data[6].fvalue < 0.00016897582)) {
              sum += (float)0.00087625731;
            } else {
              sum += (float)-0.0021378733;
            }
          } else {
            if ( (data[6].fvalue < 0.05643576)) {
              sum += (float)0.14953576;
            } else {
              sum += (float)0.0012595549;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.3044219)) {
    if ( (data[7].fvalue < 0.10722077)) {
      if ( (data[6].fvalue < 0.010796081)) {
        if ( (data[5].fvalue < 1.2391868)) {
          sum += (float)0.1545653;
        } else {
          if ( (data[5].fvalue < 1.2741427)) {
            if ( (data[7].fvalue < 0.050837904)) {
              sum += (float)0.075380288;
            } else {
              sum += (float)-0.25453442;
            }
          } else {
            if ( (data[5].fvalue < 1.2993735)) {
              sum += (float)0.0005342376;
            } else {
              sum += (float)-0.10429204;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.022985414)) {
          sum += (float)0.27096695;
        } else {
          sum += (float)0.031547952;
        }
      }
    } else {
      sum += (float)1.2737752;
    }
  } else {
    if ( (data[5].fvalue < 2.5487211)) {
      if ( (data[7].fvalue < 0.50764978)) {
        if ( (data[7].fvalue < 0.4718765)) {
          if ( (data[7].fvalue < 0.4120453)) {
            if ( (data[7].fvalue < 0.2934067)) {
              sum += (float)0.00013945908;
            } else {
              sum += (float)0.0067914692;
            }
          } else {
            if ( (data[5].fvalue < 2.0670996)) {
              sum += (float)2.0352676;
            } else {
              sum += (float)0.01566509;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.47228789)) {
            sum += (float)4.09692;
          } else {
            if ( (data[7].fvalue < 0.48954201)) {
              sum += (float)-0.14209092;
            } else {
              sum += (float)0.45195231;
            }
          }
        }
      } else {
        if ( (data[1].fvalue < 0.5)) {
          if ( (data[5].fvalue < 2.4996507)) {
            sum += (float)2.1019449;
          } else {
            sum += (float)0.76420808;
          }
        } else {
          sum += (float)0.53780651;
        }
      }
    } else {
      if ( (data[7].fvalue < 0.22913894)) {
        if ( (data[6].fvalue < 0.22535668)) {
          if ( (data[2].fvalue < 0.5)) {
            if ( (data[6].fvalue < 0.056488983)) {
              sum += (float)0.00017314669;
            } else {
              sum += (float)0.0029846975;
            }
          } else {
            if ( (data[6].fvalue < 0.00021276856)) {
              sum += (float)0.0007574425;
            } else {
              sum += (float)-0.0022620345;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.7124994)) {
            if ( (data[6].fvalue < 0.44458282)) {
              sum += (float)0.0076367864;
            } else {
              sum += (float)0.01684707;
            }
          } else {
            if ( (data[7].fvalue < 0.16887477)) {
              sum += (float)0.0039358716;
            } else {
              sum += (float)-0.001326841;
            }
          }
        }
      } else {
        if ( (data[3].fvalue < 0.5)) {
          if ( (data[6].fvalue < 0.45201308)) {
            if ( (data[6].fvalue < 0.053218506)) {
              sum += (float)-0.00055010302;
            } else {
              sum += (float)-0.0051434608;
            }
          } else {
            if ( (data[5].fvalue < 10.947884)) {
              sum += (float)0.0018306975;
            } else {
              sum += (float)-0.010418968;
            }
          }
        } else {
          if ( (data[7].fvalue < 0.41236359)) {
            if ( (data[7].fvalue < 0.30772877)) {
              sum += (float)-0.0067689782;
            } else {
              sum += (float)-0.012309711;
            }
          } else {
            if ( (data[7].fvalue < 0.47119027)) {
              sum += (float)-0.019993475;
            } else {
              sum += (float)-0.029554013;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.2699394)) {
    if ( (data[7].fvalue < 0.064642295)) {
      if ( (data[5].fvalue < 1.2620591)) {
        if ( (data[0].fvalue < 0.5)) {
          sum += (float)-0.088653333;
        } else {
          if ( (data[7].fvalue < 0.058770031)) {
            sum += (float)0.26779574;
          } else {
            sum += (float)0.020479219;
          }
        }
      } else {
        sum += (float)-0.2454402;
      }
    } else {
      sum += (float)0.50621718;
    }
  } else {
    if ( (data[5].fvalue < 1.7337652)) {
      if ( (data[7].fvalue < 0.31293333)) {
        if ( (data[7].fvalue < 0.29237401)) {
          if ( (data[7].fvalue < 0.25831646)) {
            if ( (data[7].fvalue < 0.23906374)) {
              sum += (float)-0.0023003777;
            } else {
              sum += (float)-0.083472833;
            }
          } else {
            if ( (data[5].fvalue < 1.6099322)) {
              sum += (float)0.83308971;
            } else {
              sum += (float)0.066486172;
            }
          }
        } else {
          if ( (data[5].fvalue < 1.7256122)) {
            if ( (data[6].fvalue < 0.032954894)) {
              sum += (float)1.3201389;
            } else {
              sum += (float)0.58694106;
            }
          } else {
            sum += (float)0.38057697;
          }
        }
      } else {
        sum += (float)5.624917;
      }
    } else {
      if ( (data[7].fvalue < 0.20468341)) {
        if ( (data[6].fvalue < 0.056959689)) {
          if ( (data[6].fvalue < 0.00016897582)) {
            if ( (data[5].fvalue < 1.9296618)) {
              sum += (float)-0.0027429294;
            } else {
              sum += (float)0.00077267893;
            }
          } else {
            if ( (data[6].fvalue < 0.03425131)) {
              sum += (float)-0.0027416395;
            } else {
              sum += (float)0.00015443697;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.6597438)) {
            if ( (data[6].fvalue < 0.26461142)) {
              sum += (float)0.0037165012;
            } else {
              sum += (float)0.008760198;
            }
          } else {
            if ( (data[6].fvalue < 0.22684997)) {
              sum += (float)-0.0014776774;
            } else {
              sum += (float)0.002258718;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 2.1599226)) {
          if ( (data[7].fvalue < 0.45767975)) {
            if ( (data[7].fvalue < 0.4335261)) {
              sum += (float)0.0011720922;
            } else {
              sum += (float)0.9636538;
            }
          } else {
            sum += (float)4.6391983;
          }
        } else {
          if ( (data[4].fvalue < 0.5)) {
            if ( (data[6].fvalue < 0.61945176)) {
              sum += (float)-0.0022379856;
            } else {
              sum += (float)0.0022180884;
            }
          } else {
            if ( (data[6].fvalue < 0.77219951)) {
              sum += (float)0.0041935742;
            } else {
              sum += (float)-0.029252866;
            }
          }
        }
      }
    }
  }
  if ( (data[5].fvalue < 1.3044219)) {
    if ( (data[7].fvalue < 0.10722077)) {
      if ( (data[6].fvalue < 0.010796081)) {
        if ( (data[7].fvalue < 0.075105011)) {
          if ( (data[7].fvalue < 0.056684881)) {
            if ( (data[7].fvalue < 0.050837904)) {
              sum += (float)-0.020622274;
            } else {
              sum += (float)-0.20304014;
            }
          } else {
            if ( (data[5].fvalue < 1.2610617)) {
              sum += (float)0.20947103;
            } else {
              sum += (float)-0.012196644;
            }
          }
        } else {
          sum += (float)-0.29513034;
        }
      } else {
        if ( (data[5].fvalue < 1.299209)) {
          sum += (float)-0.0082670199;
        } else {
          sum += (float)0.22428244;
        }
      }
    } else {
      sum += (float)1.0059533;
    }
  } else {
    if ( (data[5].fvalue < 7.3304625)) {
      if ( (data[7].fvalue < 0.67347932)) {
        if ( (data[6].fvalue < 1.4244461)) {
          if ( (data[7].fvalue < 0.59291744)) {
            if ( (data[7].fvalue < 0.59283328)) {
              sum += (float)0.00040636826;
            } else {
              sum += (float)2.3893051;
            }
          } else {
            if ( (data[2].fvalue < 0.5)) {
              sum += (float)-0.01430817;
            } else {
              sum += (float)-0.32791966;
            }
          }
        } else {
          if ( (data[5].fvalue < 3.1702304)) {
            if ( (data[5].fvalue < 3.1209693)) {
              sum += (float)-0.10057022;
            } else {
              sum += (float)0.61967587;
            }
          } else {
            if ( (data[7].fvalue < 0.61064148)) {
              sum += (float)0.025559749;
            } else {
              sum += (float)-0.06063791;
            }
          }
        }
      } else {
        if ( (data[5].fvalue < 3.6787772)) {
          sum += (float)1.3567619;
        } else {
          if ( (data[6].fvalue < 0.33591664)) {
            if ( (data[6].fvalue < 0.12201602)) {
              sum += (float)0.0029856658;
            } else {
              sum += (float)-0.024837548;
            }
          } else {
            if ( (data[6].fvalue < 0.77282649)) {
              sum += (float)0.027894547;
            } else {
              sum += (float)-0.0064265095;
            }
          }
        }
      }
    } else {
      if ( (data[7].fvalue < 0.41181886)) {
        if ( (data[6].fvalue < 1.801424)) {
          if ( (data[5].fvalue < 22.416372)) {
            if ( (data[7].fvalue < 0.073814541)) {
              sum += (float)0.00045964794;
            } else {
              sum += (float)-0.0025434219;
            }
          } else {
            if ( (data[6].fvalue < 1.6109473)) {
              sum += (float)-0.005775718;
            } else {
              sum += (float)-0.04036618;
            }
          }
        } else {
          if ( (data[5].fvalue < 17.175795)) {
            if ( (data[7].fvalue < 0.21549311)) {
              sum += (float)0.039890658;
            } else {
              sum += (float)0.014549093;
            }
          } else {
            if ( (data[5].fvalue < 40.191257)) {
              sum += (float)0.0037027781;
            } else {
              sum += (float)-0.03627646;
            }
          }
        }
      } else {
        if ( (data[6].fvalue < 0.88496137)) {
          if ( (data[6].fvalue < 0.87418461)) {
            if ( (data[6].fvalue < 0.36164498)) {
              sum += (float)-0.0075777224;
            } else {
              sum += (float)0.00035046533;
            }
          } else {
            if ( (data[5].fvalue < 15.607719)) {
              sum += (float)0.012757015;
            } else {
              sum += (float)0.073237397;
            }
          }
        } else {
          if ( (data[5].fvalue < 8.9460068)) {
            if ( (data[6].fvalue < 1.5591612)) {
              sum += (float)-0.019441774;
            } else {
              sum += (float)0.044504795;
            }
          } else {
            if ( (data[7].fvalue < 0.64252734)) {
              sum += (float)-0.02960179;
            } else {
              sum += (float)-0.0052317781;
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
