import ctypes
from ctypes import *

zelib = ctypes.CDLL("/home/cdoucet/Depots/github/cedricdoucet/howto/python/ctypes/ZeLib.so")
res = zelib.multiplier(2, 3)
print(res)

zelib.dit_papa("papa".encode('utf8'))

s = ctypes.c_char_p('kiwi'.encode('utf8'))

zelib.jakadi(byref(s))
