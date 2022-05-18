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

// DO NOT EDIT DIRECTLY. This is an auto-generated file. Your changes will be lost.

#pragma once

#include "UnigineBase.h"
#include "UniginePtr.h"
#include "UnigineString.h"

namespace Unigine
{


class UNIGINE_API RenderContext : public APIInterface
{
public:
	bool isCreated() const;
	bool isReady() const;
	int getContextAPI() const;
	const char *getContextName() const;
	void * createVisual();
	int createContext(void * handle, int width, int height);
	int destroyContext();
	int resizeWindow(int width, int height);
	int renderWindow();
	int swapWindow();
	void * getHandle();
	void * getGLContext() const;
	void * getGLDisplay() const;
	void * getD3D11Device() const;
	void * getD3D11Context() const;
	void * getD3D11SwapChain() const;
	void * getD3D11RenderTarget() const;
	void * getD3D11DepthStencil() const;
	void * getD3D11RenderTargetView() const;
	void * getD3D11DepthStencilView() const;
};
typedef Ptr<RenderContext> RenderContextPtr;

} // namespace Unigine
