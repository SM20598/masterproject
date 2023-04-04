//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// a_2_2.cpp
//
// Code generation for function 'a_2_2'
//

// Include files
#include "a_2_2.h"
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

void a_2_2(double l, const double in2[8], double a[3])
{
  double a_tmp;
  double a_tmp_tmp;
  double ab_a_tmp;
  double b_a_tmp;
  double b_a_tmp_tmp;
  double bb_a_tmp;
  double c_a_tmp;
  double c_a_tmp_tmp;
  double cb_a_tmp;
  double d_a_tmp;
  double db_a_tmp;
  double e_a_tmp;
  double eb_a_tmp;
  double f_a_tmp;
  double fb_a_tmp;
  double g_a_tmp;
  double gb_a_tmp;
  double h_a_tmp;
  double hb_a_tmp;
  double i_a_tmp;
  double ib_a_tmp;
  double j_a_tmp;
  double jb_a_tmp;
  double k_a_tmp;
  double kb_a_tmp;
  double l_a_tmp;
  double lb_a_tmp;
  double m_a_tmp;
  double mb_a_tmp;
  double n_a_tmp;
  double nb_a_tmp;
  double o_a_tmp;
  double p_a_tmp;
  double q_a_tmp;
  double r_a_tmp;
  double s_a_tmp;
  double t12;
  double t13;
  double t15;
  double t17;
  double t19;
  double t2;
  double t21;
  double t25;
  double t26;
  double t27;
  double t28;
  double t29;
  double t3;
  double t30;
  double t31;
  double t32;
  double t33;
  double t34;
  double t35;
  double t36;
  double t37;
  double t38;
  double t39;
  double t4;
  double t40;
  double t41;
  double t42;
  double t43;
  double t44;
  double t45;
  double t46;
  double t49;
  double t5;
  double t50;
  double t51;
  double t52;
  double t57;
  double t6;
  double t60;
  double t66;
  double t66_tmp;
  double t_a_tmp;
  double u_a_tmp;
  double v_a_tmp;
  double w_a_tmp;
  double x_a_tmp;
  double y_a_tmp;
  // A_2_2
  //     A = A_2_2(L,IN2)
  //     This function was generated by the Symbolic Math Toolbox version 9.2.
  //     23-Mar-2023 15:24:57
  t2 = in2[0] * in2[4];
  t3 = in2[1] * in2[5];
  t4 = in2[2] * in2[6];
  t5 = in2[3] * in2[7];
  t6 = in2[0] * in2[0];
  t12 = l * l;
  t13 = in2[2] * in2[2];
  t15 = t2 * 2.0;
  t17 = t4 * 2.0;
  t19 = in2[4] * in2[4] * 2.0;
  t21 = in2[6] * in2[6] * 2.0;
  t37 = t2 + t4;
  t38 = t3 + t5;
  t25 = t6 + t13;
  t26 = in2[1] * in2[1] + in2[3] * in2[3];
  t27 = t37 * t37;
  t28 = t38 * t38;
  t29 = t15 + t17;
  t30 = t3 * 2.0 + t5 * 2.0;
  t31 = 1.0 / t25;
  t34 = 1.0 / t26;
  t37 = std::sqrt(t25);
  t38 = std::sqrt(t26);
  t39 = t19 + t21;
  t40 = in2[5] * in2[5] * 2.0 + in2[7] * in2[7] * 2.0;
  t32 = t31 * t31;
  t33 = rt_powd_snf(t31, 3.0);
  t35 = t34 * t34;
  t36 = rt_powd_snf(t34, 3.0);
  t41 = 1.0 / t37;
  t43 = 1.0 / t38;
  t3 = l * t37;
  t5 = l * t38;
  t42 = rt_powd_snf(t41, 3.0);
  t44 = rt_powd_snf(t41, 5.0);
  t45 = rt_powd_snf(t43, 3.0);
  t46 = rt_powd_snf(t43, 5.0);
  t49 = std::cos(t3);
  t50 = std::cos(t5);
  t51 = std::sin(t3);
  t52 = std::sin(t5);
  t25 = t6 * t49;
  t57 = t13 * t49;
  t26 = t13 + t25;
  t60 = t6 + t57;
  t3 = l * t6;
  t5 = (t17 + t15 * t49) - t3 * t29 * t41 * t51 / 2.0;
  t66_tmp = l * t13;
  t66 = (t15 + t17 * t49) - t66_tmp * t29 * t41 * t51 / 2.0;
  a_tmp = in2[0] * l;
  b_a_tmp = in2[0] * t27;
  c_a_tmp = in2[1] * t31;
  d_a_tmp = in2[4] * t29;
  e_a_tmp = a_tmp * t27;
  f_a_tmp = in2[1] * l;
  a_tmp_tmp = in2[4] * l;
  g_a_tmp = a_tmp_tmp * t29;
  b_a_tmp_tmp = in2[0] * t12;
  h_a_tmp = b_a_tmp_tmp * t27;
  i_a_tmp = in2[1] * t29;
  j_a_tmp = in2[0] * in2[6];
  k_a_tmp = in2[0] * in2[7];
  l_a_tmp = a_tmp * t29 * t30;
  m_a_tmp = b_a_tmp * t33;
  n_a_tmp = in2[0] * t28;
  o_a_tmp = in2[0] * t32;
  p_a_tmp = d_a_tmp * t32;
  q_a_tmp = in2[4] * t30;
  r_a_tmp = j_a_tmp * l;
  s_a_tmp = k_a_tmp * l;
  t_a_tmp = a_tmp * t28;
  u_a_tmp = a_tmp * t34;
  v_a_tmp = a_tmp * t31;
  w_a_tmp = a_tmp_tmp * t30;
  x_a_tmp = h_a_tmp * t32;
  y_a_tmp = b_a_tmp_tmp * t28;
  ab_a_tmp = in2[0] * t29 * t30;
  bb_a_tmp = b_a_tmp_tmp * t29 * t30;
  a_tmp_tmp = t12 * t27;
  cb_a_tmp = a_tmp_tmp * t31;
  a[0] =
      (((((((((((((((((((((m_a_tmp * (t49 - 1.0) * -8.0 +
                           o_a_tmp * t39 * (t49 - 1.0)) +
                          p_a_tmp * (t49 - 1.0) * 2.0) -
                         c_a_tmp * t34 * (t50 - 1.0) *
                             (((((t21 + t19 * t49) - cb_a_tmp * t25) -
                                l * t2 * t29 * t41 * t51 * 2.0) +
                               t3 * t27 * t42 * t51) -
                              t3 * t39 * t41 * t51 / 2.0)) -
                        e_a_tmp * t44 * t51 * 5.0) +
                       a_tmp * t39 * t42 * t51 / 2.0) +
                      g_a_tmp * t42 * t51) +
                     x_a_tmp * t49) -
                    in2[5] * t31 * t34 * (t50 - 1.0) * t5 * 2.0) -
                   in2[1] * t27 * t33 * t34 * (t50 - 1.0) * t26 * 8.0) -
                  in2[1] * t28 * t31 * t36 * (t50 - 1.0) * t26 * 8.0) +
                 i_a_tmp * t32 * t34 * (t50 - 1.0) * t5 * 2.0) +
                in2[1] * t30 * t31 * t35 * (t50 - 1.0) * t5 * 2.0) -
               b_a_tmp * t43 * t44 * t51 * t52 * 3.0) -
              n_a_tmp * t41 * t46 * t51 * t52 * 3.0) +
             in2[1] * t32 * t34 * t39 * (t50 - 1.0) * t26) +
            c_a_tmp * t35 * t40 * (t50 - 1.0) * t26) +
           in2[0] * t39 * t42 * t43 * t51 * t52 / 2.0) +
          in2[0] * t40 * t41 * t45 * t51 * t52 / 2.0) +
         in2[5] * t29 * t32 * t34 * (t50 - 1.0) * t26 * 2.0) +
        ((((((((((((((((((((in2[5] * t30 * t31 * t35 * (t50 - 1.0) * t26 * 2.0 +
                            d_a_tmp * t42 * t43 * t51 * t52) +
                           q_a_tmp * t41 * t45 * t51 * t52) -
                          j_a_tmp * in2[7] * t31 * t34 * (t49 - 1.0) *
                              (t50 - 1.0) * 2.0) -
                         in2[4] * in2[6] * t31 * t34 * (t49 - 1.0) *
                             (t50 - 1.0) * in2[3] * 2.0) -
                        in2[4] * in2[7] * t31 * t34 * (t49 - 1.0) *
                            (t50 - 1.0) * in2[2] * 2.0) +
                       e_a_tmp * t32 * t43 * t49 * t52 * 3.0) +
                      t_a_tmp * t35 * t41 * t50 * t51 * 3.0) -
                     v_a_tmp * t39 * t43 * t49 * t52 / 2.0) -
                    u_a_tmp * t40 * t41 * t50 * t51 / 2.0) -
                   f_a_tmp * t28 * t31 * t46 * t52 * t26 * 5.0) +
                  f_a_tmp * t30 * t31 * t45 * t52 * t5) +
                 f_a_tmp * t31 * t40 * t45 * t52 * t26 / 2.0) -
                g_a_tmp * t31 * t43 * t49 * t52) -
               w_a_tmp * t34 * t41 * t50 * t51) +
              in2[5] * l * t30 * t31 * t45 * t52 * t26) +
             in2[1] * t12 * t28 * t31 * t35 * t50 * t26) +
            h_a_tmp * t42 * t43 * t51 * t52) +
           y_a_tmp * t41 * t45 * t51 * t52) -
          i_a_tmp * t30 * t32 * t35 * (t50 - 1.0) * t26 * 2.0) -
         ab_a_tmp * t42 * t45 * t51 * t52 / 2.0)) +
       (((((((((((((((((j_a_tmp * t29 * t32 * t34 * (t49 - 1.0) * (t50 - 1.0) *
                            in2[3] * 2.0 +
                        k_a_tmp * t29 * t32 * t34 * (t49 - 1.0) * (t50 - 1.0) *
                            in2[2] * 2.0) +
                       j_a_tmp * t30 * t31 * t35 * (t49 - 1.0) * (t50 - 1.0) *
                           in2[3] * 2.0) +
                      k_a_tmp * t30 * t31 * t35 * (t49 - 1.0) * (t50 - 1.0) *
                          in2[2] * 2.0) +
                     l_a_tmp * t31 * t45 * t49 * t52 / 2.0) +
                    l_a_tmp * t34 * t42 * t50 * t51 / 2.0) -
                   f_a_tmp * t29 * t30 * t32 * t45 * t52 * t26) -
                  bb_a_tmp * t31 * t34 * t49 * t50 / 2.0) -
                 m_a_tmp * t34 * (t49 - 1.0) * (t50 - 1.0) * in2[2] * in2[3] *
                     8.0) -
                n_a_tmp * t31 * t36 * (t49 - 1.0) * (t50 - 1.0) * in2[2] *
                    in2[3] * 8.0) +
               o_a_tmp * t34 * t39 * (t49 - 1.0) * (t50 - 1.0) * in2[2] *
                   in2[3]) +
              in2[0] * t31 * t35 * t40 * (t49 - 1.0) * (t50 - 1.0) * in2[2] *
                  in2[3]) +
             p_a_tmp * t34 * (t49 - 1.0) * (t50 - 1.0) * in2[2] * in2[3] *
                 2.0) +
            q_a_tmp * t31 * t35 * (t49 - 1.0) * (t50 - 1.0) * in2[2] * in2[3] *
                2.0) +
           r_a_tmp * t29 * t34 * t42 * t51 * (t50 - 1.0) * in2[3]) +
          s_a_tmp * t29 * t34 * t42 * t51 * (t50 - 1.0) * in2[2]) +
         r_a_tmp * t30 * t31 * t45 * t52 * (t49 - 1.0) * in2[3]) +
        s_a_tmp * t30 * t31 * t45 * t52 * (t49 - 1.0) * in2[2])) +
      (((((((((((e_a_tmp * t34 * t44 * t51 * (t50 - 1.0) * in2[2] * in2[3] *
                     -5.0 -
                 t_a_tmp * t31 * t46 * t52 * (t49 - 1.0) * in2[2] * in2[3] *
                     5.0) +
                u_a_tmp * t39 * t42 * t51 * (t50 - 1.0) * in2[2] * in2[3] /
                    2.0) +
               v_a_tmp * t40 * t45 * t52 * (t49 - 1.0) * in2[2] * in2[3] /
                   2.0) +
              g_a_tmp * t34 * t42 * t51 * (t50 - 1.0) * in2[2] * in2[3]) +
             w_a_tmp * t31 * t45 * t52 * (t49 - 1.0) * in2[2] * in2[3]) +
            x_a_tmp * t34 * t49 * (t50 - 1.0) * in2[2] * in2[3]) +
           y_a_tmp * t31 * t35 * t50 * (t49 - 1.0) * in2[2] * in2[3]) -
          ab_a_tmp * t32 * t35 * (t49 - 1.0) * (t50 - 1.0) * in2[2] * in2[3] *
              2.0) -
         l_a_tmp * t32 * t45 * t52 * (t49 - 1.0) * in2[2] * in2[3]) -
        l_a_tmp * t35 * t42 * t51 * (t50 - 1.0) * in2[2] * in2[3]) -
       bb_a_tmp * t42 * t45 * t51 * t52 * in2[2] * in2[3] / 2.0);
  a_tmp = in2[6] * t29;
  b_a_tmp = t27 * t33;
  b_a_tmp_tmp = in2[6] * l;
  c_a_tmp = b_a_tmp_tmp * t29;
  d_a_tmp = l * t27;
  e_a_tmp = l * t28;
  f_a_tmp = l * t31;
  g_a_tmp = t12 * t28;
  h_a_tmp = t29 * t30;
  c_a_tmp_tmp = in2[0] * in2[1];
  i_a_tmp = c_a_tmp_tmp * in2[6];
  j_a_tmp = in2[0] * in2[5];
  k_a_tmp = in2[1] * in2[4];
  l_a_tmp = l * t29 * t30;
  m_a_tmp = i_a_tmp * l;
  n_a_tmp = c_a_tmp_tmp * l;
  o_a_tmp = j_a_tmp * l;
  p_a_tmp = k_a_tmp * l;
  q_a_tmp = c_a_tmp_tmp * t12;
  r_a_tmp = n_a_tmp * t29 * t30;
  s_a_tmp = t39 * t42;
  t_a_tmp = d_a_tmp * t32;
  u_a_tmp = f_a_tmp * t39;
  v_a_tmp = a_tmp_tmp * t42;
  w_a_tmp = e_a_tmp * t35;
  x_a_tmp = l * t34 * t40;
  y_a_tmp = l * t39;
  ab_a_tmp = in2[4] * in2[5];
  bb_a_tmp = c_a_tmp_tmp * t27;
  db_a_tmp = c_a_tmp_tmp * t28;
  eb_a_tmp = j_a_tmp * t29;
  fb_a_tmp = k_a_tmp * t29;
  gb_a_tmp = j_a_tmp * t30;
  hb_a_tmp = k_a_tmp * t30;
  ib_a_tmp = in2[7] * t29;
  jb_a_tmp = in2[6] * t30;
  kb_a_tmp = in2[7] * t30;
  t37 = t12 * t29 * t30;
  t38 = n_a_tmp * t27;
  t6 = n_a_tmp * t31;
  t13 = n_a_tmp * t28;
  t15 = o_a_tmp * t29;
  t17 = p_a_tmp * t29;
  o_a_tmp *= t30;
  p_a_tmp *= t30;
  t2 = q_a_tmp * t28;
  t12 = q_a_tmp * t27;
  lb_a_tmp = c_a_tmp_tmp * t29 * t30;
  mb_a_tmp = c_a_tmp * t31;
  nb_a_tmp = in2[7] * l;
  t3 = b_a_tmp_tmp * t30;
  t5 = nb_a_tmp * t30;
  q_a_tmp = q_a_tmp * t29 * t30;
  t25 = l_a_tmp * t31;
  t26 = t37 * t31;
  a[1] =
      ((((((((((((((((((((((a_tmp * t32 * (t49 - 1.0) * 2.0 -
                            b_a_tmp * (t49 - 1.0) * in2[2] * 8.0) +
                           t32 * t39 * (t49 - 1.0) * in2[2]) -
                          t31 * t34 * (t50 - 1.0) * in2[3] *
                              (((((t19 + t21 * t49) - cb_a_tmp * t57) -
                                 l * t4 * t29 * t41 * t51 * 2.0) +
                                t66_tmp * t27 * t42 * t51) -
                               t66_tmp * t39 * t41 * t51 / 2.0)) +
                         c_a_tmp * t42 * t51) -
                        in2[7] * t31 * t34 * (t50 - 1.0) * t66 * 2.0) -
                       d_a_tmp * t44 * t51 * in2[2] * 5.0) +
                      y_a_tmp * t42 * t51 * in2[2] / 2.0) +
                     a_tmp_tmp * t32 * t49 * in2[2]) +
                    ib_a_tmp * t32 * t34 * (t50 - 1.0) * t60 * 2.0) +
                   kb_a_tmp * t31 * t35 * (t50 - 1.0) * t60 * 2.0) +
                  a_tmp * t42 * t43 * t51 * t52) +
                 jb_a_tmp * t41 * t45 * t51 * t52) -
                b_a_tmp * t34 * (t50 - 1.0) * t60 * in2[3] * 8.0) -
               t28 * t31 * t36 * (t50 - 1.0) * t60 * in2[3] * 8.0) +
              t29 * t32 * t34 * (t50 - 1.0) * t66 * in2[3] * 2.0) -
             t27 * t43 * t44 * t51 * t52 * in2[2] * 3.0) +
            t30 * t31 * t35 * (t50 - 1.0) * t66 * in2[3] * 2.0) -
           t28 * t41 * t46 * t51 * t52 * in2[2] * 3.0) +
          t32 * t34 * t39 * (t50 - 1.0) * t60 * in2[3]) +
         t31 * t35 * t40 * (t50 - 1.0) * t60 * in2[3]) +
        (((((((((((((((((((s_a_tmp * t43 * t51 * t52 * in2[2] / 2.0 +
                           t40 * t41 * t45 * t51 * t52 * in2[2] / 2.0) -
                          j_a_tmp * in2[6] * t31 * t34 * (t49 - 1.0) *
                              (t50 - 1.0) * 2.0) -
                         k_a_tmp * in2[6] * t31 * t34 * (t49 - 1.0) *
                             (t50 - 1.0) * 2.0) -
                        ab_a_tmp * t31 * t34 * (t49 - 1.0) * (t50 - 1.0) *
                            in2[2] * 2.0) -
                       mb_a_tmp * t43 * t49 * t52) -
                      t3 * t34 * t41 * t50 * t51) +
                     t5 * t31 * t45 * t52 * t60) +
                    t_a_tmp * t43 * t49 * t52 * in2[2] * 3.0) +
                   w_a_tmp * t41 * t50 * t51 * in2[2] * 3.0) -
                  u_a_tmp * t43 * t49 * t52 * in2[2] / 2.0) -
                 x_a_tmp * t41 * t50 * t51 * in2[2] / 2.0) -
                e_a_tmp * t31 * t46 * t52 * t60 * in2[3] * 5.0) +
               l * t30 * t31 * t45 * t52 * t66 * in2[3]) +
              f_a_tmp * t40 * t45 * t52 * t60 * in2[3] / 2.0) +
             g_a_tmp * t31 * t35 * t50 * t60 * in2[3]) +
            v_a_tmp * t43 * t51 * t52 * in2[2]) +
           g_a_tmp * t41 * t45 * t51 * t52 * in2[2]) -
          h_a_tmp * t32 * t35 * (t50 - 1.0) * t60 * in2[3] * 2.0) -
         h_a_tmp * t42 * t45 * t51 * t52 * in2[2] / 2.0)) +
       (((((((((((((((((t26 * t34 * t49 * t50 * in2[2] * -0.5 +
                        i_a_tmp * t29 * t32 * t34 * (t49 - 1.0) * (t50 - 1.0) *
                            2.0) +
                       i_a_tmp * t30 * t31 * t35 * (t49 - 1.0) * (t50 - 1.0) *
                           2.0) -
                      bb_a_tmp * t33 * t34 * (t49 - 1.0) * (t50 - 1.0) *
                          in2[2] * 8.0) -
                     db_a_tmp * t31 * t36 * (t49 - 1.0) * (t50 - 1.0) * in2[2] *
                         8.0) +
                    c_a_tmp_tmp * t32 * t34 * t39 * (t49 - 1.0) * (t50 - 1.0) *
                        in2[2]) +
                   c_a_tmp_tmp * t31 * t35 * t40 * (t49 - 1.0) * (t50 - 1.0) *
                       in2[2]) +
                  eb_a_tmp * t32 * t34 * (t49 - 1.0) * (t50 - 1.0) * in2[2] *
                      2.0) +
                 fb_a_tmp * t32 * t34 * (t49 - 1.0) * (t50 - 1.0) * in2[2] *
                     2.0) +
                gb_a_tmp * t31 * t35 * (t49 - 1.0) * (t50 - 1.0) * in2[2] *
                    2.0) +
               hb_a_tmp * t31 * t35 * (t49 - 1.0) * (t50 - 1.0) * in2[2] *
                   2.0) +
              t25 * t45 * t49 * t52 * in2[2] / 2.0) +
             l_a_tmp * t34 * t42 * t50 * t51 * in2[2] / 2.0) -
            l_a_tmp * t32 * t45 * t52 * t60 * in2[3]) +
           m_a_tmp * t29 * t34 * t42 * t51 * (t50 - 1.0)) +
          m_a_tmp * t30 * t31 * t45 * t52 * (t49 - 1.0)) -
         t38 * t34 * t44 * t51 * (t50 - 1.0) * in2[2] * 5.0) -
        t13 * t31 * t46 * t52 * (t49 - 1.0) * in2[2] * 5.0)) +
      (((((((((((n_a_tmp * t34 * t39 * t42 * t51 * (t50 - 1.0) * in2[2] / 2.0 +
                 t6 * t40 * t45 * t52 * (t49 - 1.0) * in2[2] / 2.0) +
                t15 * t34 * t42 * t51 * (t50 - 1.0) * in2[2]) +
               t17 * t34 * t42 * t51 * (t50 - 1.0) * in2[2]) +
              o_a_tmp * t31 * t45 * t52 * (t49 - 1.0) * in2[2]) +
             p_a_tmp * t31 * t45 * t52 * (t49 - 1.0) * in2[2]) +
            t12 * t32 * t34 * t49 * (t50 - 1.0) * in2[2]) +
           t2 * t31 * t35 * t50 * (t49 - 1.0) * in2[2]) -
          lb_a_tmp * t32 * t35 * (t49 - 1.0) * (t50 - 1.0) * in2[2] * 2.0) -
         r_a_tmp * t32 * t45 * t52 * (t49 - 1.0) * in2[2]) -
        r_a_tmp * t35 * t42 * t51 * (t50 - 1.0) * in2[2]) -
       q_a_tmp * t42 * t45 * t51 * t52 * in2[2] / 2.0);
  a[2] =
      ((((((((((((((((((((((((t27 * t44 * t51 * 3.0 - s_a_tmp * t51 / 2.0) -
                             t_a_tmp * t49 * 3.0) +
                            u_a_tmp * t49 / 2.0) -
                           v_a_tmp * t51) +
                          t28 * t46 * t49 * t52 * 3.0) -
                         t40 * t45 * t49 * t52 / 2.0) -
                        w_a_tmp * t49 * t50 * 3.0) +
                       x_a_tmp * t49 * t50 / 2.0) -
                      g_a_tmp * t45 * t49 * t52) +
                     d_a_tmp * t42 * t43 * t51 * t52) -
                    y_a_tmp * t41 * t43 * t51 * t52 / 2.0) -
                   cb_a_tmp * t43 * t49 * t52) -
                  ab_a_tmp * t34 * t41 * t51 * (t50 - 1.0) * 2.0) -
                 in2[6] * in2[7] * t34 * t41 * t51 * (t50 - 1.0) * 2.0) -
                bb_a_tmp * t34 * t44 * t51 * (t50 - 1.0) * 3.0) -
               db_a_tmp * t36 * t41 * t51 * (t50 - 1.0) * 8.0) +
              c_a_tmp_tmp * t34 * t39 * t42 * t51 * (t50 - 1.0) / 2.0) +
             c_a_tmp_tmp * t35 * t40 * t41 * t51 * (t50 - 1.0)) +
            eb_a_tmp * t34 * t42 * t51 * (t50 - 1.0)) +
           fb_a_tmp * t34 * t42 * t51 * (t50 - 1.0)) +
          gb_a_tmp * t35 * t41 * t51 * (t50 - 1.0) * 2.0) +
         hb_a_tmp * t35 * t41 * t51 * (t50 - 1.0) * 2.0) +
        ((((((((((((((((((a_tmp * t34 * t42 * t51 * (t50 - 1.0) * in2[3] +
                          ib_a_tmp * t34 * t42 * t51 * (t50 - 1.0) * in2[2]) +
                         jb_a_tmp * t35 * t41 * t51 * (t50 - 1.0) * in2[3] *
                             2.0) +
                        kb_a_tmp * t35 * t41 * t51 * (t50 - 1.0) * in2[2] *
                            2.0) +
                       l_a_tmp * t41 * t45 * t51 * t52 / 2.0) -
                      t37 * t34 * t41 * t50 * t51 / 2.0) -
                     t27 * t34 * t44 * t51 * (t50 - 1.0) * in2[2] * in2[3] *
                         3.0) -
                    t28 * t36 * t41 * t51 * (t50 - 1.0) * in2[2] * in2[3] *
                        8.0) +
                   t34 * t39 * t42 * t51 * (t50 - 1.0) * in2[2] * in2[3] /
                       2.0) +
                  t35 * t40 * t41 * t51 * (t50 - 1.0) * in2[2] * in2[3]) +
                 t_a_tmp * t34 * t49 * (t50 - 1.0) * in2[2] * in2[3] * 3.0) -
                f_a_tmp * t34 * t39 * t49 * (t50 - 1.0) * in2[2] * in2[3] /
                    2.0) -
               e_a_tmp * t41 * t46 * t51 * t52 * in2[2] * in2[3] * 5.0) +
              l * t40 * t41 * t45 * t51 * t52 * in2[2] * in2[3] / 2.0) +
             g_a_tmp * t35 * t41 * t50 * t51 * in2[2] * in2[3]) +
            a_tmp_tmp * t34 * t42 * t51 * (t50 - 1.0) * in2[2] * in2[3]) -
           h_a_tmp * t35 * t42 * t51 * (t50 - 1.0) * in2[2] * in2[3]) +
          t38 * t32 * t34 * t49 * (t50 - 1.0) * 3.0) -
         t6 * t34 * t39 * t49 * (t50 - 1.0) / 2.0)) +
       (((((((((((((((((t13 * t41 * t46 * t51 * t52 * -5.0 +
                        n_a_tmp * t40 * t41 * t45 * t51 * t52 / 2.0) -
                       t15 * t31 * t34 * t49 * (t50 - 1.0)) -
                      t17 * t31 * t34 * t49 * (t50 - 1.0)) +
                     o_a_tmp * t41 * t45 * t51 * t52) +
                    p_a_tmp * t41 * t45 * t51 * t52) +
                   t2 * t35 * t41 * t50 * t51) +
                  t12 * t34 * t42 * t51 * (t50 - 1.0)) -
                 lb_a_tmp * t35 * t42 * t51 * (t50 - 1.0)) -
                mb_a_tmp * t34 * t49 * (t50 - 1.0) * in2[3]) -
               nb_a_tmp * t29 * t31 * t34 * t49 * (t50 - 1.0) * in2[2]) +
              t3 * t41 * t45 * t51 * t52 * in2[3]) +
             t5 * t41 * t45 * t51 * t52 * in2[2]) +
            r_a_tmp * t31 * t35 * t49 * (t50 - 1.0)) -
           r_a_tmp * t42 * t45 * t51 * t52 / 2.0) +
          q_a_tmp * t31 * t45 * t49 * t52 / 2.0) +
         t25 * t35 * t49 * (t50 - 1.0) * in2[2] * in2[3]) -
        l_a_tmp * t42 * t45 * t51 * t52 * in2[2] * in2[3] / 2.0)) +
      t26 * t45 * t49 * t52 * in2[2] * in2[3] / 2.0;
}

// End of code generation (a_2_2.cpp)
