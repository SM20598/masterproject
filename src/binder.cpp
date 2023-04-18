#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>
#include <iostream>

// local translational acceleration
#include "../functions/a_1_1.h"
#include "../functions/a_2_1.h"
#include "../functions/a_2_2.h"
#include "../functions/a_3_1.h"
#include "../functions/a_3_2.h"
#include "../functions/a_3_3.h"
#include "../functions/a_1_1_taylor.h"

// local rotational acceleration
#include "../functions/alpha_1_1.h"
#include "../functions/alpha_2_1.h"
#include "../functions/alpha_2_2.h"
#include "../functions/alpha_3_1.h"
#include "../functions/alpha_3_2.h"
#include "../functions/alpha_3_3.h"
#include "../functions/alpha_1_1_taylor.h"

// rotational Jacobi
#include "../functions/JR_1_1.h"
#include "../functions/JR_2_1.h"
#include "../functions/JR_2_2.h"
#include "../functions/JR_3_1.h"
#include "../functions/JR_3_2.h"
#include "../functions/JR_3_3.h"
#include "../functions/JR_1_1_taylor.h"

// translational Jacobi
#include "../functions/JT_1_1.h"
#include "../functions/JT_2_1.h"
#include "../functions/JT_2_2.h"
#include "../functions/JT_3_1.h"
#include "../functions/JT_3_2.h"
#include "../functions/JT_3_3.h"
#include "../functions/JT_1_1_taylor.h"

// rotational velocity
#include "../functions/wcrl_1_1.h"
#include "../functions/wcrl_2_1.h"
#include "../functions/wcrl_2_2.h"
#include "../functions/wcrl_3_1.h"
#include "../functions/wcrl_3_2.h"
#include "../functions/wcrl_3_3.h"
#include "../functions/wcrl_1_1_taylor.h"


#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

namespace  py = pybind11;

py::array_t<double> trans_acc_loc(const py::array_t<double>& state, double len, int cur_seg_num, bool use_taylor){

    // extract state info
    py::buffer_info in_info = state.request();
    auto state_shape = in_info.shape;
    int tot_num_seg = int(state_shape[0] / 4);

    // for matlab generated cpp functions
    double conv_state[state_shape[0]];
    int res_len = 3;
    double a_[res_len];

    // convert values from py array to double array
    double *ptr_in = static_cast<double *>(in_info.ptr);
    for (int i=0; i< state_shape[0];i++) {
        conv_state[i] = ptr_in[i];
    }


    // call function depending on total number of segments and current segment
    switch (tot_num_seg) {
        case 1:
            (use_taylor)? a_1_1_taylor(len, conv_state, a_) : a_1_1(len, conv_state, a_); break;

        case 2:
            switch(cur_seg_num) {
                case 1: a_2_1(len, conv_state, a_); break;
                case 2: a_2_2(len, conv_state, a_); break;
            }
            break;

        case 3:
            switch(cur_seg_num) {
                case 1: a_3_1(len, conv_state, a_); break;
                case 2: a_3_2(len, conv_state, a_); break;
                case 3: a_3_3(len, conv_state, a_); break;
            }
            break;

        default: std::cout << "WARNING: DEFAULT RETURNED" << std::endl;
            break;
    }

    // convert result to py array
    auto result = py::array_t<double>(res_len);
    py::buffer_info res_info = result.request();
    double *ptr_res = static_cast<double *>(res_info.ptr);

    for (int i=0; i< res_len;i++){
        ptr_res[i] = a_[i];
    }

    return result;
}

py::array_t<double> rot_acc_loc(const py::array_t<double>& state, double len, int cur_seg_num, bool use_taylor){

    // extract state info
    py::buffer_info in_info = state.request();
    auto state_shape = in_info.shape;
    int tot_num_seg = int(state_shape[0] / 4);

    // for matlab generated cpp functions
    double conv_state[state_shape[0]];
    int res_len = 3;
    double alpha[res_len];

    // convert values from py array to double array
    double *ptr_in = static_cast<double *>(in_info.ptr);
    for (int i=0; i< state_shape[0];i++) {
        conv_state[i] = ptr_in[i];
    }


    // call function depending on total number of segments and current segment
    switch (tot_num_seg) {
        case 1:
            (use_taylor)? alpha_1_1_taylor(len, conv_state, alpha) : alpha_1_1(len, conv_state, alpha); break;

        case 2:
            switch(cur_seg_num) {
                case 1: alpha_2_1(len, conv_state, alpha); break;
                case 2: alpha_2_2(len, conv_state, alpha); break;
            }
            break;

        case 3:
            switch(cur_seg_num) {
                case 1: alpha_3_1(len, conv_state, alpha); break;
                case 2: alpha_3_2(len, conv_state, alpha); break;
                case 3: alpha_3_3(len, conv_state, alpha); break;
            }
            break;

        default: std::cout << "WARNING: DEFAULT RETURNED" << std::endl;
            break;
    }

    // convert result to py array
    auto result = py::array_t<double>(res_len);
    py::buffer_info res_info = result.request();
    double *ptr_res = static_cast<double *>(res_info.ptr);

    for (int i=0; i< res_len;i++){
        ptr_res[i] = alpha[i];
    }

    return result;
}

py::array_t<double> rot_jac(const py::array_t<double>& state, double len, int cur_seg_num, bool use_taylor){

    // extract state info
    py::buffer_info in_info = state.request();
    auto state_shape = in_info.shape;
    int tot_num_seg = int(state_shape[0] / 4);

    // for matlab generated cpp functions
    double conv_state[state_shape[0]];
    int res_len = 3 * state_shape[0]/2;
    double jacobi_R[res_len];

    // convert values from py array to double array
    double *ptr_in = static_cast<double *>(in_info.ptr);
    for (int i=0; i< state_shape[0];i++) {
        conv_state[i] = ptr_in[i];
    }


    // call function depending on total number of segments and current segment
    switch (tot_num_seg) {
        case 1:
            (use_taylor) ? JR_1_1_taylor(len, conv_state, jacobi_R) : JR_1_1(len, conv_state, jacobi_R); break;

        case 2:
            switch(cur_seg_num) {
                case 1: JR_2_1(len, conv_state, jacobi_R); break;
                case 2: JR_2_2(len, conv_state, jacobi_R); break;
            }
            break;

        case 3:
            switch(cur_seg_num) {
                case 1: JR_3_1(len, conv_state, jacobi_R); break;
                case 2: JR_3_2(len, conv_state, jacobi_R); break;
                case 3: JR_3_3(len, conv_state, jacobi_R); break;
            }
            break;

        default: std::cout << "WARNING: DEFAULT RETURNED" << std::endl;
            break;
    }

    // convert result to py array
    auto result = py::array_t<double>(res_len);
    py::buffer_info res_info = result.request();
    double *ptr_res = static_cast<double *>(res_info.ptr);

    for (int i=0; i< res_len;i++){
        ptr_res[i] = jacobi_R[i];
    }

    return result;
}

py::array_t<double> trans_jac(const py::array_t<double>& state, double len, int cur_seg_num, bool use_taylor){

    // extract state info
    py::buffer_info in_info = state.request();
    auto state_shape = in_info.shape;
    int tot_num_seg = int(state_shape[0] / 4);

    // for matlab generated cpp functions
    double conv_state[state_shape[0]];
    int res_len = 3 * state_shape[0]/2;
    double jacobi_T[res_len];

    // convert values from py array to double array
    double *ptr_in = static_cast<double *>(in_info.ptr);
    for (int i=0; i< state_shape[0];i++) {
        conv_state[i] = ptr_in[i];
    }


    // call function depending on total number of segments and current segment
    switch (tot_num_seg) {
        case 1:
            (use_taylor) ? JT_1_1_taylor(len, conv_state, jacobi_T) : JT_1_1(len, conv_state, jacobi_T); break;

        case 2:
            switch(cur_seg_num) {
                case 1: JT_2_1(len, conv_state, jacobi_T); break;
                case 2: JT_2_2(len, conv_state, jacobi_T); break;
            }
            break;

        case 3:
            switch(cur_seg_num) {
                case 1: JT_3_1(len, conv_state, jacobi_T); break;
                case 2: JT_3_2(len, conv_state, jacobi_T); break;
                case 3: JT_3_3(len, conv_state, jacobi_T); break;
            }
            break;

        default: std::cout << "WARNING: DEFAULT RETURNED" << std::endl;
            break;
    }

    // convert result to py array
    auto result = py::array_t<double>(res_len);
    py::buffer_info res_info = result.request();
    double *ptr_res = static_cast<double *>(res_info.ptr);

    for (int i=0; i< res_len;i++){
        ptr_res[i] = jacobi_T[i];
    }

    return result;
}

py::array_t<double> rot_vel(const py::array_t<double>& state, double len, int cur_seg_num, bool use_taylor){

    // extract state info
    py::buffer_info in_info = state.request();
    auto state_shape = in_info.shape;
    int tot_num_seg = int(state_shape[0] / 4);

    // for matlab generated cpp functions
    double conv_state[state_shape[0]];
    int res_len = 3 * 3;
    double wcrl[res_len];

    // convert values from py array to double array
    double *ptr_in = static_cast<double *>(in_info.ptr);
    for (int i=0; i< state_shape[0];i++) {
        conv_state[i] = ptr_in[i];
    }


    // call function depending on total number of segments and current segment
    switch (tot_num_seg) {
        case 1:
            (use_taylor) ? wcrl_1_1_taylor(len, conv_state, wcrl) : wcrl_1_1(len, conv_state, wcrl); break;

        case 2:
            switch(cur_seg_num) {
                case 1: wcrl_2_1(len, conv_state, wcrl); break;
                case 2: wcrl_2_2(len, conv_state, wcrl); break;
            }
            break;

        case 3:
            switch(cur_seg_num) {
                case 1: wcrl_3_1(len, conv_state, wcrl); break;
                case 2: wcrl_3_2(len, conv_state, wcrl); break;
                case 3: wcrl_3_3(len, conv_state, wcrl); break;
            }
            break;

        default: std::cout << "WARNING: DEFAULT RETURNED" << std::endl;
            break;
    }

    // convert result to py array
    auto result = py::array_t<double>(res_len);
    py::buffer_info res_info = result.request();
    double *ptr_res = static_cast<double *>(res_info.ptr);

    for (int i=0; i< res_len;i++){
        ptr_res[i] = wcrl[i];
    }

    return result;
}

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

    m.def("trans_acc_loc", &trans_acc_loc, R"pbdoc(
        get the local translational acceleration

        @params:
            - state : current state of soft robot
            - len : length of current segment
            - cur_seg_num : number of current segment
    )pbdoc");

    m.def("rot_acc_loc", &rot_acc_loc, R"pbdoc(
        get the local rotational acceleration

        @params:
            - state : current state of soft robot
            - len : length of current segment
            - cur_seg_num : number of current segment
    )pbdoc");

    m.def("rot_jac", &rot_jac, R"pbdoc(
        get the rotational Jacobi matrix

        @params:
            - state : current state of soft robot
            - len : length of current segment
            - cur_seg_num : number of current segment
    )pbdoc");

    m.def("trans_jac", &trans_jac, R"pbdoc(
        get the translational Jacobi matrix

        @params:
            - state : current state of soft robot
            - len : length of current segment
            - cur_seg_num : number of current segment
    )pbdoc");

    m.def("rot_vel", &rot_vel, R"pbdoc(
        get the rotational Jacobi matrix

        @params:
            - state : current state of soft robot
            - len : length of current segment
            - cur_seg_num : number of current segment
    )pbdoc");

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
