#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>
#include <iostream>

// Mass Matrix
#include "../functions/M_1.h"
#include "../functions/M_2.h"
#include "../functions/M_1_taylor.h"
#include "../functions/M_2_taylor.h"

// k-vector (dynamic forces)
#include "../functions/k_1.h"
#include "../functions/k_2.h"
#include "../functions/k_1_taylor.h"
#include "../functions/k_2_taylor.h"

// q-vector (external forces)
#include "../functions/q_1.h"
#include "../functions/q_2.h"
#include "../functions/q_1_taylor.h"
#include "../functions/q_2_taylor.h"

// b-vector (input forces)
#include "../functions/b_1.h"
#include "../functions/b_2.h"
#include "../functions/b_1_taylor.h"
#include "../functions/b_2_taylor.h"

// output
#include "../functions/h_1.h"
#include "../functions/h_2.h"
#include "../functions/h_1_taylor.h"
#include "../functions/h_2_taylor.h"

#include "../functions/mytestfunc.h"

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

namespace  py = pybind11;

void call_test_function(const py::array_t<double>& state, const py::array_t<double>& result, double len, int cur_seg_num, bool use_taylor) {
    py::buffer_info state_buf = state.request();
    auto *ptr_state = (double *) state_buf.ptr;

    py::buffer_info result_buf = result.request();
    auto *ptr_result = (double *) result_buf.ptr;
    mytestfunction(len, ptr_state, ptr_result);
}

void solve_system(
//        const py::array_t<double>& result,
        const py::array_t<double>& state,
        const py::array_t<double>& M_mem,
        const py::array_t<double>& k_mem,
        const py::array_t<double>& q_mem,
        const py::array_t<double>& b_mem,
        const py::array_t<double>& z_mem,
        const py::array_t<double>& f_s,
        const py::array_t<double>& l_s,
        const py::array_t<double>& r_s,
        const py::array_t<double>& m_s,
        const py::array_t<double>& E_s,
        const py::array_t<double>& Jxx_s,
        double gr,
        double gl,
        bool use_taylor){

//    py::buffer_info result_buf = result.request();
    py::buffer_info state_buf = state.request();
    py::buffer_info M_buf = M_mem.request();
    py::buffer_info k_buf = k_mem.request();
    py::buffer_info q_buf = q_mem.request();
    py::buffer_info b_buf = b_mem.request();
    py::buffer_info z_buf = z_mem.request();
    py::buffer_info f_buf = f_s.request();
    py::buffer_info l_buf = l_s.request();
    py::buffer_info r_buf = r_s.request();
    py::buffer_info m_buf = m_s.request();
    py::buffer_info E_buf = E_s.request();
    py::buffer_info Jxx_buf = Jxx_s.request();

//    auto *ptr_result = (double *) result_buf.ptr;
    auto *ptr_state = (double *) state_buf.ptr;
    auto *ptr_M = (double *) M_buf.ptr;
    auto *ptr_k = (double *) k_buf.ptr;
    auto *ptr_q = (double *) q_buf.ptr;
    auto *ptr_b = (double *) b_buf.ptr;
    auto *ptr_z = (double *) z_buf.ptr;
    auto *ptr_f = (double *) f_buf.ptr;
    auto *ptr_l = (double *) l_buf.ptr;
    auto *ptr_r = (double *) r_buf.ptr;
    auto *ptr_m = (double *) m_buf.ptr;
    auto *ptr_E = (double *) E_buf.ptr;
    auto *ptr_Jxx = (double *) Jxx_buf.ptr;

    switch (int(state_buf.shape[0] / 4)) {
        case 1:
            (use_taylor) ? M_1_taylor(ptr_state, ptr_l[0], ptr_r[0], ptr_m[0], ptr_E[0], ptr_Jxx[0], gr, gl, ptr_f, ptr_M) : M_1(ptr_state, ptr_l[0], ptr_r[0], ptr_m[0], ptr_E[0], ptr_Jxx[0], gr, gl, ptr_f, ptr_M);
            (use_taylor) ? k_1_taylor(ptr_state, ptr_l[0], ptr_r[0], ptr_m[0], ptr_E[0], ptr_Jxx[0], gr, gl, ptr_f, ptr_k) : k_1(ptr_state, ptr_l[0], ptr_r[0], ptr_m[0], ptr_E[0], ptr_Jxx[0], gr, gl, ptr_f, ptr_k);
            (use_taylor) ? q_1_taylor(ptr_state, ptr_l[0], ptr_r[0], ptr_m[0], ptr_E[0], ptr_Jxx[0], gr, gl, ptr_f, ptr_q) : q_1(ptr_state, ptr_l[0], ptr_r[0], ptr_m[0], ptr_E[0], ptr_Jxx[0], gr, gl, ptr_f, ptr_q);
            (use_taylor) ? b_1_taylor(ptr_state, ptr_l[0], ptr_r[0], ptr_m[0], ptr_E[0], ptr_Jxx[0], gr, gl, ptr_f, ptr_b) : b_1(ptr_state, ptr_l[0], ptr_r[0], ptr_m[0], ptr_E[0], ptr_Jxx[0], gr, gl, ptr_f, ptr_b);
            (use_taylor) ? h_1_taylor(ptr_state, ptr_l[0], ptr_r[0], ptr_m[0], ptr_E[0], ptr_Jxx[0], gr, gl, ptr_f, ptr_z) : h_1(ptr_state, ptr_l[0], ptr_r[0], ptr_m[0], ptr_E[0], ptr_Jxx[0], gr, gl, ptr_f, ptr_z);

            break;
        case 2:
            (use_taylor) ? M_2_taylor(ptr_state, ptr_l, ptr_r, ptr_m, ptr_E, ptr_Jxx, gr, gl, ptr_f, ptr_M) : M_2(ptr_state, ptr_l, ptr_r, ptr_m, ptr_E, ptr_Jxx, gr, gl, ptr_f, ptr_M);
            (use_taylor) ? k_2_taylor(ptr_state, ptr_l, ptr_r, ptr_m, ptr_E, ptr_Jxx, gr, gl, ptr_f, ptr_k) : k_2(ptr_state, ptr_l, ptr_r, ptr_m, ptr_E, ptr_Jxx, gr, gl, ptr_f, ptr_k);
            (use_taylor) ? q_2_taylor(ptr_state, ptr_l, ptr_r, ptr_m, ptr_E, ptr_Jxx, gr, gl, ptr_f, ptr_q) : q_2(ptr_state, ptr_l, ptr_r, ptr_m, ptr_E, ptr_Jxx, gr, gl, ptr_f, ptr_q);
            (use_taylor) ? b_2_taylor(ptr_state, ptr_l, ptr_r, ptr_m, ptr_E, ptr_Jxx, gr, gl, ptr_f, ptr_b) : b_2(ptr_state, ptr_l, ptr_r, ptr_m, ptr_E, ptr_Jxx, gr, gl, ptr_f, ptr_b);
            (use_taylor) ? h_2_taylor(ptr_state, ptr_l, ptr_r, ptr_m, ptr_E, ptr_Jxx, gr, gl, ptr_f, ptr_z) : h_2(ptr_state, ptr_l, ptr_r, ptr_m, ptr_E, ptr_Jxx, gr, gl, ptr_f, ptr_z);
            break;
    }

}

//void mass_matrix(const py::array_t<double>& state,
//                 const py::array_t<double>& result,
//                 int cur_seg_num, bool use_taylor,
//                 const py::array_t<double>& l_s,
//                 const py::array_t<double>& r_s,
//                 const py::array_t<double>& m_s,
//                 const py::array_t<double>& E_s,
//                 const py::array_t<double>& Jxx_s,
//                 double gr,
//                 double gl,
//                 const py::array_t<double>& f_s){
//    py::buffer_info state_buf = state.request();
//    auto *ptr_state = (double *) state_buf.ptr;
//    py::buffer_info result_buf = result.request();
//    auto *ptr_result = (double *) result_buf.ptr;
//
//    // call function depending on total number of segments and current segment
//    switch (int(state_buf.shape[0] / 4)) {
//        case 1:
//            (use_taylor) ? M_1_1_taylor(ptr_state, l_s, r_s, m_s, E_s, Jxx_s, gr, gl, f_s, ptr_result) : M_1_1(ptr_state, l_s, r_s, m_s, E_s, Jxx_s, gr, gl, f_s, ptr_result); break;
//    }
//}
//
//void dynamic_forces(const py::array_t<double>& state,
//                    const py::array_t<double>& result,
//                    int cur_seg_num, bool use_taylor,
//                    const py::array_t<double>& l_s,
//                    const py::array_t<double>& r_s,
//                    const py::array_t<double>& m_s,
//                    const py::array_t<double>& E_s,
//                    const py::array_t<double>& Jxx_s,
//                    double gr,
//                    double gl,
//                    const py::array_t<double>& f_s){
//    py::buffer_info state_buf = state.request();
//    auto *ptr_state = (double *) state_buf.ptr;
//    py::buffer_info result_buf = result.request();
//    auto *ptr_result = (double *) result_buf.ptr;
//
//    // call function depending on total number of segments and current segment
//    switch (int(state_buf.shape[0] / 4)) {
//        case 1:
//            (use_taylor) ? k_1_1_taylor(ptr_state, l_s, r_s, m_s, E_s, Jxx_s, gr, gl, f_s, ptr_result) : k_1_1(ptr_state, l_s, r_s, m_s, E_s, Jxx_s, gr, gl, f_s, ptr_result); break;
//    }
//}
//
//void applied_forces(const py::array_t<double>& state,
//                    const py::array_t<double>& result,
//                    int cur_seg_num, bool use_taylor,
//                    const py::array_t<double>& l_s,
//                    const py::array_t<double>& r_s,
//                    const py::array_t<double>& m_s,
//                    const py::array_t<double>& E_s,
//                    const py::array_t<double>& Jxx_s,
//                    double gr,
//                    double gl,
//                    const py::array_t<double>& f_s){
//    py::buffer_info state_buf = state.request();
//    auto *ptr_state = (double *) state_buf.ptr;
//    py::buffer_info result_buf = result.request();
//    auto *ptr_result = (double *) result_buf.ptr;
//
//    // call function depending on total number of segments and current segment
//    switch (int(state_buf.shape[0] / 4)) {
//        case 1:
//            (use_taylor) ? q_1_1_taylor(ptr_state, l_s, r_s, m_s, E_s, Jxx_s, gr, gl, f_s, ptr_result) : q_1_1(ptr_state, l_s, r_s, m_s, E_s, Jxx_s, gr, gl, f_s, ptr_result); break;
//    }
//}
//
//void input_forces(const py::array_t<double>& state,
//                  const py::array_t<double>& result,
//                  int cur_seg_num, bool use_taylor,
//                  const py::array_t<double>& l_s,
//                  const py::array_t<double>& r_s,
//                  const py::array_t<double>& m_s,
//                  const py::array_t<double>& E_s,
//                  const py::array_t<double>& Jxx_s,
//                  double gr,
//                  double gl,
//                  const py::array_t<double>& f_s){
//    py::buffer_info state_buf = state.request();
//    auto *ptr_state = (double *) state_buf.ptr;
//    py::buffer_info result_buf = result.request();
//    auto *ptr_result = (double *) result_buf.ptr;
//
//    // call function depending on total number of segments and current segment
//    switch (int(state_buf.shape[0] / 4)) {
//        case 1:
//            (use_taylor) ? b_1_1_taylor(ptr_state, l_s, r_s, m_s, E_s, Jxx_s, gr, gl, f_s, ptr_result) : b_1_1(ptr_state, l_s, r_s, m_s, E_s, Jxx_s, gr, gl, f_s, ptr_result); break;
//    }
//}

/*void trans_acc_loc(const py::array_t<double>& state, const py::array_t<double>& result, double len, int cur_seg_num, bool use_taylor){
    py::buffer_info state_buf = state.request();
    auto *ptr_state = (double *) state_buf.ptr;
    py::buffer_info result_buf = result.request();
    auto *ptr_result = (double *) result_buf.ptr;

//    // extract state info
//    py::buffer_info in_info = state.request();
//    auto state_shape = in_info.shape;
//    int tot_num_seg = int(state_shape[0] / 4);
//
//    // for matlab generated cpp functions
//    double conv_state[state_shape[0]];
//    int res_len = 3;
//    double a_[res_len];
//
//    // convert values from py array to double array
//    double *ptr_in = static_cast<double *>(in_info.ptr);
//    for (int i=0; i< state_shape[0];i++) {
//        conv_state[i] = ptr_in[i];
//    }


    // call function depending on total number of segments and current segment
    switch (int(state_buf.shape[0] / 4)) {
        case 1:
            (use_taylor)? a_1_1_taylor(len, ptr_state, ptr_result) : a_1_1(len, ptr_state, ptr_result); break;

        case 2:
            switch(cur_seg_num) {
                case 1: a_2_1(len, ptr_state, ptr_result); break;
                case 2: a_2_2(len, ptr_state, ptr_result); break;
            }
            break;

        case 3:
            switch(cur_seg_num) {
                case 1: a_3_1(len, ptr_state, ptr_result); break;
                case 2: a_3_2(len, ptr_state, ptr_result); break;
                case 3: a_3_3(len, ptr_state, ptr_result); break;
            }
            break;

        default: std::cout << "WARNING: DEFAULT RETURNED" << std::endl;
            break;
    }

//    // convert result to py array
//    auto result = py::array_t<double>(res_len);
//    py::buffer_info res_info = result.request();
//    double *ptr_res = static_cast<double *>(res_info.ptr);
//
//    for (int i=0; i< res_len;i++){
//        ptr_res[i] = a_[i];
//    }
//
//    return result;
}*/

namespace py = pybind11;

PYBIND11_MODULE(motionlib, m) {
    m.doc() = R"pbdoc(
        Pybind11 example plugin
        -----------------------

        .. currentmodule:: cmake_example

        .. autosummary::
           :toctree: _generate

           add
           subtract
    )pbdoc";

    m.def("call_test_function", &call_test_function, R"pbdoc(
        ** FOR TESTING PURPOSES ONLY **

        @params:
            - state : current state of soft robot
            - result : array-like object to store result in
            - cur_seg_num : number of current segment
            - use_taylor : if taylor approximation around 0 is desired
    )pbdoc");

    m.def("eval_state", &solve_system, R"pbdoc(
        calculate terms of equation of motion for current state

        @params:
            - result : array-like, object to store result in
            - state : current state of soft robot
            - M_mem : memory for mass matrix
            - k_mem : memory for dynamic forces
            - q_mem : memory for applied forces
            - b_mem : memory for input forces
            - z_mem : memory for output
            - f_s : rope input forces
            - l_s : array-like, lengths of segments
            - r_s : array-like, radii of segments
            - m_s : array-like, masses of segments
            - E_s : array-like, Young's modulus of segments
            - Jxx_s : array-like, second moment of inertia of segments
            - g_r : bolt circle radius
            - g_l : guide wholes length
            - use_taylor: set true if use taylor approx around 0
    )pbdoc");

//    m.def("mass_matrix", &mass_matrix, R"pbdoc(
//        get global mass matrix for the current segment
//
//        @params:
//            - state : current state of soft robot
//            - result : array-like object to store result in
//            - cur_seg_num : number of current segment
//            - use_taylor : if taylor approximation around 0 is desired
//            - len : length of current segment
//            - r : radius of segment/robot
//            - m : mass of segment
//            - E : Young's modulus
//            - Jxx : Second moment of inertia
//    )pbdoc");
//
//    m.def("dynamic_forces", &dynamic_forces, R"pbdoc(
//        get the global vector of coriolis-, centrifugal- and gyroscopic forces for the current segment
//
//        @params:
//            - state : current state of soft robot
//            - result : array-like object to store result in
//            - cur_seg_num : number of current segment
//            - use_taylor : if taylor approximation around 0 is desired
//            - len : length of current segment
//            - r : radius of segment/robot
//            - m : mass of segment
//            - E : Young's modulus
//            - Jxx : Second moment of inertia
//    )pbdoc");
//
//    m.def("q_forces", &applied_forces, R"pbdoc(
//        get the global vector of external and internal forces for the current segment
//
//        @params:
//            - state : current state of soft robot
//            - result : array-like object to store result in
//            - cur_seg_num : number of current segment
//            - use_taylor : if taylor approximation around 0 is desired
//            - len : length of current segment
//            - r : radius of segment/robot
//            - m : mass of segment
//            - E : Young's modulus
//            - Jxx : Second moment of inertia
//    )pbdoc");


    // FOR TESTING PURPOSES ONLY
    m.def("subtract", [](int i, int j) { return i - j; }, R"pbdoc(
        Subtract two numbers

        Some other explanation about the subtract function.
    )pbdoc");

//#ifdef VERSION_INFO
//    m.attr("__version__") = MACRO_STRINGIFY(VERSION_INFO);
//#else
//    m.attr("__version__") = "dev";
//#endif
}
