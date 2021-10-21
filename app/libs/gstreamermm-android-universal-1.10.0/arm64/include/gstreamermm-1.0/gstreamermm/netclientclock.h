// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_NETCLIENTCLOCK_H
#define _GSTREAMERMM_NETCLIENTCLOCK_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2016 The gstreamermm Development Team
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

#include <gstreamermm/systemclock.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstNetClientClock = struct _GstNetClientClock;
using GstNetClientClockClass = struct _GstNetClientClockClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class NetClientClock_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

class Bus;

/** Special clock that synchronizes to a remote time provider.
 *
 * Gst::NetClientClock implements a custom Gst::Clock that synchronizes its time
 * to a remote time provider such as Gst::NetTimeProvider. Gst::NtpClock
 * implements a Gst::Clock that synchronizes its time to a remote NTPv4 server.
 *
 * A new clock is created with create() or gst_ntp_clock_new(), which takes
 * the address and port of the remote time provider along with a name and an
 * initial time.
 *
 * This clock will poll the time provider and will update its calibration
 * parameters based on the local and remote observations.
 *
 * The "round-trip" property limits the maximum round trip packets can take.
 *
 * Various parameters of the clock can be configured with the parent Gst::Clock
 * "timeout", "window-size" and "window-threshold" object properties.
 *
 * A Gst::NetClientClock and Gst::NtpClock is typically set on a Gst::Pipeline with
 * Gst::Pipeline::use_clock().
 *
 * If you set a Gst::Bus on the clock via the "bus" object property, it will
 * send Gst::MESSAGE_ELEMENT messages with an attached Gst::Structure containing
 * statistics about clock accuracy and network traffic.
 *
 * Last reviewed on 2016-12-02 (1.8.1)
 */

class NetClientClock : public SystemClock
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = NetClientClock;
  using CppClassType = NetClientClock_Class;
  using BaseObjectType = GstNetClientClock;
  using BaseClassType = GstNetClientClockClass;

  // noncopyable
  NetClientClock(const NetClientClock&) = delete;
  NetClientClock& operator=(const NetClientClock&) = delete;

private:  friend class NetClientClock_Class;
  static CppClassType netclientclock_class_;

protected:
  explicit NetClientClock(const Glib::ConstructParams& construct_params);
  explicit NetClientClock(GstNetClientClock* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  NetClientClock(NetClientClock&& src) noexcept;
  NetClientClock& operator=(NetClientClock&& src) noexcept;

  ~NetClientClock() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstNetClientClock*       gobj()       { return reinterpret_cast<GstNetClientClock*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstNetClientClock* gobj() const { return reinterpret_cast<GstNetClientClock*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstNetClientClock* gobj_copy();

private:


protected:
  NetClientClock(const Glib::ustring& name, const Glib::ustring& address, int remote_port, Gst::ClockTime base_time);

public:
  
  static Glib::RefPtr<NetClientClock> create(const Glib::ustring& name, const Glib::ustring& remote_address, int remote_port, Gst::ClockTime base_time);


  /** The IP address of the machine providing a time server.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_address() ;

/** The IP address of the machine providing a time server.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_address() const;

  /** Initial time that is reported before synchronization.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint64 > property_base_time() const;


  /** A GstBus on which to send clock status information.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gst::Bus> > property_bus() ;

/** A GstBus on which to send clock status information.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Bus> > property_bus() const;

  /** Internal clock that directly slaved to the remote clock.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Clock> > property_internal_clock() const;


  /** Minimum polling interval for packets, in nanoseconds(0 = no limit).
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint64 > property_minimum_update_interval() ;

/** Minimum polling interval for packets, in nanoseconds(0 = no limit).
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint64 > property_minimum_update_interval() const;

  /** The port on which the remote server is listening.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_port() ;

/** The port on which the remote server is listening.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_port() const;

  /** Maximum tolerable round-trip interval for packets, in nanoseconds (0 = no limit).
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint64 > property_round_trip_limit() ;

/** Maximum tolerable round-trip interval for packets, in nanoseconds (0 = no limit).
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint64 > property_round_trip_limit() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} //namespace Gst


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gst::NetClientClock
   */
  Glib::RefPtr<Gst::NetClientClock> wrap(GstNetClientClock* object, bool take_copy = false);
}


#endif /* _GSTREAMERMM_NETCLIENTCLOCK_H */
