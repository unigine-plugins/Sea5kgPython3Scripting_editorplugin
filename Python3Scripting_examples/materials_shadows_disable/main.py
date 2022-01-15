import unigine
print('￼Disable shadows')
for mat in LIST_MATERIALS:
    print(mat.get_name())
    mat.set_shadow_mask(0x00000000)
