import unigine
import os
import pathlib

data_path = ".." + os.sep + "data" + os.sep

assets = []
for (dirpath, dirnames, filenames) in os.walk(data_path):
    for filename in filenames:
        fullpath = os.path.join(dirpath[len(data_path):], filename)
        ext = str(pathlib.Path(fullpath).suffix).lower()
        if fullpath.startswith(".cache_textures") or fullpath.startswith(".runtimes"):
            continue
        if fullpath.startswith(".thumbnails") or fullpath.startswith(".editor2"):
            continue
        if filename == "guids.db":
            continue
        if ext in [".cache", ".meta", ".umount", ".ung"]:
            continue
        assets.append(os.path.join(dirpath[len(data_path):], filename))

# print(assets)
print("found assets: " + str(len(assets)))
for asset_path in assets:
    if not unigine.AssetManager.is_asset(asset_path):
        print(asset_path + " - isn't asset")
