// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/audioclock.h>
#include <gstreamermm/private/audioclock_p.h>


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

#include <gst/audio/gstaudioclock.h>


// TODO: remove this check after we require at least gstreamer 1.12
#if GST_VERSION_MINOR < 12
#define GSTMM_AUDIO_CLOCK_CAST(obj) GST_CLOCK(obj)
#else
#define GSTMM_AUDIO_CLOCK_CAST(obj) GST_AUDIO_CLOCK(obj)
#endif

namespace
{

extern "C"
{

static GstClockTime AudioClock_GetTime_gstreamermm_callback(GstClock* clock, void* data)
{
  Gst::AudioClock::SlotGetTime* the_slot = static_cast<Gst::AudioClock::SlotGetTime*>(data);

  try
  {
    return (*the_slot)(Glib::wrap(clock, true));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return 0; // arbitrary value
}

} // extern "C"

} // anonymous namespace

namespace Gst
{

AudioClock::AudioClock(const Glib::ustring& name, const SlotGetTime& time_slot)
  : // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::SystemClock(Glib::ConstructParams(audioclock_class_.init(), "name",(name.empty() ? static_cast<char*>(0) : name.c_str()), nullptr))
{
  // The slot is dynamically allocated because it is called each time the time
  // is gotten.
  m_slot.reset(new SlotGetTime(time_slot));

  // The following lines are taken verbatim from gst_audio_clock_new() after
  // the call to g_object_new() because it seems that bug #545782 will not be
  // accepted.
  gobj()->func = &AudioClock_GetTime_gstreamermm_callback;
  gobj()->user_data = m_slot.get();
}

Gst::ClockTime AudioClock::adjust(Gst::ClockTime time)
{
  return static_cast<Gst::ClockTime>(gst_audio_clock_adjust(GSTMM_AUDIO_CLOCK_CAST(gobj()), static_cast<GstClockTime>(time)));
}

Gst::ClockTime AudioClock::get_time() const
{
  return static_cast<Gst::ClockTime>(gst_audio_clock_get_time(GSTMM_AUDIO_CLOCK_CAST(gobj())));
}

void AudioClock::invalidate()
{
  gst_audio_clock_invalidate(GSTMM_AUDIO_CLOCK_CAST(gobj()));
}

} //namespace Gst

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::AudioClock> wrap(GstAudioClock* object, bool take_copy)
{
  return Glib::RefPtr<Gst::AudioClock>( dynamic_cast<Gst::AudioClock*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& AudioClock_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &AudioClock_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_audio_clock_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void AudioClock_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* AudioClock_Class::wrap_new(GObject* object)
{
  return new AudioClock((GstAudioClock*)object);
}


/* The implementation: */

GstAudioClock* AudioClock::gobj_copy()
{
  reference();
  return gobj();
}

AudioClock::AudioClock(const Glib::ConstructParams& construct_params)
:
  Gst::SystemClock(construct_params)
{

}

AudioClock::AudioClock(GstAudioClock* castitem)
:
  Gst::SystemClock((GstSystemClock*)(castitem))
{}


AudioClock::AudioClock(AudioClock&& src) noexcept
: Gst::SystemClock(std::move(src))
{}

AudioClock& AudioClock::operator=(AudioClock&& src) noexcept
{
  Gst::SystemClock::operator=(std::move(src));
  return *this;
}


AudioClock::~AudioClock() noexcept
{}


AudioClock::CppClassType AudioClock::audioclock_class_; // initialize static member

GType AudioClock::get_type()
{
  return audioclock_class_.init().get_type();
}


GType AudioClock::get_base_type()
{
  return gst_audio_clock_get_type();
}


Glib::RefPtr<AudioClock> AudioClock::create(const Glib::ustring& name, const SlotGetTime& time_slot)
{
  return Glib::RefPtr<AudioClock>( new AudioClock(name, time_slot) );
}

void AudioClock::reset(Gst::ClockTime time)
{
  gst_audio_clock_reset(gobj(), ((GstClockTime)(time)));
}


} // namespace Gst


