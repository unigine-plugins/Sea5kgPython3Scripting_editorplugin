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

#include "UnigineGui.h"
#include "UnigineCamera.h"
#include "UnigineWidgets.h"
#include "UnigineCallback.h"

namespace Unigine
{

class WindowEvent;
class EngineWindowGroup;

class UNIGINE_API EngineWindow : public APIInterface
{
public:
	static bool convertible(EngineWindow *obj) { return obj != nullptr; }

	enum TYPE
	{
		ENGINE_WINDOW = 0,
		ENGINE_WINDOW_VIEWPORT,
		ENGINE_WINDOW_GROUP,
		NUM_ENGINE_WINDOWS,
	};

	enum FLAGS
	{
		FLAGS_SHOWN = 1 << 0,
		FLAGS_FIXED_SIZE = 1 << 1,
		FLAGS_HOLD_ENGINE = 1 << 2,
		FLAGS_MAIN = 1 << 3,
		FLAGS_CONSOLE_USAGE = 1 << 4,
		FLAGS_PROFILER_USAGE = 1 << 5,
		FLAGS_VISUALIZER_USAGE = 1 << 6,
	};

	enum HITTEST
	{
		HITTEST_INVALID = -1,
		HITTEST_NORMAL = 0,
		HITTEST_DRAGGABLE,
		HITTEST_RESIZE_TOPLEFT,
		HITTEST_RESIZE_TOP,
		HITTEST_RESIZE_TOPRIGHT,
		HITTEST_RESIZE_RIGHT,
		HITTEST_RESIZE_BOTTOMRIGHT,
		HITTEST_RESIZE_BOTTOM,
		HITTEST_RESIZE_BOTTOMLEFT,
		HITTEST_RESIZE_LEFT,
	};

	enum AREA
	{
		AREA_NONE = 0,
		AREA_TOP_LEFT,
		AREA_TOP_CENTER,
		AREA_TOP_RIGHT,
		AREA_CENTER_LEFT,
		AREA_CENTER_CENTER,
		AREA_CENTER_RIGHT,
		AREA_BOTTOM_LEFT,
		AREA_BOTTOM_CENTER,
		AREA_BOTTOM_RIGHT,
	};

	enum CALLBACK_INDEX
	{
		CALLBACK_WINDOW_EVENT = 0,
		CALLBACK_FUNC_UPDATE,
		CALLBACK_FUNC_BEGIN_RENDER,
		CALLBACK_FUNC_RENDER,
		CALLBACK_FUNC_BEGIN_RENDER_GUI,
		CALLBACK_FUNC_END_RENDER_GUI,
		CALLBACK_FUNC_END_RENDER,
		CALLBACK_FUNC_SWAP,
		CALLBACK_MOVED,
		CALLBACK_RESIZED,
		CALLBACK_FOCUSED,
		CALLBACK_UNFOCUSED,
		CALLBACK_MOUSE_ENTER,
		CALLBACK_MOUSE_LEAVE,
		CALLBACK_SHOWN,
		CALLBACK_HIDDEN,
		CALLBACK_MINIMIZED,
		CALLBACK_MAXIMIZED,
		CALLBACK_RESTORED,
		CALLBACK_CLOSE,
		CALLBACK_ITEM_DROP,
		CALLBACK_UNSTACK_MOVE,
		CALLBACK_STACK,
		CALLBACK_UNSTACK,
		NUM_CALLBACKS,
	};
	EngineWindow::TYPE getType() const;
	const char *getTypeName() const;
	unsigned long long getID() const;
	Ptr<Gui> getSelfGui() const;
	Ptr<Gui> getGui() const;
	bool isSeparate() const;
	bool isNested() const;
	int getDisplayIndex() const;
	void setPosition(const Math::ivec2 &position);
	Math::ivec2 getPosition() const;
	void setClientPosition(const Math::ivec2 &position);
	Math::ivec2 getClientPosition() const;
	Math::ivec2 getClientLocalPosition() const;
	void moveToCenter();
	Math::ivec2 globalToLocalUnitPosition(const Math::ivec2 &global_pos) const;
	Math::ivec2 localUnitToGlobalPosition(const Math::ivec2 &unit_pos) const;
	void setSize(const Math::ivec2 &size);
	Math::ivec2 getSize() const;
	Math::ivec2 getRenderSize() const;
	void setClientSize(const Math::ivec2 &size);
	Math::ivec2 getClientSize() const;
	Math::ivec2 getClientRenderSize() const;
	void setMinSize(const Math::ivec2 &size);
	Math::ivec2 getMinSize() const;
	Math::ivec2 getMinRenderSize() const;
	void setMaxSize(const Math::ivec2 &size);
	Math::ivec2 getMaxSize() const;
	Math::ivec2 getMaxRenderSize() const;
	void setMinAndMaxSize(const Math::ivec2 &min_size, const Math::ivec2 &max_size);
	int getDpi() const;
	float getDpiScale() const;
	int toRenderSize(int unit_size);
	int toUnitSize(int render_size);
	Math::ivec2 toRenderSize(const Math::ivec2 &unit_size);
	Math::ivec2 toUnitSize(const Math::ivec2 &render_size);
	void setTitle(const char *title);
	const char *getTitle() const;
	void setTitleBarEnabled(bool enabled);
	bool isTitleBarEnabled() const;
	void setTitleBarHeight(int height);
	int getTitleBarHeight() const;
	int setIcon(const Ptr<Image> &image);
	int getIcon(Ptr<Image> &image) const;
	void setOpacity(float opacity);
	float getOpacity() const;
	void setBordersEnabled(bool enabled);
	bool isBordersEnabled() const;
	void setBorderSize(int size);
	int getBorderSize() const;
	void setSystemStyle(bool style);
	bool isSystemStyle() const;
	void setEngineStyle(bool style);
	bool isEngineStyle() const;
	void setHoldEngine(bool engine);
	bool isHoldEngine() const;
	void setIgnoreSystemClose(bool close);
	bool isIgnoreSystemClose() const;
	void setResizable(bool resizable);
	bool isResizable() const;
	void setSizingBorderSize(int size);
	int getSizingBorderSize() const;
	void show();
	bool isShown() const;
	void hide();
	bool isHidden() const;
	void setSystemFocus();
	bool isSystemFocused() const;
	void setFocus();
	bool isFocused() const;
	void minimize();
	bool isMinimized() const;
	void maximize();
	bool isMaximized() const;
	void restore();
	void close();
	EngineWindow::HITTEST getHitTestResult(const Math::ivec2 &global_pos);
	const char *getHitTestResultName(EngineWindow::HITTEST hit_test) const;
	void setModal(const Ptr<EngineWindow> &parent_window);
	bool isModal() const;
	bool isModalParent() const;
	Ptr<EngineWindow> getModalParent() const;
	void addModalWindow(const Ptr<EngineWindow> &window);
	void removeModalWindow(const Ptr<EngineWindow> &window);
	int getNumModalWindows() const;
	Ptr<EngineWindow> getModalWindow(int index) const;
	int getOrder() const;
	void toTop();
	void setAlwaysOnTop(bool top);
	bool isAlwaysOnTop() const;
	void updateGuiHierarchy();
	void setCanBeNested(bool nested);
	bool isCanBeNested() const;
	void setCanCreateGroup(bool group);
	bool isCanCreateGroup() const;
	void unstack();
	Ptr<EngineWindowGroup> getParentGroup() const;
	Ptr<EngineWindowGroup> getGlobalParentGroup() const;
	bool isGlobalChildOf(const Ptr<EngineWindowGroup> &group);
	bool isHiddenByTab() const;
	bool getIntersection(const Math::ivec2 &global_mouse_pos) const;
	bool getClientIntersection(const Math::ivec2 &global_mouse_pos) const;
	EngineWindow::AREA getClient9Area(const Math::ivec2 &global_mouse_pos) const;
	const char *get9AreaName(EngineWindow::AREA area) const;
	void *addCallback(EngineWindow::CALLBACK_INDEX callback, CallbackBase *func);
	void *addCallback(EngineWindow::CALLBACK_INDEX callback, CallbackBase1<float> *func);
	void *addCallback(EngineWindow::CALLBACK_INDEX callback, CallbackBase1<const char *> *func);
	void *addCallback(EngineWindow::CALLBACK_INDEX callback, CallbackBase1<Math::ivec2> *func);
	void *addCallback(EngineWindow::CALLBACK_INDEX callback, CallbackBase1<Ptr<WindowEvent>> *func);
	bool removeCallback(EngineWindow::CALLBACK_INDEX callback, void *id);
	void clearCallbacks(EngineWindow::CALLBACK_INDEX callback);
	int getNumDroppedItems() const;
	const char *getDroppedItem(int index) const;
	void screenshot(const char *path);
};
typedef Ptr<EngineWindow> EngineWindowPtr;


class UNIGINE_API EngineWindowViewport : public EngineWindow
{
public:
	static bool convertible(EngineWindow *obj) { return obj && obj->getType() == EngineWindow::ENGINE_WINDOW_VIEWPORT; }
	static Ptr<EngineWindowViewport> create(const Math::ivec2 &size, int flags = 0);
	static Ptr<EngineWindowViewport> create(int width, int height, int flags = 0);
	static Ptr<EngineWindowViewport> create(const char *window_title, int width, int height, int flags = 0);
	Ptr<Viewport> getViewport() const;
	void setCamera(const Ptr<Camera> &camera);
	Ptr<Camera> getCamera() const;
	void setMain(bool main);
	bool isMain() const;
	void setConsoleUsage(bool usage);
	bool isConsoleUsage() const;
	void setProfilerUsage(bool usage);
	bool isProfilerUsage() const;
	void setVisualizerUsage(bool usage);
	bool isVisualizerUsage() const;
	void setSkipRenderEngine(bool engine);
	bool isSkipRenderEngine() const;
	bool isFullscreen() const;
	void disableFullscreen();
	bool enableFullscreen(int display = -1, int mode = -1);
	void setMouseGrab(bool grab);
	bool isMouseGrab() const;
	void addChild(const Ptr<Widget> &widget, int flags = -1);
	void removeChild(const Ptr<Widget> &widget);
	bool isChild(const Ptr<Widget> &widget);
	Ptr<Widget> getChild(int index);
	int getNumChildren() const;
	void *addCustomRenderCallback(CallbackBase1<Ptr<EngineWindowViewport>> *func);
	bool removeCustomRenderCallback(void *id);
	void clearCustomRenderCallbacks();
	void setDeprecatedCustomPresentCallback(CallbackBase *callback);
	CallbackBase *getDeprecatedCustomPresentCallback() const;
};
typedef Ptr<EngineWindowViewport> EngineWindowViewportPtr;


class UNIGINE_API EngineWindowGroup : public EngineWindow
{
public:
	static bool convertible(EngineWindow *obj) { return obj && obj->getType() == EngineWindow::ENGINE_WINDOW_GROUP; }

	enum GROUP_TYPE
	{
		GROUP_TYPE_NONE = 0,
		GROUP_TYPE_TAB,
		GROUP_TYPE_HORIZONTAL,
		GROUP_TYPE_VERTICAL,
	};

	enum AUTO_DELETE_MODE
	{
		AUTO_DELETE_MODE_NONE = 0,
		AUTO_DELETE_MODE_EMPTY,
		AUTO_DELETE_MODE_SINGLE_WINDOW,
	};
	static Ptr<EngineWindowGroup> create(EngineWindowGroup::GROUP_TYPE group_type, const Math::ivec2 &size, int flags = 0);
	static Ptr<EngineWindowGroup> create(EngineWindowGroup::GROUP_TYPE group_type, int width, int height, int flags = 0);
	static Ptr<EngineWindowGroup> create(EngineWindowGroup::GROUP_TYPE group_type, const char *window_title, int width, int height, int flags = 0);
	EngineWindowGroup::GROUP_TYPE getGroupType() const;
	void setFixed(bool fixed);
	bool isFixed() const;
	void setAutoDeleteMode(EngineWindowGroup::AUTO_DELETE_MODE mode);
	EngineWindowGroup::AUTO_DELETE_MODE getAutoDeleteMode() const;
	void add(const Ptr<EngineWindow> &window, int target_index = -1);
	void remove(const Ptr<EngineWindow> &window);
	void removeByIndex(int index);
	int getNumNestedWindows() const;
	Ptr<EngineWindow> getNestedWindow(int index);
	int getNestedWindowIndex(const Ptr<EngineWindow> &window) const;
	bool containsNestedWindow(const Ptr<EngineWindow> &window) const;
	bool containsNestedWindowInHierarchy(const Ptr<EngineWindow> &window) const;
	void setTabTitle(int index, const char *title);
	void setTabIcon(int index, const Ptr<Image> &image);
	int getCurrentTab() const;
	int getTabWidth(int index) const;
	int getTabHeight(int index) const;
	int getTabBarWidth(int index) const;
	int getTabBarHeight(int index) const;
	Math::ivec2 getTabLocalPosition(int index) const;
	Math::ivec2 getTabBarLocalPosition(int index) const;
	void setHorizontalTabWidth(int index, int tab_width);
	void setVerticalTabHeight(int index, int tab_height);
	void swapTabs(int first, int second);
	int getSeparatorWidth() const;
	int getSeparatorHeight() const;
	void setSeparatorPosition(int index, int pos);
	int getSeparatorPosition(int index) const;
	void setSeparatorValue(int index, float value);
	float getSeparatorValue(int index) const;
	int getIntersectionTabBar(const Math::ivec2 &global_mouse_pos);
	int getIntersectionTabBarArea(const Math::ivec2 &global_mouse_pos);
	Math::ivec2 getIntersectedItemPosition() const;
	Math::ivec2 getIntersectedItemSize() const;
};
typedef Ptr<EngineWindowGroup> EngineWindowGroupPtr;

class WindowEventGeneric;
class WindowEventDrop;

class UNIGINE_API WindowEvent : public APIInterface
{
public:
	static bool convertible(WindowEvent *obj) { return obj != nullptr; }

	enum TYPE
	{
		WINDOW_EVENT = 0,
		WINDOW_EVENT_GENERIC,
		WINDOW_EVENT_DROP,
		WINDOW_EVENT_DPI,
		NUM_WINDOW_EVENTS,
	};
	WindowEvent::TYPE getType() const;
	const char *getTypeName() const;
	void setTimestamp(unsigned long long timestamp);
	unsigned long long getTimestamp() const;
	void setWinID(unsigned long long winid);
	unsigned long long getWinID() const;
	void setMousePosition(const Math::ivec2 &position);
	Math::ivec2 getMousePosition() const;
	void setPosition(const Math::ivec2 &position);
	Math::ivec2 getPosition() const;
	void setSize(const Math::ivec2 &size);
	Math::ivec2 getSize() const;
	void setWindow(const Ptr<EngineWindow> &window);
	Ptr<EngineWindow> getWindow() const;
};
typedef Ptr<WindowEvent> WindowEventPtr;


class UNIGINE_API WindowEventGeneric : public WindowEvent
{
public:
	static bool convertible(WindowEvent *obj) { return obj && obj->getType() == WindowEvent::WINDOW_EVENT_GENERIC; }

	enum ACTION
	{
		ACTION_RESIZED = 0,
		ACTION_MOVED,
		ACTION_SIZE_CHANGED,
		ACTION_FOCUS_GAINED,
		ACTION_FOCUS_LOST,
		ACTION_MOUSE_ENTER,
		ACTION_MOUSE_LEAVE,
		ACTION_SHOWN,
		ACTION_HIDDEN,
		ACTION_MINIMIZED,
		ACTION_MAXIMIZED,
		ACTION_RESTORED,
		ACTION_CLOSE,
		ACTION_UNSTACK_MOVE,
	};
	static Ptr<WindowEventGeneric> create();
	static Ptr<WindowEventGeneric> create(unsigned long long timestamp, unsigned long long win_id);
	static Ptr<WindowEventGeneric> create(unsigned long long timestamp, unsigned long long win_id, const Math::ivec2 &mouse_pos);
	static Ptr<WindowEventGeneric> create(unsigned long long timestamp, unsigned long long win_id, const Math::ivec2 &mouse_pos, const Math::ivec2 &position, const Math::ivec2 &size);
	static Ptr<WindowEventGeneric> create(unsigned long long timestamp, unsigned long long win_id, const Math::ivec2 &mouse_pos, const Math::ivec2 &position, const Math::ivec2 &size, WindowEventGeneric::ACTION action);
	void setAction(WindowEventGeneric::ACTION action);
	WindowEventGeneric::ACTION getAction() const;
};
typedef Ptr<WindowEventGeneric> WindowEventGenericPtr;


class UNIGINE_API WindowEventDrop : public WindowEvent
{
public:
	static bool convertible(WindowEvent *obj) { return obj && obj->getType() == WindowEvent::WINDOW_EVENT_DROP; }

	enum ACTION
	{
		ACTION_ITEMS_DROP_BEGIN = 0,
		ACTION_ITEM_DROP,
		ACTION_ITEMS_DROP_END,
	};
	static Ptr<WindowEventDrop> create();
	static Ptr<WindowEventDrop> create(unsigned long long timestamp, unsigned long long win_id);
	static Ptr<WindowEventDrop> create(unsigned long long timestamp, unsigned long long win_id, const Math::ivec2 &mouse_pos);
	static Ptr<WindowEventDrop> create(unsigned long long timestamp, unsigned long long win_id, const Math::ivec2 &mouse_pos, const Math::ivec2 &position, const Math::ivec2 &size);
	static Ptr<WindowEventDrop> create(unsigned long long timestamp, unsigned long long win_id, const Math::ivec2 &mouse_pos, const Math::ivec2 &position, const Math::ivec2 &size, WindowEventDrop::ACTION action, const char *item_path);
	void setAction(WindowEventDrop::ACTION action);
	WindowEventDrop::ACTION getAction() const;
	void setPath(const char *path);
	const char *getPath() const;
};
typedef Ptr<WindowEventDrop> WindowEventDropPtr;


class UNIGINE_API WindowEventDpi : public WindowEvent
{
public:
	static bool convertible(WindowEvent *obj) { return obj && obj->getType() == WindowEvent::WINDOW_EVENT_DPI; }

	enum ACTION
	{
		ACTION_DPI_CHANGED = 0,
		ACTION_SIZE_SCALED,
	};
	static Ptr<WindowEventDpi> create();
	static Ptr<WindowEventDpi> create(unsigned long long timestamp, unsigned long long win_id);
	static Ptr<WindowEventDpi> create(unsigned long long timestamp, unsigned long long win_id, const Math::ivec2 &mouse_pos);
	static Ptr<WindowEventDpi> create(unsigned long long timestamp, unsigned long long win_id, const Math::ivec2 &mouse_pos, const Math::ivec2 &position, const Math::ivec2 &size);
	static Ptr<WindowEventDpi> create(unsigned long long timestamp, unsigned long long win_id, const Math::ivec2 &mouse_pos, const Math::ivec2 &position, const Math::ivec2 &size, WindowEventDrop::ACTION action, int dpi);
	void setAction(WindowEventDpi::ACTION action);
	WindowEventDpi::ACTION getAction() const;
	void setDpi(int dpi);
	int getDpi() const;
};
typedef Ptr<WindowEventDpi> WindowEventDpiPtr;

int windowEventsFilterFunc(Ptr<WindowEvent> &e);

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

class UNIGINE_API WindowManager
{
public:
	static int isInitialized();

	enum CALLBACKS
	{
		CALLBACKS_WINDOW_CREATED = 0,
		CALLBACKS_WINDOW_REMOVED,
		CALLBACKS_WINDOW_STACKED,
		CALLBACKS_WINDOW_UNSTACKED,
		CALLBACKS_NUM,
	};

	enum DPI_AWARENESS
	{
		DPI_AWARENESS_CUSTOM = -1,
		DPI_AWARENESS_UNAWARE,
		DPI_AWARENESS_SYSTEM_AWARE,
		DPI_AWARENESS_PER_MONITOR_AWARE,
	};
	static bool isMultipleWindowsSupported();
	static WindowManager::DPI_AWARENESS getDpiAwareness();
	static WindowManager::DPI_AWARENESS getCurrentDpiAwareness();
	static bool isAutoDpiScaling();
	static bool isFullscreenMode();
	static Ptr<EngineWindowViewport> getFullscreenWindow();
	static bool isFullscreenWindow(const Ptr<EngineWindow> &window);
	static Ptr<EngineWindowViewport> getMainWindow();
	static Ptr<EngineWindow> getUnderCursorWindow();
	static Ptr<EngineWindowViewport> getSystemFocusedWindow();
	static Ptr<EngineWindowViewport> getFocusedWindow();
	static int getNumWindows();
	static Ptr<EngineWindow> getWindow(int index);
	static int getWindowIndex(const Ptr<EngineWindow> &window);
	static Ptr<EngineWindow> getWindowByID(unsigned long long win_id);
	static Ptr<EngineWindowGroup> stack(const Ptr<EngineWindow> &first_window, const Ptr<EngineWindow> &second_window, EngineWindowGroup::GROUP_TYPE group_type, int index = -1, bool decompose_second = false);
	static Ptr<EngineWindowGroup> stackToParentGroup(const Ptr<EngineWindow> &window_in_group, const Ptr<EngineWindow> &window, int index = -1, bool decompose_second = false);
	static Ptr<EngineWindowGroup> stackWindows(const Ptr<EngineWindowViewport> &first_viewport, const Ptr<EngineWindowViewport> &second_viewport, EngineWindowGroup::GROUP_TYPE group_type);
	static Ptr<EngineWindowGroup> stackGroups(const Ptr<EngineWindowGroup> &first_group, const Ptr<EngineWindowGroup> &second_group, EngineWindowGroup::GROUP_TYPE group_type);
	static Ptr<EngineWindowGroup> stackWithWindow(const Ptr<EngineWindowViewport> &window_viewport, const Ptr<EngineWindow> &window, EngineWindowGroup::GROUP_TYPE group_type, bool decompose_second = false);
	static Ptr<EngineWindowGroup> stackToGroup(const Ptr<EngineWindowGroup> &destination_group, const Ptr<EngineWindow> &group, int index = -1, bool decompose_second = false);
	static Ptr<EngineWindow> getIntersection(const Math::ivec2 &global_pos, const Vector<Ptr<EngineWindow>> &excludes);
	static Ptr<EngineWindow> getIntersection(const Math::ivec2 &global_pos);
	static void unstack(const Ptr<EngineWindow> &unstacked);
	static void forceUpdateWindowOrders();
	static bool dialogMessage(const char *title, const char *message);
	static bool dialogWarning(const char *title, const char *warning);
	static bool dialogError(const char *title, const char *error);
	static int showSystemDialog(const Ptr<SystemDialog> &dialog);
	static const char *dialogOpenFolder(const char *path);
	static const char *dialogOpenFolder();
	static Vector<String> dialogOpenFiles(const char *path, const char *filter);
	static Vector<String> dialogOpenFiles(const char *path);
	static Vector<String> dialogOpenFiles();
	static const char *dialogOpenFile(const char *path, const char *filter);
	static const char *dialogOpenFile(const char *path);
	static const char *dialogOpenFile();
	static const char *dialogSaveFile(const char *path, const char *filter);
	static const char *dialogSaveFile(const char *path);
	static const char *dialogSaveFile();
	static void *addCallback(WindowManager::CALLBACKS callback, CallbackBase *func);
	static void *addCallback(WindowManager::CALLBACKS callback, CallbackBase1<Ptr<EngineWindow>> *func);
	static bool removeCallback(WindowManager::CALLBACKS callback, void *id);
	static void clearCallbacks(WindowManager::CALLBACKS callback);
	static void setEventsFilter(int (*func)(Ptr<WindowEvent> &e));
};

} // namespace Unigine
