import os
import sys

# print("Some result: ")
# print(os.system("echo 1"))
# print("nope")

# exit(0)

print(os.environ)

import struct

# import subprocess
import pip
import socket
# import asyncio


for i in os.environ:
    if i.startswith("PYTHON"):
         print(i + " = " + os.environ[i])

def pip_install(package):
    if hasattr(pip, 'main'):
        pip.main(['install', package])
    else:
        pip._internal.main(['install', package])

def pip_list():
    if hasattr(pip, 'main'):
        pip.main(['list'])
    else:
        pip._internal.main(['list'])

# pip_list()
pip_install('requests')