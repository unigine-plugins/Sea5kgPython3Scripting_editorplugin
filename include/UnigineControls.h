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

#include "UniginePtr.h"
#include "UnigineStreams.h"
#include "UnigineInput.h"

namespace Unigine
{

//////////////////////////////////////////////////////////////////////////

class UNIGINE_API ControlsApp
{
protected:
	

public:
	static int isInitialized(); 
	static void setPath(const char *path);
	static const char *getPath();
	static void setAutosave(bool autosave);
	static bool isAutosave();
	static int load();
	static int save();
	static void setEnabled(bool enabled);
	static bool isEnabled();
	static void setAlwaysRun(int run);
	static int getAlwaysRun();
	static void setMouseHandle(Input::MOUSE_HANDLE handle);
	static Input::MOUSE_HANDLE getMouseHandle();
	static void setMouseEnabled(bool enabled);
	static bool isMouseEnabled();
	static void setMouseInverse(int inverse);
	static int getMouseInverse();
	static void setMouseSensitivity(float sensitivity);
	static float getMouseSensitivity();
	static void setMouseDX(float mousedx);
	static float getMouseDX();
	static void setMouseDY(float mousedy);
	static float getMouseDY();
	static void setState(int state, int value);
	static int getState(int state);
	static int clearState(int state);
	static int isStateKey(int key);
	static void setStateKey(int state, int key);
	static int getStateKey(int state);
	static int isStateButton(int button);
	static void setStateButton(int state, int button);
	static int getStateButton(int state);
	static String getStateName(int state);
	static void getStateEvent(int state);
	static int isStateEvent();
};


class UNIGINE_API Controls : public APIInterface
{
public:
	static bool convertible(Controls *obj) { return obj != nullptr; }

	enum TYPE
	{
		CONTROLS_APP,
		CONTROLS_DUMMY,
		CONTROLS_SIX_AXIS,
		CONTROLS_X_PAD360,
		CONTROLS_JOYSTICK,
	};

	enum
	{
		STATE_FORWARD = 0,
		STATE_BACKWARD,
		STATE_MOVE_LEFT,
		STATE_MOVE_RIGHT,
		STATE_TURN_UP,
		STATE_TURN_DOWN,
		STATE_TURN_LEFT,
		STATE_TURN_RIGHT,
		STATE_CROUCH,
		STATE_JUMP,
		STATE_RUN,
		STATE_USE,
		STATE_FIRE,
		STATE_SAVE,
		STATE_RESTORE,
		STATE_SCREENSHOT,
		STATE_AUX_0,
		STATE_AUX_1,
		STATE_AUX_2,
		STATE_AUX_3,
		STATE_AUX_4,
		STATE_AUX_5,
		STATE_AUX_6,
		STATE_AUX_7,
		STATE_AUX_8,
		STATE_AUX_9,
		STATE_AUX_A,
		STATE_AUX_B,
		STATE_AUX_C,
		STATE_AUX_D,
		STATE_AUX_E,
		STATE_AUX_F,
		NUM_STATES,
	};
	static Ptr<Controls> create(int type);
	Controls::TYPE getType() const;
	const char *getTypeName() const;
	void setMouseDX(float mousedx);
	float getMouseDX() const;
	void setMouseDY(float mousedy);
	float getMouseDY() const;
	void setState(int state, int value);
	int getState(int state) const;
	int clearState(int state);
	int saveState(const Ptr<Stream> &stream) const;
	int restoreState(const Ptr<Stream> &stream);
};
typedef Ptr<Controls> ControlsPtr;


class UNIGINE_API ControlsDummy : public Controls
{
public:
	static bool convertible(Controls *obj) { return obj && obj->getType() == Controls::CONTROLS_DUMMY; }
	static Ptr<ControlsDummy> create();
};
typedef Ptr<ControlsDummy> ControlsDummyPtr;


class UNIGINE_API ControlsJoystick : public Controls
{
public:
	static bool convertible(Controls *obj) { return obj && obj->getType() == Controls::CONTROLS_JOYSTICK; }
	static Ptr<ControlsJoystick> create(int num);
	int getNumber() const;
	bool isAvailable() const;
	const char *getName() const;
	void setFilter(float filter);
	float getFilter() const;
	int updateEvents();
	int getNumAxes() const;
	float getAxis(int axis) const;
	const char *getAxisName(int axis) const;
	int getNumPovs() const;
	int getPov(int pov) const;
	const char *getPovName(int pov) const;
	int getNumButtons() const;
	int getButton(int button) const;
	int clearButton(int button);
	const char *getButtonName(int button) const;
	const char *getGuidProduct() const;
	const char *getGuidInstance() const;
	void setStateButton(int state, int button);
	int getStateButton(int state) const;
	String getStateName(int state) const;
	int saveState(const Ptr<Stream> &stream) const;
	int restoreState(const Ptr<Stream> &stream);
	void getStateEvent(int state);
	int isStateEvent() const;
};
typedef Ptr<ControlsJoystick> ControlsJoystickPtr;


class UNIGINE_API ControlsXPad360 : public Controls
{
public:
	static bool convertible(Controls *obj) { return obj && obj->getType() == Controls::CONTROLS_X_PAD360; }
	static Ptr<ControlsXPad360> create(int num);
	int getNumber() const;
	bool isAvailable() const;
	const char *getName() const;
	void setFilter(float filter);
	float getFilter() const;
	int updateEvents();
	float getLeftX() const;
	float getLeftY() const;
	float getRightX() const;
	float getRightY() const;
	float getLeftTrigger() const;
	float getRightTrigger() const;
	void setLeftMotor(float speed);
	void setRightMotor(float speed);
	int getButton(int button) const;
	int clearButton(int button);
	void setStateButton(int state, int button);
	int getStateButton(int state) const;
	String getStateName(int state) const;
	int saveState(const Ptr<Stream> &stream) const;
	int restoreState(const Ptr<Stream> &stream);
	void getStateEvent(int state);
	bool isStateEvent() const;

	enum
	{
		BUTTON_A = 0,
		BUTTON_B,
		BUTTON_X,
		BUTTON_Y,
		BUTTON_BACK,
		BUTTON_START,
		BUTTON_DPAD_UP,
		BUTTON_DPAD_DOWN,
		BUTTON_DPAD_LEFT,
		BUTTON_DPAD_RIGHT,
		BUTTON_THUMB_LEFT,
		BUTTON_THUMB_RIGHT,
		BUTTON_SHOULDER_LEFT,
		BUTTON_SHOULDER_RIGHT,
		NUM_BUTTONS,
	};
};
typedef Ptr<ControlsXPad360> ControlsXPad360Ptr;


class UNIGINE_API ControlsSixAxis : public Controls
{
public:
	static bool convertible(Controls *obj) { return obj && obj->getType() == Controls::CONTROLS_SIX_AXIS; }
	static Ptr<ControlsSixAxis> create(int num);
	int getNumber() const;
	bool isAvailable() const;
	const char *getName() const;
	void setFilter(float filter);
	float getFilter() const;
	int updateEvents();
	float getLeftX() const;
	float getLeftY() const;
	float getRightX() const;
	float getRightY() const;
	float getPressL1() const;
	float getPressR1() const;
	float getPressL2() const;
	float getPressR2() const;
	float getPressUp() const;
	float getPressDown() const;
	float getPressLeft() const;
	float getPressRight() const;
	float getPressTriangle() const;
	float getPressCircle() const;
	float getPressCross() const;
	float getPressSquare() const;
	float getSensorX() const;
	float getSensorY() const;
	float getSensorZ() const;
	float getSensorG() const;
	void setSmallMotor(float speed);
	void setLargeMotor(float speed);
	int getButton(int button) const;
	int clearButton(int button);
	void setStateButton(int state, int button);
	int getStateButton(int state) const;
	String getStateName(int state) const;
	int saveState(const Ptr<Stream> &stream) const;
	int restoreState(const Ptr<Stream> &stream);
	void getStateEvent(int state);
	bool isStateEvent() const;

	enum
	{
		BUTTON_L1 = 0,
		BUTTON_R1,
		BUTTON_L2,
		BUTTON_R2,
		BUTTON_L3,
		BUTTON_R3,
		BUTTON_UP,
		BUTTON_DOWN,
		BUTTON_LEFT,
		BUTTON_RIGHT,
		BUTTON_TRIANGLE,
		BUTTON_CIRCLE,
		BUTTON_CROSS,
		BUTTON_SQUARE,
		BUTTON_START,
		BUTTON_SELECT,
		NUM_BUTTONS,
	};
};
typedef Ptr<ControlsSixAxis> ControlsSixAxisPtr;

} // namespace Unigine
