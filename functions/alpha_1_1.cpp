//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// alpha_1_1.cpp
//
// Code generation for function 'alpha_1_1'
//

// Include files
#include "alpha_1_1.h"
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

void alpha_1_1(double l, const double in2[4], double alpha[3])
{
  double alpha_tmp;
  double b_alpha_tmp;
  double c_alpha_tmp;
  double d_alpha_tmp;
  double t10;
  double t11;
  double t12;
  double t14;
  double t15;
  double t16;
  double t2;
  double t3;
  double t4;
  double t5;
  // ALPHA_1_1
  //     ALPHA = ALPHA_1_1(L,IN2)
  //     This function was generated by the Symbolic Math Toolbox version 9.2.
  //     29-Mar-2023 16:38:54
  t2 = in2[0] * in2[3];
  t3 = in2[1] * in2[2];
  t4 = in2[0] * in2[0];
  t5 = in2[1] * in2[1];
  t11 = in2[0] * in2[2] * 2.0 + in2[1] * in2[3] * 2.0;
  t10 = t2 - t3;
  t12 = std::sqrt(t4 + t5);
  t14 = l * t12;
  t15 = std::cos(t14);
  t16 = std::sin(t14);
  alpha_tmp = in2[2] * t4;
  b_alpha_tmp = alpha_tmp * t14;
  c_alpha_tmp = t2 * t14;
  d_alpha_tmp = t10 * (1.0 / rt_powd_snf(t12, 5.0));
  alpha[0] = d_alpha_tmp * (((((((b_alpha_tmp - alpha_tmp * t16 * 2.0) +
                                 c_alpha_tmp * in2[1] * 2.0) -
                                t2 * t16 * in2[1] * 3.0) +
                               t3 * t16 * in2[1]) +
                              -t3 * t14 * in2[1]) +
                             b_alpha_tmp * t15) +
                            c_alpha_tmp * t15 * in2[1]);
  alpha_tmp = in2[0] * t3;
  b_alpha_tmp = in2[3] * t5;
  c_alpha_tmp = alpha_tmp * t14;
  t4 = b_alpha_tmp * t14;
  alpha[1] =
      d_alpha_tmp *
      (((((((-in2[0] * t2 * t14 + c_alpha_tmp * 2.0) + in2[0] * t2 * t16) -
           alpha_tmp * t16 * 3.0) +
          t4) -
         b_alpha_tmp * t16 * 2.0) +
        c_alpha_tmp * t15) +
       t4 * t15);
  alpha[2] = t10 * t11 / rt_powd_snf(t12, 4.0) * (t15 - 1.0) +
             l * t10 * t11 / rt_powd_snf(t12, 3.0) * t16 / 2.0;
}

// End of code generation (alpha_1_1.cpp)
