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

#include <UnigineMathLib.h>
#include <UnigineEngine.h>

namespace Unigine
{
namespace Plugins
{
class AppVarjo
{
protected:
	virtual ~AppVarjo(){}
public:
	UNIGINE_INLINE static AppVarjo *get() { return Unigine::Engine::get()->getPlugin<AppVarjo>("AppVarjo"); }

	enum VIEWPORT
	{
		VIEWPORT_BLACK_SCREEN,
		VIEWPORT_MONO,
		VIEWPORT_STEREO,
	};

	enum DEVICE
	{
		DEVICE_INVALID,
		DEVICE_HMD,
		DEVICE_CONTROLLER,
		DEVICE_GENERIC_TRACKER,
		DEVICE_TRACKING,
	};

	enum AXIS
	{
		AXIS_NONE,
		AXIS_TRACKPAD,
		AXIS_JOYSTICK,
		AXIS_TRIGGER,
	};

	enum BUTTON
	{
		BUTTON_SYSTEM = 0,
		BUTTON_APPLICATIONMENU = 1,
		BUTTON_GRIP = 2,
		BUTTON_DPAD_LEFT = 3,
		BUTTON_DPAD_UP = 4,
		BUTTON_DPAD_RIGHT = 5,
		BUTTON_DPAD_DOWN = 6,
		BUTTON_A = 7,
		BUTTON_AXIS0 = 32,
		BUTTON_AXIS1 = 33,
		BUTTON_AXIS2 = 34,
		BUTTON_AXIS3 = 35,
		BUTTON_AXIS4 = 36,
		BUTTON_STEAMVR_TOUCHPAD = 32,
		BUTTON_STEAMVR_TRIGGER = 33,
		BUTTON_DASHBOARD_BACK = 2,
		BUTTON_MAX = 64,
	};

	enum CONTROLLER_ROLE
	{
		CONTROLLER_ROLE_INVALID = 0,
		CONTROLLER_ROLE_LEFT_HAND = 1,
		CONTROLLER_ROLE_RIGHT_HAND = 2,
		CONTROLLER_ROLE_OPT_OUT = 3,
		CONTROLLER_ROLE_TREADMILL = 4,
		CONTROLLER_ROLE_MAX = 5,
	};
	virtual void setViewportMode(AppVarjo::VIEWPORT mode) = 0;
	virtual AppVarjo::VIEWPORT getViewportMode() const = 0;
	virtual void setHeadPositionLock(bool lock) = 0;
	virtual void setHeadRotationLock(bool lock) = 0;
	virtual bool isHeadPositionLocked() const = 0;
	virtual bool isHeadRotationLocked() const = 0;
	virtual int getMaxTrackedDeviceCount() const = 0;
	virtual int getControllerStateAxisCount() const = 0;
	virtual Math::mat4 getDevicePose(int device_num) = 0;
	virtual Math::vec3 getDeviceVelocity(int device_num) = 0;
	virtual Math::vec3 getDeviceAngularVelocity(int device_num) = 0;
	virtual bool isDeviceConnected(int device_num) = 0;
	virtual bool isPoseValid(int device_num) = 0;
	virtual int getTrackingResult(int device_num) = 0;
	virtual AppVarjo::DEVICE getDeviceType(int device_num) = 0;
	virtual AppVarjo::AXIS getDeviceAxisType(int device_num, int axis_num) = 0;
	virtual String getDeviceManufacturerName(int device) = 0;
	virtual String getDeviceModelNumber(int device) = 0;
	virtual AppVarjo::CONTROLLER_ROLE getControllerRole(int device_num) = 0;
	virtual int getControllerPacketNum(int device_num) = 0;
	virtual bool getControllerButtonPressed(int device_num, AppVarjo::BUTTON button) = 0;
	virtual bool getControllerButtonTouched(int device_num, AppVarjo::BUTTON button) = 0;
	virtual Math::vec2 getControllerAxis(int device_num, int axis_num) = 0;
	virtual void setControllerVibration(int device_num, unsigned short duration) = 0;

	enum EYETRACKING_STATUS
	{
		EYETRACKING_STATUS_INVALID,
		EYETRACKING_STATUS_ADJUST,
		EYETRACKING_STATUS_VALID,
	};

	enum EYE_STATUS
	{
		EYE_STATUS_INVALID,
		EYE_STATUS_VISIBLE,
		EYE_STATUS_COMPENSATED,
		EYE_STATUS_TRACKED,
	};
	virtual bool isEyeTrackingValid() const = 0;
	virtual Math::Vec3 getFocusWorldPosition() const = 0;
	virtual void requestCalibration() = 0;
	virtual Math::Vec3 getLeftEyeWorldPosition() const = 0;
	virtual Math::Vec3 getLeftEyeWorldDirection() const = 0;
	virtual Math::Vec3 getRightEyeWorldPosition() const = 0;
	virtual Math::Vec3 getRightEyeWorldDirection() const = 0;
	virtual Math::Vec3 getGazeWorldDirection() const = 0;
	virtual double getLeftEyePupilSize() const = 0;
	virtual double getRightEyePupilSize() const = 0;
	virtual long long getCaptureTime() const = 0;
	virtual double getFocusDistance() const = 0;
	virtual double getStability() const = 0;
	virtual AppVarjo::EYETRACKING_STATUS getEyeTrackingStatus() const = 0;
	virtual AppVarjo::EYE_STATUS getLeftEyeStatus() const = 0;
	virtual AppVarjo::EYE_STATUS getRightEyeStatus() const = 0;
	virtual long long getFrameNum() const = 0;
	virtual void setVisualizerEnabled(bool enabled) = 0;
	virtual bool isVisualizerEnabled() const = 0;
};

} // namespace Plugins
} // namespace Unigine
