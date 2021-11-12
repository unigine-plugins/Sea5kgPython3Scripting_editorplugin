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

#pragma once


#include <editor/EditorGlobal.h>

#include <QObject>


////////////////////////////////////////////////////////////////////////////////
// Forward decl.
////////////////////////////////////////////////////////////////////////////////
namespace Editor { class Presenter; }
class QWidget;
class QMenu;


namespace Editor
{
////////////////////////////////////////////////////////////////////////////////
// WindowManager.
////////////////////////////////////////////////////////////////////////////////
/// <summary>
/// Window manager class. This class is used to manage tool windows in the Editor.
/// </summary>
class EDITOR_API WindowManager final : public QObject
{
	Q_OBJECT

public:
	/// <summary> ToolWindowManager area type.</summary>
	enum AreaType
	{	/// <summary> Last used area.</summary>
		LAST_USED_AREA,
		/// <summary> New floating area.</summary>
		NEW_FLOATING_AREA,
		/// <summary> Left part of the root area.</summary>
		ROOT_AREA_LEFT,
		/// <summary> Right part of the root area.</summary>
		ROOT_AREA_RIGHT,
		/// <summary> Upper part of the root area.</summary>
		ROOT_AREA_TOP,
		/// <summary> Lower part of the root area.</summary>
		ROOT_AREA_BOTTOM,
		/// <summary> No area.</summary>
		NO_AREA
	};

	/// <summary> Anchor type defining the way to layout tool windows.</summary>
	enum RefType
	{
		/// <summary> New tab occupying the whole area.</summary>
		REF_ADD_TO,
		/// <summary> Left anchor of the area.</summary>
		REF_LEFT_OF,
		/// <summary> Right anchor of the area.</summary>
		REF_RIGHT_OF,
		/// <summary> Top anchor of the area.</summary>
		REF_TOP_OF,
		/// <summary> Bottom anchor of the area.</summary>
		REF_BOTTOM_OF
	};

public:
	/// <summary> Returns the instance of the WindowManager class. This method is used to subscribe to signals.</summary>
	/// <returns> WindowManager class instance.</returns>
	/// <example> <b>Example:</b>
	/// <code>
	/// connect(WindowManager::instance(), &WindowManager::windowHidden
	/// 		,this , [this](QWidget *widget)
	/// 		{
	/// 			if (widget == this)
	/// 			{
	/// 				clear();
	/// 			}
	/// 		});
	/// </code>
	/// </example>
	static WindowManager *instance();

	/// <summary>
	/// Adds the specified tool window to the specified area of the main window.
	/// By default the tool window is added to the last used one.
	/// </summary>
	/// <param name="widget">Tool window to be added.</param>
	/// <param name="area">Main window area to which the specified tool window is to be added.</param>
	/// <remarks> To get a window area use <see cref="getArea"/>()</remarks>
	static void add(QWidget *widget, AreaType area = LAST_USED_AREA);
	/// <summary>
	/// Adds the specified tool window to the specified window area
	/// according to the specified anchor type (<see cref="RefType"/>).
	/// </summary>
	/// <param name="widget"> Tool window to be added.</param>
	/// <param name="ref"> Anchor type to define the layout relative to the specified area.</param>
	/// <param name="area"> Window area to which the specified tool window is to be added.</param>
	static void add(QWidget *widget, RefType ref, QWidget *area);
	/// <summary>
	/// Adds the specified set of tool windows to the specified area of the main window.
	/// By default tool windows are added to the last used one.
	/// </summary>
	/// <param name="widgets"> List of tool windows to be added.</param>
	/// <param name="area"> Main window area to which the specified tool windows are to be added.</param>
	static void add(const QVector<QWidget *> &widgets, AreaType area = LAST_USED_AREA);
	/// <summary>
	/// Adds the specified set of tool windows to the specified area
	/// according to the specified anchor type (<see cref="RefType"/>).
	/// </summary>
	/// <param name="widgets"> List of tool windows to be added.</param>
	/// <param name="ref"> Anchor type to define the layout relative to the specified area.</param>
	/// <param name="area"> Window area to which the specified tool windows are to be added.</param>
	/// <remarks> To get a window area use <see cref="getArea"/>()</remarks>
	static void add(const QVector<QWidget *> &widgets, RefType ref, QWidget *area);
	static void addCornerWidget(QWidget *parent, QWidget *child);

	/// <summary> Removes the specified tool window.</summary>
	/// <param name="widget">Tool window to be removed.</param>
	static void remove(QWidget *widget);
	/// <summary>Checks if the specified tool window exists.</summary>
	/// <param name="widget">Tool window to be checked.</param>
	static bool has(QWidget *widget);

	/// <summary>
	/// Moves the specified tool window to the specified area of the main window.
	/// By default the tool window is moved to the last used one.
	/// </summary>
	/// <param name="widget">Tool window to be moved.</param>
	/// <param name="area">Main window area to which the specified tool window is to be moved.</param>
	/// <remarks> To get a window area use <see cref="getArea"/>()</remarks>
	static void move(QWidget *widget, AreaType area = LAST_USED_AREA);
	/// <summary>
	/// Moves the specified tool window to the specified window area
	/// according to the specified anchor type (<see cref="RefType"/>).
	/// </summary>
	/// <param name="widget"> Tool window to be moved.</param>
	/// <param name="ref"> Anchor type to define the layout relative to the specified area.</param>
	/// <param name="area"> Window area to which the specified tool window is to be moved.</param>
	static void move(QWidget *widget, RefType ref, QWidget *area);
	/// <summary>
	/// Moves the specified set of tool windows to the specified area of the main window.
	/// By default tool windows are moved to the last used one.
	/// </summary>
	/// <param name="widgets"> List of tool windows to be moved.</param>
	/// <param name="area"> Main window area to which the specified tool windows are to be moved.</param>
	static void move(const QVector<QWidget *> &widgets, AreaType area = LAST_USED_AREA);
	/// <summary>
	/// Moves the specified set of tool windows to the specified area
	/// according to the specified anchor type (<see cref="RefType"/>).
	/// </summary>
	/// <param name="widgets"> List of tool windows to be moved.</param>
	/// <param name="ref"> Anchor type to define the layout relative to the specified area.</param>
	/// <param name="area"> Window area to which the specified tool windows are to be moved.</param>
	/// <remarks> To get a window area use <see cref="getArea"/>()</remarks>
	static void move(const QVector<QWidget *> &widgets, RefType ref, QWidget *area);

	/// <summary>Resizes the specified tool window.</summary>
	/// <param name="widget">Tool window to be resized.</param>
	/// <param name="width">New tool window width, in pixels.</param>
	/// <param name="height">New tool window height, in pixels.</param>
	static void resize(QWidget *widget, int width, int height);

	/// <summary> Activates the specified tool window.</summary>
	/// <param name="widget">Tool window to be activated.</param>
	static void activate(QWidget *widget);
	/// <summary> Hides the specified tool window.</summary>
	/// <param name="widget">Tool window to be hidden.</param>
	static void hide(QWidget *widget);
	/// <summary> Checks whether the specified tool window is hidden.</summary>
	/// <param name="widget">Tool window to be checked.</param>
	static bool isHidden(QWidget *widget);
	/// <summary> Shows the specified tool window.</summary>
	/// <param name="widget">Tool window to be shown.</param>
	static void show(QWidget *widget);
	/// <summary> Checks whether the specified tool window is visible.</summary>
	/// <param name="widget">Tool window to be checked.</param>
	static bool isVisible(QWidget *widget);

	/// <summary> Returns the area to which the specified tool window belongs.</summary>
	/// <param name="child">Tool window for which the area is to be obtained.</param>
	/// <returns> The area to which the specified tool window belongs; otherwise <b>nullptr</b>.</returns>
	static QWidget *getArea(QWidget *child);
	/// <summary> Returns the list of all existing tool windows.</summary>
	/// <returns> Vector containing all existing tool windows.</returns>
	static QVector<QWidget *> allWindows();

	/// <summary> Searches for a submenu of the main menu bar with the specified name.</summary>
	/// <param name="name">Name of the submenu to be found.</param>
	/// <returns> Menu with the specified name; otherwise <b>nullptr</b>.</returns>
	static QMenu *findMenu(const QString &name);

signals:
	/// <summary>
	/// This signal is emitted when a tool window is shown,
	/// with the tool window as an argument.
	/// </summary>
	void windowShown  (QWidget *widget);
	/// <summary>
	/// This signal is emitted when before a tool window is hidden,
	/// with the tool window as an argument.
	/// </summary>
	void beforeHide   (QWidget *widget);
	/// <summary>
	/// This signal is emitted when a tool window is hidden,
	/// with the tool window as an argument.</summary>
	void windowHidden (QWidget *widget);
	/// <summary>
	/// This signal is emitted when the state of the Tool Window Manager is restored.
	/// </summary>
	void stateRestored();

private:
	explicit WindowManager(QObject *parent = nullptr);
	~WindowManager() override;

	friend class Editor::Presenter;
};


} // namespace Editor
