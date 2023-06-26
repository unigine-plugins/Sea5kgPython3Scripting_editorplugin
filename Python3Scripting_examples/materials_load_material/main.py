import unigine
import os

path = "template_assets/template_material_ball/material_ball_mat.mat"
if os.path.isfile("../data/" + path):
  print(path + " - file exists")

mat = unigine.Materials.load_material("template_assets/template_material_ball/material_ball_mat.mat")


print("mat=", mat)

