// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_VIDEOFORMAT_H
#define _GSTREAMERMM_VIDEOFORMAT_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2008-2015 The gstreamermm Development Team
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

#include <gst/video/video-format.h>


namespace Gst
{
  /** @addtogroup gstreamermmEnums gstreamermm Enums and Flags */

/** 
 *
 * @ingroup gstreamermmEnums
 */
enum VideoFormat
{
  VIDEO_FORMAT_UNKNOWN,
  VIDEO_FORMAT_ENCODED,
  VIDEO_FORMAT_I420,
  VIDEO_FORMAT_YV12,
  VIDEO_FORMAT_YUY2,
  VIDEO_FORMAT_UYVY,
  VIDEO_FORMAT_AYUV,
  VIDEO_FORMAT_RGBx,
  VIDEO_FORMAT_BGRx,
  VIDEO_FORMAT_xRGB,
  VIDEO_FORMAT_xBGR,
  VIDEO_FORMAT_RGBA,
  VIDEO_FORMAT_BGRA,
  VIDEO_FORMAT_ARGB,
  VIDEO_FORMAT_ABGR,
  VIDEO_FORMAT_RGB,
  VIDEO_FORMAT_BGR,
  VIDEO_FORMAT_Y41B,
  VIDEO_FORMAT_Y42B,
  VIDEO_FORMAT_YVYU,
  VIDEO_FORMAT_Y444,
  VIDEO_FORMAT_v210,
  VIDEO_FORMAT_v216,
  VIDEO_FORMAT_NV12,
  VIDEO_FORMAT_NV21,
  VIDEO_FORMAT_GRAY8,
  VIDEO_FORMAT_GRAY16_BE,
  VIDEO_FORMAT_GRAY16_LE,
  VIDEO_FORMAT_v308,
  VIDEO_FORMAT_RGB16,
  VIDEO_FORMAT_BGR16,
  VIDEO_FORMAT_RGB15,
  VIDEO_FORMAT_BGR15,
  VIDEO_FORMAT_UYVP,
  VIDEO_FORMAT_A420,
  VIDEO_FORMAT_RGB8P,
  VIDEO_FORMAT_YUV9,
  VIDEO_FORMAT_YVU9,
  VIDEO_FORMAT_IYU1,
  VIDEO_FORMAT_ARGB64,
  VIDEO_FORMAT_AYUV64,
  VIDEO_FORMAT_r210,
  VIDEO_FORMAT_I420_10BE,
  VIDEO_FORMAT_I420_10LE,
  VIDEO_FORMAT_I422_10BE,
  VIDEO_FORMAT_I422_10LE,
  VIDEO_FORMAT_Y444_10BE,
  VIDEO_FORMAT_Y444_10LE,
  VIDEO_FORMAT_GBR,
  VIDEO_FORMAT_GBR_10BE,
  VIDEO_FORMAT_GBR_10LE,
  VIDEO_FORMAT_NV16,
  VIDEO_FORMAT_NV24,
  VIDEO_FORMAT_NV12_64Z32,
  VIDEO_FORMAT_A420_10BE,
  VIDEO_FORMAT_A420_10LE,
  VIDEO_FORMAT_A422_10BE,
  VIDEO_FORMAT_A422_10LE,
  VIDEO_FORMAT_A444_10BE,
  VIDEO_FORMAT_A444_10LE,
  VIDEO_FORMAT_NV61
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::VideoFormat> : public Glib::Value_Enum<Gst::VideoFormat>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{

  /** 
 *  @var VideoFormatFlags VIDEO_FORMAT_FLAG_YUV
 * The video format is YUV, components are numbered
 * 0=Y, 1=U, 2=V.
 * 
 *  @var VideoFormatFlags VIDEO_FORMAT_FLAG_RGB
 * The video format is RGB, components are numbered
 * 0=R, 1=G, 2=B.
 * 
 *  @var VideoFormatFlags VIDEO_FORMAT_FLAG_GRAY
 * The video is gray, there is one gray component
 * with index 0.
 * 
 *  @var VideoFormatFlags VIDEO_FORMAT_FLAG_ALPHA
 * The video format has an alpha components with
 * the number 3.
 * 
 *  @var VideoFormatFlags VIDEO_FORMAT_FLAG_LE
 * The video format has data stored in little
 * endianness.
 * 
 *  @var VideoFormatFlags VIDEO_FORMAT_FLAG_PALETTE
 * The video format has a palette. The palette
 * is stored in the second plane and indexes are stored in the first plane.
 * 
 *  @var VideoFormatFlags VIDEO_FORMAT_FLAG_COMPLEX
 * The video format has a complex layout that
 * can't be described with the usual information in the Gst::VideoFormatInfo.
 * 
 *  @var VideoFormatFlags VIDEO_FORMAT_FLAG_UNPACK
 * This format can be used in a
 * Gst::VideoFormatUnpack and Gst::VideoFormatPack function.
 * 
 *  @var VideoFormatFlags VIDEO_FORMAT_FLAG_TILED
 * The format is tiled, there is tiling information
 * in the last plane.
 * 
 *  @enum VideoFormatFlags
 * 
 * The different video flags that a format info can have.
 *
 * @ingroup gstreamermmEnums
 * @par Bitwise operators:
 * <tt>%VideoFormatFlags operator|(VideoFormatFlags, VideoFormatFlags)</tt><br>
 * <tt>%VideoFormatFlags operator&(VideoFormatFlags, VideoFormatFlags)</tt><br>
 * <tt>%VideoFormatFlags operator^(VideoFormatFlags, VideoFormatFlags)</tt><br>
 * <tt>%VideoFormatFlags operator~(VideoFormatFlags)</tt><br>
 * <tt>%VideoFormatFlags& operator|=(VideoFormatFlags&, VideoFormatFlags)</tt><br>
 * <tt>%VideoFormatFlags& operator&=(VideoFormatFlags&, VideoFormatFlags)</tt><br>
 * <tt>%VideoFormatFlags& operator^=(VideoFormatFlags&, VideoFormatFlags)</tt><br>
 */
enum VideoFormatFlags
{
  VIDEO_FORMAT_FLAG_YUV = (1 << 0),
  VIDEO_FORMAT_FLAG_RGB = (1 << 1),
  VIDEO_FORMAT_FLAG_GRAY = (1 << 2),
  VIDEO_FORMAT_FLAG_ALPHA = (1 << 3),
  VIDEO_FORMAT_FLAG_LE = (1 << 4),
  VIDEO_FORMAT_FLAG_PALETTE = (1 << 5),
  VIDEO_FORMAT_FLAG_COMPLEX = (1 << 6),
  VIDEO_FORMAT_FLAG_UNPACK = (1 << 7),
  VIDEO_FORMAT_FLAG_TILED = (1 << 8)
};

/** @ingroup gstreamermmEnums */
inline VideoFormatFlags operator|(VideoFormatFlags lhs, VideoFormatFlags rhs)
  { return static_cast<VideoFormatFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline VideoFormatFlags operator&(VideoFormatFlags lhs, VideoFormatFlags rhs)
  { return static_cast<VideoFormatFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline VideoFormatFlags operator^(VideoFormatFlags lhs, VideoFormatFlags rhs)
  { return static_cast<VideoFormatFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline VideoFormatFlags operator~(VideoFormatFlags flags)
  { return static_cast<VideoFormatFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup gstreamermmEnums */
inline VideoFormatFlags& operator|=(VideoFormatFlags& lhs, VideoFormatFlags rhs)
  { return (lhs = static_cast<VideoFormatFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline VideoFormatFlags& operator&=(VideoFormatFlags& lhs, VideoFormatFlags rhs)
  { return (lhs = static_cast<VideoFormatFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline VideoFormatFlags& operator^=(VideoFormatFlags& lhs, VideoFormatFlags rhs)
  { return (lhs = static_cast<VideoFormatFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::VideoFormatFlags> : public Glib::Value_Flags<Gst::VideoFormatFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{

  /** 
 *  @var VideoPackFlags VIDEO_PACK_FLAG_NONE
 * No flag.
 * 
 *  @var VideoPackFlags VIDEO_PACK_FLAG_TRUNCATE_RANGE
 * When the source has a smaller depth
 * than the target format, set the least significant bits of the target
 * to 0. This is likely sightly faster but less accurate. When this flag
 * is not specified, the most significant bits of the source are duplicated
 * in the least significant bits of the destination.
 * 
 *  @var VideoPackFlags VIDEO_PACK_FLAG_INTERLACED
 * The source is interlaced. The unpacked
 * format will be interlaced as well with each line containing
 * information from alternating fields. (Since 1.2).
 * 
 *  @enum VideoPackFlags
 * 
 * The different flags that can be used when packing and unpacking.
 *
 * @ingroup gstreamermmEnums
 * @par Bitwise operators:
 * <tt>%VideoPackFlags operator|(VideoPackFlags, VideoPackFlags)</tt><br>
 * <tt>%VideoPackFlags operator&(VideoPackFlags, VideoPackFlags)</tt><br>
 * <tt>%VideoPackFlags operator^(VideoPackFlags, VideoPackFlags)</tt><br>
 * <tt>%VideoPackFlags operator~(VideoPackFlags)</tt><br>
 * <tt>%VideoPackFlags& operator|=(VideoPackFlags&, VideoPackFlags)</tt><br>
 * <tt>%VideoPackFlags& operator&=(VideoPackFlags&, VideoPackFlags)</tt><br>
 * <tt>%VideoPackFlags& operator^=(VideoPackFlags&, VideoPackFlags)</tt><br>
 */
enum VideoPackFlags
{
  VIDEO_PACK_FLAG_NONE = 0x0,
  VIDEO_PACK_FLAG_TRUNCATE_RANGE = (1 << 0),
  VIDEO_PACK_FLAG_INTERLACED = (1 << 1)
};

/** @ingroup gstreamermmEnums */
inline VideoPackFlags operator|(VideoPackFlags lhs, VideoPackFlags rhs)
  { return static_cast<VideoPackFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline VideoPackFlags operator&(VideoPackFlags lhs, VideoPackFlags rhs)
  { return static_cast<VideoPackFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline VideoPackFlags operator^(VideoPackFlags lhs, VideoPackFlags rhs)
  { return static_cast<VideoPackFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline VideoPackFlags operator~(VideoPackFlags flags)
  { return static_cast<VideoPackFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup gstreamermmEnums */
inline VideoPackFlags& operator|=(VideoPackFlags& lhs, VideoPackFlags rhs)
  { return (lhs = static_cast<VideoPackFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline VideoPackFlags& operator&=(VideoPackFlags& lhs, VideoPackFlags rhs)
  { return (lhs = static_cast<VideoPackFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline VideoPackFlags& operator^=(VideoPackFlags& lhs, VideoPackFlags rhs)
  { return (lhs = static_cast<VideoPackFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::VideoPackFlags> : public Glib::Value_Flags<Gst::VideoPackFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{

  
/**
 * Information for a video format.
 */
class VideoFormatInfo
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = VideoFormatInfo;
  using BaseObjectType = GstVideoFormatInfo;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:

  
public:
  explicit VideoFormatInfo(const GstVideoFormatInfo* castitem);
  virtual ~VideoFormatInfo();
  
  const GstVideoFormatInfo* gobj() const { return gobj_; };

  VideoFormat get_format() const;
  
  Glib::ustring get_name() const;
  
  Glib::ustring get_description() const;
  
  VideoFormatFlags get_flags() const;
  
  guint get_bits() const;
  
  guint get_n_components() const;
  
  guint get_n_planes() const;
  
  VideoFormat get_unpack_format() const;
  
  gint get_pack_lines() const;
  
protected:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  const GstVideoFormatInfo* gobj_;
#endif


};
}


#endif /* _GSTREAMERMM_VIDEOFORMAT_H */

