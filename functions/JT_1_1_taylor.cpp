//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// JT_1_1_taylor.cpp
//
// Code generation for function 'JT_1_1_taylor'
//

// Include files
#include "JT_1_1_taylor.h"
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

void JT_1_1_taylor(double l, const double in2[4], double JT[6])
{
  double t10;
  double t11;
  double t12;
  double t13;
  double t15;
  double t16;
  double t17;
  double t18;
  double t2;
  double t3;
  double t31;
  double t4;
  double t5;
  double t6;
  double t7;
  double t8;
  double t9;
  // JT_1_1_taylor
  //     JT = JT_1_1_taylor(L,IN2)
  //     This function was generated by the Symbolic Math Toolbox version 9.2.
  //     18-Apr-2023 09:57:46
  t2 = in2[0] * in2[0];
  t3 = l * l;
  t4 = rt_powd_snf(l, 3.0);
  t6 = rt_powd_snf(l, 5.0);
  t8 = rt_powd_snf(l, 7.0);
  t9 = in2[1] * in2[1];
  t13 = rt_powd_snf(l, 11.0);
  t5 = t3 * t3;
  t7 = rt_powd_snf(t3, 3.0);
  t11 = rt_powd_snf(t4, 3.0);
  t12 = rt_powd_snf(t3, 5.0);
  t15 = t2 + t9;
  t10 = t5 * t5;
  t16 = t15 * t15;
  t17 = rt_powd_snf(t15, 3.0);
  t18 = t16 * t16;
  t31 = ((-(in2[0] * t5 * in2[1] / 12.0) + in2[0] * t7 * t15 * in2[1] / 180.0) -
         in2[0] * t10 * t16 * in2[1] / 6720.0) +
        in2[0] * t12 * t17 * in2[1] / 453600.0;
  t3 = (((t3 / 2.0 - t5 * t15 / 24.0) + t7 * t16 / 720.0) -
        t10 * t17 / 40320.0) +
       t12 * t18 / 3.6288E+6;
  JT[0] = (((t3 - t2 * t5 / 12.0) + t2 * t7 * t15 / 180.0) -
           t2 * t10 * t16 / 6720.0) +
          t2 * t12 * t17 / 453600.0;
  JT[1] = t31;
  JT[2] = (((in2[0] * t4 * -0.33333333333333331 + in2[0] * t6 * t15 / 30.0) -
            in2[0] * t8 * t16 / 840.0) +
           in2[0] * t11 * t17 / 45360.0) -
          in2[0] * t13 * t18 / 3.99168E+6;
  JT[3] = t31;
  JT[4] = (((t3 - t5 * t9 / 12.0) + t7 * t9 * t15 / 180.0) -
           t9 * t10 * t16 / 6720.0) +
          t9 * t12 * t17 / 453600.0;
  JT[5] = (((t4 * in2[1] * -0.33333333333333331 + t6 * t15 * in2[1] / 30.0) -
            t8 * t16 * in2[1] / 840.0) +
           t11 * t17 * in2[1] / 45360.0) -
          t13 * t18 * in2[1] / 3.99168E+6;
}

// End of code generation (JT_1_1_taylor.cpp)