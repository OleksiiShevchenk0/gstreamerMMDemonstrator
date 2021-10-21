// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_MULTISOCKETSINK_H
#define _GSTREAMERMM_MULTISOCKETSINK_H

#include <gstreamermmconfig.h>

#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// Generated by generate_plugin_gmmproc_file. Don't edit this file.


#include <gstreamermm/basesink.h>
#include <giomm/socket.h>
#include <gstreamermm/enums.h>
#include <gstreamermm/format.h>
#include <gstreamermm/structure.h>
#include <glibmm/object.h>
#include <gstreamermm/enums.h>


// Plug-in C enums used in signals:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstMultiSocketSink = struct _GstMultiSocketSink;
using GstMultiSocketSinkClass = struct _GstMultiSocketSinkClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class MultiSocketSink_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** A Wrapper for the multisocketsink plugin.
 * Please note that not all plug-ins are available on all systems so care
 * must be taken that they exist before they are used otherwise there will
 * be errors and possibly a crash.
 *
 * @ingroup GstPlugins
 * @deprecated Plugins API is deprecated, and should not be used in a new code.
 */

class MultiSocketSink
: public Gst::BaseSink
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = MultiSocketSink;
  using CppClassType = MultiSocketSink_Class;
  using BaseObjectType = GstMultiSocketSink;
  using BaseClassType = GstMultiSocketSinkClass;

  // noncopyable
  MultiSocketSink(const MultiSocketSink&) = delete;
  MultiSocketSink& operator=(const MultiSocketSink&) = delete;

private:  friend class MultiSocketSink_Class;
  static CppClassType multisocketsink_class_;

protected:
  explicit MultiSocketSink(const Glib::ConstructParams& construct_params);
  explicit MultiSocketSink(GstMultiSocketSink* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  MultiSocketSink(MultiSocketSink&& src) noexcept;
  MultiSocketSink& operator=(MultiSocketSink&& src) noexcept;

  ~MultiSocketSink() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstMultiSocketSink*       gobj()       { return reinterpret_cast<GstMultiSocketSink*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstMultiSocketSink* gobj() const { return reinterpret_cast<GstMultiSocketSink*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstMultiSocketSink* gobj_copy();

private:

  
protected:
  MultiSocketSink();
  explicit MultiSocketSink(const Glib::ustring& name);

public:
  /** Creates a new multisocketsink plugin with a unique name.
   */
  
  static Glib::RefPtr<MultiSocketSink> create();


  /** Creates a new multisocketsink plugin with the given name.
   */
  
  static Glib::RefPtr<MultiSocketSink> create(const Glib::ustring& name);


  /** This is a convenience method for the action signal
   * signal_add().
   */
  void add(const Glib::RefPtr<Gio::Socket>& arg0);

  /** This is a convenience method for the action signal
   * signal_add_full().
   */
  void add_full(const Glib::RefPtr<Gio::Socket>& arg0, Gst::MultiHandleSinkSyncMethod arg1, Gst::Format arg2, guint64 arg3, Gst::Format arg4, guint64 arg5);

  /** This is a convenience method for the action signal
   * signal_remove().
   */
  void remove(const Glib::RefPtr<Gio::Socket>& arg0);

  /** This is a convenience method for the action signal
   * signal_remove_flush().
   */
  void remove_flush(const Glib::RefPtr<Gio::Socket>& arg0);

  /** This is a convenience method for the action signal
   * signal_get_stats().
   */
  Gst::Structure get_stats(const Glib::RefPtr<Gio::Socket>& arg0);


  /** If GstNetworkMessageDispatched events should be pushed.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_send_dispatched() ;

/** If GstNetworkMessageDispatched events should be pushed.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_send_dispatched() const;

  /** If GstNetworkMessage events should be pushed.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_send_messages() ;

/** If GstNetworkMessage events should be pushed.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_send_messages() const;


  /** This is an action signal which is designed to be used as a method.  To 
   * do that, use its convenience method, add().
   *
   * @par Slot Prototype:
   * <tt>void on_my_%add(const Glib::RefPtr<Gio::Socket>& arg0)</tt>
   *
   */

  Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>& > signal_add();


  /** This is an action signal which is designed to be used as a method.  To 
   * do that, use its convenience method, add_full().
   *
   * @par Slot Prototype:
   * <tt>void on_my_%add_full(const Glib::RefPtr<Gio::Socket>& arg0, Gst::MultiHandleSinkSyncMethod arg1, Gst::Format arg2, guint64 arg3, Gst::Format arg4, guint64 arg5)</tt>
   *
   */

  Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>&,Gst::MultiHandleSinkSyncMethod,Gst::Format,guint64,Gst::Format,guint64 > signal_add_full();


  /** This is an action signal which is designed to be used as a method.  To 
   * do that, use its convenience method, remove().
   *
   * @par Slot Prototype:
   * <tt>void on_my_%remove(const Glib::RefPtr<Gio::Socket>& arg0)</tt>
   *
   */

  Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>& > signal_remove();


  /** This is an action signal which is designed to be used as a method.  To 
   * do that, use its convenience method, remove_flush().
   *
   * @par Slot Prototype:
   * <tt>void on_my_%remove_flush(const Glib::RefPtr<Gio::Socket>& arg0)</tt>
   *
   */

  Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>& > signal_remove_flush();


  /** This is an action signal which is designed to be used as a method.  To 
   * do that, use its convenience method, get_stats().
   *
   * @par Slot Prototype:
   * <tt>Gst::Structure on_my_%get_stats(const Glib::RefPtr<Gio::Socket>& arg0)</tt>
   *
   */

  Glib::SignalProxy< Gst::Structure,const Glib::RefPtr<Gio::Socket>& > signal_get_stats();


  /**
   * @par Slot Prototype:
   * <tt>void on_my_%client_added(const Glib::RefPtr<Glib::Object>& arg0)</tt>
   *
   */

  Glib::SignalProxy< void,const Glib::RefPtr<Glib::Object>& > signal_client_added();

 
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%client_removed(const Glib::RefPtr<Gio::Socket>& arg0, Gst::MultiHandleSinkClientStatus arg1)</tt>
   *
   */

  Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>&,Gst::MultiHandleSinkClientStatus > signal_client_removed();

 
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%client_socket_removed(const Glib::RefPtr<Gio::Socket>& arg0)</tt>
   *
   */

  Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>& > signal_client_socket_removed();


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
   * @relates Gst::MultiSocketSink
   */
  Glib::RefPtr<Gst::MultiSocketSink> wrap(GstMultiSocketSink* object, bool take_copy = false);
}


#endif // GSTREAMERMM_DISABLE_DEPRECATED


#endif /* _GSTREAMERMM_MULTISOCKETSINK_H */
