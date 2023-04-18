//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// JT_3_1.cpp
//
// Code generation for function 'JT_3_1'
//

// Include files
#include "JT_3_1.h"
#include "limits"
#include <cmath>
#include <cstring>

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

void JT_3_1(double l, const double in2[12], double JT[18])
{
  double t10;
  double t15;
  double t17;
  double t17_tmp;
  double t2;
  double t3;
  double t4;
  double t5;
  double t6;
  double t8;
  // JT_3_1
  //     JT = JT_3_1(L,IN2)
  //     This function was generated by the Symbolic Math Toolbox version 9.2.
  //     11-Apr-2023 15:52:18
  t2 = in2[0] * in2[0];
  t3 = in2[1] * in2[1];
  t4 = t2 + t3;
  t5 = 1.0 / t4;
  t4 = std::sqrt(t4);
  t6 = t5 * t5;
  t8 = 1.0 / rt_powd_snf(t4, 3.0);
  t4 *= l;
  t10 = std::cos(t4);
  t4 = std::sin(t4);
  t15 = -(t5 * (t10 - 1.0));
  t17_tmp = in2[0] * l;
  t17 = t17_tmp * t8 * t4 * in2[1] + in2[0] * t6 * (t10 - 1.0) * in2[1] * 2.0;
  JT[0] = (t15 + t2 * t6 * (t10 - 1.0) * 2.0) + l * t2 * t8 * t4;
  JT[1] = t17;
  JT[2] = -in2[0] * t8 * t4 + t17_tmp * t5 * t10;
  JT[3] = t17;
  JT[4] = (t15 + t3 * t6 * (t10 - 1.0) * 2.0) + l * t3 * t8 * t4;
  JT[5] = -t8 * t4 * in2[1] + l * t5 * t10 * in2[1];
  std::memset(&JT[6], 0, 12U * sizeof(double));
}

// End of code generation (JT_3_1.cpp)
