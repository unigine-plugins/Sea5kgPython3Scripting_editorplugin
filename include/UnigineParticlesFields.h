/* Copyright (C) 2005-2023, UNIGINE. All rights reserved.
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

#include "UnigineNode.h"

namespace Unigine
{

//////////////////////////////////////////////////////////////////////////

class UNIGINE_API ParticlesField : public Node
{
public:
	static bool convertible(Node *node) { return node && node->isParticlesField(); }


	enum INTERACT_PARTICLE_MODE
	{
		INTERACT_PARTICLE_MODE_POSITION = 0,
		INTERACT_PARTICLE_MODE_BOUND,
		NUM_INTERACT_PARTICLE_MODES,
	};
	void setInteractParticleMode(ParticlesField::INTERACT_PARTICLE_MODE mode);
	ParticlesField::INTERACT_PARTICLE_MODE getInteractParticleMode() const;
	void setParticlesFieldMask(int mask);
	int getParticlesFieldMask() const;
	void setViewportMask(int mask);
	int getViewportMask() const;
};
typedef Ptr<ParticlesField> ParticlesFieldPtr;

//////////////////////////////////////////////////////////////////////////

class UNIGINE_API ParticlesFieldDeflector : public ParticlesField
{
public:
	static int type() { return Node::PARTICLES_FIELD_DEFLECTOR; }
	static bool convertible(Node *node) { return (node && node->getType() == type()); }

	static Ptr<ParticlesFieldDeflector> create();
	static Ptr<ParticlesFieldDeflector> create(const Math::vec2 &size);
	void setSize(const Math::vec2 &size);
	Math::vec2 getSize() const;
	void setRoughness(float roughness);
	float getRoughness() const;
	void setRestitution(float restitution);
	float getRestitution() const;
};
typedef Ptr<ParticlesFieldDeflector> ParticlesFieldDeflectorPtr;

//////////////////////////////////////////////////////////////////////////

class UNIGINE_API ParticlesFieldSpacer : public ParticlesField
{
public:
	static int type() { return Node::PARTICLES_FIELD_SPACER; }
	static bool convertible(Node *node) { return (node && node->getType() == type()); }


	enum SHAPE_TYPE
	{
		SHAPE_TYPE_BOX = 0,
		SHAPE_TYPE_CYLINDER,
		SHAPE_TYPE_CAPSULE,
		SHAPE_TYPE_SPHERE,
		SHAPE_TYPE_ELLIPSE,
		NUM_SHAPE_TYPES,
	};
	void setShapeType(ParticlesFieldSpacer::SHAPE_TYPE type);
	ParticlesFieldSpacer::SHAPE_TYPE getShapeType() const;
	static Ptr<ParticlesFieldSpacer> create();
	static Ptr<ParticlesFieldSpacer> create(const Math::vec3 &size);
	void setSize(const Math::vec3 &size);
	Math::vec3 getSize() const;
	void setRadius(float radius);
	float getRadius() const;
	void setHeight(float height);
	float getHeight() const;
};
typedef Ptr<ParticlesFieldSpacer> ParticlesFieldSpacerPtr;

} // namespace Unigine
