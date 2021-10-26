// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_GIOSINK_H
#define _GSTREAMERMM_GIOSINK_H

#include <gstreamermmconfig.h>

#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// Generated by generate_plugin_gmmproc_file. Don't edit this file.


#include <gstreamermm/basesink.h>
#include <giomm/file.h>
#include <gstreamermm/urihandler.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstGioSink = struct _GstGioSink;
using GstGioSinkClass = struct _GstGioSinkClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class GioSink_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** A Wrapper for the giosink plugin.
 * Please note that not all plug-ins are available on all systems so care
 * must be taken that they exist before they are used otherwise there will
 * be errors and possibly a crash.
 *
 * @ingroup GstPlugins
 * @deprecated Plugins API is deprecated, and should not be used in a new code.
 */

class GioSink
: public Gst::BaseSink, public Gst::URIHandler
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = GioSink;
  using CppClassType = GioSink_Class;
  using BaseObjectType = GstGioSink;
  using BaseClassType = GstGioSinkClass;

  // noncopyable
  GioSink(const GioSink&) = delete;
  GioSink& operator=(const GioSink&) = delete;

private:  friend class GioSink_Class;
  static CppClassType giosink_class_;

protected:
  explicit GioSink(const Glib::ConstructParams& construct_params);
  explicit GioSink(GstGioSink* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  GioSink(GioSink&& src) noexcept;
  GioSink& operator=(GioSink&& src) noexcept;

  ~GioSink() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstGioSink*       gobj()       { return reinterpret_cast<GstGioSink*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstGioSink* gobj() const { return reinterpret_cast<GstGioSink*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstGioSink* gobj_copy();

private:

  
protected:
  GioSink();
  explicit GioSink(const Glib::ustring& name);

public:
  /** Creates a new giosink plugin with a unique name.
   */
  
  static Glib::RefPtr<GioSink> create();


  /** Creates a new giosink plugin with the given name.
   */
  
  static Glib::RefPtr<GioSink> create(const Glib::ustring& name);


  /** URI location to write to.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_location() ;

/** URI location to write to.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_location() const;

  /** GFile to write to.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gio::File> > property_file() ;

/** GFile to write to.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::File> > property_file() const;


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
   * @relates Gst::GioSink
   */
  Glib::RefPtr<Gst::GioSink> wrap(GstGioSink* object, bool take_copy = false);
}


#endif // GSTREAMERMM_DISABLE_DEPRECATED


#endif /* _GSTREAMERMM_GIOSINK_H */

