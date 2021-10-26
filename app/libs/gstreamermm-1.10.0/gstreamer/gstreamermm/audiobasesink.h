// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_AUDIOBASESINK_H
#define _GSTREAMERMM_AUDIOBASESINK_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

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

#include <gst/audio/gstaudiobasesink.h>
#include <gstreamermm/basesink.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstAudioBaseSink = struct _GstAudioBaseSink;
using GstAudioBaseSinkClass = struct _GstAudioBaseSinkClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class AudioBaseSink_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

class AudioRingBuffer;

/** @addtogroup gstreamermmEnums gstreamermm Enums and Flags */

/** 
 *  @var AudioBaseSinkSlaveMethod AUDIO_BASE_SINK_SLAVE_RESAMPLE
 * Resample to match the master clock.
 * 
 *  @var AudioBaseSinkSlaveMethod AUDIO_BASE_SINK_SLAVE_SKEW
 * Adjust playout pointer when master clock
 * drifts too much.
 * 
 *  @var AudioBaseSinkSlaveMethod AUDIO_BASE_SINK_SLAVE_NONE
 * No adjustment is done.
 * 
 *  @var AudioBaseSinkSlaveMethod AUDIO_BASE_SINK_SLAVE_CUSTOM
 * Use custom clock slaving algorithm (Since: 1.6).
 * 
 *  @enum AudioBaseSinkSlaveMethod
 * 
 * Different possible clock slaving algorithms used when the internal audio
 * clock is not selected as the pipeline master clock.
 *
 * @ingroup gstreamermmEnums
 */
enum AudioBaseSinkSlaveMethod
{
  AUDIO_BASE_SINK_SLAVE_RESAMPLE,
  AUDIO_BASE_SINK_SLAVE_SKEW,
  AUDIO_BASE_SINK_SLAVE_NONE,
  AUDIO_BASE_SINK_SLAVE_CUSTOM
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::AudioBaseSinkSlaveMethod> : public Glib::Value_Enum<Gst::AudioBaseSinkSlaveMethod>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{

/** 
 *  @var AudioBaseSinkDiscontReason AUDIO_BASE_SINK_DISCONT_REASON_NO_DISCONT
 * No discontinuity occurred.
 * 
 *  @var AudioBaseSinkDiscontReason AUDIO_BASE_SINK_DISCONT_REASON_NEW_CAPS
 * New caps are set, causing renegotiotion.
 * 
 *  @var AudioBaseSinkDiscontReason AUDIO_BASE_SINK_DISCONT_REASON_FLUSH
 * Samples have been flushed.
 * 
 *  @var AudioBaseSinkDiscontReason AUDIO_BASE_SINK_DISCONT_REASON_SYNC_LATENCY
 * Sink was synchronized to the estimated latency (occurs during initialization).
 * 
 *  @var AudioBaseSinkDiscontReason AUDIO_BASE_SINK_DISCONT_REASON_ALIGNMENT
 * Aligning buffers failed because the timestamps are too discontinuous.
 * 
 *  @var AudioBaseSinkDiscontReason AUDIO_BASE_SINK_DISCONT_REASON_DEVICE_FAILURE
 * Audio output device experienced and recovered from an error but introduced latency in the process (see also @a Gst::AudioBaseSink::report_device_failure()).
 * 
 *  @enum AudioBaseSinkDiscontReason
 * 
 * Different possible reasons for discontinuities. This enum is useful for the custom
 * slave method.
 *
 * @ingroup gstreamermmEnums
 */
enum AudioBaseSinkDiscontReason
{
  AUDIO_BASE_SINK_DISCONT_REASON_NO_DISCONT,
  AUDIO_BASE_SINK_DISCONT_REASON_NEW_CAPS,
  AUDIO_BASE_SINK_DISCONT_REASON_FLUSH,
  AUDIO_BASE_SINK_DISCONT_REASON_SYNC_LATENCY,
  AUDIO_BASE_SINK_DISCONT_REASON_ALIGNMENT,
  AUDIO_BASE_SINK_DISCONT_REASON_DEVICE_FAILURE
};


/** The base class for audio sinks.
 * This is the base class for audio sinks. Subclasses need to implement the
 * create_ringbuffer_vfunc vmethod. This base class will then take care of
 * writing samples to the audioringbuffer, synchronisation, clipping and flushing.
 *
 * Last reviewed on 2016-04-23 (1.8.0).
 *
 * @ingroup GstBaseClasses
 */

class AudioBaseSink : public Gst::BaseSink
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = AudioBaseSink;
  using CppClassType = AudioBaseSink_Class;
  using BaseObjectType = GstAudioBaseSink;
  using BaseClassType = GstAudioBaseSinkClass;

  // noncopyable
  AudioBaseSink(const AudioBaseSink&) = delete;
  AudioBaseSink& operator=(const AudioBaseSink&) = delete;

private:  friend class AudioBaseSink_Class;
  static CppClassType audiobasesink_class_;

protected:
  explicit AudioBaseSink(const Glib::ConstructParams& construct_params);
  explicit AudioBaseSink(GstAudioBaseSink* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  AudioBaseSink(AudioBaseSink&& src) noexcept;
  AudioBaseSink& operator=(AudioBaseSink&& src) noexcept;

  ~AudioBaseSink() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstAudioBaseSink*       gobj()       { return reinterpret_cast<GstAudioBaseSink*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstAudioBaseSink* gobj() const { return reinterpret_cast<GstAudioBaseSink*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstAudioBaseSink* gobj_copy();

private:


public:
  /** This slot is set with set_custom_slaving_callback()
   * and is called during playback. It receives the current time of external and
   * internal clocks, which the callback can then use to apply any custom
   * slaving/synchronization schemes.
   *
   * The external clock is the sink's element clock, the internal one is the
   * internal audio clock. The internal audio clock's calibration is applied to
   * the timestamps before they are passed to the callback. The difference between
   * etime and itime is the skew; how much internal and external clock lie apart
   * from each other. A skew of 0 means both clocks are perfectly in sync.
   * itime > etime means the external clock is going slower, while itime < etime
   * means it is going faster than the internal clock. etime and itime are always
   * valid timestamps, except for when a discontinuity happens.
   *
   * requested_skew is an output value the callback can write to. It informs the
   * sink of whether or not it should move the playout pointer, and if so, by how
   * much. This pointer is only nullptr if a discontinuity occurs; otherwise, it is
   * safe to write to *requested_skew. The default skew is 0.
   *
   * The sink may experience discontinuities. If one happens, discont is TRUE,
   * itime, etime are set to CLOCK_TIME_NONE, and requested_skew is nullptr.
   * This makes it possible to reset custom clock slaving algorithms when a
   * discontinuity happens.
   *
   */
  typedef sigc::slot<void, const Glib::RefPtr<Gst::AudioBaseSink>&, Gst::ClockTime, Gst::ClockTime, Gst::ClockTimeDiff&, Gst::AudioBaseSinkDiscontReason> SlotCustomSlaving;

  /** Get the Gst::Clock of the Gst::AudioBaseSink.
   */
  Glib::RefPtr<Gst::Clock> get_provided_clock();
  Glib::RefPtr<const Gst::Clock> get_provided_clock() const;

  
  /** Create and return the Gst::AudioRingBuffer for @a sink. This function will
   * call the ::create_ringbuffer vmethod and will set @a sink as the parent of
   * the returned buffer (see Gst::Object::set_parent()).
   * 
   * @return The new ringbuffer of @a sink.
   */
  Glib::RefPtr<Gst::AudioRingBuffer> create_ring_buffer();
  
  /** Controls whether @a sink will provide a clock or not. If @a provide is <tt>true</tt>,
   * Gst::Element::provide_clock() will return a clock that reflects the datarate
   * of @a sink. If @a provide is <tt>false</tt>, Gst::Element::provide_clock() will return
   * <tt>nullptr</tt>.
   * 
   * @param provide New state.
   */
  void set_provide_clock(bool provide);
  
  /** Queries whether @a sink will provide a clock or not. See also
   * gst_audio_base_sink_set_provide_clock.
   * 
   * @return <tt>true</tt> if @a sink will provide a clock.
   */
  bool get_provide_clock() const;

  
  /** Controls how clock slaving will be performed in @a sink.
   * 
   * @param method The new slave method.
   */
  void set_slave_method(Gst::AudioBaseSinkSlaveMethod method);
  
  /** Get the current slave method used by @a sink.
   * 
   * @return The current slave method used by @a sink.
   */
  Gst::AudioBaseSinkSlaveMethod get_slave_method() const;

  
  /** Get the current drift tolerance, in microseconds, used by @a sink.
   * 
   * @return The current drift tolerance used by @a sink.
   */
  gint64 get_drift_tolerance() const;
  
  /** Controls the sink's drift tolerance.
   * 
   * @param drift_tolerance The new drift tolerance in microseconds.
   */
  void set_drift_tolerance(gint64 drift_tolerance);

  
  /** Controls how long the sink will wait before creating a discontinuity.
   * 
   * @param discont_wait The new discont wait in nanoseconds.
   */
  void set_discont_wait(Gst::ClockTime discont_wait);
  
  /** Get the current discont wait, in nanoseconds, used by @a sink.
   * 
   * @return The current discont wait used by @a sink.
   */
  Gst::ClockTime get_discont_wait() const;

  
  /** Controls the sink's alignment threshold.
   * 
   * @param alignment_threshold The new alignment threshold in nanoseconds.
   */
  void set_alignment_threshold(Gst::ClockTime alignment_threshold);
  
  /** Get the current alignment threshold, in nanoseconds, used by @a sink.
   * 
   * @return The current alignment threshold used by @a sink.
   */
  Gst::ClockTime get_alignment_threshold() const;

  
  /** Informs this base class that the audio output device has failed for
   * some reason, causing a discontinuity (for example, because the device
   * recovered from the error, but lost all contents of its ring buffer).
   * This function is typically called by derived classes, and is useful
   * for the custom slave method.
   */
  void report_device_failure();

  
  /** Sets the custom slaving callback. This callback will
   * be invoked if the slave-method property is set to
   * GST_AUDIO_BASE_SINK_SLAVE_CUSTOM and the audio sink
   * receives and plays samples.
   * 
   * Setting the callback to <tt>nullptr</tt> causes the sink to
   * behave as if the GST_AUDIO_BASE_SINK_SLAVE_NONE
   * method were used.
   * 
   * @param slot A Gst::SlotAudioBaseSinkCustomSlaving.
   * @param user_data User data passed to the callback.
   * @param notify Called when user_data becomes unused.
   */

  void set_custom_slaving_callback(const SlotCustomSlaving& slot);

  /** Timestamp alignment threshold in nanoseconds.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint64 > property_alignment_threshold() ;

/** Timestamp alignment threshold in nanoseconds.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint64 > property_alignment_threshold() const;

  /** Size of audio buffer in microseconds, this is the minimum latency that the sink reports.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< gint64 > property_buffer_time() ;

/** Size of audio buffer in microseconds, this is the minimum latency that the sink reports.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< gint64 > property_buffer_time() const;

  /** Allow pull-based scheduling.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_can_activate_pull() ;

/** Allow pull-based scheduling.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_can_activate_pull() const;

  /** Window of time in nanoseconds to wait before creating a discontinuity.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint64 > property_discont_wait() ;

/** Window of time in nanoseconds to wait before creating a discontinuity.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint64 > property_discont_wait() const;

  /** Tolerance for clock drift in microseconds.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< gint64 > property_drift_tolerance() ;

/** Tolerance for clock drift in microseconds.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< gint64 > property_drift_tolerance() const;

  /** The minimum amount of data to write in each iteration in microseconds.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< gint64 > property_latency_time() ;

/** The minimum amount of data to write in each iteration in microseconds.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< gint64 > property_latency_time() const;

  /** Provide a clock to be used as the global pipeline clock.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_provide_clock() ;

/** Provide a clock to be used as the global pipeline clock.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_provide_clock() const;

  /** Algorithm used to match the rate of the masterclock.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::AudioBaseSinkSlaveMethod > property_slave_method() ;

/** Algorithm used to match the rate of the masterclock.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::AudioBaseSinkSlaveMethod > property_slave_method() const;


  /** vfunc to create and return a Gst::AudioRingBuffer to write to.
   */
    virtual Glib::RefPtr<Gst::AudioRingBuffer> create_ring_buffer_vfunc();


  /** vfunc to payload data in a format suitable to write to the sink. If no
   * payloading is required, returns a reffed copy of the original
   * buffer, else returns the payloaded buffer with all other metadata
   * copied.
   */
    virtual Glib::RefPtr<Gst::Buffer> payload_vfunc(const Glib::RefPtr<Gst::Buffer>& buffer);


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
   * @relates Gst::AudioBaseSink
   */
  Glib::RefPtr<Gst::AudioBaseSink> wrap(GstAudioBaseSink* object, bool take_copy = false);
}


#endif /* _GSTREAMERMM_AUDIOBASESINK_H */

