//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// JR_3_1.cpp
//
// Code generation for function 'JR_3_1'
//

// Include files
#include "JR_3_1.h"
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

void JR_3_1(double l, const double in2[12], double JR[18])
{
  double JR_tmp;
  double t10;
  double t12;
  double t2;
  double t3;
  double t4;
  double t5;
  double t7;
  // JR_3_1
  //     JR = JR_3_1(L,IN2)
  //     This function was generated by the Symbolic Math Toolbox version 9.2.
  //     29-Mar-2023 20:03:43
  t2 = in2[0] * in2[0];
  t3 = in2[3] * in2[3];
  t4 = t2 + t3;
  t5 = 1.0 / t4;
  t4 = std::sqrt(t4);
  t7 = 1.0 / rt_powd_snf(t4, 3.0);
  t4 *= l;
  t10 = std::sin(t4);
  t12 = std::cos(t4) - 1.0;
  JR_tmp = t4 - t10;
  JR[0] = in2[0] * t7 * in2[3] * JR_tmp;
  JR[1] = -t7 * (t2 * t4 + t3 * t10);
  JR[2] = t5 * t12 * in2[3];
  JR[3] = 0.0;
  JR[4] = 0.0;
  JR[5] = 0.0;
  JR[6] = 0.0;
  JR[7] = 0.0;
  JR[8] = 0.0;
  JR[9] = t7 * (t3 * t4 + t2 * t10);
  JR[10] = -in2[0] * t7 * in2[3] * JR_tmp;
  JR[11] = -in2[0] * t5 * t12;
  JR[12] = 0.0;
  JR[13] = 0.0;
  JR[14] = 0.0;
  JR[15] = 0.0;
  JR[16] = 0.0;
  JR[17] = 0.0;
}

// End of code generation (JR_3_1.cpp)
