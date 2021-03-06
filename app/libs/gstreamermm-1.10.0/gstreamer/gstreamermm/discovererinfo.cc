// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/discovererinfo.h>
#include <gstreamermm/private/discovererinfo_p.h>


/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2011-2016 gstreamermm Development Team
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

#include <gstreamermm/caps.h>
#include <gstreamermm/structure.h>
#include <gstreamermm/taglist.h>
#include <gstreamermm/toc.h>
#include <gobject/gobject.h>
#include <gst/pbutils/pbutils.h>


namespace Gst
{

static GstDiscovererInfo *
gst_discoverer_info_new (void)
{
  return (GstDiscovererInfo *) g_object_new (GST_TYPE_DISCOVERER_INFO, nullptr);
}
}

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::DiscovererResult>::value_type()
{
  return gst_discoverer_result_get_type();
}

// static
GType Glib::Value<Gst::DiscovererSerializeFlags>::value_type()
{
  return gst_discoverer_serialize_flags_get_type();
}


/* Why reinterpret_cast<DiscovererInfo*>(gobject) is needed:
 *
 * A DiscovererInfo instance is in fact always a GstDiscovererInfo instance.
 * Unfortunately, GstDiscovererInfo cannot be a member of DiscovererInfo,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because DiscovererInfo does not have any member data, and
 * it is impossible to derive from it.  This is ensured by using final on the
 * class and by using = delete on the default constructor.
 */

namespace Glib
{

Glib::RefPtr<Gst::DiscovererInfo> wrap(GstDiscovererInfo* object, bool take_copy)
{
  if(take_copy && object)
    g_object_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gst::DiscovererInfo>(reinterpret_cast<Gst::DiscovererInfo*>(object));
}

} // namespace Glib


namespace Gst
{


// static
Glib::RefPtr<DiscovererInfo> DiscovererInfo::create()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<DiscovererInfo>(reinterpret_cast<DiscovererInfo*>(gst_discoverer_info_new()));
}

void DiscovererInfo::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  g_object_ref(reinterpret_cast<GstDiscovererInfo*>(const_cast<DiscovererInfo*>(this)));
}

void DiscovererInfo::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gst_discoverer_info_unref(reinterpret_cast<GstDiscovererInfo*>(const_cast<DiscovererInfo*>(this)));
}

GstDiscovererInfo* DiscovererInfo::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GstDiscovererInfo*>(this);
}

const GstDiscovererInfo* DiscovererInfo::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GstDiscovererInfo*>(this);
}

GstDiscovererInfo* DiscovererInfo::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  const auto gobject = reinterpret_cast<GstDiscovererInfo*>(const_cast<DiscovererInfo*>(this));
  g_object_ref(gobject);
  return gobject;
}


Glib::RefPtr<Gst::DiscovererInfo> DiscovererInfo::copy() const
{
  return Glib::wrap(gst_discoverer_info_copy(const_cast<GstDiscovererInfo*>(gobj())));
}

ClockTime DiscovererInfo::get_duration() const
{
  return ((ClockTime)(gst_discoverer_info_get_duration(const_cast<GstDiscovererInfo*>(gobj()))));
}

Structure DiscovererInfo::get_misc() const
{
  return Glib::wrap(const_cast<GstStructure*>(gst_discoverer_info_get_misc(const_cast<GstDiscovererInfo*>(gobj()))), true);
}

DiscovererResult DiscovererInfo::get_result() const
{
  return ((DiscovererResult)(gst_discoverer_info_get_result(const_cast<GstDiscovererInfo*>(gobj()))));
}

Glib::RefPtr<Gst::DiscovererStreamInfo> DiscovererInfo::get_stream_info()
{
  return Glib::wrap(gst_discoverer_info_get_stream_info(gobj()));
}

Glib::RefPtr<const Gst::DiscovererStreamInfo> DiscovererInfo::get_stream_info() const
{
  return const_cast<DiscovererInfo*>(this)->get_stream_info();
}

std::vector< Glib::RefPtr<Gst::DiscovererStreamInfo> > DiscovererInfo::get_stream_list()
{
  return Glib::ListHandler< Glib::RefPtr<Gst::DiscovererStreamInfo> >::list_to_vector(const_cast<GList*>(gst_discoverer_info_get_stream_list(gobj())), Glib::OWNERSHIP_DEEP);
}

std::vector< Glib::RefPtr<const Gst::DiscovererStreamInfo> > DiscovererInfo::get_stream_list() const
{
  return Glib::ListHandler< Glib::RefPtr<const Gst::DiscovererStreamInfo> >::list_to_vector(const_cast<GList*>(gst_discoverer_info_get_stream_list(const_cast<GstDiscovererInfo*>(gobj()))), Glib::OWNERSHIP_DEEP);
}

Gst::TagList DiscovererInfo::get_tags() const
{
  return Glib::wrap_taglist(const_cast<GstTagList*>(gst_discoverer_info_get_tags(const_cast<GstDiscovererInfo*>(gobj()))), true);
}

Glib::ustring DiscovererInfo::get_uri() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_discoverer_info_get_uri(const_cast<GstDiscovererInfo*>(gobj())));
}

bool DiscovererInfo::get_seekable() const
{
  return gst_discoverer_info_get_seekable(const_cast<GstDiscovererInfo*>(gobj()));
}

std::vector< Glib::RefPtr<Gst::DiscovererStreamInfo> > DiscovererInfo::get_audio_streams()
{
  return Glib::ListHandler< Glib::RefPtr<Gst::DiscovererStreamInfo> >::list_to_vector(const_cast<GList*>(gst_discoverer_info_get_audio_streams(gobj())), Glib::OWNERSHIP_DEEP);
}

std::vector< Glib::RefPtr<const Gst::DiscovererStreamInfo> > DiscovererInfo::get_audio_streams() const
{
  return Glib::ListHandler< Glib::RefPtr<const Gst::DiscovererStreamInfo> >::list_to_vector(const_cast<GList*>(gst_discoverer_info_get_audio_streams(const_cast<GstDiscovererInfo*>(gobj()))), Glib::OWNERSHIP_DEEP);
}

std::vector< Glib::RefPtr<Gst::DiscovererStreamInfo> > DiscovererInfo::get_container_streams()
{
  return Glib::ListHandler< Glib::RefPtr<Gst::DiscovererStreamInfo> >::list_to_vector(const_cast<GList*>(gst_discoverer_info_get_container_streams(gobj())), Glib::OWNERSHIP_DEEP);
}

std::vector< Glib::RefPtr<const Gst::DiscovererStreamInfo> > DiscovererInfo::get_container_streams() const
{
  return Glib::ListHandler< Glib::RefPtr<const Gst::DiscovererStreamInfo> >::list_to_vector(const_cast<GList*>(gst_discoverer_info_get_container_streams(const_cast<GstDiscovererInfo*>(gobj()))), Glib::OWNERSHIP_DEEP);
}

std::vector< Glib::RefPtr<Gst::DiscovererStreamInfo> > DiscovererInfo::get_streams(GType streamtype)
{
  return Glib::ListHandler< Glib::RefPtr<Gst::DiscovererStreamInfo> >::list_to_vector(const_cast<GList*>(gst_discoverer_info_get_streams(gobj(), streamtype)), Glib::OWNERSHIP_DEEP);
}

std::vector< Glib::RefPtr<const Gst::DiscovererStreamInfo> > DiscovererInfo::get_streams(GType streamtype) const
{
  return Glib::ListHandler< Glib::RefPtr<const Gst::DiscovererStreamInfo> >::list_to_vector(const_cast<GList*>(gst_discoverer_info_get_streams(const_cast<GstDiscovererInfo*>(gobj()), streamtype)), Glib::OWNERSHIP_DEEP);
}

std::vector< Glib::RefPtr<Gst::DiscovererStreamInfo> > DiscovererInfo::get_video_streams()
{
  return Glib::ListHandler< Glib::RefPtr<Gst::DiscovererStreamInfo> >::list_to_vector(const_cast<GList*>(gst_discoverer_info_get_video_streams(gobj())), Glib::OWNERSHIP_DEEP);
}

std::vector< Glib::RefPtr<const Gst::DiscovererStreamInfo> > DiscovererInfo::get_video_streams() const
{
  return Glib::ListHandler< Glib::RefPtr<const Gst::DiscovererStreamInfo> >::list_to_vector(const_cast<GList*>(gst_discoverer_info_get_video_streams(const_cast<GstDiscovererInfo*>(gobj()))), Glib::OWNERSHIP_DEEP);
}

std::vector< Glib::RefPtr<Gst::DiscovererStreamInfo> > DiscovererInfo::get_subtitle_streams()
{
  return Glib::ListHandler< Glib::RefPtr<Gst::DiscovererStreamInfo> >::list_to_vector(const_cast<GList*>(gst_discoverer_info_get_subtitle_streams(gobj())), Glib::OWNERSHIP_DEEP);
}

std::vector< Glib::RefPtr<const Gst::DiscovererStreamInfo> > DiscovererInfo::get_subtitle_streams() const
{
  return Glib::ListHandler< Glib::RefPtr<const Gst::DiscovererStreamInfo> >::list_to_vector(const_cast<GList*>(gst_discoverer_info_get_subtitle_streams(const_cast<GstDiscovererInfo*>(gobj()))), Glib::OWNERSHIP_DEEP);
}

std::vector<Glib::ustring> DiscovererInfo::get_missing_elements_installer_details() const
{
  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(gst_discoverer_info_get_missing_elements_installer_details(const_cast<GstDiscovererInfo*>(gobj())), Glib::OWNERSHIP_DEEP);
}

Glib::RefPtr<const Gst::Toc> DiscovererInfo::get_toc() const
{
  return Glib::wrap(const_cast<GstToc*>(gst_discoverer_info_get_toc(const_cast<GstDiscovererInfo*>(gobj()))));
}


} // namespace Gst


/* Why reinterpret_cast<DiscovererStreamInfo*>(gobject) is needed:
 *
 * A DiscovererStreamInfo instance is in fact always a GstDiscovererStreamInfo instance.
 * Unfortunately, GstDiscovererStreamInfo cannot be a member of DiscovererStreamInfo,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because DiscovererStreamInfo does not have any member data, and
 * it is impossible to derive from it.  This is ensured by using final on the
 * class and by using = delete on the default constructor.
 */

namespace Glib
{

Glib::RefPtr<Gst::DiscovererStreamInfo> wrap(GstDiscovererStreamInfo* object, bool take_copy)
{
  if(take_copy && object)
    gst_discoverer_stream_info_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gst::DiscovererStreamInfo>(reinterpret_cast<Gst::DiscovererStreamInfo*>(object));
}

} // namespace Glib


namespace Gst
{


void DiscovererStreamInfo::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gst_discoverer_stream_info_ref(reinterpret_cast<GstDiscovererStreamInfo*>(const_cast<DiscovererStreamInfo*>(this)));
}

void DiscovererStreamInfo::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gst_discoverer_stream_info_unref(reinterpret_cast<GstDiscovererStreamInfo*>(const_cast<DiscovererStreamInfo*>(this)));
}

GstDiscovererStreamInfo* DiscovererStreamInfo::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GstDiscovererStreamInfo*>(this);
}

const GstDiscovererStreamInfo* DiscovererStreamInfo::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GstDiscovererStreamInfo*>(this);
}

GstDiscovererStreamInfo* DiscovererStreamInfo::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  const auto gobject = reinterpret_cast<GstDiscovererStreamInfo*>(const_cast<DiscovererStreamInfo*>(this));
  gst_discoverer_stream_info_ref(gobject);
  return gobject;
}

Glib::RefPtr<Gst::Caps> DiscovererStreamInfo::get_caps()
{
  return Glib::wrap(gst_discoverer_stream_info_get_caps(gobj()));
}

Glib::RefPtr<const Gst::Caps> DiscovererStreamInfo::get_caps() const
{
  return const_cast<DiscovererStreamInfo*>(this)->get_caps();
}

Structure DiscovererStreamInfo::get_misc() const
{
  return Glib::wrap(const_cast<GstStructure*>(gst_discoverer_stream_info_get_misc(const_cast<GstDiscovererStreamInfo*>(gobj()))), true);
}

Glib::RefPtr<Gst::DiscovererStreamInfo> DiscovererStreamInfo::get_next()
{
  return Glib::wrap(gst_discoverer_stream_info_get_next(gobj()));
}

Glib::RefPtr<const Gst::DiscovererStreamInfo> DiscovererStreamInfo::get_next() const
{
  return const_cast<DiscovererStreamInfo*>(this)->get_next();
}

Glib::RefPtr<Gst::DiscovererStreamInfo> DiscovererStreamInfo::get_previous()
{
  return Glib::wrap(gst_discoverer_stream_info_get_previous(gobj()));
}

Glib::RefPtr<Gst::DiscovererStreamInfo> DiscovererStreamInfo::get_previous() const
{
  return const_cast<DiscovererStreamInfo*>(this)->get_previous();
}

Gst::TagList DiscovererStreamInfo::get_tags() const
{
  return Glib::wrap_taglist(const_cast<GstTagList*>(gst_discoverer_stream_info_get_tags(const_cast<GstDiscovererStreamInfo*>(gobj()))), true);
}

Glib::ustring DiscovererStreamInfo::get_stream_type_nick() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_discoverer_stream_info_get_stream_type_nick(const_cast<GstDiscovererStreamInfo*>(gobj())));
}

Glib::ustring DiscovererStreamInfo::get_stream_id() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_discoverer_stream_info_get_stream_id(const_cast<GstDiscovererStreamInfo*>(gobj())));
}

Glib::RefPtr<const Gst::Toc> DiscovererStreamInfo::get_toc() const
{
  return Glib::wrap(const_cast<GstToc*>(gst_discoverer_stream_info_get_toc(const_cast<GstDiscovererStreamInfo*>(gobj()))));
}


} // namespace Gst


/* Why reinterpret_cast<DiscovererContainerInfo*>(gobject) is needed:
 *
 * A DiscovererContainerInfo instance is in fact always a GstDiscovererContainerInfo instance.
 * Unfortunately, GstDiscovererContainerInfo cannot be a member of DiscovererContainerInfo,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because DiscovererContainerInfo does not have any member data, and
 * it is impossible to derive from it.  This is ensured by using final on the
 * class and by using = delete on the default constructor.
 */

namespace Glib
{

Glib::RefPtr<Gst::DiscovererContainerInfo> wrap(GstDiscovererContainerInfo* object, bool take_copy)
{
  if(take_copy && object)
    gst_discoverer_stream_info_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gst::DiscovererContainerInfo>(reinterpret_cast<Gst::DiscovererContainerInfo*>(object));
}

} // namespace Glib


namespace Gst
{


void DiscovererContainerInfo::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gst_discoverer_stream_info_ref(reinterpret_cast<GstDiscovererContainerInfo*>(const_cast<DiscovererContainerInfo*>(this)));
}

void DiscovererContainerInfo::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gst_discoverer_stream_info_unref(reinterpret_cast<GstDiscovererContainerInfo*>(const_cast<DiscovererContainerInfo*>(this)));
}

GstDiscovererContainerInfo* DiscovererContainerInfo::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GstDiscovererContainerInfo*>(this);
}

const GstDiscovererContainerInfo* DiscovererContainerInfo::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GstDiscovererContainerInfo*>(this);
}

GstDiscovererContainerInfo* DiscovererContainerInfo::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  const auto gobject = reinterpret_cast<GstDiscovererContainerInfo*>(const_cast<DiscovererContainerInfo*>(this));
  gst_discoverer_stream_info_ref(gobject);
  return gobject;
}

std::vector< Glib::RefPtr<Gst::DiscovererStreamInfo> > DiscovererContainerInfo::get_streams()
{
  return Glib::ListHandler< Glib::RefPtr<Gst::DiscovererStreamInfo> >::list_to_vector(const_cast<GList*>(gst_discoverer_container_info_get_streams(gobj())), Glib::OWNERSHIP_DEEP);
}

std::vector< Glib::RefPtr<const Gst::DiscovererStreamInfo> > DiscovererContainerInfo::get_streams() const
{
  return Glib::ListHandler< Glib::RefPtr<const Gst::DiscovererStreamInfo> >::list_to_vector(const_cast<GList*>(gst_discoverer_container_info_get_streams(const_cast<GstDiscovererContainerInfo*>(gobj()))), Glib::OWNERSHIP_DEEP);
}


} // namespace Gst


/* Why reinterpret_cast<DiscovererAudioInfo*>(gobject) is needed:
 *
 * A DiscovererAudioInfo instance is in fact always a GstDiscovererAudioInfo instance.
 * Unfortunately, GstDiscovererAudioInfo cannot be a member of DiscovererAudioInfo,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because DiscovererAudioInfo does not have any member data, and
 * it is impossible to derive from it.  This is ensured by using final on the
 * class and by using = delete on the default constructor.
 */

namespace Glib
{

Glib::RefPtr<Gst::DiscovererAudioInfo> wrap(GstDiscovererAudioInfo* object, bool take_copy)
{
  if(take_copy && object)
    gst_discoverer_stream_info_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gst::DiscovererAudioInfo>(reinterpret_cast<Gst::DiscovererAudioInfo*>(object));
}

} // namespace Glib


namespace Gst
{


void DiscovererAudioInfo::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gst_discoverer_stream_info_ref(reinterpret_cast<GstDiscovererAudioInfo*>(const_cast<DiscovererAudioInfo*>(this)));
}

void DiscovererAudioInfo::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gst_discoverer_stream_info_unref(reinterpret_cast<GstDiscovererAudioInfo*>(const_cast<DiscovererAudioInfo*>(this)));
}

GstDiscovererAudioInfo* DiscovererAudioInfo::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GstDiscovererAudioInfo*>(this);
}

const GstDiscovererAudioInfo* DiscovererAudioInfo::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GstDiscovererAudioInfo*>(this);
}

GstDiscovererAudioInfo* DiscovererAudioInfo::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  const auto gobject = reinterpret_cast<GstDiscovererAudioInfo*>(const_cast<DiscovererAudioInfo*>(this));
  gst_discoverer_stream_info_ref(gobject);
  return gobject;
}

guint DiscovererAudioInfo::get_bitrate() const
{
  return gst_discoverer_audio_info_get_bitrate(const_cast<GstDiscovererAudioInfo*>(gobj()));
}

guint DiscovererAudioInfo::get_channels() const
{
  return gst_discoverer_audio_info_get_channels(const_cast<GstDiscovererAudioInfo*>(gobj()));
}

guint DiscovererAudioInfo::get_depth() const
{
  return gst_discoverer_audio_info_get_depth(const_cast<GstDiscovererAudioInfo*>(gobj()));
}

guint DiscovererAudioInfo::get_max_bitrate() const
{
  return gst_discoverer_audio_info_get_max_bitrate(const_cast<GstDiscovererAudioInfo*>(gobj()));
}

guint DiscovererAudioInfo::get_sample_rate() const
{
  return gst_discoverer_audio_info_get_sample_rate(const_cast<GstDiscovererAudioInfo*>(gobj()));
}

Glib::ustring DiscovererAudioInfo::get_language() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_discoverer_audio_info_get_language(const_cast<GstDiscovererAudioInfo*>(gobj())));
}


} // namespace Gst


/* Why reinterpret_cast<DiscovererVideoInfo*>(gobject) is needed:
 *
 * A DiscovererVideoInfo instance is in fact always a GstDiscovererVideoInfo instance.
 * Unfortunately, GstDiscovererVideoInfo cannot be a member of DiscovererVideoInfo,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because DiscovererVideoInfo does not have any member data, and
 * it is impossible to derive from it.  This is ensured by using final on the
 * class and by using = delete on the default constructor.
 */

namespace Glib
{

Glib::RefPtr<Gst::DiscovererVideoInfo> wrap(GstDiscovererVideoInfo* object, bool take_copy)
{
  if(take_copy && object)
    gst_discoverer_stream_info_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gst::DiscovererVideoInfo>(reinterpret_cast<Gst::DiscovererVideoInfo*>(object));
}

} // namespace Glib


namespace Gst
{


void DiscovererVideoInfo::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gst_discoverer_stream_info_ref(reinterpret_cast<GstDiscovererVideoInfo*>(const_cast<DiscovererVideoInfo*>(this)));
}

void DiscovererVideoInfo::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gst_discoverer_stream_info_unref(reinterpret_cast<GstDiscovererVideoInfo*>(const_cast<DiscovererVideoInfo*>(this)));
}

GstDiscovererVideoInfo* DiscovererVideoInfo::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GstDiscovererVideoInfo*>(this);
}

const GstDiscovererVideoInfo* DiscovererVideoInfo::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GstDiscovererVideoInfo*>(this);
}

GstDiscovererVideoInfo* DiscovererVideoInfo::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  const auto gobject = reinterpret_cast<GstDiscovererVideoInfo*>(const_cast<DiscovererVideoInfo*>(this));
  gst_discoverer_stream_info_ref(gobject);
  return gobject;
}

guint DiscovererVideoInfo::get_bitrate() const
{
  return gst_discoverer_video_info_get_bitrate(const_cast<GstDiscovererVideoInfo*>(gobj()));
}

guint DiscovererVideoInfo::get_depth() const
{
  return gst_discoverer_video_info_get_depth(const_cast<GstDiscovererVideoInfo*>(gobj()));
}

guint DiscovererVideoInfo::get_framerate_denom() const
{
  return gst_discoverer_video_info_get_framerate_denom(const_cast<GstDiscovererVideoInfo*>(gobj()));
}

guint DiscovererVideoInfo::get_framerate_num() const
{
  return gst_discoverer_video_info_get_framerate_num(const_cast<GstDiscovererVideoInfo*>(gobj()));
}

guint DiscovererVideoInfo::get_height() const
{
  return gst_discoverer_video_info_get_height(const_cast<GstDiscovererVideoInfo*>(gobj()));
}

bool DiscovererVideoInfo::is_interlaced() const
{
  return gst_discoverer_video_info_is_interlaced(const_cast<GstDiscovererVideoInfo*>(gobj()));
}

bool DiscovererVideoInfo::is_image() const
{
  return gst_discoverer_video_info_is_image(const_cast<GstDiscovererVideoInfo*>(gobj()));
}

guint DiscovererVideoInfo::get_max_bitrate() const
{
  return gst_discoverer_video_info_get_max_bitrate(const_cast<GstDiscovererVideoInfo*>(gobj()));
}

guint DiscovererVideoInfo::get_par_denom() const
{
  return gst_discoverer_video_info_get_par_denom(const_cast<GstDiscovererVideoInfo*>(gobj()));
}

guint DiscovererVideoInfo::get_par_num() const
{
  return gst_discoverer_video_info_get_par_num(const_cast<GstDiscovererVideoInfo*>(gobj()));
}

guint DiscovererVideoInfo::get_width() const
{
  return gst_discoverer_video_info_get_width(const_cast<GstDiscovererVideoInfo*>(gobj()));
}


} // namespace Gst


