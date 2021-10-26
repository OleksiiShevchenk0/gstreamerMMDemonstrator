// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/videoorientation.h>
#include <gstreamermm/private/videoorientation_p.h>


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

namespace Gst
{

bool VideoOrientation::get_hflip(bool& flip) const
{
  gboolean gst_flip = 0;

  const bool result =
    gst_video_orientation_get_hflip(const_cast<GstVideoOrientation*>(gobj()),
    &gst_flip);
  flip = gst_flip;
  return result;
}

bool VideoOrientation::get_vflip(bool& flip) const
{
  gboolean gst_flip = 0;
  const bool result =
    gst_video_orientation_get_vflip(const_cast<GstVideoOrientation*>(gobj()),
    &gst_flip);
  flip = gst_flip;
  return result;
}

gboolean VideoOrientation_Class::get_hflip_vfunc_callback(GstVideoOrientation* self, gboolean* flip)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        bool cpp_flip = false;
        const gboolean result =
          static_cast<int>(obj->get_hflip_vfunc(cpp_flip));
        *flip = cpp_flip;
        return result;
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
  if(base && base->get_hflip)
    return (*base->get_hflip)(self, flip);


  typedef gboolean RType;
  return RType();
}
bool Gst::VideoOrientation::get_hflip_vfunc(bool& flip) const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_hflip)
  {
    gboolean gst_flip = 0;

    const bool result =
      (*base->get_hflip)(const_cast<GstVideoOrientation*>(gobj()),&gst_flip);
    flip = gst_flip;
    return result;
  }

  typedef bool RType;
  return RType();
}
gboolean VideoOrientation_Class::get_vflip_vfunc_callback(GstVideoOrientation* self, gboolean* flip)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        bool cpp_flip = false;
        const gboolean result =
          static_cast<int>(obj->get_vflip_vfunc(cpp_flip));
        *flip = cpp_flip;
        return result;
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
  if(base && base->get_vflip)
    return (*base->get_vflip)(self, flip);


  typedef gboolean RType;
  return RType();
}
bool Gst::VideoOrientation::get_vflip_vfunc(bool& flip) const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_vflip)
  {
    gboolean gst_flip = 0;

    const bool result =
      (*base->get_vflip)(const_cast<GstVideoOrientation*>(gobj()),&gst_flip);
    flip = gst_flip;
    return result;
  }

  typedef bool RType;
  return RType();
}
} // namespace Gst

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::VideoOrientation> wrap(GstVideoOrientation* object, bool take_copy)
{
  return Glib::RefPtr<Gst::VideoOrientation>( dynamic_cast<Gst::VideoOrientation*> (Glib::wrap_auto_interface<Gst::VideoOrientation> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gst
{


/* The *_Class implementation: */

const Glib::Interface_Class& VideoOrientation_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &VideoOrientation_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gst_video_orientation_get_type();
  }

  return *this;
}

void VideoOrientation_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);

  klass->get_hcenter = &get_hcenter_vfunc_callback;
  klass->get_vcenter = &get_vcenter_vfunc_callback;
  klass->set_hflip = &set_hflip_vfunc_callback;
  klass->set_vflip = &set_vflip_vfunc_callback;
  klass->set_hcenter = &set_hcenter_vfunc_callback;
  klass->set_vcenter = &set_vcenter_vfunc_callback;
  klass->get_hflip = &get_hflip_vfunc_callback;
  klass->get_vflip = &get_vflip_vfunc_callback;
  
}

gboolean VideoOrientation_Class::get_hcenter_vfunc_callback(GstVideoOrientation* self, gint* center)
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
        return static_cast<int>(obj->get_hcenter_vfunc(*(center)
));
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
  if(base && base->get_hcenter)
    return (*base->get_hcenter)(self, center);

  using RType = gboolean;
  return RType();
}
gboolean VideoOrientation_Class::get_vcenter_vfunc_callback(GstVideoOrientation* self, gint* center)
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
        return static_cast<int>(obj->get_vcenter_vfunc(*(center)
));
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
  if(base && base->get_vcenter)
    return (*base->get_vcenter)(self, center);

  using RType = gboolean;
  return RType();
}
gboolean VideoOrientation_Class::set_hflip_vfunc_callback(GstVideoOrientation* self, gboolean flip)
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
        return static_cast<int>(obj->set_hflip_vfunc(flip
));
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
  if(base && base->set_hflip)
    return (*base->set_hflip)(self, flip);

  using RType = gboolean;
  return RType();
}
gboolean VideoOrientation_Class::set_vflip_vfunc_callback(GstVideoOrientation* self, gboolean flip)
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
        return static_cast<int>(obj->set_vflip_vfunc(flip
));
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
  if(base && base->set_vflip)
    return (*base->set_vflip)(self, flip);

  using RType = gboolean;
  return RType();
}
gboolean VideoOrientation_Class::set_hcenter_vfunc_callback(GstVideoOrientation* self, gint center)
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
        return static_cast<int>(obj->set_hcenter_vfunc(center
));
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
  if(base && base->set_hcenter)
    return (*base->set_hcenter)(self, center);

  using RType = gboolean;
  return RType();
}
gboolean VideoOrientation_Class::set_vcenter_vfunc_callback(GstVideoOrientation* self, gint center)
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
        return static_cast<int>(obj->set_vcenter_vfunc(center
));
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
  if(base && base->set_vcenter)
    return (*base->set_vcenter)(self, center);

  using RType = gboolean;
  return RType();
}


Glib::ObjectBase* VideoOrientation_Class::wrap_new(GObject* object)
{
  return new VideoOrientation((GstVideoOrientation*)(object));
}


/* The implementation: */

VideoOrientation::VideoOrientation()
:
  Glib::Interface(videoorientation_class_.init())
{}

VideoOrientation::VideoOrientation(GstVideoOrientation* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

VideoOrientation::VideoOrientation(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

VideoOrientation::VideoOrientation(VideoOrientation&& src) noexcept
: Glib::Interface(std::move(src))
{}

VideoOrientation& VideoOrientation::operator=(VideoOrientation&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

VideoOrientation::~VideoOrientation() noexcept
{}

// static
void VideoOrientation::add_interface(GType gtype_implementer)
{
  videoorientation_class_.init().add_interface(gtype_implementer);
}

VideoOrientation::CppClassType VideoOrientation::videoorientation_class_; // initialize static member

GType VideoOrientation::get_type()
{
  return videoorientation_class_.init().get_type();
}


GType VideoOrientation::get_base_type()
{
  return gst_video_orientation_get_type();
}


bool VideoOrientation::get_hcenter(int& center) const
{
  return gst_video_orientation_get_hcenter(const_cast<GstVideoOrientation*>(gobj()), &(center));
}

bool VideoOrientation::get_vcenter(int& center) const
{
  return gst_video_orientation_get_vcenter(const_cast<GstVideoOrientation*>(gobj()), &(center));
}

bool VideoOrientation::set_hcenter(int center)
{
  return gst_video_orientation_set_hcenter(gobj(), center);
}

bool VideoOrientation::set_hflip(bool flip)
{
  return gst_video_orientation_set_hflip(gobj(), static_cast<int>(flip));
}

bool VideoOrientation::set_vcenter(int center)
{
  return gst_video_orientation_set_vcenter(gobj(), center);
}

bool VideoOrientation::set_vflip(bool flip)
{
  return gst_video_orientation_set_vflip(gobj(), static_cast<int>(flip));
}


bool Gst::VideoOrientation::get_hcenter_vfunc(int& center) const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_hcenter)
  {
    bool retval((*base->get_hcenter)(const_cast<GstVideoOrientation*>(gobj()),&(center)));
    return retval;
  }

  using RType = bool;
  return RType();
}
bool Gst::VideoOrientation::get_vcenter_vfunc(int& center) const
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_vcenter)
  {
    bool retval((*base->get_vcenter)(const_cast<GstVideoOrientation*>(gobj()),&(center)));
    return retval;
  }

  using RType = bool;
  return RType();
}
bool Gst::VideoOrientation::set_hflip_vfunc(bool flip) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->set_hflip)
  {
    bool retval((*base->set_hflip)(gobj(),static_cast<int>(flip)));
    return retval;
  }

  using RType = bool;
  return RType();
}
bool Gst::VideoOrientation::set_vflip_vfunc(bool flip) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->set_vflip)
  {
    bool retval((*base->set_vflip)(gobj(),static_cast<int>(flip)));
    return retval;
  }

  using RType = bool;
  return RType();
}
bool Gst::VideoOrientation::set_hcenter_vfunc(int center) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->set_hcenter)
  {
    bool retval((*base->set_hcenter)(gobj(),center));
    return retval;
  }

  using RType = bool;
  return RType();
}
bool Gst::VideoOrientation::set_vcenter_vfunc(int center) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->set_vcenter)
  {
    bool retval((*base->set_vcenter)(gobj(),center));
    return retval;
  }

  using RType = bool;
  return RType();
}


} // namespace Gst


