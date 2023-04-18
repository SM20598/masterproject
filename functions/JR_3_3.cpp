//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// JR_3_3.cpp
//
// Code generation for function 'JR_3_3'
//

// Include files
#include "JR_3_3.h"
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

void JR_3_3(double l, const double in2[12], double JR[18])
{
  double b_t286_tmp;
  double ct_idx_12;
  double ct_idx_154_tmp;
  double ct_idx_160;
  double ct_idx_161;
  double ct_idx_166;
  double ct_idx_166_tmp;
  double ct_idx_167;
  double ct_idx_171_tmp;
  double ct_idx_18;
  double ct_idx_189;
  double ct_idx_19;
  double ct_idx_190;
  double ct_idx_191;
  double ct_idx_192;
  double ct_idx_193;
  double ct_idx_194;
  double ct_idx_195;
  double ct_idx_196;
  double ct_idx_196_tmp;
  double ct_idx_197;
  double ct_idx_198;
  double ct_idx_199;
  double ct_idx_20;
  double ct_idx_200;
  double ct_idx_201;
  double ct_idx_21;
  double ct_idx_22;
  double ct_idx_29;
  double ct_idx_30;
  double ct_idx_31;
  double ct_idx_32;
  double ct_idx_37_tmp;
  double ct_idx_38_tmp;
  double ct_idx_38_tmp_tmp_tmp;
  double ct_idx_3_tmp;
  double ct_idx_40_tmp;
  double ct_idx_40_tmp_tmp;
  double ct_idx_44_tmp;
  double ct_idx_45_tmp;
  double ct_idx_4_tmp;
  double ct_idx_60;
  double ct_idx_65;
  double ct_idx_67_tmp;
  double ct_idx_69_tmp;
  double ct_idx_74;
  double ct_idx_77_tmp;
  double ct_idx_79_tmp;
  double ct_idx_82_tmp;
  double ct_idx_96;
  double t10;
  double t105;
  double t107;
  double t109;
  double t11;
  double t111;
  double t113;
  double t114;
  double t115_tmp;
  double t117;
  double t118;
  double t119;
  double t12;
  double t120;
  double t123;
  double t126;
  double t13;
  double t14;
  double t150;
  double t151;
  double t153;
  double t154;
  double t157;
  double t157_tmp;
  double t158;
  double t159;
  double t159_tmp;
  double t16;
  double t161;
  double t162;
  double t163;
  double t164;
  double t166;
  double t166_tmp;
  double t168;
  double t169;
  double t170;
  double t171;
  double t171_tmp;
  double t174;
  double t174_tmp;
  double t179;
  double t18;
  double t187;
  double t187_tmp;
  double t19;
  double t193;
  double t193_tmp;
  double t199;
  double t199_tmp;
  double t2;
  double t20;
  double t21;
  double t213;
  double t22;
  double t226_tmp;
  double t23;
  double t24;
  double t25;
  double t253;
  double t254;
  double t255;
  double t255_tmp;
  double t256;
  double t27;
  double t28;
  double t286;
  double t286_tmp;
  double t287;
  double t287_tmp;
  double t288;
  double t292;
  double t292_tmp;
  double t293;
  double t294;
  double t294_tmp;
  double t295;
  double t3;
  double t30;
  double t31;
  double t32;
  double t33;
  double t334;
  double t334_tmp;
  double t335;
  double t336;
  double t336_tmp;
  double t34;
  double t35;
  double t36;
  double t37;
  double t39;
  double t4;
  double t40;
  double t41;
  double t42;
  double t43;
  double t432;
  double t433;
  double t434;
  double t435;
  double t436;
  double t437;
  double t438;
  double t44;
  double t440;
  double t441;
  double t448;
  double t448_tmp;
  double t449;
  double t45;
  double t450;
  double t451;
  double t451_tmp;
  double t455;
  double t458;
  double t459;
  double t46;
  double t5;
  double t500;
  double t505;
  double t515;
  double t518;
  double t519;
  double t523;
  double t524;
  double t527;
  double t528;
  double t530;
  double t56;
  double t57;
  double t58;
  double t59;
  double t6;
  double t60;
  double t61;
  double t62;
  double t63;
  double t64;
  double t65;
  double t70;
  double t71;
  double t72;
  double t73;
  double t74;
  double t75;
  double t76;
  double t77;
  double t8;
  double t81;
  double t85;
  double t86;
  double t97;
  double t97_tmp;
  double t98;
  // JR_3_3
  //     JR = JR_3_3(L,IN2)
  //     This function was generated by the Symbolic Math Toolbox version 9.2.
  //     11-Apr-2023 16:14:10
  t2 = in2[2] * 2.0;
  t3 = in2[4] * 2.0;
  t4 = in2[0] * in2[0];
  t5 = rt_powd_snf(in2[0], 3.0);
  t6 = in2[2] * in2[2];
  t8 = in2[4] * in2[4];
  t10 = in2[3] * 2.0;
  t11 = in2[5] * 2.0;
  t12 = in2[1] * in2[1];
  t13 = rt_powd_snf(in2[1], 3.0);
  t14 = in2[3] * in2[3];
  t16 = in2[5] * in2[5];
  t18 = t4 + t12;
  t19 = t6 + t14;
  t20 = t8 + t16;
  t21 = 1.0 / t18;
  t23 = 1.0 / t19;
  t25 = 1.0 / t20;
  t27 = std::sqrt(t18);
  t28 = std::sqrt(t19);
  t18 = std::sqrt(t20);
  t22 = t21 * t21;
  t24 = t23 * t23;
  t30 = 1.0 / t27;
  t32 = 1.0 / t28;
  t34 = 1.0 / t18;
  t36 = l * t27;
  t37 = l * t28;
  t18 *= l;
  t39 = t27 * 2.0;
  t40 = t28 * 2.0;
  t31 = rt_powd_snf(t30, 3.0);
  t33 = rt_powd_snf(t32, 3.0);
  t35 = rt_powd_snf(t34, 3.0);
  t41 = std::cos(t36);
  t42 = std::cos(t37);
  t43 = std::cos(t18);
  t44 = std::sin(t36);
  t45 = std::sin(t37);
  t46 = std::sin(t18);
  t56 = t4 * t41;
  t57 = t6 * t42;
  t58 = t8 * t43;
  t59 = t12 * t41;
  t60 = t14 * t42;
  t61 = t16 * t43;
  t62 = l * t4 * t44;
  t63 = l * t6 * t45;
  t64 = l * t12 * t44;
  t65 = l * t14 * t45;
  t76 = t40 * t42;
  t515 = in2[0] * in2[2];
  t77 = t515 * t44 * t45;
  t81 = t44 * t45 * in2[1] * in2[3];
  t97_tmp = in2[2] * t12;
  t97 = t97_tmp * t44 * t45;
  t98 = t4 * t44 * t45 * in2[3];
  t113 = t30 * t42 * t44;
  t114 = t32 * t41 * t45;
  t18 = in2[0] * l;
  t115_tmp = t18 * t21;
  t528 = in2[0] * t31;
  t157_tmp = in2[0] * t30;
  t157 = t157_tmp * t32 * t44 * t45;
  t523 = in2[2] * t30;
  t158 = t523 * t32 * t44 * t45;
  t518 = t30 * t32;
  t159_tmp = t518 * t44 * t45;
  t159 = t159_tmp * in2[1];
  t199_tmp = in2[0] * t6;
  t199 = t199_tmp * t30 * t33 * t44 * t45;
  t70 = t12 + t56;
  t71 = t4 + t59;
  t72 = t14 + t57;
  t73 = t6 + t60;
  t74 = t16 + t58;
  t75 = t8 + t61;
  t85 = t77 * in2[1];
  t86 = in2[0] * t81;
  t117 = in2[0] * t113;
  t118 = in2[2] * t114;
  t119 = t113 * in2[1];
  t120 = t114 * in2[3];
  t161 = t518 * t77;
  t162 = t157 * in2[3];
  t163 = t158 * in2[1];
  t164 = t518 * t81;
  t20 = t515 * t23;
  t169 = t20 * t30 * t44 * (t42 - 1.0);
  t19 = t515 * t21;
  t170 = t19 * t32 * t45 * (t41 - 1.0);
  t171_tmp = in2[0] * t21;
  t530 = t171_tmp * t32 * t45 * (t41 - 1.0);
  t171 = t530 * in2[1];
  t524 = in2[2] * t23;
  t174_tmp = t524 * t30 * t44 * (t42 - 1.0);
  t174 = t174_tmp * in2[1];
  t459 = t30 * t33;
  t179 = t459 * t77 * in2[3];
  t187_tmp = t18 * t23 * t30 * t44;
  t187 = t187_tmp * t57;
  t455 = l * t23;
  t193_tmp = t455 * t30 * t44;
  t193 = t193_tmp * t60 * in2[1];
  t500 = t19 * t23 * (t41 - 1.0) * (t42 - 1.0);
  t213 = t500 * in2[1];
  t286_tmp = t19 * t33;
  b_t286_tmp = t286_tmp * (t41 - 1.0);
  t286 = b_t286_tmp * t65 * in2[1];
  t19 = t20 * t31;
  t287_tmp = t19 * (t42 - 1.0);
  t287 = t287_tmp * t64 * in2[3];
  t505 = t171_tmp * t33 * (t41 - 1.0);
  t288 = t505 * t63 * in2[1] * in2[3];
  t334_tmp = in2[0] * t2;
  t334 = t334_tmp * t14 * t21 * t24 * (t41 - 1.0) * (t42 - 1.0) * in2[1];
  t335 = t334_tmp * t12 * t22 * t23 * (t41 - 1.0) * (t42 - 1.0) * in2[3];
  t336_tmp = t515 * t2;
  t336 = t336_tmp * t21 * t24 * (t41 - 1.0) * (t42 - 1.0) * in2[1] * in2[3];
  t105 = t39 - t62;
  t107 = t39 - t64;
  t123 = l * t118;
  t126 = l * t120;
  t150 = in2[0] * t41 * 2.0 - l * t5 * t30 * t44;
  t151 = t2 * t42 - l * rt_powd_snf(in2[2], 3.0) * t32 * t45;
  t153 = t41 * in2[1] * 2.0 - l * t13 * t30 * t44;
  t154 = t10 * t42 - l * rt_powd_snf(in2[3], 3.0) * t32 * t45;
  t20 = in2[2] * l;
  t166_tmp = t20 * t23;
  t166 = t166_tmp * t117 * in2[3];
  t168 = t166_tmp * t119 * in2[3];
  t458 = t21 * t32 * t45;
  t253 = t458 * t70;
  t254 = t458 * t71;
  t255_tmp = t23 * t30 * t44;
  t255 = t255_tmp * t72;
  t256 = t255_tmp * t73;
  t18 = t213 * in2[3];
  t527 = in2[2] * t21;
  t39 = t527 * t23;
  t292_tmp = t39 * (t42 - 1.0);
  t292 = t292_tmp * t70;
  t293 = t292_tmp * t71;
  t294_tmp = t171_tmp * t23 * (t41 - 1.0);
  t294 = t294_tmp * t72;
  t295 = t294_tmp * t73;
  t432 = (t77 + t81) - t27 * t28 * t41 * t42;
  t109 = t2 + in2[2] * t32 * -t65;
  t111 = t10 + t32 * -t63 * in2[3];
  t226_tmp = t31 * t32;
  t433 = t518 * t43 * t432;
  t438 = t518 * t34 * t46 * t432;
  t448_tmp = t21 * t23;
  t448 = (-t161 + t18) + t448_tmp * t70 * t72;
  t451_tmp = t448_tmp * t71;
  t451 = (-t164 + t18) + t451_tmp * t73;
  t434 = (t117 + t171 * in2[3]) + in2[2] * t253;
  t435 = (t118 + t174 * in2[3]) + in2[0] * t255;
  t436 = (t119 + t170 * in2[1]) + t254 * in2[3];
  t437 = (t120 + t169 * in2[3]) + t256 * in2[1];
  t440 = in2[4] * t438;
  t441 = t438 * in2[5];
  t449 = (-t162 + t295 * in2[1]) + t292 * in2[3];
  t450 = (-t163 + t294 * in2[1]) + t293 * in2[3];
  t28 = in2[4] * l;
  ct_idx_3_tmp = t28 * t16;
  ct_idx_4_tmp = l * t8;
  ct_idx_12 = t159_tmp * in2[3];
  ct_idx_18 = t174_tmp * in2[3];
  ct_idx_19 = l * t161;
  ct_idx_20 = l * t162;
  ct_idx_21 = l * t163;
  ct_idx_22 = l * t164;
  t18 = t515 * l * t21 * t23;
  ct_idx_29 = t18 * t41 * (t42 - 1.0) * in2[1] * in2[3];
  ct_idx_30 = t18 * t42 * (t41 - 1.0) * in2[1] * in2[3];
  ct_idx_31 = t19 * t44 * (t42 - 1.0) * in2[1] * in2[3];
  ct_idx_32 = t286_tmp * t45 * (t41 - 1.0) * in2[1] * in2[3];
  t18 = t115_tmp * t23;
  ct_idx_37_tmp = t18 * (t41 - 1.0);
  ct_idx_38_tmp_tmp_tmp = t20 * t21;
  t19 = ct_idx_38_tmp_tmp_tmp * t23;
  ct_idx_38_tmp = t19 * (t42 - 1.0);
  ct_idx_40_tmp_tmp = t523 * t33;
  ct_idx_40_tmp = ct_idx_40_tmp_tmp * t81;
  ct_idx_44_tmp = in2[2] * t4;
  ct_idx_45_tmp = in2[0] * t14;
  ct_idx_60 = t25 * t25;
  ct_idx_65 = -(t39 * (t41 - 1.0) * (t42 - 1.0) * in2[1] * in2[3]);
  ct_idx_67_tmp = t18 * t41;
  ct_idx_69_tmp = t19 * t42;
  t164 = t524 * t31 * (t42 - 1.0);
  ct_idx_74 = t164 * t62 * in2[1] * in2[3];
  t27 = in2[0] * t23;
  t119 = t27 * t31;
  ct_idx_77_tmp = t119 * t44;
  t118 = t527 * t33;
  ct_idx_79_tmp = t118 * t45;
  t519 = l * t21;
  ct_idx_82_tmp = t519 * t23;
  t39 = t2 * t4 * t22;
  ct_idx_96 = t39 * t23 * (t41 - 1.0) * (t42 - 1.0) * in2[1] * in2[3];
  ct_idx_154_tmp = t28 * t25;
  ct_idx_160 = t43 * t434;
  ct_idx_161 = t43 * t436;
  ct_idx_166_tmp = t34 * t46;
  ct_idx_166 = ct_idx_166_tmp * t434;
  ct_idx_167 = ct_idx_166_tmp * t436;
  ct_idx_171_tmp = in2[4] * t35 * t46;
  t523 = in2[0] * t12;
  ct_idx_189 = ((((t97 - t86) + t5 * t37 * t42 * t44) +
                 in2[0] * t36 * t41 * t45 * in2[1] * in2[3]) +
                in2[2] * t36 * t45 * t56) +
               t523 * t37 * t42 * t44;
  ct_idx_190 = ((((t98 - t85) + t13 * t37 * t42 * t44) +
                 t515 * t36 * t41 * t45 * in2[1]) +
                t4 * t37 * t42 * t44 * in2[1]) +
               t36 * t45 * t59 * in2[3];
  ct_idx_191 = ((((t123 + t157) + t168) + t187) - ct_idx_40_tmp) - t199;
  t81 = t14 * t30 * t33 * t44 * t45 * in2[1];
  ct_idx_192 = ((((t126 + t159) + t166) + t193) - t179) - t81;
  t20 = t528 * t42 * t44 * in2[1] - t115_tmp * t41 * t42 * in2[1];
  t18 = t528 * t32 * t45;
  t37 = in2[0] * t10;
  t19 = in2[2] * t31 * t32 * t45;
  t28 = t527 * t32 * t45;
  ct_idx_193 = ((((t20 - t28 * (t41 - 1.0) * in2[1]) + t19 * t62 * in2[1]) +
                 t39 * t32 * t45 * (t41 - 1.0) * in2[1]) +
                t37 * t22 * t32 * t45 * t71) -
               t18 * t107 * in2[3];
  t39 = t2 * t22;
  ct_idx_194 = ((((t20 - t530 * in2[3]) + t18 * t64 * in2[3]) +
                 t37 * t12 * t22 * t32 * t45 * (t41 - 1.0)) +
                t39 * t32 * t45 * t70 * in2[1]) -
               t19 * t105 * in2[1];
  t527 = t171_tmp * t123 * in2[1] + t226_tmp * -t85;
  t117 = t23 * t31;
  t159_tmp = t500 * in2[3];
  t85 = t22 * t23;
  ct_idx_195 =
      ((((t527 - t159_tmp) + t287) + t335) + t85 * t70 * t72 * in2[1] * 2.0) -
      t117 * t72 * t105 * in2[1];
  ct_idx_196_tmp = t21 * t33;
  t174_tmp = t10 * t21 * t24;
  ct_idx_196 =
      (((((t166 - t179) - t213) + t286) + t334) + t174_tmp * t70 * t72) -
      ct_idx_196_tmp * t70 * (t40 - t63) * in2[3];
  t19 = t519 * t42;
  t20 = t4 * t22;
  ct_idx_197 = ((((((t113 + t19 * t56) - t4 * t31 * t42 * t44) +
                   t458 * (t41 - 1.0) * in2[1] * in2[3]) +
                  t20 * t32 * t45 * (t41 - 1.0) * in2[1] * in2[3] * -2.0) +
                 t226_tmp * t45 * -t62 * in2[1] * in2[3]) +
                t515 * t22 * t32 * t45 * t70 * -2.0) +
               t28 * t150;
  t18 = t455 * t41;
  t286_tmp = t27 * t30 * t44;
  ct_idx_198 = ((((((t114 + t18 * t57) - t6 * t33 * t41 * t45) +
                   t255_tmp * (t42 - 1.0) * in2[1] * in2[3]) +
                  t6 * t24 * t30 * t44 * (t42 - 1.0) * in2[1] * in2[3] * -2.0) +
                 t459 * t44 * -t63 * in2[1] * in2[3]) +
                t515 * t24 * t30 * t44 * t72 * -2.0) +
               t286_tmp * t151;
  t528 = t12 * t31;
  ct_idx_199 = ((((((t113 + t19 * t59) - t528 * t42 * t44) + t170) +
                  t515 * t12 * t22 * t32 * t45 * (t41 - 1.0) * -2.0) +
                 t515 * t31 * t32 * t45 * -t64) +
                t22 * t32 * t45 * t71 * in2[1] * in2[3] * -2.0) +
               t458 * t153 * in2[3];
  ct_idx_200 = ((((((t114 + t18 * t60) - t14 * t33 * t41 * t45) + t169) +
                  t515 * t14 * t24 * t30 * t44 * (t42 - 1.0) * -2.0) +
                 t515 * t30 * t33 * t44 * -t65) +
                t24 * t30 * t44 * t73 * in2[1] * in2[3] * -2.0) +
               t255_tmp * t154 * in2[1];
  t162 = t294_tmp * (t42 - 1.0) * in2[1] * in2[3];
  t163 = t2 * t21 * t24;
  ct_idx_201 =
      ((((((t157 + t187) - t199) - t162) + t288) + t336) + t163 * t70 * t72) +
      t118 * t70 * (t63 - t76);
  t169 = t2 * t14;
  t161 = t37 * t21 * t24 * (t41 - 1.0);
  t530 = t118 * t65;
  t120 = t169 * t21 * t24 * (t42 - 1.0);
  t187_tmp =
      ((((((t157 + t187_tmp * t60) - ct_idx_45_tmp * t30 * t33 * t44 * t45) -
          t292) +
         t161 * t73 * in2[1]) +
        t530 * t70) +
       t120 * t70) +
      t505 * in2[1] * in2[3] * (t65 - t76);
  t18 = t171_tmp * t126 * in2[1] + t226_tmp * -t86;
  t524 = in2[0] * t22 * t23;
  t505 =
      ((((t18 + ct_idx_65) + ct_idx_74) + ct_idx_96) + t524 * t71 * t73 * 2.0) -
      t119 * t73 * t107;
  t36 = t39 * t23 * (t42 - 1.0);
  t113 = t119 * t64;
  t523 = t523 * t22 * t23 * (t41 - 1.0);
  t292 = ((((t18 - t295) + t36 * t70 * in2[1] * in2[3]) + t113 * t73) +
          t523 * t73 * 2.0) -
         t164 * t105 * in2[1] * in2[3];
  t119 = t448_tmp * (t41 - 1.0);
  t118 = t334_tmp * t22 * t23 * (t42 - 1.0);
  t117 *= t62;
  t518 = t20 * t23 * (t41 - 1.0);
  t199 = ((((t527 - t119 * t72 * in2[1]) + t118 * t71 * in2[3]) +
           t117 * t72 * in2[1]) +
          t518 * t72 * in2[1] * 2.0) -
         t287_tmp * t107 * in2[3];
  t27 = t448_tmp * (t42 - 1.0);
  t28 = t334_tmp * t21 * t24 * (t41 - 1.0);
  t20 = ct_idx_196_tmp * t63;
  t39 = in2[2] * t2 * t21 * t24 * (t42 - 1.0);
  t187 = (((((t166 - t30 * t33 * t77 * in2[3]) - t27 * t70 * in2[3]) +
            t28 * t73 * in2[1]) +
           t20 * t70 * in2[3]) +
          t39 * t70 * in2[3]) -
         b_t286_tmp * (t40 - t65) * in2[1];
  t19 = t519 * t32 * t45;
  t114 =
      ((((((ct_idx_12 + t19 * t59 * in2[3]) - t528 * t32 * t44 * t45 * in2[3]) -
          t159_tmp) +
         t287) +
        t335) +
       t85 * t71 * t73 * in2[1] * 2.0) -
      t448_tmp * t73 * t153;
  t515 = ((((((t159 + t193) - t81) - t213) + t286) + t334) +
          t174_tmp * t71 * t73) -
         t451_tmp * t154;
  t18 = ct_idx_38_tmp_tmp_tmp * t32 * t45;
  t170 = ((((((t158 + t18 * t56) - ct_idx_44_tmp * t31 * t32 * t44 * t45) +
             ct_idx_65) +
            ct_idx_74) +
           ct_idx_96) +
          t524 * t70 * t72 * 2.0) -
         t448_tmp * t72 * t150;
  t518 = ((((((ct_idx_12 + t19 * t56 * in2[3]) - t226_tmp * t98) -
             t119 * t73 * in2[1]) +
            t118 * t70 * in2[3]) +
           t117 * t73 * in2[1]) +
          t518 * t73 * in2[1] * 2.0) -
         t292_tmp * t150 * in2[3];
  t519 = ((((((t159 + t193_tmp * t57 * in2[1]) -
              t6 * t30 * t33 * t44 * t45 * in2[1]) -
             t27 * t71 * in2[3]) +
            t28 * t72 * in2[1]) +
           t20 * t71 * in2[3]) +
          t39 * t71 * in2[3]) -
         t294_tmp * t151 * in2[1];
  t179 = ((((((t158 + t18 * t59) - t226_tmp * t97) - t294) +
            t36 * t71 * in2[1] * in2[3]) +
           t113 * t72) +
          t523 * t72 * 2.0) -
         t292_tmp * t153 * in2[3];
  t455 = in2[4] * ct_idx_166;
  t10 = in2[4] * ct_idx_167;
  t458 = ct_idx_166 * in2[5];
  t459 = ct_idx_167 * in2[5];
  t18 = in2[2] * t33 * t41 * t45 * in2[3] - t166_tmp * t41 * t42 * in2[3];
  t500 = ((((t18 - t286_tmp * (t42 - 1.0) * in2[3]) +
            t157_tmp * t33 * t44 * t63 * in2[3]) +
           t336_tmp * t24 * t30 * t44 * (t42 - 1.0) * in2[3]) +
          t2 * t24 * t30 * t44 * t73 * in2[1]) -
         t255_tmp * t109 * in2[1];
  t85 = ((((t18 - t174) + ct_idx_40_tmp_tmp * t44 * t65 * in2[1]) +
          t169 * t24 * t30 * t44 * (t42 - 1.0) * in2[1]) +
         t37 * t24 * t30 * t44 * t72) -
        t286_tmp * t111;
  t18 = t168 - ct_idx_40_tmp;
  t27 = ((((t18 - t162) + t288) + t336) + t163 * t71 * t73) - t451_tmp * t109;
  t18 = ((((t18 - t293) + t161 * t72 * in2[1]) + t530 * t71) + t120 * t71) -
        t294_tmp * t111 * in2[1];
  t19 = in2[4] * t34 * t46;
  t163 = ct_idx_166_tmp * t437;
  t164 = (t433 + t19 * t435) + t163 * in2[5];
  t20 = in2[4] * t25 * (t43 - 1.0);
  t39 = t25 * t74;
  t286_tmp = t20 * t437;
  t523 = (-t440 + t286_tmp * in2[5]) + t39 * t435;
  t28 = t25 * t75;
  t81 = t20 * t435;
  t524 = (-t441 + t81 * in2[5]) + t28 * t437;
  t113 = ct_idx_166_tmp * t451;
  t36 = (ct_idx_161 + t19 * t450) + t113 * in2[5];
  t37 = ct_idx_166_tmp * t449;
  t5 = (ct_idx_160 + t19 * t448) + t37 * in2[5];
  t115_tmp = t20 * t449;
  t527 = (-t455 + t115_tmp * in2[5]) + t39 * t448;
  t13 = t20 * t448;
  t528 = (-t458 + t13 * in2[5]) + t28 * t449;
  ct_idx_196_tmp = t20 * t451;
  t123 = (-t10 + ct_idx_196_tmp * in2[5]) + t39 * t450;
  t169 = t20 * t450;
  t530 = (-t459 + t169 * in2[5]) + t28 * t451;
  t161 = ((((ct_idx_18 - ct_idx_20) + ct_idx_38_tmp * t56 * in2[3]) -
           ct_idx_44_tmp * t23 * t31 * t44 * (t42 - 1.0) * in2[3]) +
          ct_idx_67_tmp * t73 * in2[1]) -
         ct_idx_77_tmp * t73 * in2[1];
  t162 = t20 * in2[5];
  t120 = ((((ct_idx_19 - ct_idx_29) + ct_idx_31) - t255) -
          ct_idx_82_tmp * t56 * t72) +
         t4 * t23 * t31 * t44 * t72;
  t159_tmp = in2[4] * t31 * t32 * t34 * t46;
  t174_tmp = t226_tmp * t34 * t46;
  t117 = t226_tmp * t43;
  t118 = ct_idx_166_tmp * in2[5];
  t119 = -t25 * t75;
  JR[0] =
      (t123 * ((t39 * t120 - t162 * t161) + t159_tmp * ct_idx_189) +
       t530 * ((t119 * t161 + t162 * t120) + t174_tmp * ct_idx_189 * in2[5])) -
      t36 * ((t117 * ct_idx_189 - t19 * t120) + t118 * t161);
  JR[1] = (t523 * ((t39 * t170 + t19 * ct_idx_197) + t20 * t518 * in2[5]) +
           t524 * ((t28 * t518 + ct_idx_166_tmp * ct_idx_197 * in2[5]) +
                   t20 * t170 * in2[5])) +
          t164 * ((-t43 * ct_idx_197 + t19 * t170) +
                  ct_idx_166_tmp * t518 * in2[5]);
  JR[2] =
      (-t527 * ((t39 * t199 - t19 * ct_idx_193) + t20 * t505 * in2[5]) -
       t528 * ((t28 * t505 - ct_idx_166_tmp * ct_idx_193 * in2[5]) +
               t20 * t199 * in2[5])) -
      t5 * ((t43 * ct_idx_193 + t19 * t199) + ct_idx_166_tmp * t505 * in2[5]);
  t161 = ((((ct_idx_22 - ct_idx_29) + ct_idx_31) - t256) -
          ct_idx_82_tmp * t59 * t73) +
         t12 * t23 * t31 * t44 * t73;
  t120 = ((((ct_idx_18 - ct_idx_21) + ct_idx_38_tmp * t59 * in2[3]) -
           t97_tmp * t23 * t31 * t44 * (t42 - 1.0) * in2[3]) +
          ct_idx_67_tmp * t72 * in2[1]) -
         ct_idx_77_tmp * t72 * in2[1];
  t518 = -t25 * t74;
  JR[3] =
      (t123 * ((t518 * t120 + t162 * t161) + t159_tmp * ct_idx_190) +
       t530 * ((t28 * t161 - t162 * t120) + t174_tmp * ct_idx_190 * in2[5])) -
      t36 * ((t117 * ct_idx_190 + t19 * t120) - t118 * t161);
  JR[4] =
      (t523 * ((t39 * ct_idx_195 - t19 * ct_idx_194) + t20 * t292 * in2[5]) +
       t524 * ((t28 * t292 - ct_idx_166_tmp * ct_idx_194 * in2[5]) +
               t20 * ct_idx_195 * in2[5])) +
      t164 * ((t43 * ct_idx_194 + t19 * ct_idx_195) +
              ct_idx_166_tmp * t292 * in2[5]);
  JR[5] =
      (-t527 * ((t39 * t179 + t19 * ct_idx_199) + t20 * t114 * in2[5]) -
       t528 * ((t28 * t114 + ct_idx_166_tmp * ct_idx_199 * in2[5]) +
               t20 * t179 * in2[5])) -
      t5 * ((-t43 * ct_idx_199 + t19 * t179) + ct_idx_166_tmp * t114 * in2[5]);
  JR[6] =
      (t123 * ((t518 * ct_idx_198 + t19 * ct_idx_191) + t20 * t500 * in2[5]) +
       t530 * ((t28 * t500 + ct_idx_166_tmp * ct_idx_191 * in2[5]) -
               t20 * ct_idx_198 * in2[5])) -
      t36 * ((t43 * ct_idx_191 + t19 * ct_idx_198) -
             ct_idx_166_tmp * t500 * in2[5]);
  t161 = ((((ct_idx_19 - ct_idx_30) + ct_idx_32) - t253) -
          ct_idx_82_tmp * t57 * t70) +
         t6 * t21 * t33 * t45 * t70;
  JR[7] =
      (t523 * ((t39 * ct_idx_201 - t19 * t161) + t20 * t187 * in2[5]) +
       t524 * ((t28 * t187 - t118 * t161) + t20 * ct_idx_201 * in2[5])) +
      t164 * ((t43 * t161 + t19 * ct_idx_201) + ct_idx_166_tmp * t187 * in2[5]);
  t161 = ((((t171 - ct_idx_21) + ct_idx_37_tmp * t57 * in2[1]) -
           t199_tmp * t21 * t33 * t45 * (t41 - 1.0) * in2[1]) +
          ct_idx_69_tmp * t71 * in2[3]) -
         ct_idx_79_tmp * t71 * in2[3];
  JR[8] = (-t527 * ((t39 * t519 + t19 * t161) + t20 * t27 * in2[5]) -
           t528 * ((t28 * t27 + t118 * t161) + t20 * t519 * in2[5])) -
          t5 * ((-t43 * t161 + t19 * t519) + ct_idx_166_tmp * t27 * in2[5]);
  JR[9] = (t123 * ((t39 * t85 + t19 * ct_idx_192) - t20 * ct_idx_200 * in2[5]) +
           t530 * ((t119 * ct_idx_200 + ct_idx_166_tmp * ct_idx_192 * in2[5]) +
                   t20 * t85 * in2[5])) -
          t36 * ((t43 * ct_idx_192 - t19 * t85) +
                 ct_idx_166_tmp * ct_idx_200 * in2[5]);
  t161 = ((((t171 - ct_idx_20) + ct_idx_37_tmp * t60 * in2[1]) -
           ct_idx_45_tmp * t21 * t33 * t45 * (t41 - 1.0) * in2[1]) +
          ct_idx_69_tmp * t70 * in2[3]) -
         ct_idx_79_tmp * t70 * in2[3];
  JR[10] =
      (t523 * ((t39 * ct_idx_196 + t19 * t161) + t20 * t187_tmp * in2[5]) +
       t524 * ((t28 * t187_tmp + t118 * t161) + t20 * ct_idx_196 * in2[5])) +
      t164 * ((-t43 * t161 + t19 * ct_idx_196) +
              ct_idx_166_tmp * t187_tmp * in2[5]);
  t161 = ((((ct_idx_22 - ct_idx_30) + ct_idx_32) - t254) -
          ct_idx_82_tmp * t60 * t71) +
         t14 * t21 * t33 * t45 * t71;
  JR[11] = (-t527 * ((t39 * t18 - t19 * t161) + t20 * t515 * in2[5]) -
            t528 * ((t28 * t515 - t118 * t161) + t20 * t18 * in2[5])) -
           t5 * ((t43 * t161 + t19 * t18) + ct_idx_166_tmp * t515 * in2[5]);
  t161 = l * t25;
  t162 = ct_idx_60 * t3;
  t120 = t25 * (t43 - 1.0);
  t159_tmp = in2[4] * t3 * ct_idx_60 * (t43 - 1.0);
  t174_tmp = ct_idx_4_tmp * t35 * t46;
  t117 = t161 * t58;
  t118 = t35 * t8 * t46;
  t119 = ct_idx_154_tmp * t43;
  t518 = (t3 * t43 - l * rt_powd_snf(in2[4], 3.0) * t34 * t46) * t25;
  t39 = t162 * t74;
  t28 = (t3 - ct_idx_3_tmp * t34 * t46) * t25;
  t162 *= t75;
  t27 = t161 * t30 * t32;
  t20 = ct_idx_154_tmp * t433 * in2[5] -
        in2[4] * t30 * t32 * t35 * t46 * t432 * in2[5];
  JR[12] =
      (t123 * (((((((t438 - t518 * t435) + t39 * t435) - t120 * t437 * in2[5]) +
                  t159_tmp * t437 * in2[5]) +
                 t27 * t58 * t432) +
                t174_tmp * t437 * in2[5]) -
               t30 * t8 * t32 * t35 * t46 * t432) +
       t36 * (((((l * t440 - ct_idx_166_tmp * t435) - t117 * t435) +
                t118 * t435) +
               ct_idx_171_tmp * t437 * in2[5]) -
              t119 * t437 * in2[5])) +
      t530 * (((((t20 - t28 * t437) + t162 * t437) - t120 * t435 * in2[5]) +
               t159_tmp * t435 * in2[5]) +
              t174_tmp * t435 * in2[5]);
  t19 = ct_idx_154_tmp * ct_idx_160 * in2[5] - ct_idx_171_tmp * t434 * in2[5];
  JR[13] =
      (t164 * (((((l * t455 - ct_idx_166_tmp * t448) - t117 * t448) +
                 t118 * t448) +
                ct_idx_171_tmp * t449 * in2[5]) -
               t119 * t449 * in2[5]) +
       t523 * (((((((ct_idx_166 - t518 * t448) + t117 * t434) - t118 * t434) +
                  t39 * t448) -
                 t120 * t449 * in2[5]) +
                t159_tmp * t449 * in2[5]) +
               t174_tmp * t449 * in2[5])) +
      t524 * (((((t19 - t28 * t449) + t162 * t449) - t120 * t448 * in2[5]) +
               t159_tmp * t448 * in2[5]) +
              t174_tmp * t448 * in2[5]);
  t18 = ct_idx_154_tmp * ct_idx_161 * in2[5] - ct_idx_171_tmp * t436 * in2[5];
  JR[14] =
      (-t5 *
           (((((l * t10 - ct_idx_166_tmp * t450) - t117 * t450) + t118 * t450) +
             ct_idx_171_tmp * t451 * in2[5]) -
            t119 * t451 * in2[5]) -
       t527 * (((((((ct_idx_167 - t518 * t450) + t117 * t436) - t118 * t436) +
                  t39 * t450) -
                 t120 * t451 * in2[5]) +
                t159_tmp * t451 * in2[5]) +
               t174_tmp * t451 * in2[5])) -
      t528 * (((((t18 - t28 * t451) + t162 * t451) - t120 * t450 * in2[5]) +
               t159_tmp * t450 * in2[5]) +
              t174_tmp * t450 * in2[5]);
  t162 = t11 * ct_idx_60;
  t120 = t16 * t3 * ct_idx_60 * (t43 - 1.0);
  t159_tmp = ct_idx_3_tmp * t35 * t46;
  t161 *= t61;
  t174_tmp = t16 * t35 * t46;
  t117 = (t11 * t43 - l * rt_powd_snf(in2[5], 3.0) * t34 * t46) * t25;
  t118 = t162 * t75;
  t518 = (t11 - ct_idx_4_tmp * t34 * t46 * in2[5]) * t25;
  t162 *= t74;
  JR[15] =
      (t36 * (((((l * t441 - t163) - t161 * t437) + t174_tmp * t437) +
               ct_idx_171_tmp * t435 * in2[5]) -
              t119 * t435 * in2[5]) +
       t530 * (((((((t438 - t117 * t437) - t81) + t118 * t437) + t120 * t435) +
                 t27 * t61 * t432) -
                t16 * t30 * t32 * t35 * t46 * t432) +
               t159_tmp * t435)) +
      t123 * (((((t20 - t518 * t435) - t286_tmp) + t162 * t435) + t120 * t437) +
              t159_tmp * t437);
  JR[16] =
      (t164 * (((((l * t458 - t37) - t161 * t449) + t174_tmp * t449) +
                ct_idx_171_tmp * t448 * in2[5]) -
               t119 * t448 * in2[5]) +
       t524 * (((((((ct_idx_166 - t117 * t449) - t13) + t161 * t434) -
                  t174_tmp * t434) +
                 t118 * t449) +
                t120 * t448) +
               t159_tmp * t448)) +
      t523 * (((((t19 - t518 * t448) - t115_tmp) + t162 * t448) + t120 * t449) +
              t159_tmp * t449);
  JR[17] = (-t5 * (((((l * t459 - t113) - t161 * t451) + t174_tmp * t451) +
                    ct_idx_171_tmp * t450 * in2[5]) -
                   t119 * t450 * in2[5]) -
            t528 * (((((((ct_idx_167 - t117 * t451) - t169) + t161 * t436) -
                       t174_tmp * t436) +
                      t118 * t451) +
                     t120 * t450) +
                    t159_tmp * t450)) -
           t527 * (((((t18 - t518 * t450) - ct_idx_196_tmp) + t162 * t450) +
                    t120 * t451) +
                   t159_tmp * t451);
}

// End of code generation (JR_3_3.cpp)
