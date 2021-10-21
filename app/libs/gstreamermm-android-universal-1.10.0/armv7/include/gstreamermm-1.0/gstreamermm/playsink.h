// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_PLAYSINK_H
#define _GSTREAMERMM_PLAYSINK_H

#include <gstreamermmconfig.h>

#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// Generated by generate_plugin_gmmproc_file. Don't edit this file.


#include <gstreamermm/bin.h>
#include <gstreamermm/enums.h>
#include <gstreamermm/element.h>
#include <gstreamermm/sample.h>
#include <gstreamermm/caps.h>
#include <gstreamermm/streamvolume.h>
#include <gstreamermm/videooverlay.h>
#include <gstreamermm/navigation.h>
#include <gstreamermm/colorbalance.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstPlaySink = struct _GstPlaySink;
using GstPlaySinkClass = struct _GstPlaySinkClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class PlaySink_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** @addtogroup gstreamermmEnums gstreamermm Enums and Flags */

/** 
 *
 * @ingroup gstreamermmEnums
 */
enum PlaySinkSendEventMode
{
  DEFAULT,
  FIRST
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::PlaySinkSendEventMode> : public Glib::Value_Enum<Gst::PlaySinkSendEventMode>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** A Wrapper for the playsink plugin.
 * Please note that not all plug-ins are available on all systems so care
 * must be taken that they exist before they are used otherwise there will
 * be errors and possibly a crash.
 *
 * @ingroup GstPlugins
 * @deprecated Plugins API is deprecated, and should not be used in a new code.
 */

class PlaySink
: public Gst::Bin, public Gst::StreamVolume, public Gst::VideoOverlay, public Gst::Navigation, public Gst::ColorBalance
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = PlaySink;
  using CppClassType = PlaySink_Class;
  using BaseObjectType = GstPlaySink;
  using BaseClassType = GstPlaySinkClass;

  // noncopyable
  PlaySink(const PlaySink&) = delete;
  PlaySink& operator=(const PlaySink&) = delete;

private:  friend class PlaySink_Class;
  static CppClassType playsink_class_;

protected:
  explicit PlaySink(const Glib::ConstructParams& construct_params);
  explicit PlaySink(GstPlaySink* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  PlaySink(PlaySink&& src) noexcept;
  PlaySink& operator=(PlaySink&& src) noexcept;

  ~PlaySink() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstPlaySink*       gobj()       { return reinterpret_cast<GstPlaySink*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstPlaySink* gobj() const { return reinterpret_cast<GstPlaySink*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstPlaySink* gobj_copy();

private:

  
protected:
  PlaySink();
  explicit PlaySink(const Glib::ustring& name);

public:
  /** Creates a new playsink plugin with a unique name.
   */
  
  static Glib::RefPtr<PlaySink> create();


  /** Creates a new playsink plugin with the given name.
   */
  
  static Glib::RefPtr<PlaySink> create(const Glib::ustring& name);


  /** This is a convenience method for the action signal
   * signal_reconfigure().
   */
  bool reconfigure();

  /** This is a convenience method for the action signal
   * signal_convert_sample().
   */
  Glib::RefPtr<Gst::Sample> convert_sample(const Glib::RefPtr<Gst::Caps>& arg0);


  /** Flags to control behaviour.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::PlayFlags > property_flags() ;

/** Flags to control behaviour.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::PlayFlags > property_flags() const;

  /** Mute the audio channel without changing the volume.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_mute() ;

/** Mute the audio channel without changing the volume.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_mute() const;

  /** The audio volume, 1.0=100%.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_volume() ;

/** The audio volume, 1.0=100%.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_volume() const;

  /** Pango font description of font to be used for subtitle rendering.
   *
   * @return A PropertyProxy_WriteOnly that allows you to set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_WriteOnly< Glib::ustring > property_subtitle_font_desc() ;


  /** Encoding to assume if input subtitles are not in UTF-8 encoding. If not set, the GST_SUBTITLE_ENCODING environment variable will be checked for an encoding to use. If that is not set either, ISO-8859-15 will be assumed.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_subtitle_encoding() ;

/** Encoding to assume if input subtitles are not in UTF-8 encoding. If not set, the GST_SUBTITLE_ENCODING environment variable will be checked for an encoding to use. If that is not set either, ISO-8859-15 will be assumed.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_subtitle_encoding() const;

  /** the visualization element to use (NULL = default).
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gst::Element> > property_vis_plugin() ;

/** the visualization element to use (NULL = default).
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Element> > property_vis_plugin() const;

  /** The last sample (NULL = no video available).
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Sample> > property_sample() const;


  /** The synchronisation offset between audio and video in nanoseconds.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< gint64 > property_av_offset() ;

/** The synchronisation offset between audio and video in nanoseconds.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< gint64 > property_av_offset() const;

  /** the video output element to use (NULL = default sink).
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gst::Element> > property_video_sink() ;

/** the video output element to use (NULL = default sink).
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Element> > property_video_sink() const;

  /** the audio output element to use (NULL = default sink).
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gst::Element> > property_audio_sink() ;

/** the audio output element to use (NULL = default sink).
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Element> > property_audio_sink() const;

  /** the text output element to use (NULL = default subtitleoverlay).
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gst::Element> > property_text_sink() ;

/** the text output element to use (NULL = default subtitleoverlay).
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Element> > property_text_sink() const;

  /** How to send events received in send_event function.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::PlaySinkSendEventMode > property_send_event_mode() ;

/** How to send events received in send_event function.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::PlaySinkSendEventMode > property_send_event_mode() const;

  /** When enabled, scaling will respect original aspect ratio.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_force_aspect_ratio() ;

/** When enabled, scaling will respect original aspect ratio.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_force_aspect_ratio() const;

  /** the video filter(s) to apply, if possible.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gst::Element> > property_video_filter() ;

/** the video filter(s) to apply, if possible.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Element> > property_video_filter() const;

  /** the audio filter(s) to apply, if possible.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gst::Element> > property_audio_filter() ;

/** the audio filter(s) to apply, if possible.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Element> > property_audio_filter() const;


  /** This is an action signal which is designed to be used as a method.  To 
   * do that, use its convenience method, reconfigure().
   *
   * @par Slot Prototype:
   * <tt>bool on_my_%reconfigure()</tt>
   *
   */

  Glib::SignalProxy< bool > signal_reconfigure();


  /** This is an action signal which is designed to be used as a method.  To 
   * do that, use its convenience method, convert_sample().
   *
   * @par Slot Prototype:
   * <tt>Glib::RefPtr<Gst::Sample> on_my_%convert_sample(const Glib::RefPtr<Gst::Caps>& arg0)</tt>
   *
   */

  Glib::SignalProxy< Glib::RefPtr<Gst::Sample>,const Glib::RefPtr<Gst::Caps>& > signal_convert_sample();


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
   * @relates Gst::PlaySink
   */
  Glib::RefPtr<Gst::PlaySink> wrap(GstPlaySink* object, bool take_copy = false);
}


#endif // GSTREAMERMM_DISABLE_DEPRECATED


#endif /* _GSTREAMERMM_PLAYSINK_H */
