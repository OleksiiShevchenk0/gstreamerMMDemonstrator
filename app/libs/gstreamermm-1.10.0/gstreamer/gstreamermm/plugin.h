// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_PLUGIN_H
#define _GSTREAMERMM_PLUGIN_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2008-2016 The gstreamermm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gst/gst.h>
#include <gstreamermm/object.h>
#include <glibmm/arrayhandle.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstPlugin = struct _GstPlugin;
using GstPluginClass = struct _GstPluginClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class Plugin_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** @addtogroup gstreamermmEnums gstreamermm Enums and Flags */

/** 
 *  @var PluginDependencyFlags PLUGIN_DEPENDENCY_FLAG_NONE
 * No special flags.
 * 
 *  @var PluginDependencyFlags PLUGIN_DEPENDENCY_FLAG_RECURSE
 * Recurse into subdirectories.
 * 
 *  @var PluginDependencyFlags PLUGIN_DEPENDENCY_FLAG_PATHS_ARE_DEFAULT_ONLY
 * Use paths
 * argument only if none of the environment variables is set.
 * 
 *  @var PluginDependencyFlags PLUGIN_DEPENDENCY_FLAG_FILE_NAME_IS_SUFFIX
 * Interpret
 * filename argument as filter suffix and check all matching files in
 * the directory.
 * 
 *  @var PluginDependencyFlags PLUGIN_DEPENDENCY_FLAG_FILE_NAME_IS_PREFIX
 * Interpret
 * filename argument as filter prefix and check all matching files in
 * the directory. @newin{1,8}
 * 
 *  @enum PluginDependencyFlags
 * 
 * Flags used in connection with Gst::Plugin::add_dependency().
 *
 * @ingroup gstreamermmEnums
 * @par Bitwise operators:
 * <tt>%PluginDependencyFlags operator|(PluginDependencyFlags, PluginDependencyFlags)</tt><br>
 * <tt>%PluginDependencyFlags operator&(PluginDependencyFlags, PluginDependencyFlags)</tt><br>
 * <tt>%PluginDependencyFlags operator^(PluginDependencyFlags, PluginDependencyFlags)</tt><br>
 * <tt>%PluginDependencyFlags operator~(PluginDependencyFlags)</tt><br>
 * <tt>%PluginDependencyFlags& operator|=(PluginDependencyFlags&, PluginDependencyFlags)</tt><br>
 * <tt>%PluginDependencyFlags& operator&=(PluginDependencyFlags&, PluginDependencyFlags)</tt><br>
 * <tt>%PluginDependencyFlags& operator^=(PluginDependencyFlags&, PluginDependencyFlags)</tt><br>
 */
enum PluginDependencyFlags
{
  PLUGIN_DEPENDENCY_FLAG_NONE = 0x0,
  PLUGIN_DEPENDENCY_FLAG_RECURSE = (1 << 0),
  PLUGIN_DEPENDENCY_FLAG_PATHS_ARE_DEFAULT_ONLY = (1 << 1),
  PLUGIN_DEPENDENCY_FLAG_FILE_NAME_IS_SUFFIX = (1 << 2),
  PLUGIN_DEPENDENCY_FLAG_FILE_NAME_IS_PREFIX = (1 << 3)
};

/** @ingroup gstreamermmEnums */
inline PluginDependencyFlags operator|(PluginDependencyFlags lhs, PluginDependencyFlags rhs)
  { return static_cast<PluginDependencyFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline PluginDependencyFlags operator&(PluginDependencyFlags lhs, PluginDependencyFlags rhs)
  { return static_cast<PluginDependencyFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline PluginDependencyFlags operator^(PluginDependencyFlags lhs, PluginDependencyFlags rhs)
  { return static_cast<PluginDependencyFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline PluginDependencyFlags operator~(PluginDependencyFlags flags)
  { return static_cast<PluginDependencyFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup gstreamermmEnums */
inline PluginDependencyFlags& operator|=(PluginDependencyFlags& lhs, PluginDependencyFlags rhs)
  { return (lhs = static_cast<PluginDependencyFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline PluginDependencyFlags& operator&=(PluginDependencyFlags& lhs, PluginDependencyFlags rhs)
  { return (lhs = static_cast<PluginDependencyFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline PluginDependencyFlags& operator^=(PluginDependencyFlags& lhs, PluginDependencyFlags rhs)
  { return (lhs = static_cast<PluginDependencyFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::PluginDependencyFlags> : public Glib::Value_Flags<Gst::PluginDependencyFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{

/** 
 *  @var PluginFlags PLUGIN_FLAG_CACHED
 * Temporarily loaded plugins.
 * 
 *  @var PluginFlags PLUGIN_FLAG_BLACKLISTED
 * The plugin won't be scanned (again).
 * 
 *  @enum PluginFlags
 * 
 * The plugin loading state
 *
 * @ingroup gstreamermmEnums
 * @par Bitwise operators:
 * <tt>%PluginFlags operator|(PluginFlags, PluginFlags)</tt><br>
 * <tt>%PluginFlags operator&(PluginFlags, PluginFlags)</tt><br>
 * <tt>%PluginFlags operator^(PluginFlags, PluginFlags)</tt><br>
 * <tt>%PluginFlags operator~(PluginFlags)</tt><br>
 * <tt>%PluginFlags& operator|=(PluginFlags&, PluginFlags)</tt><br>
 * <tt>%PluginFlags& operator&=(PluginFlags&, PluginFlags)</tt><br>
 * <tt>%PluginFlags& operator^=(PluginFlags&, PluginFlags)</tt><br>
 */
enum PluginFlags
{
  PLUGIN_FLAG_CACHED = 0x10,
  PLUGIN_FLAG_BLACKLISTED = 0x20
};

/** @ingroup gstreamermmEnums */
inline PluginFlags operator|(PluginFlags lhs, PluginFlags rhs)
  { return static_cast<PluginFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline PluginFlags operator&(PluginFlags lhs, PluginFlags rhs)
  { return static_cast<PluginFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline PluginFlags operator^(PluginFlags lhs, PluginFlags rhs)
  { return static_cast<PluginFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline PluginFlags operator~(PluginFlags flags)
  { return static_cast<PluginFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup gstreamermmEnums */
inline PluginFlags& operator|=(PluginFlags& lhs, PluginFlags rhs)
  { return (lhs = static_cast<PluginFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline PluginFlags& operator&=(PluginFlags& lhs, PluginFlags rhs)
  { return (lhs = static_cast<PluginFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline PluginFlags& operator^=(PluginFlags& lhs, PluginFlags rhs)
  { return (lhs = static_cast<PluginFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::PluginFlags> : public Glib::Value_Flags<Gst::PluginFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/**  The plugin loading errors.
 *
 * - MODULE - The plugin could not be loaded
 * - DEPENDENCIES - The plugin has unresolved dependencies
 * - NAME_MISMATCH - The plugin has already be loaded from a different file
 */
class PluginError : public Glib::Error
{
public:
  /**  @var Code MODULE
   * The plugin could not be loaded.
   * 
   *  @var Code DEPENDENCIES
   * The plugin has unresolved dependencies.
   * 
   *  @var Code NAME_MISMATCH
   * The plugin has already be loaded from a different file.
   * 
   *  @enum Code
   * 
   * The plugin loading errors
   */
  enum Code
  {
    MODULE,
    DEPENDENCIES,
    NAME_MISMATCH
  };

  PluginError(Code error_code, const Glib::ustring& error_message);
  explicit PluginError(GError* gobject);
  Code code() const;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
private:

  static void throw_func(GError* gobject);

  friend void wrap_init(); // uses throw_func()

  #endif //DOXYGEN_SHOULD_SKIP_THIS
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::PluginError::Code> : public Glib::Value_Enum<Gst::PluginError::Code>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


class Structure;

/** A container for features loaded from a shared object module.
 * GStreamer is extensible, so Gst::Element instances can be loaded at runtime.
 * A plugin system can provide one or more of the basic GStreamer
 * Gst::PluginFeature subclasses.
 *
 * A plugin should export a symbol gst_plugin_desc that is a struct of type
 * PluginDesc. the plugin loader will check the version of the core library
 * the plugin was linked against and will create a new Gst::Plugin. It will
 * then call the PluginInitFunc function that was provided in the
 * gst_plugin_desc.
 *
 * Once you have a handle to a Gst::Plugin (e.g. from the RegistryPool), you
 * can add any object that subclasses Gst::PluginFeature.
 *
 * Usually plugins are always automaticlly loaded so you don't need to call
 * gst_plugin_load() explicitly to bring it into memory. There are options to
 * statically link plugins to an app or even use GStreamer without a plugin
 * repository in which case load() can be needed to bring the plugin
 * into memory.
 *
 * Last reviewed on 2016-06-06 (1.8.0)
 */

class Plugin : public Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = Plugin;
  using CppClassType = Plugin_Class;
  using BaseObjectType = GstPlugin;
  using BaseClassType = GstPluginClass;

  // noncopyable
  Plugin(const Plugin&) = delete;
  Plugin& operator=(const Plugin&) = delete;

private:  friend class Plugin_Class;
  static CppClassType plugin_class_;

protected:
  explicit Plugin(const Glib::ConstructParams& construct_params);
  explicit Plugin(GstPlugin* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Plugin(Plugin&& src) noexcept;
  Plugin& operator=(Plugin&& src) noexcept;

  ~Plugin() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstPlugin*       gobj()       { return reinterpret_cast<GstPlugin*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstPlugin* gobj() const { return reinterpret_cast<GstPlugin*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstPlugin* gobj_copy();

private:


public:
  /** For example,
   * bool on_plugin_init(const Glib::RefPtr<Gst::Plugin>& plugin);.
   * The init function should return true if plugin was initialized
   * successfully, false otherwise.
   */
  typedef sigc::slot< bool, const Glib::RefPtr<Gst::Plugin>& > SlotInit;

  /** For example,
   * bool on_plugin_filter(const Glib::RefPtr<Gst::Plugin>& plugin);.
   * The filter function should return true if plugin is a match, false
   * otherwise.
   */
  typedef sigc::slot< bool, const Glib::RefPtr<Gst::Plugin>& > SlotFilter;

  
  /** Get the error quark.
   * 
   * @return The error quark used in GError messages.
   */
  static Glib::QueryQuark error_quark();
  
  /** Get the short name of the plugin
   * 
   * @return The name of the plugin.
   */
  Glib::ustring get_name() const;
  
  /** Get the long descriptive name of the plugin
   * 
   * @return The long name of the plugin.
   */
  Glib::ustring get_description() const;
  
  /** get the filename of the plugin
   * 
   * @return The filename of the plugin.
   */
  Glib::ustring get_filename() const;
  
  /** get the license of the plugin
   * 
   * @return The license of the plugin.
   */
  Glib::ustring get_license() const;
  
  /** get the package the plugin belongs to.
   * 
   * @return The package of the plugin.
   */
  Glib::ustring get_package() const;
  
  /** get the URL where the plugin comes from
   * 
   * @return The origin of the plugin.
   */
  Glib::ustring get_origin() const;
  
  /** get the source module the plugin belongs to.
   * 
   * @return The source of the plugin.
   */
  Glib::ustring get_source() const;
  
  /** get the version of the plugin
   * 
   * @return The version of the plugin.
   */
  Glib::ustring get_version() const;
  
  /** Get the release date (and possibly time) in form of a string, if available.
   * 
   * For normal GStreamer plugin releases this will usually just be a date in
   * the form of "YYYY-MM-DD", while pre-releases and builds from git may contain
   * a time component after the date as well, in which case the string will be
   * formatted like "YYYY-MM-DDTHH:MMZ" (e.g. "2012-04-30T09:30Z").
   * 
   * There may be plugins that do not have a valid release date set on them.
   * 
   * @return The date string of the plugin, or <tt>nullptr</tt> if not
   * available.
   */
  Glib::ustring get_release_date_string() const;

  
  /** queries if the plugin is loaded into memory
   * 
   * @return <tt>true</tt> is loaded, <tt>false</tt> otherwise.
   */
  bool is_loaded() const;

// A copy is taken so that the original is not freed by the wrapper.
 

  /** Gets the plugin specific data cache. If it is <tt>nullptr</tt> there is no cached data
   * stored. This is the case when the registry is getting rebuilt.
   * 
   * @return The cached data as a
   * Gst::Structure or <tt>nullptr</tt>.
   */
  Gst::Structure get_cache_data() const;

  
  /** Adds plugin specific data to cache. Passes the ownership of the structure to
   * the @a plugin.
   * 
   * The cache is flushed every time the registry is rebuilt.
   * 
   * @param cache_data A structure containing the data to cache.
   */
  void set_cache_data(Gst::Structure& cache_data);

  
  /** @throw Gst::PluginError.
   */
  static Glib::RefPtr<Gst::Plugin> load_file(const Glib::ustring& filename);

  
  /** Loads @a plugin. Note that the *return value* is the loaded plugin; @a plugin is
   * untouched. The normal use pattern of this function goes like this:
   * 
   * 
   * GstPlugin *loaded_plugin;
   * loaded_plugin = gst_plugin_load (plugin);
   * // presumably, we're no longer interested in the potentially-unloaded plugin
   * gst_object_unref (plugin);
   * plugin = loaded_plugin;
   * 
   * 
   * @return A reference to a loaded plugin, or <tt>nullptr</tt> on error.
   */
  Glib::RefPtr<Gst::Plugin> load();
  
  /** Load the named plugin. Refs the plugin.
   * 
   * @param name Name of plugin to load.
   * @return A reference to a loaded plugin, or <tt>nullptr</tt> on error.
   */
  static Glib::RefPtr<Gst::Plugin> load_by_name(const Glib::ustring& name);

  // Don't wrap gst_plugin_list_free because Glib::ListHandle<> already takes
  // care of freeing.
  

  static bool register_static(int major_version, int minor_version,
    const Glib::ustring& name, const Glib::ustring& description,
    const SlotInit& init_slot, const Glib::ustring& version,
    const Glib::ustring& license, const Glib::ustring& source,
    const Glib::ustring& package, const Glib::ustring& origin);

  
  /** Make GStreamer aware of external dependencies which affect the feature
   * set of this plugin (ie. the elements or typefinders associated with it).
   * 
   * GStreamer will re-inspect plugins with external dependencies whenever any
   * of the external dependencies change. This is useful for plugins which wrap
   * other plugin systems, e.g. a plugin which wraps a plugin-based visualisation
   * library and makes visualisations available as GStreamer elements, or a
   * codec loader which exposes elements and/or caps dependent on what external
   * codec libraries are currently installed.
   * 
   * @param env_vars <tt>nullptr</tt>-terminated array of environment variables affecting the
   * feature set of the plugin (e.g. an environment variable containing
   * paths where to look for additional modules/plugins of a library),
   * or <tt>nullptr</tt>. Environment variable names may be followed by a path component
   * which will be added to the content of the environment variable, e.g.
   * "HOME/.mystuff/plugins".
   * @param paths <tt>nullptr</tt>-terminated array of directories/paths where dependent files
   * may be, or <tt>nullptr</tt>.
   * @param names <tt>nullptr</tt>-terminated array of file names (or file name suffixes,
   * depending on @a flags) to be used in combination with the paths from
   *  @a paths and/or the paths extracted from the environment variables in
   *  @a env_vars, or <tt>nullptr</tt>.
   * @param flags Optional flags, or Gst::PLUGIN_DEPENDENCY_FLAG_NONE.
   */
  void add_dependency(const Glib::StringArrayHandle& env_vars, const Glib::StringArrayHandle& paths, const Glib::StringArrayHandle& names, Gst::PluginDependencyFlags flags);

  
  /** Make GStreamer aware of external dependencies which affect the feature
   * set of this plugin (ie. the elements or typefinders associated with it).
   * 
   * GStreamer will re-inspect plugins with external dependencies whenever any
   * of the external dependencies change. This is useful for plugins which wrap
   * other plugin systems, e.g. a plugin which wraps a plugin-based visualisation
   * library and makes visualisations available as GStreamer elements, or a
   * codec loader which exposes elements and/or caps dependent on what external
   * codec libraries are currently installed.
   * 
   * Convenience wrapper function for add_dependency() which
   * takes simple strings as arguments instead of string arrays, with multiple
   * arguments separated by predefined delimiters (see above).
   * 
   * @param env_vars One or more environment variables (separated by ':', ';' or ','),
   * or <tt>nullptr</tt>. Environment variable names may be followed by a path component
   * which will be added to the content of the environment variable, e.g.
   * "HOME/.mystuff/plugins:MYSTUFF_PLUGINS_PATH".
   * @param paths One ore more directory paths (separated by ':' or ';' or ','),
   * or <tt>nullptr</tt>. Example: "/usr/lib/mystuff/plugins".
   * @param names One or more file names or file name suffixes (separated by commas),
   * or <tt>nullptr</tt>.
   * @param flags Optional flags, or Gst::PLUGIN_DEPENDENCY_FLAG_NONE.
   */
  void add_dependency(const Glib::ustring& env_vars, const Glib::ustring& paths, const Glib::ustring& names, Gst::PluginDependencyFlags flags);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gst


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gst::Plugin
   */
  Glib::RefPtr<Gst::Plugin> wrap(GstPlugin* object, bool take_copy = false);
}


#endif /* _GSTREAMERMM_PLUGIN_H */

