import unigine
import os

unigine.log_info('start')
print("getcwd: " + os.getcwd())


print('Enable shadows')
for mat in LIST_MATERIALS:
    print(mat.get_manual_name())
    mat.set_shadow_mask(0xffffffffdd)
