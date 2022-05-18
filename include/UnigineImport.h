/* Copyright (C) 2005-2022, UNIGINE. All rights reserved.
 *
 * This file is a part of the UNIGINE 2 SDK.
 *
 * Your use and / or redistribution of this software in source and / or
 * binary form, with or without modification, is subject to: (i) your
 * ongoing acceptance of and compliance with the terms and conditions of
 * the UNIGINE License Agreement; and (ii) your inclusion of this notice
 * in any version of this software that you use or redistribute.
 * A copy of the UNIGINE License Agreement is available by contacting
 * UNIGINE. at http://unigine.com/
 */


#pragma once

#include <UnigineFactory.h>
#include <UnigineInterpreter.h>

namespace Unigine
{

class Importer;
struct ImportMesh;
struct ImportLight;
struct ImportCamera;

struct ImportNode
{
	String name;
	String filepath;

	ImportNode *parent;
	Vector<ImportNode *> children;

	ImportMesh *mesh = nullptr;
	ImportLight *light = nullptr;
	ImportCamera *camera = nullptr;
	Unigine::Math::dmat4 transform;
	void *data = nullptr;
};

struct ImportLight
{
	ImportNode *node = nullptr;
	void *data = nullptr;
};

struct ImportCamera
{
	ImportNode *node = nullptr;
	void *data = nullptr;
};

struct ImportAnimation
{
	String name;
	String filepath;
	float min_time;
	float max_time;
	void *data = nullptr;
};

struct ImportTexture
{
	String filepath;
	String original_filepath;
	String preset;
	void *data = nullptr;
};

struct ImportMaterial
{
	String name;
	String filepath;

	HashMap<String, Math::vec4> parameters;
	const Math::vec4 &getParameter(const char *name) const { return parameters.valueRef(name, Math::vec4_one); }

	HashMap<String, ImportTexture *> textures;
	ImportTexture *getTexture(const char *name) const { return textures.value(name); }

	void *data = nullptr;
};

struct ImportSurface
{
	String name;
	float min_visible_distance = -Math::Consts::INF;
	float max_visible_distance = Math::Consts::INF;
	float min_fade_distance = 0.0f;
	float max_fade_distance = 0.0f;
	ImportMaterial *material = nullptr;
	void *data = nullptr;
	int source_index = -1;
	int target_surface = -1;
	Math::WorldBoundBox bound_box;

	ImportSurface() {}

	ImportSurface(const ImportSurface &o)
	{
		name = o.name;
		min_visible_distance = o.min_visible_distance;
		max_visible_distance = o.max_visible_distance;

		material = o.material;

		data = o.data;

		source_index = o.source_index;
		target_surface = o.target_surface;

		bound_box = o.bound_box;
	}

	ImportSurface &operator=(const ImportSurface &o)
	{
		name = o.name;

		min_visible_distance = o.min_visible_distance;
		max_visible_distance = o.max_visible_distance;

		material = o.material;

		data = o.data;

		source_index = o.source_index;
		target_surface = o.target_surface;

		bound_box = o.bound_box;

		return *this;
	}

	ImportSurface(ImportSurface &&o)
	{
		name = std::move(o.name);

		min_visible_distance = o.min_visible_distance;
		max_visible_distance = o.max_visible_distance;

		material = o.material;
		o.material = nullptr;

		data = o.data;
		o.data = nullptr;

		source_index = o.source_index;
		o.source_index = -1;

		target_surface = o.target_surface;
		o.target_surface = -1;

		bound_box = std::move(o.bound_box);
	}

	ImportSurface &operator=(ImportSurface &&o)
	{
		name = std::move(o.name);

		min_visible_distance = o.min_visible_distance;
		max_visible_distance = o.max_visible_distance;

		material = o.material;
		o.material = nullptr;

		data = o.data;
		o.data = nullptr;

		source_index = o.source_index;
		o.source_index = -1;

		target_surface = o.target_surface;
		o.target_surface = -1;

		bound_box = std::move(o.bound_box);

		return *this;
	}

};

struct ImportGeometry
{
	void *data;
	Vector<ImportSurface> surfaces;
	Math::dmat4 transform;
	Math::WorldBoundBox bound_box;

	ImportGeometry() 
		: data(nullptr)
	{}

	ImportGeometry(const ImportGeometry &o)
	{
		data = o.data;
		surfaces = o.surfaces;
		transform = o.transform;
		bound_box = o.bound_box;
	}
	ImportGeometry &operator=(const ImportGeometry &o)
	{
		data = o.data;
		surfaces = o.surfaces;
		transform = o.transform;
		bound_box = o.bound_box;
		return *this;
	}
	ImportGeometry(ImportGeometry &&o)
	{
		data = o.data;
		surfaces = std::move(o.surfaces);
		transform = o.transform;
		bound_box = std::move(o.bound_box);
		o.data = nullptr;
	}
	ImportGeometry &operator=(ImportGeometry &&o)
	{
		data = o.data;
		surfaces = std::move(o.surfaces);
		transform = o.transform;
		bound_box = std::move(o.bound_box);
		o.data = nullptr;
		return *this;
	}
};

struct ImportMesh
{
	String name;
	String filepath;
	String animation_filepath;
	bool has_animations = false;
	Vector<ImportNode *> nodes;
	Vector<ImportGeometry> geometries;
};

template class UNIGINE_EXPORT Vector<String>;
template class UNIGINE_EXPORT Vector<ImportNode *>;
template class UNIGINE_EXPORT Vector<ImportMesh *>;
template class UNIGINE_EXPORT Vector<ImportLight *>;
template class UNIGINE_EXPORT Vector<ImportCamera *>;
template class UNIGINE_EXPORT Vector<ImportAnimation *>;
template class UNIGINE_EXPORT Vector<ImportMaterial *>;
template class UNIGINE_EXPORT Vector<ImportTexture *>;
template class UNIGINE_EXPORT Map<String, Variable>;

class UNIGINE_API ImportScene
{
public:
	ImportScene();
	virtual ~ImportScene();

	UNIGINE_INLINE int getNumNodes() const { return nodes.size(); }
	UNIGINE_INLINE const Vector<ImportNode *> &getNodes() const { return nodes; }
	UNIGINE_INLINE ImportNode *getNode(int i) const { return nodes[i]; }
	ImportNode *addNode(ImportNode *parent);
	void removeNode(ImportNode *node);

	UNIGINE_INLINE int getNumMeshes() const { return meshes.size(); }
	UNIGINE_INLINE const Vector<ImportMesh *> &getMeshes() const { return meshes; }
	UNIGINE_INLINE ImportMesh *getMesh(int i) const { return meshes[i]; }
	ImportMesh *addMesh(ImportNode *node);
	void removeMesh(ImportMesh *mesh);

	UNIGINE_INLINE int getNumLights() const { return lights.size(); }
	UNIGINE_INLINE const Vector<ImportLight *> &getLights() const { return lights; }
	UNIGINE_INLINE ImportLight *getLight(int i) const { return lights[i]; }
	ImportLight *addLight(ImportNode *node);
	void removeLight(ImportLight *light);

	UNIGINE_INLINE int getNumCameras() const { return cameras.size(); }
	UNIGINE_INLINE const Vector<ImportCamera *> &getCameras() const { return cameras; }
	UNIGINE_INLINE ImportCamera *getCamera(int i) const { return cameras[i]; }
	ImportCamera *addCamera(ImportNode *node);
	void removeCamera(ImportCamera *camera);

	UNIGINE_INLINE int getNumAnimations() const { return animations.size(); }
	UNIGINE_INLINE const Vector<ImportAnimation *> &getAnimations() const { return animations; }
	UNIGINE_INLINE ImportAnimation *getAnimation(int i) const { return animations[i]; }
	ImportAnimation *addAnimation();
	void removeAnimation(ImportAnimation *animation);

	UNIGINE_INLINE int getNumMaterials() const { return materials.size(); }
	UNIGINE_INLINE const Vector<ImportMaterial *> &getMaterials() const { return materials; }
	UNIGINE_INLINE ImportMaterial *getMaterial(int i) const { return materials[i]; }
	ImportMaterial *addMaterial();
	ImportMaterial *getMaterial(const char *name) const;
	void replaceMaterial(ImportMaterial *old_material, ImportMaterial *new_material);
	void removeMaterial(ImportMaterial *material);

	UNIGINE_INLINE int getNumTextures() const { return textures.size(); }
	UNIGINE_INLINE const Vector<ImportTexture *> &getTextures() const { return textures; }
	UNIGINE_INLINE ImportTexture *getTexture(int i) const { return textures[i]; }
	ImportTexture *getTexture(const char *filepath);
	ImportTexture *findTexture(const char *filepath) const;

	UNIGINE_DECLARE_USE_MEMORY

private:
	Vector<ImportNode *> nodes;
	Vector<ImportMesh *> meshes;
	Vector<ImportLight *> lights;
	Vector<ImportCamera *> cameras;
	Vector<ImportAnimation *> animations;
	Vector<ImportMaterial *> materials;
	Vector<ImportTexture *> textures;

};

class UNIGINE_API ImportProcessor
{
public:
	ImportProcessor();
	virtual ~ImportProcessor();

	UNIGINE_INLINE void setImporter(Importer *imp) { importer = imp;}
	UNIGINE_INLINE Importer *getImporter() const { return importer; }

	UNIGINE_INLINE void setOutputPath(const char *path) { output_path = String::pathname(path); }
	UNIGINE_INLINE const char *getOutputPath() const { return output_path; }

	bool processScene(ImportScene *scene);
	bool processTexture(ImportTexture *import_texture);
	bool processMesh(MeshPtr &mesh, ImportMesh *import_mesh);
	bool processLight(LightPtr &light, ImportLight *import_light);
	bool processCamera(PlayerPtr &camera, ImportCamera *import_camera);
	bool processAnimation(MeshPtr &animation, ImportAnimation *import_animation);
	bool processAnimation(MeshPtr &animation, ImportMesh *import_mesh, ImportAnimation *import_animation);
	bool processNode(NodePtr &node, ImportNode *import_node);
	bool processMaterial(MaterialPtr &material, ImportMaterial *import_material);

protected:
	virtual bool onProcessScene(ImportScene *scene);
	virtual bool onProcessTexture(ImportTexture *import_texture);
	virtual bool onProcessMesh(MeshPtr &mesh, ImportMesh *import_mesh);
	virtual bool onProcessLight(LightPtr &light, ImportLight *import_light);
	virtual bool onProcessCamera(PlayerPtr &camera, ImportCamera *import_camera);
	virtual bool onProcessAnimation(MeshPtr &animation, ImportAnimation *import_animation);
	virtual bool onProcessAnimation(MeshPtr &animation, ImportMesh *import_mesh, ImportAnimation *import_animation);
	virtual bool onProcessNode(NodePtr &node, ImportNode *import_node);
	virtual bool onProcessMaterial(MaterialPtr &material, ImportMaterial *import_material);

private:
	String output_path;
	Importer *importer;

};

class UNIGINE_API Importer
{
public:

	enum
	{
		IMPORT_LIGHTS     = 1 << 0,
		IMPORT_CAMERAS    = 1 << 1,
		IMPORT_MESHES     = 1 << 2,
		IMPORT_ANIMATIONS = 1 << 3,
		IMPORT_TEXTURES   = 1 << 4,
		IMPORT_MATERIALS  = 1 << 5,
		IMPORT_JOINTS     = 1 << 6
	};

	enum class Axis
	{
		None = -1,
		X,
		NX,
		Y,
		NY,
		Z,
		NZ,
	};

	Importer();
	virtual ~Importer();

	UNIGINE_INLINE int containsParameter(const char *name) const { return parameters.contains(name); }

	void setParameterInt(const char *name, int v);
	int getParameterInt(const char *name) const;

	void setParameterFloat(const char *name, float v);
	float getParameterFloat(const char *name) const;

	void setParameterDouble(const char *name, double v);
	double getParameterDouble(const char *name) const;

	void setParameterString(const char *name, const char *v);
	const char *getParameterString(const char *name) const;

	int addPreProcessor(const char *type_name);
	void removePreProcessor(const char *type_name);
	bool hasPreProcessor(const char *type_name);

	int addPostProcessor(const char *type_name);
	void removePostProcessor(const char *type_name);

	UNIGINE_INLINE void setMeshesProcessor(const char *type_name) { meshes_processor = type_name; }
	UNIGINE_INLINE void setNodesProcessor(const char *type_name) { nodes_processor = type_name; }
	UNIGINE_INLINE void setTexturesProcessor(const char *type_name) { textures_processor = type_name; }
	UNIGINE_INLINE void setMaterialsProcessor(const char *type_name) { materials_processor = type_name; }
	UNIGINE_INLINE void setCamerasProcessor(const char *type_name) { cameras_processor = type_name; }
	UNIGINE_INLINE void setLightsProcessor(const char *type_name) { lights_processor = type_name; }
	UNIGINE_INLINE void setAnimationsProcessor(const char *type_name) { animations_processor = type_name; }

	UNIGINE_INLINE ImportScene *getScene() const { return scene; }

	int init(const char *filepath, int flags = ~0);
	int import(const char *output_path);

	const char *getSourceFilepath() const { return source_filepath; }
	const char *getOutputFilepath() const { return output_filepath; }

	bool computeBoundBox(ImportMesh *import_mesh);

	bool preprocess();
	bool importTexture(ImportProcessor *processor, ImportTexture *import_texture);
	bool importMaterial(ImportProcessor *processor, MaterialPtr &material, ImportMaterial *import_material);
	bool importMesh(ImportProcessor *processor, MeshPtr &mesh, ImportMesh *import_mesh);
	bool importLight(ImportProcessor *processor, LightPtr &light, ImportLight *import_light);
	bool importCamera(ImportProcessor *processor, PlayerPtr &camera, ImportCamera *import_camera);
	bool importAnimation(ImportProcessor *processor, MeshPtr &animation, ImportAnimation *import_animation);
	bool importAnimation(ImportProcessor *processor, MeshPtr &animation, ImportMesh *import_mesh, ImportAnimation *import_animation);
	bool importNode(ImportProcessor *processor, NodePtr &node, ImportNode *import_node);
	bool postprocess();

	static bool getBasis(Axis up_axis, Axis front_axis, Math::dmat4 &ret);

protected:
	virtual bool onComputeBoundBox(ImportMesh *import_mesh);
	virtual ImportScene *onInit(const String &filepath);
	virtual bool onImport(const char *output_path);
	virtual bool onImportTexture(ImportProcessor *processor, ImportTexture *import_texture);
	virtual bool onImportMaterial(ImportProcessor *processor, MaterialPtr &material, ImportMaterial *import_material);
	virtual bool onImportLight(ImportProcessor *processor, LightPtr &light, ImportLight *import_light);
	virtual bool onImportCamera(ImportProcessor *processor, PlayerPtr &camera, ImportCamera *import_camera);
	virtual bool onImportMesh(ImportProcessor *processor, MeshPtr &mesh, ImportMesh *import_mesh);
	virtual bool onImportNode(ImportProcessor *processor, NodePtr &node, ImportNode *import_node);
	virtual bool onImportAnimation(ImportProcessor *processor, MeshPtr &animation, ImportAnimation *import_animation);
	virtual bool onImportAnimation(ImportProcessor *processor, MeshPtr &animation, ImportMesh *import_mesh, ImportAnimation *import_animation);

protected:
	ImportScene *scene;
	String meshes_processor;
	String nodes_processor;
	String textures_processor;
	String materials_processor;
	String lights_processor;
	String cameras_processor;
	String animations_processor;
	String source_filepath;
	int flags{0};
	String output_filepath;

private:
	void set_parameter(const char *name, const Variable &v);
	const Variable &get_parameter(const char *name, const Variable &def) const;

private:
	Vector<String> pre_processors;
	Vector<String> post_processors;
	Map<String, Variable> parameters;

};

template class UNIGINE_EXPORT Map<String, Factory<String, Importer>::FuncPtr>;
template class UNIGINE_EXPORT Factory<String, Importer>;

template class UNIGINE_EXPORT Map<String, Factory<String, ImportProcessor>::FuncPtr>;
template class UNIGINE_EXPORT Factory<String, ImportProcessor>;

template class UNIGINE_EXPORT Vector<Importer *>;
template class UNIGINE_EXPORT Map<String, String>;
template class UNIGINE_EXPORT Map<String, Vector<String>>;

class UNIGINE_API Import
{
	Import();
	~Import();
public:

	static Import * get();

	template<typename Type>
	void registerImportProcessor(const char *type_name)
	{
		processors_factory.append<Type>(type_name);
		Log::message("Processor registered \"%s\".\n", type_name);
	}
	UNIGINE_INLINE bool containsImportProcessor(const char *type_name) const { return processors_factory.contains(type_name); }
	ImportProcessor *createImportProcessor(const char *type_name);
	bool unregisterImportProcessor(const char *type_name);

	template<typename Type>
	void registerImporter(const char *type_name)
	{
		extensions_by_type.append(type_name, Type::getExtensions());
		for (const String &ext : Type::getExtensions())
		{
			if (type_by_extension.contains(ext))
			{
				Log::warning("Extensions \"%s\" already registered.\n", ext.get());
				continue;
			}
			type_by_extension.append(ext, type_name);
		}
		importers_factory.append<Type>(type_name);
		Log::message("Importer registered \"%s\".\n", type_name);
	}

	Importer *createImporter(const char *type_name) const;
	Importer *createImporterByFileName(const char *file_name) const;

	bool unregisterImporter(const char *type_name);

	Vector<String> getImporterTypes() const;
	void getImporterTypes(Vector<String> &types) const;

	bool isSupportedExtension(const char *extension) const;
	Vector<String> getSupportedExtensions() const;
	void getSupportedExtensions(Vector<String> &extensions) const;

	String getImporterTypeByExtension(const char *extension) const;

	bool import(const char *filepath, const char *output_path, String &out_filepath) const;

private:
	Factory<String, Importer> importers_factory;
	Factory<String, ImportProcessor> processors_factory;
	Map<String, String> type_by_extension;
	Map<String, Vector<String>> extensions_by_type;

};

} //namespace Unigine
