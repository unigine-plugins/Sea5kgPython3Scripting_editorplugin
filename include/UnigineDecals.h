/* Copyright (C) 2005-2021, UNIGINE. All rights reserved.
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

// DO NOT EDIT DIRECTLY. This is an auto-generated file. Your changes will be lost.

#pragma once

#include "UnigineMaterial.h"
#include "UnigineNode.h"
#include "UnigineMesh.h"

namespace Unigine
{

//////////////////////////////////////////////////////////////////////////

class UNIGINE_API Decal : public Node
{
public:
	static bool convertible(Node *node) { return node && node->isDecal(); }

	void setLifeTime(float time);
	float getLifeTime() const;
	void setFadeTime(float time);
	float getFadeTime() const;
	void setInitTime(float time);
	float getInitTime() const;
	Ptr<Material> getMaterialInherit() const;
	const char *getMaterialName() const;
	int setMaterial(const char *name);
	int setMaterial(const UGUID & guid);
	int setMaterial(const Ptr<Material> &mat);
	Ptr<Material> getMaterial() const;
	void setMaxFadeDistance(float distance);
	float getMaxFadeDistance() const;
	void setMaxVisibleDistance(float distance);
	float getMaxVisibleDistance() const;
	void setMinFadeDistance(float distance);
	float getMinFadeDistance() const;
	void setMinVisibleDistance(float distance);
	float getMinVisibleDistance() const;
	void setTexCoord(const Math::vec4 &coord);
	Math::vec4 getTexCoord() const;
	void setViewportMask(int mask);
	int getViewportMask() const;
	void setIntersectionMask(int mask);
	int getIntersectionMask() const;
	int isMaterialInherited() const;
	int isTerrainHole() const;
	int inside(const Math::vec3 &p);
};
typedef Ptr<Decal> DecalPtr;

//////////////////////////////////////////////////////////////////////////

class UNIGINE_API DecalMesh : public Decal
{
public:
	static int type() { return Node::DECAL_MESH; }
	static bool convertible(Node *node) { return (node && node->getType() == type()); }

	static Ptr<DecalMesh> create(const Ptr<Mesh> &mesh, float radius, const char *material_name);
	static Ptr<DecalMesh> create(const char *mesh_path, float radius, const char *material_name);
	void setMeshName(const char *path, bool force_load);
	void setMeshName(const char *name);
	const char *getMeshName() const;
	int setMesh(const Ptr<Mesh> &mesh, bool unique = true);
	int getMesh(const Ptr<Mesh> &mesh) const;
	void setRadius(float radius);
	float getRadius() const;
	void loadMesh(const char *path, bool unique = false);
	int saveMesh(const char *path) const;
};
typedef Ptr<DecalMesh> DecalMeshPtr;

//////////////////////////////////////////////////////////////////////////

class UNIGINE_API DecalOrtho : public Decal
{
public:
	static int type() { return Node::DECAL_ORTHO; }
	static bool convertible(Node *node) { return (node && node->getType() == type()); }

	static Ptr<DecalOrtho> create(float radius, float width, float height, const char *material);
	void setHeight(float height);
	float getHeight() const;
	void setRadius(float radius);
	float getRadius() const;
	void setWidth(float width);
	float getWidth() const;
	void setZNear(float znear);
	float getZNear() const;
	Math::mat4 getProjection() const;
};
typedef Ptr<DecalOrtho> DecalOrthoPtr;

//////////////////////////////////////////////////////////////////////////

class UNIGINE_API DecalProj : public Decal
{
public:
	static int type() { return Node::DECAL_PROJ; }
	static bool convertible(Node *node) { return (node && node->getType() == type()); }

	static Ptr<DecalProj> create(float radius, float fov, float aspect, const char *name);
	void setAspect(float aspect);
	float getAspect() const;
	void setFov(float fov);
	float getFov() const;
	void setRadius(float radius);
	float getRadius() const;
	void setZNear(float znear);
	float getZNear() const;
	Math::mat4 getProjection() const;
};
typedef Ptr<DecalProj> DecalProjPtr;

} // namespace Unigine
