// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/audiobasesink.h>
#include <gstreamermm/private/audiobasesink_p.h>


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

#include <gstreamermm/audioringbuffer.h>

namespace Gst
{

extern "C"
{

static void AudioBaseSink_CustomSlaving_gstreamermm_callback(GstAudioBaseSink* sink, GstClockTime etime, GstClockTime itime,
  GstClockTimeDiff *requested_skew, GstAudioBaseSinkDiscontReason discont_reason, gpointer user_data)
{
  Gst::AudioBaseSink::SlotCustomSlaving* the_slot = static_cast<Gst::AudioBaseSink::SlotCustomSlaving*>(user_data);
  Glib::RefPtr<Gst::AudioBaseSink> sink_wrapper = Glib::wrap(sink, true);
  try
  {
    (*the_slot)(sink_wrapper, static_cast<Gst::ClockTime>(etime), static_cast<Gst::ClockTime>(itime),
		*requested_skew, static_cast<Gst::AudioBaseSinkDiscontReason>(discont_reason));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }
}

static void AudioBaseSink_CustomSlaving_gstreamermm_callback_disconnect(gpointer data)
{
  Gst::AudioBaseSink::SlotCustomSlaving* the_slot = static_cast<Gst::AudioBaseSink::SlotCustomSlaving*>(data);

  if(the_slot)
    delete the_slot;
}

}

void AudioBaseSink::set_custom_slaving_callback(const SlotCustomSlaving& slot)
{
  SlotCustomSlaving *slot_copy = new SlotCustomSlaving(slot);

  return gst_audio_base_sink_set_custom_slaving_callback(gobj(), &AudioBaseSink_CustomSlaving_gstreamermm_callback, slot_copy, &AudioBaseSink_CustomSlaving_gstreamermm_callback_disconnect);
}

}

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::AudioBaseSinkSlaveMethod>::value_type()
{
  return gst_audio_base_sink_slave_method_get_type();
}


namespace Glib
{

Glib::RefPtr<Gst::AudioBaseSink> wrap(GstAudioBaseSink* object, bool take_copy)
{
  return Glib::RefPtr<Gst::AudioBaseSink>( dynamic_cast<Gst::AudioBaseSink*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& AudioBaseSink_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &AudioBaseSink_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_audio_base_sink_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void AudioBaseSink_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

  klass->create_ringbuffer = &create_ringbuffer_vfunc_callback;
  klass->payload = &payload_vfunc_callback;

}

GstAudioRingBuffer* AudioBaseSink_Class::create_ringbuffer_vfunc_callback(GstAudioBaseSink* self)
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
        return Glib::unwrap(obj->create_ring_buffer_vfunc());
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
  if(base && base->create_ringbuffer)
    return (*base->create_ringbuffer)(self);

  using RType = GstAudioRingBuffer*;
  return RType();
}
GstBuffer* AudioBaseSink_Class::payload_vfunc_callback(GstAudioBaseSink* self, GstBuffer* buffer)
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
        return Glib::unwrap(obj->payload_vfunc(Glib::wrap(buffer, true)
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
  if(base && base->payload)
    return (*base->payload)(self, buffer);

  using RType = GstBuffer*;
  return RType();
}


Glib::ObjectBase* AudioBaseSink_Class::wrap_new(GObject* object)
{
  return new AudioBaseSink((GstAudioBaseSink*)object);
}


/* The implementation: */

GstAudioBaseSink* AudioBaseSink::gobj_copy()
{
  reference();
  return gobj();
}

AudioBaseSink::AudioBaseSink(const Glib::ConstructParams& construct_params)
:
  Gst::BaseSink(construct_params)
{

}

AudioBaseSink::AudioBaseSink(GstAudioBaseSink* castitem)
:
  Gst::BaseSink((GstBaseSink*)(castitem))
{}


AudioBaseSink::AudioBaseSink(AudioBaseSink&& src) noexcept
: Gst::BaseSink(std::move(src))
{}

AudioBaseSink& AudioBaseSink::operator=(AudioBaseSink&& src) noexcept
{
  Gst::BaseSink::operator=(std::move(src));
  return *this;
}


AudioBaseSink::~AudioBaseSink() noexcept
{}


AudioBaseSink::CppClassType AudioBaseSink::audiobasesink_class_; // initialize static member

GType AudioBaseSink::get_type()
{
  return audiobasesink_class_.init().get_type();
}


GType AudioBaseSink::get_base_type()
{
  return gst_audio_base_sink_get_type();
}


Glib::RefPtr<Gst::Clock> AudioBaseSink::get_provided_clock()
{
  Glib::RefPtr<Gst::Clock> ref_ptr(Glib::wrap(gobj()->provided_clock));

  if(ref_ptr)
    ref_ptr->reference();

  return ref_ptr;
}

Glib::RefPtr<const Gst::Clock> AudioBaseSink::get_provided_clock() const
{
  Glib::RefPtr<const Gst::Clock> ref_ptr(Glib::wrap(gobj()->provided_clock));

  if(ref_ptr)
    ref_ptr->reference();

  return ref_ptr;
}

Glib::RefPtr<Gst::AudioRingBuffer> AudioBaseSink::create_ring_buffer()
{
  return Glib::wrap(gst_audio_base_sink_create_ringbuffer(gobj()));
}

void AudioBaseSink::set_provide_clock(bool provide)
{
  gst_audio_base_sink_set_provide_clock(gobj(), static_cast<int>(provide));
}

bool AudioBaseSink::get_provide_clock() const
{
  return gst_audio_base_sink_get_provide_clock(const_cast<GstAudioBaseSink*>(gobj()));
}

void AudioBaseSink::set_slave_method(Gst::AudioBaseSinkSlaveMethod method)
{
  gst_audio_base_sink_set_slave_method(gobj(), ((GstAudioBaseSinkSlaveMethod)(method)));
}

Gst::AudioBaseSinkSlaveMethod AudioBaseSink::get_slave_method() const
{
  return ((Gst::AudioBaseSinkSlaveMethod)(gst_audio_base_sink_get_slave_method(const_cast<GstAudioBaseSink*>(gobj()))));
}

gint64 AudioBaseSink::get_drift_tolerance() const
{
  return gst_audio_base_sink_get_drift_tolerance(const_cast<GstAudioBaseSink*>(gobj()));
}

void AudioBaseSink::set_drift_tolerance(gint64 drift_tolerance)
{
  gst_audio_base_sink_set_drift_tolerance(gobj(), drift_tolerance);
}

void AudioBaseSink::set_discont_wait(Gst::ClockTime discont_wait)
{
  gst_audio_base_sink_set_discont_wait(gobj(), ((GstClockTime)(discont_wait)));
}

Gst::ClockTime AudioBaseSink::get_discont_wait() const
{
  return ((Gst::ClockTime)(gst_audio_base_sink_get_discont_wait(const_cast<GstAudioBaseSink*>(gobj()))));
}

void AudioBaseSink::set_alignment_threshold(Gst::ClockTime alignment_threshold)
{
  gst_audio_base_sink_set_alignment_threshold(gobj(), ((GstClockTime)(alignment_threshold)));
}

Gst::ClockTime AudioBaseSink::get_alignment_threshold() const
{
  return ((Gst::ClockTime)(gst_audio_base_sink_get_alignment_threshold(const_cast<GstAudioBaseSink*>(gobj()))));
}

void AudioBaseSink::report_device_failure()
{
  gst_audio_base_sink_report_device_failure(gobj());
}


Glib::PropertyProxy< guint64 > AudioBaseSink::property_alignment_threshold() 
{
  return Glib::PropertyProxy< guint64 >(this, "alignment-threshold");
}

Glib::PropertyProxy_ReadOnly< guint64 > AudioBaseSink::property_alignment_threshold() const
{
  return Glib::PropertyProxy_ReadOnly< guint64 >(this, "alignment-threshold");
}

Glib::PropertyProxy< gint64 > AudioBaseSink::property_buffer_time() 
{
  return Glib::PropertyProxy< gint64 >(this, "buffer-time");
}

Glib::PropertyProxy_ReadOnly< gint64 > AudioBaseSink::property_buffer_time() const
{
  return Glib::PropertyProxy_ReadOnly< gint64 >(this, "buffer-time");
}

Glib::PropertyProxy< bool > AudioBaseSink::property_can_activate_pull() 
{
  return Glib::PropertyProxy< bool >(this, "can-activate-pull");
}

Glib::PropertyProxy_ReadOnly< bool > AudioBaseSink::property_can_activate_pull() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "can-activate-pull");
}

Glib::PropertyProxy< guint64 > AudioBaseSink::property_discont_wait() 
{
  return Glib::PropertyProxy< guint64 >(this, "discont-wait");
}

Glib::PropertyProxy_ReadOnly< guint64 > AudioBaseSink::property_discont_wait() const
{
  return Glib::PropertyProxy_ReadOnly< guint64 >(this, "discont-wait");
}

Glib::PropertyProxy< gint64 > AudioBaseSink::property_drift_tolerance() 
{
  return Glib::PropertyProxy< gint64 >(this, "drift-tolerance");
}

Glib::PropertyProxy_ReadOnly< gint64 > AudioBaseSink::property_drift_tolerance() const
{
  return Glib::PropertyProxy_ReadOnly< gint64 >(this, "drift-tolerance");
}

Glib::PropertyProxy< gint64 > AudioBaseSink::property_latency_time() 
{
  return Glib::PropertyProxy< gint64 >(this, "latency-time");
}

Glib::PropertyProxy_ReadOnly< gint64 > AudioBaseSink::property_latency_time() const
{
  return Glib::PropertyProxy_ReadOnly< gint64 >(this, "latency-time");
}

Glib::PropertyProxy< bool > AudioBaseSink::property_provide_clock() 
{
  return Glib::PropertyProxy< bool >(this, "provide-clock");
}

Glib::PropertyProxy_ReadOnly< bool > AudioBaseSink::property_provide_clock() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "provide-clock");
}

Glib::PropertyProxy< Gst::AudioBaseSinkSlaveMethod > AudioBaseSink::property_slave_method() 
{
  return Glib::PropertyProxy< Gst::AudioBaseSinkSlaveMethod >(this, "slave-method");
}

Glib::PropertyProxy_ReadOnly< Gst::AudioBaseSinkSlaveMethod > AudioBaseSink::property_slave_method() const
{
  return Glib::PropertyProxy_ReadOnly< Gst::AudioBaseSinkSlaveMethod >(this, "slave-method");
}


Glib::RefPtr<Gst::AudioRingBuffer> Gst::AudioBaseSink::create_ring_buffer_vfunc() 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->create_ringbuffer)
  {
    Glib::RefPtr<Gst::AudioRingBuffer> retval(Glib::wrap((*base->create_ringbuffer)(gobj())));
    return retval;
  }

  using RType = Glib::RefPtr<Gst::AudioRingBuffer>;
  return RType();
}
Glib::RefPtr<Gst::Buffer> Gst::AudioBaseSink::payload_vfunc(const Glib::RefPtr<Gst::Buffer>& buffer) 
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->payload)
  {
    Glib::RefPtr<Gst::Buffer> retval(Glib::wrap((*base->payload)(gobj(),Glib::unwrap(buffer))));
    return retval;
  }

  using RType = Glib::RefPtr<Gst::Buffer>;
  return RType();
}


} // namespace Gst


