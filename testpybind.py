import motionlib
import numpy as np

l = 0.5
vec = np.array([1, 1, 1])

# --------------------------------------------------------------------------

# # TEST 1 SEGMENT
# state = np.array([0.1, 0.1, 0.1, 0.1])
#
# res = motionlib.trans_acc_loc(state, l, 1)
# print(res)
# print("")
#
# res = motionlib.rot_acc_loc(state, l, 1)
# print(res)
# print("")
#
# res = motionlib.rot_jac(state, l, 1)
# print(res)
# print("")
#
# res = motionlib.trans_jac(state, l, 1)
# print(res)
# print("")
#
# res = motionlib.rot_vel(state, l, 1)
# print(res)
# print("")

# --------------------------------------------------------------------------

# # TEST 2 SEGMENTS
state = np.array([0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1])

res = motionlib.trans_acc_loc(state, l, 1)
print("a_", res.shape)
res = motionlib.trans_acc_loc(state, l, 2)
print("a_", res.shape)
print("")

res = motionlib.rot_acc_loc(state, l, 1)
print("al", res.shape)
res = motionlib.rot_acc_loc(state, l, 2)
print("al", res)
print("")

res = motionlib.rot_jac(state, l, 1)
print("JR", res.shape)
res = motionlib.rot_jac(state, l, 2)
print("JR", res.shape)
print("")

res = motionlib.trans_jac(state, l, 1)
print("JT", res.shape)
res = motionlib.trans_jac(state, l, 2)
print("JT", res.shape)
print("")


res = motionlib.rot_vel(state, l, 1)
print("w_", res.reshape(3, -1).T)
res = motionlib.rot_vel(state, l, 2)
print("w_", res.shape)
print("")

# --------------------------------------------------------------------------

# TEST 3 SEGMENTS
# state = np.array([0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1])
#
# res = motionlib.trans_acc_loc(state, l, 1)
# print(res)
# res = motionlib.trans_acc_loc(state, l, 2)
# print(res)
# res = motionlib.trans_acc_loc(state, l, 3)
# print(res)
# print("")
#
# res = motionlib.rot_acc_loc(state, l, 1)
# print(res)
# res = motionlib.rot_acc_loc(state, l, 2)
# print(res)
# res = motionlib.rot_acc_loc(state, l, 3)
# print(res)
# print("")
#
# res = motionlib.rot_jac(state, l, 1)
# print(res)
# res = motionlib.rot_jac(state, l, 2)
# print(res)
# res = motionlib.rot_jac(state, l, 3)
# print(res)
# print("")
#
# res = motionlib.trans_jac(state, l, 1)
# print(res)
# res = motionlib.trans_jac(state, l, 2)
# print(res)
# res = motionlib.trans_jac(state, l, 3)
# print(res)
# print("")
#
#
# res = motionlib.rot_vel(state, l, 1)
# print(res)
# res = motionlib.rot_vel(state, l, 2)
# print(res)
# res = motionlib.rot_vel(state, l, 3)
# print(res)
print("")