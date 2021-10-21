// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_VIDEOOVERLAY_H
#define _GSTREAMERMM_VIDEOOVERLAY_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2008 The gstreamermm Development Team
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

#include <gst/video/videooverlay.h>
#include <glibmm/interface.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstVideoOverlay = struct _GstVideoOverlay;
using GstVideoOverlayClass = struct _GstVideoOverlayClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class VideoOverlay_Class; } // namespace Gst
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** An interface for setting/getting a Window on elements supporting it.
 * The VideoOverlay interface is used for 2 main purposes :
 *
 * - To get a grab on the Window where the video sink element is going to
 * render. This is achieved by either being informed about the Window
 * identifier that the video sink element generated, or by forcing the video
 * sink element to use a specific Window identifier for rendering.
 *
 * - To force a redrawing of the latest video frame the video sink element
 * displayed on the Window. Indeed if the Pipeline is in STATE_PAUSED state,
 * moving the Window around will damage its content. Application developers
 * will want to handle the Expose events themselves and force the video sink
 * element to refresh the Window's content.
 *
 * Using the Window created by the video sink is probably the simplest
 * scenario, in some cases, though, it might not be flexible enough for
 * application developers if they need to catch events such as mouse moves and
 * button clicks.
 *
 * Setting a specific Window identifier on the video sink element is the most
 * flexible solution but it has some issues. Indeed the application needs to
 * set its Window identifier at the right time to avoid internal Window
 * creation from the video sink element. To solve this issue a Message is
 * posted on the bus to inform the application that it should set the Window
 * identifier immediately. Here is an example on how to do that correctly:
 *
 * @code
 * #include <gdk/gdkx.h>
 * ...
 * void PlayerWindow::on_bus_message_sync(
 *     const Glib::RefPtr<Gst::Message>& message)
 * {
 *   // ignore anything but 'prepare-xwindow-id' element messages
 *   if(message->get_message_type() != Gst::MESSAGE_ELEMENT)
 *    return;
 *
 *   if(!message->get_structure().has_name("prepare-xwindow-id"))
 *      return;
 *
 *   Glib::RefPtr<Gst::Element> element =
 *       Glib::RefPtr<Gst::Element>::cast_dynamic(message->get_source());
 *
 *   Glib::RefPtr< Gst::ElementInterfaced<Gst::XOverlay> > xoverlay =
 *       Gst::Interface::cast <Gst::XOverlay>(element);
 *
 *   if(xoverlay)
 *   {
 *     const gulong xWindowId =
 *     GDK_WINDOW_XID(widget->get_window()->gobj());
 *     xoverlay->set_xwindow_id(xWindowId);
 *   }
 * }
 * ...
 * int main (int argc, char *argv[])
 * {
 *   ...
 *   // Get the bus from the pipeline:
 *   Glib::RefPtr<Gst::Bus> bus = pipeline->get_bus();
 * 
 *  // Enable synchronous message emission:
 *  bus->enable_sync_message_emission();
 *
 *  // Connect to bus's synchronous message signal:
 *  bus->signal_sync_message().connect(
 *    sigc::mem_fun(*this, &PlayerWindow::on_bus_message_sync));
 *   ...
 * }
 * @endcode
 * @ingroup GstInterfaces
 */

class VideoOverlay : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = VideoOverlay;
  using CppClassType = VideoOverlay_Class;
  using BaseObjectType = GstVideoOverlay;
  using BaseClassType = GstVideoOverlayInterface;

  // noncopyable
  VideoOverlay(const VideoOverlay&) = delete;
  VideoOverlay& operator=(const VideoOverlay&) = delete;

private:
  friend class VideoOverlay_Class;
  static CppClassType videooverlay_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  VideoOverlay();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of
   * the Class init() function to ensure that it is properly
   * initialized.
   *
   * @param interface_class The Class object for the derived type.
   */
  explicit VideoOverlay(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface.
  explicit VideoOverlay(GstVideoOverlay* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  VideoOverlay(VideoOverlay&& src) noexcept;
  VideoOverlay& operator=(VideoOverlay&& src) noexcept;

  ~VideoOverlay() noexcept override;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstVideoOverlay*       gobj()       { return reinterpret_cast<GstVideoOverlay*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstVideoOverlay* gobj() const { return reinterpret_cast<GstVideoOverlay*>(gobject_); }

private:


public:
  
  /** This will call the video overlay's set_window_handle method. You
   * should use this method to tell to an overlay to display video output to a
   * specific window (e.g. an XWindow on X11). Passing 0 as the  @a window_handle will
   * tell the overlay to stop using that window and create an internal one.
   * 
   * @param window_handle A handle referencing the window.
   */
  void set_window_handle(guintptr window_handle);
  
  /** This will post a "have-window-handle" element message on the bus.
   * 
   * This function should only be used by video overlay plugin developers.
   * 
   * @param window_handle A platform-specific handle referencing the window.
   */
  void got_window_handle(guintptr window_handle);
  
  /** This will post a "prepare-window-handle" element message on the bus
   * to give applications an opportunity to call
   * gst_video_overlay_set_window_handle() before a plugin creates its own
   * window.
   * 
   * This function should only be used by video overlay plugin developers.
   */
  void prepare_window_handle();
  
  /** Tell an overlay that it has been exposed. This will redraw the current frame
   * in the drawable even if the pipeline is PAUSED.
   */
  void expose();
  
  /** Tell an overlay that it should handle events from the window system. These
   * events are forwarded upstream as navigation events. In some window system,
   * events are not propagated in the window hierarchy if a client is listening
   * for them. This method allows you to disable events handling completely
   * from the Gst::VideoOverlay.
   * 
   * @param handle_events A <tt>bool</tt> indicating if events should be handled or not.
   */
  void handle_events(bool handle_events);
  
  /** Configure a subregion as a video target within the window set by
   * gst_video_overlay_set_window_handle(). If this is not used or not supported
   * the video will fill the area of the window set as the overlay to 100%.
   * By specifying the rectangle, the video can be overlayed to a specific region
   * of that window only. After setting the new rectangle one should call
   * gst_video_overlay_expose() to force a redraw. To unset the region pass -1 for
   * the @a width and @a height parameters.
   * 
   * This method is needed for non fullscreen video overlay in UI toolkits that
   * do not support subwindows.
   * 
   * @param x The horizontal offset of the render area inside the window.
   * @param y The vertical offset of the render area inside the window.
   * @param width The width of the render area inside the window.
   * @param height The height of the render area inside the window.
   * @return <tt>false</tt> if not supported by the sink.
   */
  bool set_render_rectangle(int x, int y, int width, int height);

  /** Virtual method to configure the window handle.
   */
    virtual void set_window_handle_vfunc(guintptr handle);


  /** Virtual method to handle expose events.
   */
    virtual void expose_vfunc();


  /** Virtual method to handle events.
   */
    virtual void handle_events_vfunc(bool handle_events);


  /** Virtual method to set the render rectangle.
   */
    virtual void set_render_rectangle_vfunc(int x, int y, int width, int height);


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
   * @relates Gst::VideoOverlay
   */
  Glib::RefPtr<Gst::VideoOverlay> wrap(GstVideoOverlay* object, bool take_copy = false);

} // namespace Glib


#endif /* _GSTREAMERMM_VIDEOOVERLAY_H */
