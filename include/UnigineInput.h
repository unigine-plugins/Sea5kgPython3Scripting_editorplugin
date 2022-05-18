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
#include "UnigineMathLib.h"

namespace Unigine
{


class UNIGINE_API InputGamePad : public APIInterface
{
public:

	enum BUTTON
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
	bool isAvailable() const;
	int getNumber() const;
	const char *getName() const;
	void setFilter(float filter);
	float getFilter() const;
	Math::vec2 getAxesLeft() const;
	Math::vec2 getAxesLeftDelta() const;
	Math::vec2 getAxesRight() const;
	Math::vec2 getAxesRightDelta() const;
	float getTriggerLeft() const;
	float getTriggerLeftDelta() const;
	float getTriggerRight() const;
	float getTriggerRightDelta() const;
	bool isButtonPressed(InputGamePad::BUTTON button) const;
	bool isButtonDown(InputGamePad::BUTTON button) const;
	bool isButtonUp(InputGamePad::BUTTON button) const;
	void setLeftMotor(float speed);
	void setRightMotor(float speed);
};
typedef Ptr<InputGamePad> InputGamePadPtr;

//////////////////////////////////////////////////////////////////////////

class UNIGINE_API Input
{
protected:
	

public:
	static int isInitialized(); 

	enum MOUSE_HANDLE
	{
		MOUSE_HANDLE_GRAB = 0,
		MOUSE_HANDLE_SOFT,
		MOUSE_HANDLE_USER,
	};

	enum MOUSE_BUTTON
	{
		MOUSE_BUTTON_LEFT = 0,
		MOUSE_BUTTON_MIDDLE,
		MOUSE_BUTTON_RIGHT,
		MOUSE_BUTTON_DCLICK,
		MOUSE_BUTTON_AUX_0,
		MOUSE_BUTTON_AUX_1,
		MOUSE_BUTTON_AUX_2,
		MOUSE_BUTTON_AUX_3,
		MOUSE_NUM_BUTTONS,
	};

	enum
	{
		NUM_GAME_PADS = 4,
		NUM_TOUCHES = 16,
		NUM_JOYSTICKS = 16,
	};

	enum KEY
	{
		KEY_SPACE = ' ',
		KEY_EXCLAIM = '!',
		KEY_DOUBLE_QUOTE = '"',
		KEY_HASH = '#',
		KEY_DOLLAR = '$',
		KEY_PERCENT = '%',
		KEY_AMPERSAND = '&',
		KEY_QUOTE = '\'',
		KEY_APOSTROPHE = KEY_QUOTE,
		KEY_LEFT_PAREN = '(',
		KEY_RIGHT_PAREN = ')',
		KEY_ASTERISK = '*',
		KEY_PLUS = '+',
		KEY_COMMA = ',',
		KEY_MINUS = '-',
		KEY_DOT = '.',
		KEY_SLASH = '/',
		KEY_COLON = ':',
		KEY_SEMICOLON = ';',
		KEY_LESS = '<',
		KEY_EQUALS = '=',
		KEY_GREATER = '>',
		KEY_QUESTION = '?',
		KEY_AT = '@',
		KEY_LEFT_BRACKET = '[',
		KEY_BACK_SLASH = '\\',
		KEY_RIGHT_BRACKET = ']',
		KEY_CARET = '^',
		KEY_UNDERSCORE = '_',
		KEY_BACK_QUOTE = '`',
		KEY_DIGIT_0 = '0',
		KEY_DIGIT_1 = '1',
		KEY_DIGIT_2 = '2',
		KEY_DIGIT_3 = '3',
		KEY_DIGIT_4 = '4',
		KEY_DIGIT_5 = '5',
		KEY_DIGIT_6 = '6',
		KEY_DIGIT_7 = '7',
		KEY_DIGIT_8 = '8',
		KEY_DIGIT_9 = '9',
		KEY_A = 'a',
		KEY_B = 'b',
		KEY_C = 'c',
		KEY_D = 'd',
		KEY_E = 'e',
		KEY_F = 'f',
		KEY_G = 'g',
		KEY_H = 'h',
		KEY_I = 'i',
		KEY_J = 'j',
		KEY_K = 'k',
		KEY_L = 'l',
		KEY_M = 'm',
		KEY_N = 'n',
		KEY_O = 'o',
		KEY_P = 'p',
		KEY_Q = 'q',
		KEY_R = 'r',
		KEY_S = 's',
		KEY_T = 't',
		KEY_U = 'u',
		KEY_V = 'v',
		KEY_W = 'w',
		KEY_X = 'x',
		KEY_Y = 'y',
		KEY_Z = 'z',
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
	static bool isKeyPressed(Input::KEY key);
	static bool isKeyDown(Input::KEY key);
	static bool isKeyUp(Input::KEY key);
	static bool isMouseButtonPressed(Input::MOUSE_BUTTON button);
	static bool isMouseButtonDown(Input::MOUSE_BUTTON button);
	static bool isMouseButtonUp(Input::MOUSE_BUTTON button);
	static Math::ivec2 getMouseCoord();
	static Math::ivec2 getMouseCoordDelta();
	static Math::vec2 getMouseDelta();
	static int getMouseWheel();
	static int getMouseWheelHorizontal();
	static void setMouseHandle(Input::MOUSE_HANDLE handle);
	static Input::MOUSE_HANDLE getMouseHandle();
	static int getCountGamePads();
	static Ptr<InputGamePad> getGamePad(int num);
	static int getCountActiveGamePads();
	static Ptr<InputGamePad> getActiveGamePad(int num);
};

} // namespace Unigine
