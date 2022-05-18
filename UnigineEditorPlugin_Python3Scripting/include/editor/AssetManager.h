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


#include <editor/EditorGlobal.h>

#include <UnigineBase.h>
#include <UnigineGUID.h>
#include <UnigineString.h>
#include <UnigineVector.h>

#include <QObject>


////////////////////////////////////////////////////////////////////////////////
// Forward decl.
////////////////////////////////////////////////////////////////////////////////
namespace Editor { class Application; }


namespace Editor
{
////////////////////////////////////////////////////////////////////////////////
// AssetManager.
////////////////////////////////////////////////////////////////////////////////
/// <summary>
/// This class is used to manage assets in the Editor. You can check if an asset
/// with the specified GUID exists, get its file path, or subscribe for signals 
/// to perform certain actions when an asset is added, moved, updated, or deleted.
/// </summary>
class EDITOR_API AssetManager final : public QObject
{
	Q_OBJECT
public:
	/// <summary> Returns the instance of the AssetManager class. This method is used to subscribe to signals.</summary>
	/// <returns> AssetManager class instance.</returns>
	/// <example> <b>Example:</b>
	/// <code>
	/// connect(Editor::AssetManager::instance(), &Editor::AssetManager::changed
	///   , this, &SomeClass::asset_changed);
	/// </code>
	/// </example>
	static AssetManager *instance();
	/// <summary>
	/// Returns a value indicating whether an asset with the specified GUID exists.
	/// </summary>
	/// <param name="guid">GUID of the asset to be checked.</param>
	static bool hasAsset(const Unigine::UGUID &guid);
	/// <summary>
	/// Returns a value indicating whether an asset with the specified file path exists.
	/// </summary>
	/// <param name="s_filepath">Path of the asset to be checked.</param>
	static bool hasAsset(const char *s_filepath);
	/// <summary> Returns the list of GUIDs for all existing assets.</summary>
	static Unigine::Vector<Unigine::UGUID> assets();
	/// <summary> Returns the list of GUIDs for all assets existing in the specified directory.</summary>
	/// <param name="dirpath">Path to a directory containing assets.</param>
	static Unigine::Vector<Unigine::UGUID> assets(const char *dirpath);
	/// <summary> Returns the path to the asset file by its GUID.</summary>
	/// <param name="guid">GUID of the asset to find the path for.</param>
	static Unigine::String assetFilePath(const Unigine::UGUID &guid);

signals:
	/// <summary> This signal is emitted when a new asset is added,
	/// with the asset's GUID as an argument.
	/// </summary>
	void added(const Unigine::UGUID &guid);
	/// <summary> This signal is emitted when an asset is deleted,
	/// with the asset's GUID as an argument.
	/// </summary>
	void removed(const Unigine::UGUID &guid);
	/// <summary> This signal is emitted when an asset is modified,
	/// with the asset's GUID as an argument.
	/// </summary>
	void changed(const Unigine::UGUID &guid);
	/// <summary> This signal is emitted when an asset is moved to another location,
	/// with the asset's GUID as an argument.
	/// </summary>
	void moved(const Unigine::UGUID &guid);

private:
	AssetManager(QObject *parent = nullptr);
	~AssetManager() override;

	friend class Editor::Application;
};


} // namespace Editor
