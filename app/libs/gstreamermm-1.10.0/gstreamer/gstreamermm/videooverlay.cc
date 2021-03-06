// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/videooverlay.h>
#include <gstreamermm/private/videooverlay_p.h>


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

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::VideoOverlay> wrap(GstVideoOverlay* object, bool take_copy)
{
  return Glib::RefPtr<Gst::VideoOverlay>( dynamic_cast<Gst::VideoOverlay*> (Glib::wrap_auto_interface<Gst::VideoOverlay> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gst
{


/* The *_Class implementation: */

const Glib::Interface_Class& VideoOverlay_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &VideoOverlay_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gst_video_overlay_get_type();
  }

  return *this;
}

void VideoOverlay_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);

  klass->set_window_handle = &set_window_handle_vfunc_callback;
  klass->expose = &expose_vfunc_callback;
  klass->handle_events = &handle_events_vfunc_callback;
  klass->set_render_rectangle = &set_render_rectangle_vfunc_callback;

}

void VideoOverlay_Class::set_window_handle_vfunc_callback(GstVideoOverlay* self, guintptr handle)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->set_window_handle_vfunc(handle);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->set_window_handle)
    (*base->set_window_handle)(self, handle);
}
void VideoOverlay_Class::expose_vfunc_callback(GstVideoOverlay* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->expose_vfunc();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->expose)
    (*base->expose)(self);
}
void VideoOverlay_Class::handle_events_vfunc_callback(GstVideoOverlay* self, gboolean handle_events)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->handle_events_vfunc(handle_events
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->handle_events)
    (*base->handle_events)(self, handle_events);
}
void VideoOverlay_Class::set_render_rectangle_vfunc_callback(GstVideoOverlay* self, gint x, gint y, gint width, gint height)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->set_render_rectangle_vfunc(x
, y
, width
, height
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->set_render_rectangle)
    (*base->set_render_rectangle)(self, x, y, width, height);
}


Glib::ObjectBase* VideoOverlay_Class::wrap_new(GObject* object)
{
  return new VideoOverlay((GstVideoOverlay*)(object));
}


/* The implementation: */

VideoOverlay::VideoOverlay()
:
  Glib::Interface(videooverlay_class_.init())
{}

VideoOverlay::VideoOverlay(GstVideoOverlay* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

VideoOverlay::VideoOverlay(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

VideoOverlay::VideoOverlay(VideoOverlay&& src) noexcept
: Glib::Interface(std::move(src))
{}

VideoOverlay& VideoOverlay::operator=(VideoOverlay&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

VideoOverlay::~VideoOverlay() noexcept
{}

// static
void VideoOverlay::add_interface(GType gtype_implementer)
{
  videooverlay_class_.init().add_interface(gtype_implementer);
}

VideoOverlay::CppClassType VideoOverlay::videooverlay_class_; // initialize static member

GType VideoOverlay::get_type()
{
  return videooverlay_class_.init().get_type();
}


GType VideoOverlay::get_base_type()
{
  return gst_video_overlay_get_type();
}


void VideoOverlay::set_window_handle(guintptr window_handle)
{
  gst_video_overlay_set_window_handle(gobj(), window_handle);
}

void VideoOverlay::got_window_handle(guintptr window_handle)
{
  gst_video_overlay_got_window_handle(gobj(), window_handle);
}

void VideoOverlay::prepare_window_handle()
{
  gst_video_overlay_prepare_window_handle(gobj());
}

void VideoOverlay::expose()
{
  gst_video_overlay_expose(gobj());
}

void VideoOverlay::handle_events(bool handle_events)
{
  gst_video_overlay_handle_events(gobj(), static_cast<int>(handle_events));
}

bool VideoOverlay::set_render_rectangle(int x, int y, int width, int height)
{
  return gst_video_overlay_set_render_rectangle(gobj(), x, y, width, height);
}


void Gst::VideoOverlay::set_window_handle_vfunc(guintptr handle) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->set_window_handle)
  {
    (*base->set_window_handle)(gobj(),handle);
  }
}
void Gst::VideoOverlay::expose_vfunc() 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->expose)
  {
    (*base->expose)(gobj());
  }
}
void Gst::VideoOverlay::handle_events_vfunc(bool handle_events) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->handle_events)
  {
    (*base->handle_events)(gobj(),static_cast<int>(handle_events));
  }
}
void Gst::VideoOverlay::set_render_rectangle_vfunc(int x, int y, int width, int height) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->set_render_rectangle)
  {
    (*base->set_render_rectangle)(gobj(),x,y,width,height);
  }
}


} // namespace Gst


