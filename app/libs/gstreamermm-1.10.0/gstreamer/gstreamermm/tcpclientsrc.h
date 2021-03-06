// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_TCPCLIENTSRC_H
#define _GSTREAMERMM_TCPCLIENTSRC_H

#include <gstreamermmconfig.h>

#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// Generated by generate_plugin_gmmproc_file. Don't edit this file.


#include <gstreamermm/pushsrc.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstTCPClientSrc = struct _GstTCPClientSrc;
using GstTCPClientSrcClass = struct _GstTCPClientSrcClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class TCPClientSrc_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** A Wrapper for the tcpclientsrc plugin.
 * Please note that not all plug-ins are available on all systems so care
 * must be taken that they exist before they are used otherwise there will
 * be errors and possibly a crash.
 *
 * @ingroup GstPlugins
 * @deprecated Plugins API is deprecated, and should not be used in a new code.
 */

class TCPClientSrc
: public Gst::PushSrc
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = TCPClientSrc;
  using CppClassType = TCPClientSrc_Class;
  using BaseObjectType = GstTCPClientSrc;
  using BaseClassType = GstTCPClientSrcClass;

  // noncopyable
  TCPClientSrc(const TCPClientSrc&) = delete;
  TCPClientSrc& operator=(const TCPClientSrc&) = delete;

private:  friend class TCPClientSrc_Class;
  static CppClassType tcpclientsrc_class_;

protected:
  explicit TCPClientSrc(const Glib::ConstructParams& construct_params);
  explicit TCPClientSrc(GstTCPClientSrc* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  TCPClientSrc(TCPClientSrc&& src) noexcept;
  TCPClientSrc& operator=(TCPClientSrc&& src) noexcept;

  ~TCPClientSrc() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstTCPClientSrc*       gobj()       { return reinterpret_cast<GstTCPClientSrc*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstTCPClientSrc* gobj() const { return reinterpret_cast<GstTCPClientSrc*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstTCPClientSrc* gobj_copy();

private:

  
protected:
  TCPClientSrc();
  explicit TCPClientSrc(const Glib::ustring& name);

public:
  /** Creates a new tcpclientsrc plugin with a unique name.
   */
  
  static Glib::RefPtr<TCPClientSrc> create();


  /** Creates a new tcpclientsrc plugin with the given name.
   */
  
  static Glib::RefPtr<TCPClientSrc> create(const Glib::ustring& name);


  /** The host IP address to receive packets from.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_host() ;

/** The host IP address to receive packets from.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_host() const;

  /** The port to receive packets from.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_port() ;

/** The port to receive packets from.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_port() const;


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
   * @relates Gst::TCPClientSrc
   */
  Glib::RefPtr<Gst::TCPClientSrc> wrap(GstTCPClientSrc* object, bool take_copy = false);
}


#endif // GSTREAMERMM_DISABLE_DEPRECATED


#endif /* _GSTREAMERMM_TCPCLIENTSRC_H */

