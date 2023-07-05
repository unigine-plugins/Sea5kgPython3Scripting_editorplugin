import unigine
import os

data_path = ".." + os.sep + "data" + os.sep

skip_filepaths = [
    ".cache_textures" + os.sep,
    ".runtimes" + os.sep,
    ".thumbnails" + os.sep,
    ".editor2" + os.sep,
    "guids.db",
]
assets_filepaths = []
for (dirpath, dirnames, filenames) in os.walk(data_path):
    for filename in filenames:
        fullpath = os.path.join(dirpath[len(data_path):], filename)
        ext = "." + filename.split(os.sep)[-1].lower().split(".")[-1]
        is_skip = False
        for skip_file in skip_filepaths:
            if skip_file in fullpath:
                is_skip = True
        if is_skip:
            continue
        if ext in [".cache", ".meta", ".umount", ".ung"]:
            continue
        assets_filepaths.append(os.path.join(dirpath[len(data_path):], filename))

print("Found assets: " + str(len(assets_filepaths)))
for asset_path in assets_filepaths:
    if not unigine.AssetManager.is_asset(asset_path):
        print(asset_path + " - isn't asset")

