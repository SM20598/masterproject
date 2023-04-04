## DESCRIPTION
Generate python wrapper for c++ functions.

- /src/binder.cpp builds the connection between Python and C++
- /functions/* contains the .h and .cpp files to calculate the vectors and matrices

To add another configuration (for example additional number of segments):
- generate files with 'derive_equation_of_motion.m'
- adjust cpp files according to README
- add function calls in the appropriate switch cases

## BUILD

```BASH
cd build
cmake ..
make funcs
make motionlib
```

## WHEEL GENERATION AND INSTALLATION
Use [pip](https://pip.pypa.io/en/stable/) to install library.
```BASH
cd ..
python setup.py bdist_wheel
pip install dist/motionlib-0.0.1-cp310-cp310-linux_x86_64.whl [-OPTIONS]
```
Add option '--force-reinstall' when changes are made. This option uninstalls current version of library and reinstalls new version. Alternatively, change version in src/binder.cpp

## USAGE
The library can be used in python if the file is located in the project folder
```PYTHON
import motionlib

# [beta1, gamma1, beta2, gamma2, dbeta1, dgamma1, dbeta2, dgamma2]
state = [0.1, 0.1, 0.1, 0.1, 0.01, 0.01, 0.01, 0.01]
seg_len = 2
seg_num = 2

jacobian = motionlib.rot_jac(state, seg_len, seg_num)
print(jacobian)
```