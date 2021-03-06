// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/audiocdsrc.h>
#include <gstreamermm/private/audiocdsrc_p.h>


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

#include <gstreamermm/buffer.h>


namespace Gst
{

bool AudioCdSrc::add_track(guint num, guint start, guint end, bool is_audio,
  const Gst::TagList& tags)
{
  GstAudioCdSrcTrack track;

  track.num = num;
  track.start = start;
  track.end = end;
  track.is_audio = is_audio;

  if (tags)
    track.tags = tags.gobj_copy();

  return gst_audio_cd_src_add_track(gobj(), &track);
}

} // namespace Gst

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::AudioCdSrcMode>::value_type()
{
  return gst_audio_cd_src_mode_get_type();
}


namespace Glib
{

Glib::RefPtr<Gst::AudioCdSrc> wrap(GstAudioCdSrc* object, bool take_copy)
{
  return Glib::RefPtr<Gst::AudioCdSrc>( dynamic_cast<Gst::AudioCdSrc*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& AudioCdSrc_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &AudioCdSrc_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_audio_cd_src_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void AudioCdSrc_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

  klass->open = &open_vfunc_callback;
  klass->close = &close_vfunc_callback;
  klass->read_sector = &read_sector_vfunc_callback;

}

gboolean AudioCdSrc_Class::open_vfunc_callback(GstAudioCdSrc* self, const gchar* device)
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
        return static_cast<int>(obj->open_vfunc(Glib::convert_const_gchar_ptr_to_stdstring(device)
));
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->open)
    return (*base->open)(self, device);

  using RType = gboolean;
  return RType();
}
void AudioCdSrc_Class::close_vfunc_callback(GstAudioCdSrc* self)
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
        obj->close_vfunc();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->close)
    (*base->close)(self);
}
GstBuffer* AudioCdSrc_Class::read_sector_vfunc_callback(GstAudioCdSrc* self, gint sector)
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
        return Glib::unwrap(obj->read_sector_vfunc(sector));
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->read_sector)
    return (*base->read_sector)(self, sector);

  using RType = GstBuffer*;
  return RType();
}


Glib::ObjectBase* AudioCdSrc_Class::wrap_new(GObject* object)
{
  return new AudioCdSrc((GstAudioCdSrc*)object);
}


/* The implementation: */

GstAudioCdSrc* AudioCdSrc::gobj_copy()
{
  reference();
  return gobj();
}

AudioCdSrc::AudioCdSrc(const Glib::ConstructParams& construct_params)
:
  Gst::PushSrc(construct_params)
{

}

AudioCdSrc::AudioCdSrc(GstAudioCdSrc* castitem)
:
  Gst::PushSrc((GstPushSrc*)(castitem))
{}


AudioCdSrc::AudioCdSrc(AudioCdSrc&& src) noexcept
: Gst::PushSrc(std::move(src))
{}

AudioCdSrc& AudioCdSrc::operator=(AudioCdSrc&& src) noexcept
{
  Gst::PushSrc::operator=(std::move(src));
  return *this;
}


AudioCdSrc::~AudioCdSrc() noexcept
{}


AudioCdSrc::CppClassType AudioCdSrc::audiocdsrc_class_; // initialize static member

GType AudioCdSrc::get_type()
{
  return audiocdsrc_class_.init().get_type();
}


GType AudioCdSrc::get_base_type()
{
  return gst_audio_cd_src_get_type();
}


Glib::PropertyProxy< std::string > AudioCdSrc::property_device() 
{
  return Glib::PropertyProxy< std::string >(this, "device");
}

Glib::PropertyProxy_ReadOnly< std::string > AudioCdSrc::property_device() const
{
  return Glib::PropertyProxy_ReadOnly< std::string >(this, "device");
}

Glib::PropertyProxy< AudioCdSrcMode > AudioCdSrc::property_mode() 
{
  return Glib::PropertyProxy< AudioCdSrcMode >(this, "mode");
}

Glib::PropertyProxy_ReadOnly< AudioCdSrcMode > AudioCdSrc::property_mode() const
{
  return Glib::PropertyProxy_ReadOnly< AudioCdSrcMode >(this, "mode");
}

Glib::PropertyProxy< guint > AudioCdSrc::property_track() 
{
  return Glib::PropertyProxy< guint >(this, "track");
}

Glib::PropertyProxy_ReadOnly< guint > AudioCdSrc::property_track() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "track");
}


bool Gst::AudioCdSrc::open_vfunc(const std::string& device) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->open)
  {
    bool retval((*base->open)(gobj(),device.c_str()));
    return retval;
  }

  using RType = bool;
  return RType();
}
void Gst::AudioCdSrc::close_vfunc() 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->close)
  {
    (*base->close)(gobj());
  }
}
Glib::RefPtr<Gst::Buffer> Gst::AudioCdSrc::read_sector_vfunc(gint sector) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->read_sector)
  {
    Glib::RefPtr<Gst::Buffer> retval(Glib::wrap((*base->read_sector)(gobj(),sector)));
    return retval;
  }

  using RType = Glib::RefPtr<Gst::Buffer>;
  return RType();
}


} // namespace Gst


