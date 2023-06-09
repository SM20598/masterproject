//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// wcrl_3_2.cpp
//
// Code generation for function 'wcrl_3_2'
//

// Include files
#include "wcrl_3_2.h"
#include "limits.h"
#include <cmath>

// Function Declarations
static double rt_powd_snf(double u0, double u1);

// Function Definitions
static double rt_powd_snf(double u0, double u1)
{
  double y;
  if (std::isnan(u0) || std::isnan(u1)) {
    y = std::numeric_limits<double>::quiet_NaN();
  } else {
    double d;
    double d1;
    d = std::abs(u0);
    d1 = std::abs(u1);
    if (std::isinf(u1)) {
      if (d == 1.0) {
        y = 1.0;
      } else if (d > 1.0) {
        if (u1 > 0.0) {
          y = std::numeric_limits<double>::infinity();
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = std::numeric_limits<double>::infinity();
      }
    } else if (d1 == 0.0) {
      y = 1.0;
    } else if (d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = std::sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > std::floor(u1))) {
      y = std::numeric_limits<double>::quiet_NaN();
    } else {
      y = std::pow(u0, u1);
    }
  }
  return y;
}

void wcrl_3_2(double l, const double in2[12], double wcrl[9])
{
  double b_t148_tmp;
  double b_t154_tmp;
  double b_t236_tmp;
  double b_t277_tmp;
  double b_t281_tmp;
  double c_t281_tmp;
  double d_t281_tmp;
  double e_t281_tmp;
  double f_t281_tmp;
  double g_t281_tmp;
  double t10;
  double t108;
  double t108_tmp;
  double t109;
  double t109_tmp;
  double t11;
  double t110;
  double t111;
  double t111_tmp;
  double t112;
  double t112_tmp;
  double t12;
  double t13;
  double t14;
  double t147;
  double t147_tmp;
  double t147_tmp_tmp;
  double t148;
  double t148_tmp;
  double t148_tmp_tmp;
  double t15;
  double t153;
  double t153_tmp;
  double t154;
  double t154_tmp;
  double t159;
  double t16;
  double t160;
  double t161;
  double t162;
  double t163;
  double t164;
  double t164_tmp;
  double t17;
  double t173;
  double t173_tmp;
  double t174;
  double t177;
  double t177_tmp;
  double t178;
  double t197;
  double t198;
  double t2;
  double t20;
  double t21;
  double t22;
  double t221;
  double t222;
  double t23;
  double t235;
  double t236;
  double t236_tmp;
  double t237;
  double t238;
  double t238_tmp;
  double t26;
  double t27;
  double t271;
  double t272;
  double t273;
  double t274;
  double t275;
  double t276;
  double t276_tmp;
  double t277;
  double t277_tmp;
  double t278;
  double t279;
  double t28;
  double t280;
  double t281;
  double t281_tmp;
  double t282;
  double t282_tmp;
  double t284;
  double t285;
  double t29;
  double t3;
  double t4;
  double t40;
  double t41;
  double t42;
  double t43;
  double t44;
  double t46;
  double t46_tmp;
  double t47;
  double t5;
  double t52;
  double t53;
  double t6;
  double t7;
  double t72;
  double t72_tmp;
  double t73;
  double t73_tmp;
  double t74;
  double t74_tmp;
  double t8;
  double t83;
  double t83_tmp;
  double t84;
  double t85;
  double t9;
  // WCRL_3_2
  //     WCRL = WCRL_3_2(L,IN2)
  //     This function was generated by the Symbolic Math Toolbox version 9.2.
  //     07-Apr-2023 15:24:30
  t2 = in2[0] * in2[0];
  t3 = in2[1] * in2[1];
  t4 = in2[3] * in2[3];
  t5 = in2[4] * in2[4];
  t6 = in2[0] * in2[6] * 2.0;
  t7 = in2[1] * in2[7] * 2.0;
  t8 = in2[3] * in2[9] * 2.0;
  t9 = in2[4] * in2[10] * 2.0;
  t10 = t2 + t4;
  t11 = t3 + t5;
  t12 = t6 + t8;
  t13 = t7 + t9;
  t14 = 1.0 / t10;
  t16 = 1.0 / t11;
  t10 = std::sqrt(t10);
  t11 = std::sqrt(t11);
  t15 = t14 * t14;
  t17 = t16 * t16;
  t20 = 1.0 / t10;
  t22 = 1.0 / t11;
  t10 *= l;
  t11 *= l;
  t21 = rt_powd_snf(t20, 3.0);
  t23 = rt_powd_snf(t22, 3.0);
  t26 = std::cos(t10);
  t27 = std::cos(t11);
  t28 = std::sin(t10);
  t29 = std::sin(t11);
  t44 = t26 * t27;
  t46_tmp = in2[0] * t20;
  t46 = t46_tmp * t27 * t28;
  t47 = in2[1] * t22 * t26 * t29;
  t52 = t20 * t27 * t28 * in2[3];
  t53 = t22 * t26 * t29 * in2[4];
  t72_tmp = in2[0] * in2[1];
  t72 = t72_tmp * t20 * t22 * t28 * t29;
  t73_tmp = in2[0] * in2[7];
  t73 = t73_tmp * t20 * t22 * t28 * t29;
  t74_tmp = in2[1] * in2[6];
  t74 = t74_tmp * t20 * t22 * t28 * t29;
  t83_tmp = in2[9] * t20;
  t83 = t83_tmp * t22 * t28 * t29 * in2[4];
  t84 = in2[10] * t20 * t22 * t28 * t29 * in2[3];
  t85 = t20 * t22 * t28 * t29 * in2[3] * in2[4];
  t10 = t72_tmp * t12;
  t163 = t10 * t21 * t22 * t28 * t29 / 2.0;
  t164_tmp = t72_tmp * t13;
  t164 = t164_tmp * t20 * t23 * t28 * t29 / 2.0;
  t173_tmp = t12 * t21;
  t173 = t173_tmp * t22 * t28 * t29 * in2[3] * in2[4] / 2.0;
  t174 = t13 * t20 * t23 * t28 * t29 * in2[3] * in2[4] / 2.0;
  t40 = t4 + t2 * t26;
  t41 = t2 + t4 * t26;
  t42 = t5 + t3 * t27;
  t43 = t3 + t5 * t27;
  t108_tmp = t72_tmp * in2[9] * t14;
  t108 = t108_tmp * t16 * (t26 - 1.0) * (t27 - 1.0) * in2[4];
  t109_tmp = t72_tmp * in2[10];
  t109 = t109_tmp * t14 * t16 * (t26 - 1.0) * (t27 - 1.0) * in2[3];
  t284 = t72_tmp * t14;
  t110 = t284 * t16 * (t26 - 1.0) * (t27 - 1.0) * in2[3] * in2[4];
  t111_tmp = t73_tmp * t14;
  t111 = t111_tmp * t16 * (t26 - 1.0) * (t27 - 1.0) * in2[3] * in2[4];
  t112_tmp = t74_tmp * t14;
  t112 = t112_tmp * t16 * (t26 - 1.0) * (t27 - 1.0) * in2[3] * in2[4];
  t147_tmp_tmp = in2[0] * l;
  t282 = t147_tmp_tmp * t12;
  t147_tmp = t282 * t14;
  t147 = t147_tmp * t47 / 2.0;
  t148_tmp_tmp = in2[1] * l;
  t148_tmp = t148_tmp_tmp * t13;
  b_t148_tmp = t148_tmp * t16;
  t148 = b_t148_tmp * t46 / 2.0;
  t285 = l * t12;
  t153_tmp = t285 * t14;
  t153 = t153_tmp * t53 * in2[3] / 2.0;
  t154_tmp = l * t13;
  b_t154_tmp = t154_tmp * t16;
  t154 = b_t154_tmp * t52 * in2[4] / 2.0;
  t177_tmp = t10 * t15;
  t177 = t177_tmp * t16 * (t26 - 1.0) * (t27 - 1.0) * in2[3] * in2[4];
  t11 = t164_tmp * t14;
  t178 = t11 * t17 * (t26 - 1.0) * (t27 - 1.0) * in2[3] * in2[4];
  t197 = t10 * t16 * t21 * t28 * (t27 - 1.0) * in2[4] / 2.0;
  t198 = t11 * t23 * t29 * (t26 - 1.0) * in2[3] / 2.0;
  t159 = (t8 + t6 * t26) - l * t2 * t12 * t20 * t28 / 2.0;
  t160 = (t9 + t7 * t27) - l * t3 * t13 * t22 * t29 / 2.0;
  t161 = (t6 + t8 * t26) - l * t4 * t12 * t20 * t28 / 2.0;
  t162 = (t7 + t9 * t27) - l * t5 * t13 * t22 * t29 / 2.0;
  t221 = l * t197 * in2[3];
  t222 = l * t198 * in2[4];
  t2 = in2[0] * t12;
  t235 = t2 * t16 * t21 * t28 * t42 / 2.0;
  t236_tmp = in2[1] * t13;
  b_t236_tmp = t236_tmp * t14;
  t236 = b_t236_tmp * t23 * t29 * t40 / 2.0;
  t237 = t12 * t16 * t21 * t28 * t43 * in2[3] / 2.0;
  t238_tmp = t13 * t14;
  t238 = t238_tmp * t23 * t29 * t41 * in2[4] / 2.0;
  t271 = (-t44 + t72) + t85;
  t9 = t285 * t20;
  t280 = ((((((((((((t9 * t27 * t28 / 2.0 + t154_tmp * t22 * t26 * t29 / 2.0) +
                    t73) +
                   t74) +
                  t83) +
                 t84) +
                t147) +
               t148) +
              t153) +
             t154) -
            t163) -
           t164) -
          t173) -
         t174;
  t10 = in2[0] * t14;
  t11 = in2[1] * t14;
  t3 = t11 * t22 * t29;
  t272 = (t46 + t10 * t22 * t29 * (t26 - 1.0) * in2[3] * in2[4]) + t3 * t40;
  t4 = in2[0] * t16 * t20 * t28;
  t273 = (t47 + in2[1] * t16 * t20 * t28 * (t27 - 1.0) * in2[3] * in2[4]) +
         t4 * t42;
  t8 = t14 * t22 * t29;
  t274 = (t52 + t284 * t22 * t29 * (t26 - 1.0) * in2[3]) + t8 * t41 * in2[4];
  t5 = t16 * t20 * t28;
  t275 = (t53 + t72_tmp * t16 * t20 * t28 * (t27 - 1.0) * in2[4]) +
         t5 * t43 * in2[3];
  t276_tmp = t14 * t16;
  t285 = t276_tmp * t40;
  t276 = (-t72 + t110) + t285 * t42;
  t277_tmp = t10 * t16 * (t26 - 1.0);
  b_t277_tmp = t11 * t16 * (t27 - 1.0);
  t277 = (-(t46_tmp * t22 * t28 * t29 * in2[4]) + t277_tmp * t43 * in2[3]) +
         b_t277_tmp * t40 * in2[4];
  t278 =
      (-(in2[1] * t20 * t22 * t28 * t29 * in2[3]) + t277_tmp * t42 * in2[3]) +
      b_t277_tmp * t41 * in2[4];
  t7 = t276_tmp * t41;
  t279 = (-t85 + t110) + t7 * t43;
  t10 = t147_tmp_tmp * t13;
  t281_tmp = in2[1] * t12;
  b_t281_tmp = in2[0] * t13;
  c_t281_tmp = in2[0] * in2[10];
  d_t281_tmp = in2[6] * t20;
  t6 = in2[0] * in2[9] * t14;
  t46_tmp = in2[6] * t14;
  t85 = in2[7] * t14;
  e_t281_tmp = t2 * t21;
  t110 = t2 * t15;
  f_t281_tmp = t281_tmp * t15;
  g_t281_tmp = b_t281_tmp * t14;
  t281 = ((((((((((((((d_t281_tmp * t27 * t28 + t147_tmp * t44 / 2.0) -
                      e_t281_tmp * t27 * t28 / 2.0) +
                     t6 * t22 * t29 * (t26 - 1.0) * in2[4]) +
                    c_t281_tmp * t14 * t22 * t29 * (t26 - 1.0) * in2[3]) +
                   t46_tmp * t22 * t29 * (t26 - 1.0) * in2[3] * in2[4]) +
                  t85 * t22 * t29 * t40) +
                 t10 * t14 * t16 * t27 * (t26 - 1.0) * in2[3] * in2[4] / 2.0) -
                t110 * t22 * t29 * (t26 - 1.0) * in2[3] * in2[4]) -
               t10 * t20 * t22 * t28 * t29 / 2.0) -
              g_t281_tmp * t23 * t29 * (t26 - 1.0) * in2[3] * in2[4] / 2.0) +
             t282 * t21 * t22 * t28 * t29 * in2[3] * in2[4] * -0.5) +
            t148_tmp * t14 * t16 * t27 * t40 / 2.0) -
           f_t281_tmp * t22 * t29 * t40) -
          t236) +
         t3 * t159;
  t10 = t148_tmp_tmp * t12;
  t3 = in2[1] * in2[10];
  t282_tmp = in2[1] * in2[9];
  t282 =
      ((((((((((((((in2[7] * t22 * t26 * t29 + b_t148_tmp * t44 / 2.0) -
                   t236_tmp * t23 * t26 * t29 / 2.0) +
                  t282_tmp * t16 * t20 * t28 * (t27 - 1.0) * in2[4]) +
                 t3 * t16 * t20 * t28 * (t27 - 1.0) * in2[3]) +
                in2[7] * t16 * t20 * t28 * (t27 - 1.0) * in2[3] * in2[4]) +
               in2[6] * t16 * t20 * t28 * t42) +
              t10 * t14 * t16 * t26 * (t27 - 1.0) * in2[3] * in2[4] / 2.0) -
             t236_tmp * t17 * t20 * t28 * (t27 - 1.0) * in2[3] * in2[4]) -
            t10 * t20 * t22 * t28 * t29 / 2.0) -
           t281_tmp * t16 * t21 * t28 * (t27 - 1.0) * in2[3] * in2[4] / 2.0) +
          t148_tmp * t20 * t23 * t28 * t29 * in2[3] * in2[4] * -0.5) +
         t147_tmp * t16 * t26 * t42 / 2.0) -
        b_t281_tmp * t17 * t20 * t28 * t42) -
       t235) +
      t4 * t160;
  t11 = t72_tmp * l;
  t2 = t11 * t12;
  t11 *= t13;
  t10 = t12 * t15;
  t72 = ((((((((((((((t83_tmp * t27 * t28 + t153_tmp * t44 * in2[3] / 2.0) -
                     t173_tmp * t27 * t28 * in2[3] / 2.0) +
                    t108_tmp * t22 * t29 * (t26 - 1.0)) +
                   t111_tmp * t22 * t29 * (t26 - 1.0) * in2[3]) +
                  t112_tmp * t22 * t29 * (t26 - 1.0) * in2[3]) +
                 in2[10] * t14 * t22 * t29 * t41) -
                t177_tmp * t22 * t29 * (t26 - 1.0) * in2[3]) -
               t154_tmp * t20 * t22 * t28 * t29 * in2[3] / 2.0) +
              t11 * t14 * t16 * t27 * (t26 - 1.0) * in2[3] / 2.0) -
             t198) +
            t2 * t21 * t22 * t28 * t29 * in2[3] * -0.5) +
           t154_tmp * t14 * t16 * t27 * t41 * in2[4] / 2.0) -
          t10 * t22 * t29 * t41 * in2[4]) -
         t238) +
        t8 * t161 * in2[4];
  t284 = ((((((((((((((in2[10] * t22 * t26 * t29 +
                       b_t154_tmp * t44 * in2[4] / 2.0) -
                      t13 * t23 * t26 * t29 * in2[4] / 2.0) +
                     t109_tmp * t16 * t20 * t28 * (t27 - 1.0)) +
                    t73_tmp * t16 * t20 * t28 * (t27 - 1.0) * in2[4]) +
                   t74_tmp * t16 * t20 * t28 * (t27 - 1.0) * in2[4]) +
                  in2[9] * t16 * t20 * t28 * t43) -
                 t164_tmp * t17 * t20 * t28 * (t27 - 1.0) * in2[4]) -
                t9 * t22 * t28 * t29 * in2[4] / 2.0) +
               t2 * t14 * t16 * t26 * (t27 - 1.0) * in2[4] / 2.0) -
              t197) +
             t11 * t20 * t23 * t28 * t29 * in2[4] * -0.5) +
            t153_tmp * t16 * t26 * t43 * in2[3] / 2.0) -
           t13 * t17 * t20 * t28 * t43 * in2[3]) -
          t237) +
         t5 * t162 * in2[3];
  t11 = t10 * t16;
  t10 = t238_tmp * t17;
  t285 = ((((((((((((((((t73 + t74) - t108) - t109) - t111) - t112) + t147) +
                   t148) +
                  t177) +
                 t178) -
                t163) -
               t164) +
              t221) +
             t222) +
            t11 * t40 * t42) +
           t10 * t40 * t42) -
          t276_tmp * t42 * t159) -
         t285 * t160;
  t9 = ((((((((((((((((t83 + t84) - t108) - t109) - t111) - t112) + t153) +
                 t154) +
                t177) +
               t178) -
              t173) -
             t174) +
            t221) +
           t222) +
          t11 * t41 * t43) +
         t10 * t41 * t43) -
        t276_tmp * t43 * t161) -
       t7 * t162;
  t7 = t6 * t16 * (t26 - 1.0);
  t5 = t3 * t14 * t16 * (t27 - 1.0);
  t8 = t46_tmp * t16 * (t26 - 1.0);
  t6 = t85 * t16 * (t27 - 1.0);
  t4 = t110 * t16 * (t26 - 1.0);
  t3 = f_t281_tmp * t16 * (t27 - 1.0);
  t2 = g_t281_tmp * t17 * (t26 - 1.0);
  t10 = b_t236_tmp * t17 * (t27 - 1.0);
  t11 = ((((((((((((((((c_t281_tmp * t20 * t22 * t28 * t29 +
                        d_t281_tmp * t22 * t28 * t29 * in2[4]) -
                       t7 * t43) -
                      t5 * t40) -
                     t8 * t43 * in2[3]) -
                    t6 * t40 * in2[4]) +
                   t147_tmp * t53 / 2.0) +
                  b_t154_tmp * t46 * in2[4] / 2.0) -
                 e_t281_tmp * t22 * t28 * t29 * in2[4] / 2.0) -
                b_t281_tmp * t20 * t23 * t28 * t29 * in2[4] / 2.0) +
               t4 * t43 * in2[3]) +
              t3 * t40 * in2[4]) +
             t2 * t43 * in2[3]) +
            t10 * t40 * in2[4]) +
           t147_tmp_tmp * t237) +
          l * t236 * in2[4]) -
         b_t277_tmp * t159 * in2[4]) -
        t277_tmp * t162 * in2[3];
  t10 = ((((((((((((((((t282_tmp * t20 * t22 * t28 * t29 +
                        in2[7] * t20 * t22 * t28 * t29 * in2[3]) -
                       t7 * t42) -
                      t5 * t41) -
                     t8 * t42 * in2[3]) -
                    t6 * t41 * in2[4]) +
                   t153_tmp * t47 * in2[3] / 2.0) +
                  b_t148_tmp * t52 / 2.0) -
                 t281_tmp * t21 * t22 * t28 * t29 * in2[3] / 2.0) -
                t236_tmp * t20 * t23 * t28 * t29 * in2[3] / 2.0) +
               t4 * t42 * in2[3]) +
              t3 * t41 * in2[4]) +
             t2 * t42 * in2[3]) +
            t10 * t41 * in2[4]) +
           l * t235 * in2[3]) +
          t148_tmp_tmp * t238) -
         t277_tmp * t160 * in2[3]) -
        b_t277_tmp * t161 * in2[4];
  wcrl[0] = (t272 * t281 - t276 * t285) - t277 * t11;
  wcrl[1] = (t272 * t72 - t277 * t9) - t276 * t10;
  wcrl[2] = (-t272 * t280 - t276 * t282) - t277 * t284;
  wcrl[3] = (t274 * t281 - t278 * t285) - t279 * t11;
  wcrl[4] = (t274 * t72 - t279 * t9) - t278 * t10;
  wcrl[5] = (-t274 * t280 - t278 * t282) - t279 * t284;
  wcrl[6] = (-t271 * t281 + t273 * t285) + t275 * t11;
  wcrl[7] = (-t271 * t72 + t273 * t10) + t275 * t9;
  wcrl[8] = (t271 * t280 + t273 * t282) + t275 * t284;
}

// End of code generation (wcrl_3_2.cpp)
