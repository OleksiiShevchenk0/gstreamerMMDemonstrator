// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_FDSINK_H
#define _GSTREAMERMM_FDSINK_H

#include <gstreamermmconfig.h>

#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// Generated by generate_plugin_gmmproc_file. Don't edit this file.


#include <gstreamermm/basesink.h>
#include <gstreamermm/urihandler.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstFdSink = struct _GstFdSink;
using GstFdSinkClass = struct _GstFdSinkClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class FdSink_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** A Wrapper for the fdsink plugin.
 * Please note that not all plug-ins are available on all systems so care
 * must be taken that they exist before they are used otherwise there will
 * be errors and possibly a crash.
 *
 * @ingroup GstPlugins
 * @deprecated Plugins API is deprecated, and should not be used in a new code.
 */

class FdSink
: public Gst::BaseSink, public Gst::URIHandler
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = FdSink;
  using CppClassType = FdSink_Class;
  using BaseObjectType = GstFdSink;
  using BaseClassType = GstFdSinkClass;

  // noncopyable
  FdSink(const FdSink&) = delete;
  FdSink& operator=(const FdSink&) = delete;

private:  friend class FdSink_Class;
  static CppClassType fdsink_class_;

protected:
  explicit FdSink(const Glib::ConstructParams& construct_params);
  explicit FdSink(GstFdSink* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  FdSink(FdSink&& src) noexcept;
  FdSink& operator=(FdSink&& src) noexcept;

  ~FdSink() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstFdSink*       gobj()       { return reinterpret_cast<GstFdSink*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstFdSink* gobj() const { return reinterpret_cast<GstFdSink*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstFdSink* gobj_copy();

private:

  
protected:
  FdSink();
  explicit FdSink(const Glib::ustring& name);

public:
  /** Creates a new fdsink plugin with a unique name.
   */
  
  static Glib::RefPtr<FdSink> create();


  /** Creates a new fdsink plugin with the given name.
   */
  
  static Glib::RefPtr<FdSink> create(const Glib::ustring& name);


  /** An open file descriptor to write to.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_fd() ;

/** An open file descriptor to write to.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_fd() const;


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
   * @relates Gst::FdSink
   */
  Glib::RefPtr<Gst::FdSink> wrap(GstFdSink* object, bool take_copy = false);
}


#endif // GSTREAMERMM_DISABLE_DEPRECATED


#endif /* _GSTREAMERMM_FDSINK_H */

