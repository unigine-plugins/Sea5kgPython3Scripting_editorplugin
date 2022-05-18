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
#include "UnigineRenderContext.h"
#include "UnigineImage.h"
#include "UnigineCallback.h"

namespace Unigine
{


class UNIGINE_API SystemDialog : public APIInterface
{
public:
	static Ptr<SystemDialog> create();

	enum
	{
		TYPE_ERROR = 0,
		TYPE_WARNING,
		TYPE_INFORMATION,
	};
	void setType(int type);
	int getType() const;
	void setTitle(const char *title);
	const char *getTitle() const;
	void setMessage(const char *message);
	const char *getMessage() const;
	void setDefaultButtonReturn(int val);
	int getDefaultButtonReturn() const;
	void setDefaultButtonEscape(int escape);
	int getDefaultButtonEscape() const;
	int getNumButtons() const;
	int addButton();
	int addButton(const char *name);
	void removeButton(int num);
	void swapButtons(int num_0, int num_1);
	const char *getButtonName(int num) const;
	void setButtonName(int num, const char *name);
};
typedef Ptr<SystemDialog> SystemDialogPtr;

//////////////////////////////////////////////////////////////////////////

class UNIGINE_API App
{
protected:
	

public:
	static int isInitialized(); 

	enum
	{
		RESIZABLE = 1 << 1,
		FULLSCREEN = 1 << 2,
		FULLWINDOW = 1 << 3,
		VSYNC = 1 << 4,
		DEBUG_CONTEXT = 1 << 5,
		BREAK_ON_ERROR = 1 << 6,
		INDEPENDENT_SIZE_WINDOW = 1 << 7,
		QUAD_BUFFER_CONTEXT = 1 << 8,
	};

	enum
	{
		BUTTON_LEFT = 1 << 0,
		BUTTON_MIDDLE = 1 << 1,
		BUTTON_RIGHT = 1 << 2,
		BUTTON_DCLICK = 1 << 3,
		BUTTON_AUX_0 = 1 << 4,
		BUTTON_AUX_1 = 1 << 5,
		BUTTON_AUX_2 = 1 << 6,
		BUTTON_AUX_3 = 1 << 7,
	};

	enum
	{
		AXIS_X = 0,
		AXIS_Y,
		NUM_AXES,
	};

	enum
	{
		NUM_TOUCHES = 16,
	};

	enum
	{
		KEY_ESC = 256,
		KEY_TAB,
		KEY_BACKSPACE,
		KEY_RETURN,
		KEY_DELETE,
		KEY_INSERT,
		KEY_HOME,
		KEY_END,
		KEY_PGUP,
		KEY_PGDOWN,
		KEY_LEFT,
		KEY_RIGHT,
		KEY_UP,
		KEY_DOWN,
		KEY_SHIFT,
		KEY_CTRL,
		KEY_ALT,
		KEY_CMD,
		KEY_SCROLL,
		KEY_CAPS,
		KEY_NUM,
		KEY_F1,
		KEY_F2,
		KEY_F3,
		KEY_F4,
		KEY_F5,
		KEY_F6,
		KEY_F7,
		KEY_F8,
		KEY_F9,
		KEY_F10,
		KEY_F11,
		KEY_F12,
		NUM_KEYS,
	};
	static void * getHandle();
	static const char *getName();
	static int setPosition(int x, int y);
	static int getPositionX();
	static int getPositionY();
	static int setTitle(const char *title);
	static int setIcon(const Ptr<Image> &icon);
	static int getWidth();
	static void setWidth(int width);
	static int getHeight();
	static void setHeight(int height);
	static int getFlags();
	static bool isBackgroundUpdate();
	static void setBackgroundUpdate(bool enable);
	static int getMouseButton();
	static void setMouseButton(int button);
	static void setMouseGrab(bool grab);
	static bool isMouseGrab();
	static void setMouseCursorHide(bool hide);
	static bool isMouseCursorHide();
	static void setMouseCursorSystem(bool system);
	static bool isMouseCursorSystem();
	static void setMouseCursorNeedUpdate(bool update);
	static bool isMouseCursorNeedUpdate();
	static void setMouseCursorSkinCustom(const Ptr<Image> &image);
	static void setMouseCursorSkinSystem();
	static void setMouseCursorSkinDefault();
	static void setMouseCursorCustom(const Ptr<Image> &image, int x = 0, int y = 0);
	static void clearMouseCursorCustom();
	static void updateMouseCursor();
	static int getMouseX();
	static int getMouseY();
	static void setMouse(int x, int y);
	static void setMouseAxis(int axis, int value);
	static int getMouseAxis(int axis);
	static int clearMouseAxis(int axis);
	static int getMouseButtonState(int button);
	static int clearMouseButtonState(int button);
	static int getNumTouches();
	static int getTouchX(int touch);
	static int getTouchY(int touch);
	static void setKeyState(int key, int state);
	static int getKeyState(int key);
	static int clearKeyState(int key);
	static bool isDone();
	static bool setVideoMode(int width, int height, int flags = 0);
	static bool restoreVideoMode();
	static void exit();
	static const char *getVideoModeName();
	static void setClipboard(const char *str);
	static const char *getClipboard();
	static void stopFps();
	static void startFps();
	static void updateFps();
	static float getFps();
	static float getMinFps();
	static float getMeanFps();
	static float getMaxFps();
	static float getIFps();
	static bool dialogMessage(const char *title, const char *message);
	static bool dialogWarning(const char *title, const char *warning);
	static bool dialogError(const char *title, const char *error);
	static int showSystemDialog(const Ptr<SystemDialog> &dialog);
	static const char *dialogOpenFolder(const char *path);
	static const char *dialogOpenFolder();
	static Vector< String >  dialogOpenFiles(const char *path, const char *filter);
	static Vector< String >  dialogOpenFiles(const char *path);
	static Vector< String >  dialogOpenFiles();
	static const char *dialogOpenFile(const char *path, const char *filter);
	static const char *dialogOpenFile(const char *path);
	static const char *dialogOpenFile();
	static const char *dialogSaveFile(const char *path, const char *filter);
	static const char *dialogSaveFile(const char *path);
	static const char *dialogSaveFile();
	static void buttonPress(int button);
	static void buttonRelease(int button);
	static const char *getMouseButtonName(int button);
	static void keyPress(unsigned int key);
	static void keyRelease(unsigned int key);
	static void keyPressUnicode(unsigned int key);
	static const char *getKeyName(int key);
	static int isActive();
	static int isLegacyMode();
	static int getVideoAdapter();
	static void setExternalWindowFocused(bool focused);
	static bool isExternalWindowFocused();
	static void setButtonPressFunc(int (*func)(int button) );
	static void setButtonReleaseFunc(int (*func)(int button) );
	static void setKeyPressFunc(int (*func)(unsigned int key) );
	static void setKeyReleaseFunc(int (*func)(unsigned int key) );
	static void setKeyPressUnicodeFunc(int (*func)(unsigned int key) );
	static void setCustomSwapBuffersCallback(CallbackBase *callback);
	static CallbackBase *getCustomSwapBuffersCallback();
};

} // namespace Unigine
