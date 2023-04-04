//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// wcrl_3_3.cpp
//
// Code generation for function 'wcrl_3_3'
//

// Include files
#include "wcrl_3_3.h"
#include "limits"
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

void wcrl_3_3(double l, const double in2[12], double wcrl[9])
{
  double b_t174_tmp_tmp;
  double b_t175_tmp;
  double b_t265_tmp;
  double b_t316_tmp;
  double b_t317_tmp;
  double b_t325_tmp;
  double b_t467_tmp;
  double c_t467_tmp;
  double d_t467_tmp;
  double e_t467_tmp;
  double f_t467_tmp;
  double g_t467_tmp;
  double h_t467_tmp;
  double i_t467_tmp;
  double j_t467_tmp;
  double k_t467_tmp;
  double t10;
  double t100;
  double t100_tmp;
  double t101;
  double t101_tmp;
  double t11;
  double t110;
  double t110_tmp;
  double t111;
  double t12;
  double t13;
  double t135;
  double t135_tmp;
  double t136;
  double t136_tmp;
  double t137;
  double t138;
  double t138_tmp;
  double t139;
  double t14;
  double t15;
  double t16;
  double t17;
  double t174;
  double t174_tmp;
  double t174_tmp_tmp;
  double t175;
  double t175_tmp;
  double t175_tmp_tmp;
  double t18;
  double t180;
  double t180_tmp;
  double t181;
  double t181_tmp;
  double t186;
  double t187;
  double t189;
  double t19;
  double t190;
  double t192;
  double t192_tmp_tmp;
  double t193;
  double t2;
  double t20;
  double t202;
  double t203;
  double t206;
  double t206_tmp;
  double t207;
  double t207_tmp_tmp;
  double t21;
  double t22;
  double t226;
  double t227;
  double t23;
  double t24;
  double t25;
  double t250;
  double t251;
  double t26;
  double t264;
  double t265;
  double t265_tmp;
  double t266;
  double t267;
  double t267_tmp;
  double t27;
  double t29;
  double t3;
  double t30;
  double t300;
  double t301;
  double t302;
  double t303;
  double t304;
  double t305;
  double t31;
  double t314;
  double t315;
  double t316_tmp;
  double t317_tmp;
  double t32;
  double t324;
  double t325;
  double t325_tmp;
  double t326;
  double t327;
  double t33;
  double t34;
  double t358_tmp;
  double t358_tmp_tmp;
  double t361;
  double t361_tmp;
  double t363;
  double t363_tmp;
  double t364_tmp;
  double t379_tmp;
  double t38;
  double t381_tmp;
  double t39;
  double t4;
  double t40;
  double t41;
  double t42;
  double t426;
  double t427;
  double t428;
  double t429;
  double t43;
  double t461;
  double t463_tmp;
  double t464_tmp;
  double t467;
  double t467_tmp;
  double t468;
  double t468_tmp;
  double t469;
  double t470;
  double t483;
  double t5;
  double t59;
  double t6;
  double t60;
  double t61;
  double t62;
  double t63;
  double t64;
  double t65;
  double t65_tmp;
  double t66;
  double t67;
  double t67_tmp;
  double t68;
  double t7;
  double t73;
  double t74;
  double t8;
  double t9;
  // WCRL_3_3
  //     WCRL = WCRL_3_3(L,IN2)
  //     This function was generated by the Symbolic Math Toolbox version 9.2.
  //     29-Mar-2023 20:23:58
  t2 = in2[0] * in2[0];
  t3 = in2[1] * in2[1];
  t4 = in2[2] * in2[2];
  t5 = in2[3] * in2[3];
  t6 = in2[4] * in2[4];
  t7 = in2[5] * in2[5];
  t8 = in2[0] * in2[6] * 2.0;
  t9 = in2[1] * in2[7] * 2.0;
  t10 = in2[2] * in2[8] * 2.0;
  t11 = in2[3] * in2[9] * 2.0;
  t12 = in2[4] * in2[10] * 2.0;
  t13 = in2[5] * in2[11] * 2.0;
  t14 = t2 + t5;
  t15 = t3 + t6;
  t16 = t4 + t7;
  t17 = t8 + t11;
  t18 = t9 + t12;
  t19 = t10 + t13;
  t20 = 1.0 / t14;
  t22 = 1.0 / t15;
  t24 = 1.0 / t16;
  t26 = std::sqrt(t14);
  t27 = std::sqrt(t15);
  t14 = std::sqrt(t16);
  t21 = t20 * t20;
  t23 = t22 * t22;
  t25 = t24 * t24;
  t29 = 1.0 / t26;
  t31 = 1.0 / t27;
  t33 = 1.0 / t14;
  t15 = l * t26;
  t16 = l * t27;
  t14 *= l;
  t30 = rt_powd_snf(t29, 3.0);
  t32 = rt_powd_snf(t31, 3.0);
  t34 = rt_powd_snf(t33, 3.0);
  t38 = std::cos(t15);
  t39 = std::cos(t16);
  t40 = std::cos(t14);
  t41 = std::sin(t15);
  t42 = std::sin(t16);
  t43 = std::sin(t14);
  t65_tmp = in2[0] * in2[1];
  t65 = t65_tmp * t41 * t42;
  t66 = t41 * t42 * in2[3] * in2[4];
  t67_tmp = in2[0] * t29;
  t67 = t67_tmp * t39 * t41;
  t68 = in2[1] * t31 * t38 * t42;
  t73 = t29 * t39 * t41 * in2[3];
  t74 = t31 * t38 * t42 * in2[4];
  t100_tmp = in2[0] * in2[7];
  t100 = t100_tmp * t29 * t31 * t41 * t42;
  t101_tmp = in2[1] * in2[6];
  t101 = t101_tmp * t29 * t31 * t41 * t42;
  t110_tmp = in2[9] * t29;
  t110 = t110_tmp * t31 * t41 * t42 * in2[4];
  t111 = in2[10] * t29 * t31 * t41 * t42 * in2[3];
  t59 = t5 + t2 * t38;
  t60 = t2 + t5 * t38;
  t61 = t6 + t3 * t39;
  t62 = t3 + t6 * t39;
  t63 = t7 + t4 * t40;
  t64 = t4 + t7 * t40;
  t135_tmp = t65_tmp * in2[9] * t20;
  t135 = t135_tmp * t22 * (t38 - 1.0) * (t39 - 1.0) * in2[4];
  t136_tmp = t65_tmp * in2[10];
  t136 = t136_tmp * t20 * t22 * (t38 - 1.0) * (t39 - 1.0) * in2[3];
  t16 = t65_tmp * t20;
  t137 = t16 * t22 * (t38 - 1.0) * (t39 - 1.0) * in2[3] * in2[4];
  t138_tmp = t100_tmp * t20;
  t138 = t138_tmp * t22 * (t38 - 1.0) * (t39 - 1.0) * in2[3] * in2[4];
  t483 = t101_tmp * t20;
  t139 = t483 * t22 * (t38 - 1.0) * (t39 - 1.0) * in2[3] * in2[4];
  t174_tmp_tmp = in2[0] * l;
  b_t174_tmp_tmp = t174_tmp_tmp * t17;
  t174_tmp = b_t174_tmp_tmp * t20;
  t174 = t174_tmp * t68 / 2.0;
  t175_tmp_tmp = in2[1] * l;
  t175_tmp = t175_tmp_tmp * t18;
  b_t175_tmp = t175_tmp * t22;
  t175 = b_t175_tmp * t67 / 2.0;
  t470 = l * t17;
  t180_tmp = t470 * t20;
  t180 = t180_tmp * t74 * in2[3] / 2.0;
  t469 = l * t18;
  t181_tmp = t469 * t22;
  t181 = t181_tmp * t73 * in2[4] / 2.0;
  t192_tmp_tmp = t17 * t30;
  t14 = t192_tmp_tmp * t31;
  t192 = t14 * t65 / 2.0;
  t15 = t18 * t29 * t32;
  t193 = t15 * t65 / 2.0;
  t202 = t14 * t66 / 2.0;
  t203 = t15 * t66 / 2.0;
  t14 = t65_tmp * t17;
  t206_tmp = t14 * t21;
  t206 = t206_tmp * t22 * (t38 - 1.0) * (t39 - 1.0) * in2[3] * in2[4];
  t207_tmp_tmp = t65_tmp * t18;
  t15 = t207_tmp_tmp * t20;
  t207 = t15 * t23 * (t38 - 1.0) * (t39 - 1.0) * in2[3] * in2[4];
  t226 = t14 * t22 * t30 * t41 * (t39 - 1.0) * in2[4] / 2.0;
  t227 = t15 * t32 * t42 * (t38 - 1.0) * in2[3] / 2.0;
  t186 = (t11 + t8 * t38) - l * t2 * t17 * t29 * t41 / 2.0;
  t187 = (t12 + t9 * t39) - l * t3 * t18 * t31 * t42 / 2.0;
  t189 = (t8 + t11 * t38) - l * t5 * t17 * t29 * t41 / 2.0;
  t190 = (t9 + t12 * t39) - l * t6 * t18 * t31 * t42 / 2.0;
  t250 = l * t226 * in2[3];
  t251 = l * t227 * in2[4];
  t2 = in2[0] * t17;
  t264 = t2 * t22 * t30 * t41 * t61 / 2.0;
  t265_tmp = in2[1] * t18;
  b_t265_tmp = t265_tmp * t20;
  t265 = b_t265_tmp * t32 * t42 * t59 / 2.0;
  t266 = t17 * t22 * t30 * t41 * t62 * in2[3] / 2.0;
  t267_tmp = t18 * t20;
  t267 = t267_tmp * t32 * t42 * t60 * in2[4] / 2.0;
  t300 = (t65 + t66) - t26 * t27 * t38 * t39;
  t26 = t29 * t31;
  t301 = t26 * t40 * t300;
  t14 = in2[0] * t20;
  t15 = in2[1] * t20;
  t3 = t15 * t31 * t42;
  t302 = (t67 + t14 * t31 * t42 * (t38 - 1.0) * in2[3] * in2[4]) + t3 * t59;
  t5 = in2[0] * t22 * t29 * t41;
  t303 = (t68 + in2[1] * t22 * t29 * t41 * (t39 - 1.0) * in2[3] * in2[4]) +
         t5 * t61;
  t11 = t20 * t31 * t42;
  t304 = (t73 + t16 * t31 * t42 * (t38 - 1.0) * in2[3]) + t11 * t60 * in2[4];
  t6 = t22 * t29 * t41;
  t305 = (t74 + t65_tmp * t22 * t29 * t41 * (t39 - 1.0) * in2[4]) +
         t6 * t62 * in2[3];
  t27 = t20 * t22;
  t12 = t27 * t59;
  t324 = (-(t26 * t65) + t137) + t12 * t61;
  t325_tmp = t14 * t22 * (t38 - 1.0);
  b_t325_tmp = t15 * t22 * (t39 - 1.0);
  t325 = (-(t67_tmp * t31 * t41 * t42 * in2[4]) + t325_tmp * t62 * in2[3]) +
         b_t325_tmp * t59 * in2[4];
  t326 =
      (-(in2[1] * t29 * t31 * t41 * t42 * in2[3]) + t325_tmp * t61 * in2[3]) +
      b_t325_tmp * t60 * in2[4];
  t9 = t27 * t60;
  t327 = (-(t26 * t66) + t137) + t9 * t62;
  t8 = t470 * t29;
  t461 =
      ((((((((((((t8 * t39 * t41 / 2.0 + t469 * t31 * t38 * t42 / 2.0) + t100) +
                t101) +
               t110) +
              t111) +
             t174) +
            t175) +
           t180) +
          t181) -
         t192) -
        t193) -
       t202) -
      t203;
  t314 = t40 * t302;
  t315 = t40 * t304;
  t316_tmp = in2[2] * l;
  b_t316_tmp = t316_tmp * t19 * t24;
  t317_tmp = l * t19;
  b_t317_tmp = t317_tmp * t24;
  t358_tmp_tmp = in2[2] * t19;
  t358_tmp = t358_tmp_tmp * t25 * (t40 - 1.0);
  t361_tmp = t19 * t34 * t43;
  t361 = t361_tmp * t305 * in2[5] / 2.0;
  t363_tmp = t358_tmp_tmp * t34 * t43;
  t363 = t363_tmp * t303 / 2.0;
  t364_tmp = t317_tmp * t33 * t43;
  t14 = t19 * t25;
  t379_tmp = t14 * t63;
  t381_tmp = t14 * t64;
  t426 = t363_tmp * t324 / 2.0;
  t427 = t363_tmp * t326 / 2.0;
  t428 = t361_tmp * t325 * in2[5] / 2.0;
  t429 = t361_tmp * t327 * in2[5] / 2.0;
  t463_tmp = in2[2] * t33 * t43;
  t464_tmp = t33 * t43;
  t14 = t174_tmp_tmp * t18;
  t467_tmp = in2[1] * t17;
  b_t467_tmp = in2[0] * t18;
  c_t467_tmp = in2[0] * in2[10];
  d_t467_tmp = in2[6] * t29;
  e_t467_tmp = in2[0] * in2[9] * t20;
  f_t467_tmp = in2[6] * t20;
  g_t467_tmp = in2[7] * t20;
  h_t467_tmp = t2 * t30;
  i_t467_tmp = t2 * t21;
  j_t467_tmp = t467_tmp * t21;
  k_t467_tmp = b_t467_tmp * t20;
  t467 = ((((((((((((((d_t467_tmp * t39 * t41 + t174_tmp * t38 * t39 / 2.0) -
                      h_t467_tmp * t39 * t41 / 2.0) +
                     e_t467_tmp * t31 * t42 * (t38 - 1.0) * in2[4]) +
                    c_t467_tmp * t20 * t31 * t42 * (t38 - 1.0) * in2[3]) +
                   f_t467_tmp * t31 * t42 * (t38 - 1.0) * in2[3] * in2[4]) +
                  g_t467_tmp * t31 * t42 * t59) +
                 t14 * t20 * t22 * t39 * (t38 - 1.0) * in2[3] * in2[4] / 2.0) -
                i_t467_tmp * t31 * t42 * (t38 - 1.0) * in2[3] * in2[4]) -
               t14 * t29 * t31 * t41 * t42 / 2.0) -
              k_t467_tmp * t32 * t42 * (t38 - 1.0) * in2[3] * in2[4] / 2.0) +
             b_t174_tmp_tmp * t30 * t31 * t66 * -0.5) +
            t175_tmp * t20 * t22 * t39 * t59 / 2.0) -
           j_t467_tmp * t31 * t42 * t59) -
          t265) +
         t3 * t186;
  t14 = t175_tmp_tmp * t17;
  t2 = in2[1] * in2[10];
  t468_tmp = in2[1] * in2[9];
  t468 =
      ((((((((((((((in2[7] * t31 * t38 * t42 + b_t175_tmp * t38 * t39 / 2.0) -
                   t265_tmp * t32 * t38 * t42 / 2.0) +
                  t468_tmp * t22 * t29 * t41 * (t39 - 1.0) * in2[4]) +
                 t2 * t22 * t29 * t41 * (t39 - 1.0) * in2[3]) +
                in2[7] * t22 * t29 * t41 * (t39 - 1.0) * in2[3] * in2[4]) +
               in2[6] * t22 * t29 * t41 * t61) +
              t14 * t20 * t22 * t38 * (t39 - 1.0) * in2[3] * in2[4] / 2.0) -
             t265_tmp * t23 * t29 * t41 * (t39 - 1.0) * in2[3] * in2[4]) -
            t14 * t29 * t31 * t41 * t42 / 2.0) -
           t467_tmp * t22 * t30 * t41 * (t39 - 1.0) * in2[3] * in2[4] / 2.0) +
          t175_tmp * t29 * t32 * t66 * -0.5) +
         t174_tmp * t22 * t38 * t61 / 2.0) -
        b_t467_tmp * t23 * t29 * t41 * t61) -
       t264) +
      t5 * t187;
  t14 = t65_tmp * l;
  t15 = t469 * t29;
  t16 = t17 * t21;
  t469 = ((((((((((((((t110_tmp * t39 * t41 +
                       t180_tmp * t38 * t39 * in2[3] / 2.0) -
                      t192_tmp_tmp * t39 * t41 * in2[3] / 2.0) +
                     t135_tmp * t31 * t42 * (t38 - 1.0)) +
                    t138_tmp * t31 * t42 * (t38 - 1.0) * in2[3]) +
                   t483 * t31 * t42 * (t38 - 1.0) * in2[3]) +
                  in2[10] * t20 * t31 * t42 * t60) -
                 t206_tmp * t31 * t42 * (t38 - 1.0) * in2[3]) -
                t15 * t31 * t41 * t42 * in2[3] / 2.0) +
               t14 * t18 * t20 * t22 * t39 * (t38 - 1.0) * in2[3] / 2.0) -
              t227) +
             t470 * t30 * t31 * t65 * in2[3] * -0.5) +
            t469 * t20 * t22 * t39 * t60 * in2[4] / 2.0) -
           t16 * t31 * t42 * t60 * in2[4]) -
          t267) +
         t11 * t189 * in2[4];
  t470 = ((((((((((((((in2[10] * t31 * t38 * t42 +
                       t181_tmp * t38 * t39 * in2[4] / 2.0) -
                      t18 * t32 * t38 * t42 * in2[4] / 2.0) +
                     t136_tmp * t22 * t29 * t41 * (t39 - 1.0)) +
                    t100_tmp * t22 * t29 * t41 * (t39 - 1.0) * in2[4]) +
                   t101_tmp * t22 * t29 * t41 * (t39 - 1.0) * in2[4]) +
                  in2[9] * t22 * t29 * t41 * t62) -
                 t207_tmp_tmp * t23 * t29 * t41 * (t39 - 1.0) * in2[4]) -
                t8 * t31 * t41 * t42 * in2[4] / 2.0) +
               t14 * t17 * t20 * t22 * t38 * (t39 - 1.0) * in2[4] / 2.0) -
              t226) +
             t15 * t32 * t65 * in2[4] * -0.5) +
            t180_tmp * t22 * t38 * t62 * in2[3] / 2.0) -
           t18 * t23 * t29 * t41 * t62 * in2[3]) -
          t266) +
         t6 * t190 * in2[3];
  t15 = t16 * t22;
  t14 = t267_tmp * t23;
  t483 = ((((((((((((((((t100 + t101) - t135) - t136) - t138) - t139) + t174) +
                   t175) +
                  t206) +
                 t207) -
                t192) -
               t193) +
              t250) +
             t251) +
            t15 * t59 * t61) +
           t14 * t59 * t61) -
          t27 * t61 * t186) -
         t12 * t187;
  t227 = ((((((((((((((((t110 + t111) - t135) - t136) - t138) - t139) + t180) +
                   t181) +
                  t206) +
                 t207) -
                t202) -
               t203) +
              t250) +
             t251) +
            t15 * t60 * t62) +
           t14 * t60 * t62) -
          t27 * t62 * t189) -
         t9 * t190;
  t135_tmp = in2[2] * in2[11] * t24 * (t40 - 1.0);
  t138_tmp = in2[8] * t24 * (t40 - 1.0);
  t65_tmp = in2[8] * t33 * t43;
  t206_tmp = in2[11] * t33 * t43;
  t226 = b_t316_tmp * t40;
  t207_tmp_tmp = b_t317_tmp * t40;
  t110_tmp = t24 * ((t13 + t10 * t40) - l * t4 * t19 * t33 * t43 / 2.0);
  t250 = t24 * ((t10 + t13 * t40) - l * t7 * t19 * t33 * t43 / 2.0);
  t175_tmp = (t301 + t463_tmp * t303) + t464_tmp * t305 * in2[5];
  t251 = in2[2] * t24 * (t40 - 1.0);
  b_t174_tmp_tmp = t24 * t63;
  t66 = (-(in2[2] * t29 * t31 * t33 * t43 * t300) + t251 * t305 * in2[5]) +
        b_t174_tmp_tmp * t303;
  t9 = t24 * t64;
  t12 = (-(t26 * t33 * t43 * t300 * in2[5]) + t251 * t303 * in2[5]) + t9 * t305;
  t27 = (t315 + t463_tmp * t326) + t464_tmp * t327 * in2[5];
  t26 = (t314 + t463_tmp * t324) + t464_tmp * t325 * in2[5];
  t67_tmp = (-(t463_tmp * t302) + t251 * t325 * in2[5]) + b_t174_tmp_tmp * t324;
  t137 = (-(t464_tmp * t302 * in2[5]) + t251 * t324 * in2[5]) + t9 * t325;
  t25 = (-(t463_tmp * t304) + t251 * t327 * in2[5]) + b_t174_tmp_tmp * t326;
  t267_tmp = (-(t464_tmp * t304 * in2[5]) + t251 * t326 * in2[5]) + t9 * t327;
  t6 = e_t467_tmp * t22 * (t38 - 1.0);
  t11 = t2 * t20 * t22 * (t39 - 1.0);
  t8 = f_t467_tmp * t22 * (t38 - 1.0);
  t5 = g_t467_tmp * t22 * (t39 - 1.0);
  t3 = i_t467_tmp * t22 * (t38 - 1.0);
  t2 = j_t467_tmp * t22 * (t39 - 1.0);
  t16 = k_t467_tmp * t23 * (t38 - 1.0);
  t14 = b_t265_tmp * t23 * (t39 - 1.0);
  t15 = ((((((((((((((((c_t467_tmp * t29 * t31 * t41 * t42 +
                        d_t467_tmp * t31 * t41 * t42 * in2[4]) -
                       t6 * t62) -
                      t11 * t59) -
                     t8 * t62 * in2[3]) -
                    t5 * t59 * in2[4]) +
                   t174_tmp * t74 / 2.0) +
                  t181_tmp * t67 * in2[4] / 2.0) -
                 h_t467_tmp * t31 * t41 * t42 * in2[4] / 2.0) -
                b_t467_tmp * t29 * t32 * t41 * t42 * in2[4] / 2.0) +
               t3 * t62 * in2[3]) +
              t2 * t59 * in2[4]) +
             t16 * t62 * in2[3]) +
            t14 * t59 * in2[4]) +
           t174_tmp_tmp * t266) +
          l * t265 * in2[4]) -
         b_t325_tmp * t186 * in2[4]) -
        t325_tmp * t190 * in2[3];
  t14 = ((((((((((((((((t468_tmp * t29 * t31 * t41 * t42 +
                        in2[7] * t29 * t31 * t41 * t42 * in2[3]) -
                       t6 * t61) -
                      t11 * t60) -
                     t8 * t61 * in2[3]) -
                    t5 * t60 * in2[4]) +
                   t180_tmp * t68 * in2[3] / 2.0) +
                  b_t175_tmp * t73 / 2.0) -
                 t467_tmp * t30 * t31 * t41 * t42 * in2[3] / 2.0) -
                t265_tmp * t29 * t32 * t41 * t42 * in2[3] / 2.0) +
               t3 * t61 * in2[3]) +
              t2 * t60 * in2[4]) +
             t16 * t61 * in2[3]) +
            t14 * t60 * in2[4]) +
           l * t264 * in2[3]) +
          t175_tmp_tmp * t267) -
         t325_tmp * t187 * in2[3]) -
        b_t325_tmp * t189 * in2[4];
  t8 = ((((((((-(t317_tmp * t29 * t31 * t33 * t43 * t300 / 2.0) +
               t65_tmp * t303) +
              t206_tmp * t305) +
             t226 * t303 / 2.0) +
            t207_tmp_tmp * t305 * in2[5] / 2.0) -
           t361) -
          t363) +
         t40 * t461) +
        t464_tmp * t470 * in2[5]) +
       t463_tmp * t468;
  t11 = ((((((((((t65_tmp * t304 + b_t316_tmp * t315 / 2.0) -
                 t363_tmp * t304 / 2.0) -
                t135_tmp * t327) -
               t138_tmp * t327 * in2[5]) +
              t358_tmp * t327 * in2[5]) +
             t379_tmp * t326) +
            t316_tmp * t429) -
           t110_tmp * t326) +
          t463_tmp * t469) +
         t251 * t227 * in2[5]) +
        b_t174_tmp_tmp * t14;
  t6 = ((((((((((t206_tmp * t302 + b_t317_tmp * t314 * in2[5] / 2.0) -
                t361_tmp * t302 * in2[5] / 2.0) -
               t135_tmp * t324) -
              t138_tmp * t324 * in2[5]) +
             t358_tmp * t324 * in2[5]) +
            l * t426 * in2[5]) +
           t381_tmp * t325) -
          t250 * t325) +
         t464_tmp * t467 * in2[5]) +
        t251 * t483 * in2[5]) +
       t9 * t15;
  t5 = ((((((((((t206_tmp * t304 + b_t317_tmp * t315 * in2[5] / 2.0) -
                t361_tmp * t304 * in2[5] / 2.0) -
               t135_tmp * t326) -
              t138_tmp * t326 * in2[5]) +
             t358_tmp * t326 * in2[5]) +
            l * t427 * in2[5]) +
           t381_tmp * t327) -
          t250 * t327) +
         t464_tmp * t469 * in2[5]) +
        t9 * t227) +
       t251 * t14 * in2[5];
  t3 = ((((((((((t65_tmp * t302 + b_t316_tmp * t314 / 2.0) -
                t363_tmp * t302 / 2.0) -
               t135_tmp * t325) -
              t138_tmp * t325 * in2[5]) +
             t358_tmp * t325 * in2[5]) +
            t379_tmp * t324) +
           t316_tmp * t428) -
          t110_tmp * t324) +
         t463_tmp * t467) +
        b_t174_tmp_tmp * t483) +
       t251 * t15 * in2[5];
  t2 = ((((((((t364_tmp * t302 / 2.0 - t65_tmp * t324) - t206_tmp * t325) -
             t226 * t324 / 2.0) -
            t207_tmp_tmp * t325 * in2[5] / 2.0) +
           t426) +
          t428) -
         t40 * t467) +
        t463_tmp * t483) +
       t464_tmp * t15 * in2[5];
  wcrl[0] = (-t137 * t6 - t67_tmp * t3) - t26 * t2;
  t16 = ((((((((t364_tmp * t304 / 2.0 - t65_tmp * t326) - t206_tmp * t327) -
              t226 * t326 / 2.0) -
             t207_tmp_tmp * t327 * in2[5] / 2.0) +
            t427) +
           t429) -
          t40 * t469) +
         t464_tmp * t227 * in2[5]) +
        t463_tmp * t14;
  wcrl[1] = (-t67_tmp * t11 - t137 * t5) - t26 * t16;
  t15 = ((((((((((in2[8] * t29 * t31 * t33 * t43 * t300 +
                  b_t316_tmp * t301 / 2.0) -
                 t358_tmp_tmp * t29 * t31 * t34 * t43 * t300 / 2.0) -
                t135_tmp * t305) -
               t138_tmp * t305 * in2[5]) +
              t358_tmp * t305 * in2[5]) +
             t379_tmp * t303) +
            t316_tmp * t361) -
           t110_tmp * t303) +
          t463_tmp * t461) -
         t251 * t470 * in2[5]) -
        b_t174_tmp_tmp * t468;
  t14 = ((((((((((in2[11] * t29 * t31 * t33 * t43 * t300 +
                  b_t317_tmp * t301 * in2[5] / 2.0) -
                 t19 * t29 * t31 * t34 * t43 * t300 * in2[5] / 2.0) -
                t135_tmp * t303) -
               t138_tmp * t303 * in2[5]) +
              t358_tmp * t303 * in2[5]) +
             l * t363 * in2[5]) +
            t381_tmp * t305) -
           t250 * t305) +
          t464_tmp * t461 * in2[5]) -
         t251 * t468 * in2[5]) -
        t9 * t470;
  wcrl[2] = (t26 * t8 - t67_tmp * t15) - t137 * t14;
  wcrl[3] = (-t267_tmp * t6 - t25 * t3) - t27 * t2;
  wcrl[4] = (-t25 * t11 - t267_tmp * t5) - t27 * t16;
  wcrl[5] = (t27 * t8 - t25 * t15) - t267_tmp * t14;
  wcrl[6] = (-t12 * t6 - t66 * t3) - t175_tmp * t2;
  wcrl[7] = (-t66 * t11 - t12 * t5) - t175_tmp * t16;
  wcrl[8] = (t175_tmp * t8 - t66 * t15) - t12 * t14;
}

// End of code generation (wcrl_3_3.cpp)