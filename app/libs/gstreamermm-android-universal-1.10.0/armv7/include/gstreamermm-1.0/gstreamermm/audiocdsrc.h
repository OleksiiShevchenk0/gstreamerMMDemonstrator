// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_AUDIOCDSRC_H
#define _GSTREAMERMM_AUDIOCDSRC_H


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
 
#include <gst/audio/gstaudiocdsrc.h>
#include <gstreamermm/pushsrc.h>
#include <gstreamermm/taglist.h>
#include <glibmm/arrayhandle.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstAudioCdSrc = struct _GstAudioCdSrc;
using GstAudioCdSrcClass = struct _GstAudioCdSrcClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class AudioCdSrc_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** @addtogroup gstreamermmEnums gstreamermm Enums and Flags */

/** 
 *  @var AudioCdSrcMode AUDIO_CD_SRC_MODE_NORMAL
 * Each single track is a stream.
 * 
 *  @var AudioCdSrcMode AUDIO_CD_SRC_MODE_CONTINUOUS
 * The entire disc is a single stream.
 * 
 *  @enum AudioCdSrcMode
 * 
 * Mode in which the CD audio source operates. Influences timestamping,
 * EOS handling and seeking.
 *
 * @ingroup gstreamermmEnums
 */
enum AudioCdSrcMode
{
  AUDIO_CD_SRC_MODE_NORMAL,
  AUDIO_CD_SRC_MODE_CONTINUOUS
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::AudioCdSrcMode> : public Glib::Value_Enum<Gst::AudioCdSrcMode>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** A base class for CD digital audio (CDDA) sources, which handles
 * things like seeking, querying, discid calculation, tags, and buffer
 * timestamping.
 *
 * Gst::AudioCdSrc registers two Gst::Formats of its own, namely the
 * "track" format and the "sector" format. Applications will usually only find
 * the "track" format interesting. You can retrieve that Gst::Format for use in
 * seek events or queries with Gst::get_format("track").
 *
 * In order to query the number of tracks, for example, an application would
 * set the CDDA source element to READY or PAUSED state and then query the the
 * number of tracks via Gst::Element::query_duration() using the track format
 * acquired above. Applications can query the currently playing track in the
 * same way.
 *
 * Alternatively, applications may retrieve the currently playing track and the
 * total number of tracks from the taglist that will be posted on the bus
 * whenever the CD is opened or the currently playing track changes. The
 * taglist will contain Gst::TAG_TRACK_NUMBER and Gst::TAG_TRACK_COUNT tags.
 *
 * Applications playing back CD audio using playbin and cdda://n URIs should
 * issue a seek command in track format to change between tracks, rather than
 * setting a new cdda://n+1 URI on playbin (as setting a new URI on playbin
 * involves closing and re-opening the CD device, which is much much slower).
 *
 * CDDA sources will automatically emit a number of tags, details about which
 * can be found in the libgsttag documentation. Those tags are:
 * Gst::TAG_CDDA_CDDB_DISCID, Gst::TAG_CDDA_CDDB_DISCID_FULL,
 * Gst::TAG_CDDA_MUSICBRAINZ_DISCID, Gst::TAG_CDDA_MUSICBRAINZ_DISCID_FULL,
 * among others.
 *
 * Applications will be informed of the available tracks via a TOC message
 * on the pipeline's Gst::Bus. The Gst::Toc will contain a Gst::TocEntry for
 * each track, with information about each track. The duration for each
 * track can be retrieved via the Gst::TAG_DURATION tag from each entry's
 * tag list, or calculated via Gst::TocEntry::get_start_stop_times().
 * The track entries in the TOC will be sorted by track number.
 *
 * Last reviewed on 2016-05-16 (1.8.0)
 *
 * @ingroup GstBaseClasses
 */

class AudioCdSrc : public Gst::PushSrc
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = AudioCdSrc;
  using CppClassType = AudioCdSrc_Class;
  using BaseObjectType = GstAudioCdSrc;
  using BaseClassType = GstAudioCdSrcClass;

  // noncopyable
  AudioCdSrc(const AudioCdSrc&) = delete;
  AudioCdSrc& operator=(const AudioCdSrc&) = delete;

private:  friend class AudioCdSrc_Class;
  static CppClassType audiocdsrc_class_;

protected:
  explicit AudioCdSrc(const Glib::ConstructParams& construct_params);
  explicit AudioCdSrc(GstAudioCdSrc* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  AudioCdSrc(AudioCdSrc&& src) noexcept;
  AudioCdSrc& operator=(AudioCdSrc&& src) noexcept;

  ~AudioCdSrc() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstAudioCdSrc*       gobj()       { return reinterpret_cast<GstAudioCdSrc*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstAudioCdSrc* gobj() const { return reinterpret_cast<GstAudioCdSrc*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstAudioCdSrc* gobj_copy();

private:


public:
  /** CDDA sources use this function from their start vfunc to announce the
   * available data and audio tracks to the base source class.
   *
   * @param num Track number in TOC (usually starts from 1, but not always).
   * @param start The first sector of the track (LBA).
   * @param end The last sector of the track (LBA).
   * @param is_audio Whether this is an audio track.
   * @param tags Track-specific tags (e.g. from cd-text information).
   * @return false on error, otherwise true.
   */
  bool add_track(guint num, guint start, guint end, bool is_audio = true,
    const Gst::TagList& tags = Gst::TagList());
  

  /** CD device location.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< std::string > property_device() ;

/** CD device location.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< std::string > property_device() const;

  /** Mode.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< AudioCdSrcMode > property_mode() ;

/** Mode.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< AudioCdSrcMode > property_mode() const;

  /** Track.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_track() ;

/** Track.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_track() const;


  /** Virtual function to open a CD device.
   */
    virtual bool open_vfunc(const std::string& device);


  /** Virtual function to close the device.
   */
    virtual void close_vfunc();


  /** Virtual function to read one sector (LBA).
   */
    virtual Glib::RefPtr<Gst::Buffer> read_sector_vfunc(gint sector);


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
   * @relates Gst::AudioCdSrc
   */
  Glib::RefPtr<Gst::AudioCdSrc> wrap(GstAudioCdSrc* object, bool take_copy = false);
}


#endif /* _GSTREAMERMM_AUDIOCDSRC_H */
