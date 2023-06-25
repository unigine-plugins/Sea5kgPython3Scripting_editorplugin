// this file automaticly generated from UnigineAssetManager.h
#include "python3_unigine_assetmanager.h"

#include <string>
#include <editor/UnigineAssetManager.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_AssetManager

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
} unigine_AssetManager;

static void unigine_AssetManager_dealloc(unigine_AssetManager* self) {
    // Unigine::Log::message("unigine_AssetManager_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_AssetManager_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_AssetManager_new\n");
    unigine_AssetManager *self;
    self = (unigine_AssetManager *)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static int unigine_AssetManager_init(unigine_AssetManager *self, PyObject *args, PyObject *kwds) {
    // nothing
    return 0;
}


// public (static): isInitialized
static PyObject * unigine_AssetManager_is_initialized() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int

    int retOriginal = Unigine::AssetManager::isInitialized();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): getAssetGUIDFromPath
static PyObject * unigine_AssetManager_get_asset_guid_from_path(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * asset_path;
    // return: Unigine::UGUID

    Unigine::UGUID retOriginal = Unigine::AssetManager::getAssetGUIDFromPath(asset_path);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): getAssetPathFromGUID
static PyObject * unigine_AssetManager_get_asset_path_from_guid(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::UGUID & asset_guid;
    // return: Unigine::String

    Unigine::String retOriginal = Unigine::AssetManager::getAssetPathFromGUID(asset_guid);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): importAssetSync
static PyObject * unigine_AssetManager_import_asset_sync(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * asset_path;
    const Unigine::Ptr<UnigineEditor::Collection> & import_parameters;
    // return: bool

    bool retOriginal = Unigine::AssetManager::importAssetSync(asset_path, import_parameters);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): importAssetAsync
static PyObject * unigine_AssetManager_import_asset_async(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * asset_path;
    const Unigine::Ptr<UnigineEditor::Collection> & import_parameters;
    // return: bool

    bool retOriginal = Unigine::AssetManager::importAssetAsync(asset_path, import_parameters);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): reimportAssetSync
static PyObject * unigine_AssetManager_reimport_asset_sync(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * asset_path;
    const Unigine::Ptr<UnigineEditor::Collection> & import_parameters;
    // return: bool

    bool retOriginal = Unigine::AssetManager::reimportAssetSync(asset_path, import_parameters);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): reimportAssetAsync
static PyObject * unigine_AssetManager_reimport_asset_async(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * asset_path;
    const Unigine::Ptr<UnigineEditor::Collection> & import_parameters;
    // return: bool

    bool retOriginal = Unigine::AssetManager::reimportAssetAsync(asset_path, import_parameters);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): removeAssetSync
static PyObject * unigine_AssetManager_remove_asset_sync(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * asset_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::removeAssetSync(asset_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): removeAssetAsync
static PyObject * unigine_AssetManager_remove_asset_async(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * asset_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::removeAssetAsync(asset_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): moveAssetSync
static PyObject * unigine_AssetManager_move_asset_sync(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * old_asset_path;
    const char * new_asset_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::moveAssetSync(old_asset_path, new_asset_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): moveAssetAsync
static PyObject * unigine_AssetManager_move_asset_async(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * old_asset_path;
    const char * new_asset_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::moveAssetAsync(old_asset_path, new_asset_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): renameAssetSync
static PyObject * unigine_AssetManager_rename_asset_sync(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * asset_path;
    const char * new_asset_name;
    // return: bool

    bool retOriginal = Unigine::AssetManager::renameAssetSync(asset_path, new_asset_name);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): renameAssetAsync
static PyObject * unigine_AssetManager_rename_asset_async(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * asset_path;
    const char * new_asset_name;
    // return: bool

    bool retOriginal = Unigine::AssetManager::renameAssetAsync(asset_path, new_asset_name);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): copyAssetSync
static PyObject * unigine_AssetManager_copy_asset_sync(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * asset_path;
    const char * new_asset_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::copyAssetSync(asset_path, new_asset_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): copyAssetAsync
static PyObject * unigine_AssetManager_copy_asset_async(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * asset_path;
    const char * new_asset_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::copyAssetAsync(asset_path, new_asset_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): isAsset
static PyObject * unigine_AssetManager_is_asset(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * asset_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::isAsset(asset_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): getAssetImportParameters
static PyObject * unigine_AssetManager_get_asset_import_parameters(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * asset_path;
    // return: Unigine::Ptr<UnigineEditor::Collection>

    Unigine::Ptr<UnigineEditor::Collection> retOriginal = Unigine::AssetManager::getAssetImportParameters(asset_path);
    ret = PyUnigineEditor::Collection::NewObject(retOriginal);
    return ret;
};

// public (static): isAssetWritable
static PyObject * unigine_AssetManager_is_asset_writable(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * asset_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::isAssetWritable(asset_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): getAssetGUIDs
static PyObject * unigine_AssetManager_get_asset_gui_ds() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Vector<Unigine::UGUID>

    Unigine::Vector<Unigine::UGUID> retOriginal = Unigine::AssetManager::getAssetGUIDs();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): getAssetPaths
static PyObject * unigine_AssetManager_get_asset_paths() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Vector<Unigine::String>

    Unigine::Vector<Unigine::String> retOriginal = Unigine::AssetManager::getAssetPaths();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): getAssetGUIDsForDirectory
static PyObject * unigine_AssetManager_get_asset_gui_ds_for_directory(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    // return: Unigine::Vector<Unigine::UGUID>

    Unigine::Vector<Unigine::UGUID> retOriginal = Unigine::AssetManager::getAssetGUIDsForDirectory(directory_path);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): getAssetPathsForDirectory
static PyObject * unigine_AssetManager_get_asset_paths_for_directory(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    // return: Unigine::Vector<Unigine::String>

    Unigine::Vector<Unigine::String> retOriginal = Unigine::AssetManager::getAssetPathsForDirectory(directory_path);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): getRuntimeGUIDs
static PyObject * unigine_AssetManager_get_runtime_gui_ds(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * asset_path;
    // return: Unigine::Vector<Unigine::UGUID>

    Unigine::Vector<Unigine::UGUID> retOriginal = Unigine::AssetManager::getRuntimeGUIDs(asset_path);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): getRuntimeAlias
static PyObject * unigine_AssetManager_get_runtime_alias(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::UGUID & runtime_guid;
    // return: Unigine::String

    Unigine::String retOriginal = Unigine::AssetManager::getRuntimeAlias(runtime_guid);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): isRuntimePrimary
static PyObject * unigine_AssetManager_is_runtime_primary(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::UGUID & runtime_guid;
    // return: bool

    bool retOriginal = Unigine::AssetManager::isRuntimePrimary(runtime_guid);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): createDirectory
static PyObject * unigine_AssetManager_create_directory(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::createDirectory(directory_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): removeDirectorySync
static PyObject * unigine_AssetManager_remove_directory_sync(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::removeDirectorySync(directory_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): removeDirectoryAsync
static PyObject * unigine_AssetManager_remove_directory_async(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::removeDirectoryAsync(directory_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): moveDirectorySync
static PyObject * unigine_AssetManager_move_directory_sync(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * old_directory_path;
    const char * new_directory_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::moveDirectorySync(old_directory_path, new_directory_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): moveDirectoryAsync
static PyObject * unigine_AssetManager_move_directory_async(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * old_directory_path;
    const char * new_directory_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::moveDirectoryAsync(old_directory_path, new_directory_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): renameDirectorySync
static PyObject * unigine_AssetManager_rename_directory_sync(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    const char * new_directory_name;
    // return: bool

    bool retOriginal = Unigine::AssetManager::renameDirectorySync(directory_path, new_directory_name);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): renameDirectoryAsync
static PyObject * unigine_AssetManager_rename_directory_async(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    const char * new_directory_name;
    // return: bool

    bool retOriginal = Unigine::AssetManager::renameDirectoryAsync(directory_path, new_directory_name);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): copyDirectorySync
static PyObject * unigine_AssetManager_copy_directory_sync(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    const char * new_directory_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::copyDirectorySync(directory_path, new_directory_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): copyDirectoryAsync
static PyObject * unigine_AssetManager_copy_directory_async(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    const char * new_directory_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::copyDirectoryAsync(directory_path, new_directory_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): isDirectory
static PyObject * unigine_AssetManager_is_directory(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::isDirectory(directory_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): isDirectoryWritable
static PyObject * unigine_AssetManager_is_directory_writable(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::isDirectoryWritable(directory_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): getDirectoryPathsAll
static PyObject * unigine_AssetManager_get_directory_paths_all() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Vector<Unigine::String>

    Unigine::Vector<Unigine::String> retOriginal = Unigine::AssetManager::getDirectoryPathsAll();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): getDirectoryPaths
static PyObject * unigine_AssetManager_get_directory_paths(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    // return: Unigine::Vector<Unigine::String>

    Unigine::Vector<Unigine::String> retOriginal = Unigine::AssetManager::getDirectoryPaths(directory_path);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): createMountPoint
static PyObject * unigine_AssetManager_create_mount_point(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    const Unigine::Ptr<UnigineEditor::MountPointParameters> & mount_creation_parameters;
    // return: bool

    bool retOriginal = Unigine::AssetManager::createMountPoint(directory_path, mount_creation_parameters);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): removeMountPoint
static PyObject * unigine_AssetManager_remove_mount_point(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::removeMountPoint(directory_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): isMountPoint
static PyObject * unigine_AssetManager_is_mount_point(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::isMountPoint(directory_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): getMountPointParameters
static PyObject * unigine_AssetManager_get_mount_point_parameters(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    // return: Unigine::Ptr<UnigineEditor::MountPointParameters>

    Unigine::Ptr<UnigineEditor::MountPointParameters> retOriginal = Unigine::AssetManager::getMountPointParameters(directory_path);
    ret = PyUnigineEditor::MountPointParameters::NewObject(retOriginal);
    return ret;
};

// public (static): refreshMountPointAsync
static PyObject * unigine_AssetManager_refresh_mount_point_async(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * directory_path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::refreshMountPointAsync(directory_path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): blockAutoRefresh
static PyObject * unigine_AssetManager_block_auto_refresh() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    Unigine::AssetManager::blockAutoRefresh();
    return ret;
};

// public (static): unblockAutoRefresh
static PyObject * unigine_AssetManager_unblock_auto_refresh() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    Unigine::AssetManager::unblockAutoRefresh();
    return ret;
};

// public (static): isAutoRefreshBlocked
static PyObject * unigine_AssetManager_is_auto_refresh_blocked() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = Unigine::AssetManager::isAutoRefreshBlocked();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): generateUniquePath
static PyObject * unigine_AssetManager_generate_unique_path(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * path;
    // return: Unigine::String

    Unigine::String retOriginal = Unigine::AssetManager::generateUniquePath(path);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): isExist
static PyObject * unigine_AssetManager_is_exist(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * path;
    // return: bool

    bool retOriginal = Unigine::AssetManager::isExist(path);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};


static PyMethodDef unigine_AssetManager_methods[] = {
    {
        "is_initialized", (PyCFunction)unigine_AssetManager_is_initialized, METH_STATIC|METH_NOARGS,
        "public (static): isInitialized"
    },
    {
        "get_asset_guid_from_path", (PyCFunction)unigine_AssetManager_get_asset_guid_from_path, METH_STATIC|METH_O,
        "public (static): getAssetGUIDFromPath"
    },
    {
        "get_asset_path_from_guid", (PyCFunction)unigine_AssetManager_get_asset_path_from_guid, METH_STATIC|METH_O,
        "public (static): getAssetPathFromGUID"
    },
    {
        "import_asset_sync", (PyCFunction)unigine_AssetManager_import_asset_sync, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): importAssetSync"
    },
    {
        "import_asset_async", (PyCFunction)unigine_AssetManager_import_asset_async, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): importAssetAsync"
    },
    {
        "reimport_asset_sync", (PyCFunction)unigine_AssetManager_reimport_asset_sync, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): reimportAssetSync"
    },
    {
        "reimport_asset_async", (PyCFunction)unigine_AssetManager_reimport_asset_async, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): reimportAssetAsync"
    },
    {
        "remove_asset_sync", (PyCFunction)unigine_AssetManager_remove_asset_sync, METH_STATIC|METH_O,
        "public (static): removeAssetSync"
    },
    {
        "remove_asset_async", (PyCFunction)unigine_AssetManager_remove_asset_async, METH_STATIC|METH_O,
        "public (static): removeAssetAsync"
    },
    {
        "move_asset_sync", (PyCFunction)unigine_AssetManager_move_asset_sync, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): moveAssetSync"
    },
    {
        "move_asset_async", (PyCFunction)unigine_AssetManager_move_asset_async, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): moveAssetAsync"
    },
    {
        "rename_asset_sync", (PyCFunction)unigine_AssetManager_rename_asset_sync, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): renameAssetSync"
    },
    {
        "rename_asset_async", (PyCFunction)unigine_AssetManager_rename_asset_async, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): renameAssetAsync"
    },
    {
        "copy_asset_sync", (PyCFunction)unigine_AssetManager_copy_asset_sync, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): copyAssetSync"
    },
    {
        "copy_asset_async", (PyCFunction)unigine_AssetManager_copy_asset_async, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): copyAssetAsync"
    },
    {
        "is_asset", (PyCFunction)unigine_AssetManager_is_asset, METH_STATIC|METH_O,
        "public (static): isAsset"
    },
    {
        "get_asset_import_parameters", (PyCFunction)unigine_AssetManager_get_asset_import_parameters, METH_STATIC|METH_O,
        "public (static): getAssetImportParameters"
    },
    {
        "is_asset_writable", (PyCFunction)unigine_AssetManager_is_asset_writable, METH_STATIC|METH_O,
        "public (static): isAssetWritable"
    },
    {
        "get_asset_gui_ds", (PyCFunction)unigine_AssetManager_get_asset_gui_ds, METH_STATIC|METH_NOARGS,
        "public (static): getAssetGUIDs"
    },
    {
        "get_asset_paths", (PyCFunction)unigine_AssetManager_get_asset_paths, METH_STATIC|METH_NOARGS,
        "public (static): getAssetPaths"
    },
    {
        "get_asset_gui_ds_for_directory", (PyCFunction)unigine_AssetManager_get_asset_gui_ds_for_directory, METH_STATIC|METH_O,
        "public (static): getAssetGUIDsForDirectory"
    },
    {
        "get_asset_paths_for_directory", (PyCFunction)unigine_AssetManager_get_asset_paths_for_directory, METH_STATIC|METH_O,
        "public (static): getAssetPathsForDirectory"
    },
    {
        "get_runtime_gui_ds", (PyCFunction)unigine_AssetManager_get_runtime_gui_ds, METH_STATIC|METH_O,
        "public (static): getRuntimeGUIDs"
    },
    {
        "get_runtime_alias", (PyCFunction)unigine_AssetManager_get_runtime_alias, METH_STATIC|METH_O,
        "public (static): getRuntimeAlias"
    },
    {
        "is_runtime_primary", (PyCFunction)unigine_AssetManager_is_runtime_primary, METH_STATIC|METH_O,
        "public (static): isRuntimePrimary"
    },
    {
        "create_directory", (PyCFunction)unigine_AssetManager_create_directory, METH_STATIC|METH_O,
        "public (static): createDirectory"
    },
    {
        "remove_directory_sync", (PyCFunction)unigine_AssetManager_remove_directory_sync, METH_STATIC|METH_O,
        "public (static): removeDirectorySync"
    },
    {
        "remove_directory_async", (PyCFunction)unigine_AssetManager_remove_directory_async, METH_STATIC|METH_O,
        "public (static): removeDirectoryAsync"
    },
    {
        "move_directory_sync", (PyCFunction)unigine_AssetManager_move_directory_sync, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): moveDirectorySync"
    },
    {
        "move_directory_async", (PyCFunction)unigine_AssetManager_move_directory_async, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): moveDirectoryAsync"
    },
    {
        "rename_directory_sync", (PyCFunction)unigine_AssetManager_rename_directory_sync, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): renameDirectorySync"
    },
    {
        "rename_directory_async", (PyCFunction)unigine_AssetManager_rename_directory_async, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): renameDirectoryAsync"
    },
    {
        "copy_directory_sync", (PyCFunction)unigine_AssetManager_copy_directory_sync, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): copyDirectorySync"
    },
    {
        "copy_directory_async", (PyCFunction)unigine_AssetManager_copy_directory_async, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): copyDirectoryAsync"
    },
    {
        "is_directory", (PyCFunction)unigine_AssetManager_is_directory, METH_STATIC|METH_O,
        "public (static): isDirectory"
    },
    {
        "is_directory_writable", (PyCFunction)unigine_AssetManager_is_directory_writable, METH_STATIC|METH_O,
        "public (static): isDirectoryWritable"
    },
    {
        "get_directory_paths_all", (PyCFunction)unigine_AssetManager_get_directory_paths_all, METH_STATIC|METH_NOARGS,
        "public (static): getDirectoryPathsAll"
    },
    {
        "get_directory_paths", (PyCFunction)unigine_AssetManager_get_directory_paths, METH_STATIC|METH_O,
        "public (static): getDirectoryPaths"
    },
    {
        "create_mount_point", (PyCFunction)unigine_AssetManager_create_mount_point, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): createMountPoint"
    },
    {
        "remove_mount_point", (PyCFunction)unigine_AssetManager_remove_mount_point, METH_STATIC|METH_O,
        "public (static): removeMountPoint"
    },
    {
        "is_mount_point", (PyCFunction)unigine_AssetManager_is_mount_point, METH_STATIC|METH_O,
        "public (static): isMountPoint"
    },
    {
        "get_mount_point_parameters", (PyCFunction)unigine_AssetManager_get_mount_point_parameters, METH_STATIC|METH_O,
        "public (static): getMountPointParameters"
    },
    {
        "refresh_mount_point_async", (PyCFunction)unigine_AssetManager_refresh_mount_point_async, METH_STATIC|METH_O,
        "public (static): refreshMountPointAsync"
    },
    {
        "block_auto_refresh", (PyCFunction)unigine_AssetManager_block_auto_refresh, METH_STATIC|METH_NOARGS,
        "public (static): blockAutoRefresh"
    },
    {
        "unblock_auto_refresh", (PyCFunction)unigine_AssetManager_unblock_auto_refresh, METH_STATIC|METH_NOARGS,
        "public (static): unblockAutoRefresh"
    },
    {
        "is_auto_refresh_blocked", (PyCFunction)unigine_AssetManager_is_auto_refresh_blocked, METH_STATIC|METH_NOARGS,
        "public (static): isAutoRefreshBlocked"
    },
    {
        "generate_unique_path", (PyCFunction)unigine_AssetManager_generate_unique_path, METH_STATIC|METH_O,
        "public (static): generateUniquePath"
    },
    {
        "is_exist", (PyCFunction)unigine_AssetManager_is_exist, METH_STATIC|METH_O,
        "public (static): isExist"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_AssetManagerType = {
    // PyVarObject_HEAD_INIT(&PyType_Type, 0)
    // PyVarObject_HEAD_INIT(NULL, 0)
    // .tp_name = "unigine.AssetManager",
    // .tp_basicsize = sizeof(unigine_AssetManager) + 16, // magic!!!
    // .tp_dealloc = (destructor)unigine_AssetManager_dealloc,
    // .tp_flags = Py_TPFLAGS_DEFAULT, // | Py_TPFLAGS_BASETYPE,
    // .tp_doc = "AssetManager Object",
    // .tp_methods = unigine_AssetManager_methods,
    // .tp_members = 0,
    // .tp_dict = 0,
    // .tp_init = (initproc)unigine_AssetManager_init,
    // .tp_new = unigine_AssetManager_new,


    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.AssetManager",             // tp_name
    sizeof(unigine_AssetManager) + 16, // tp_basicsize  (magic 16 bytes!!!)
    0,                         // tp_itemsize 
    (destructor)unigine_AssetManager_dealloc,   // tp_dealloc
    0,                         // tp_vectorcall_offset 
    0,                         // tp_getattr 
    0,                         // tp_setattr 
    0,                         // tp_as_async 
    0,                         // tp_repr 
    0,                         // tp_as_number 
    0,                         // tp_as_sequence 
    0,                         // tp_as_mapping 
    0,                         // tp_hash  
    0,                         // tp_call 
    0,                         // tp_str 
    0,                         // tp_getattro 
    0,                         // tp_setattro 
    0,                         // tp_as_buffer 
    Py_TPFLAGS_DEFAULT,        // tp_flags 
    "AssetManager Object",         // tp_doc 
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_AssetManager_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_AssetManager_init, // tp_init
    0, // tp_alloc
    unigine_AssetManager_new, // tp_new
    // 0, // tp_free
    // 0, /* inquiry tp_is_gc; */
    // 0, /* PyObject *tp_bases; */
    // 0, /* PyObject *tp_mro; */
    // 0, /* PyObject *tp_cache; */
    // 0, /* PyObject *tp_subclasses; */
    // 0, /* PyObject *tp_weaklist; */
    // 0, /* destructor tp_del; */
    // 0, /* unsigned int tp_version_tag; */
    // 0, /* destructor tp_finalize; */
    // 0, /* vectorcallfunc tp_vectorcall; */
};

PyObject * AssetManager::NewObject() {

    std::cout << "sizeof(unigine_AssetManager) = " << sizeof(unigine_AssetManager) << std::endl;

    unigine_AssetManager *pInst = PyObject_New(unigine_AssetManager, &unigine_AssetManagerType);
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

// UniginePyTypeObjectAssetManager

bool Python3UnigineAssetManager::isReady() {
    // Initialize tp_dict with empty dictionary
    std::cout << "sizeof(unigine_AssetManager) = " << sizeof(unigine_AssetManager) << std::endl;
    std::cout << "sizeof(Unigine::Ptr<Unigine::AssetManager>) = " << sizeof(Unigine::Ptr<Unigine::AssetManager>) << std::endl;
        // Unigine::Ptr<Unigine::AssetManager> material
    if (!unigine_AssetManagerType.tp_dict) {
        unigine_AssetManagerType.tp_dict = PyDict_New();

    }
    if (PyType_Ready(&unigine_AssetManagerType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineAssetManager::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_AssetManagerType);
    if (PyModule_AddObject(pModule, "AssetManager", (PyObject *)&unigine_AssetManagerType) < 0) {
        Py_DECREF(&unigine_AssetManagerType);
        return false;
    }
    return true;
}


}; // namespace PyUnigine
