// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_VIDEOFRAME_H
#define _GSTREAMERMM_VIDEOFRAME_H


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


#include <gst/video/video-frame.h>
#include <gstreamermm/videoinfo.h>
#include <gstreamermm/buffer.h>

namespace Gst
{

  /** @addtogroup gstreamermmEnums gstreamermm Enums and Flags */

/** 
 *  @var VideoFrameFlags VIDEO_FRAME_FLAG_NONE
 * No flags.
 * 
 *  @var VideoFrameFlags VIDEO_FRAME_FLAG_INTERLACED
 * The video frame is interlaced. In mixed
 * interlace-mode, this flag specifies if the frame is interlaced or
 * progressive.
 * 
 *  @var VideoFrameFlags VIDEO_FRAME_FLAG_TFF
 * The video frame has the top field first.
 * 
 *  @var VideoFrameFlags VIDEO_FRAME_FLAG_RFF
 * The video frame has the repeat flag.
 * 
 *  @var VideoFrameFlags VIDEO_FRAME_FLAG_ONEFIELD
 * The video frame has one field.
 * 
 *  @var VideoFrameFlags VIDEO_FRAME_FLAG_MULTIPLE_VIEW
 * The video contains one or
 * more non-mono views.
 * 
 *  @var VideoFrameFlags VIDEO_FRAME_FLAG_FIRST_IN_BUNDLE
 * The video frame is the first
 * in a set of corresponding views provided as sequential frames.
 * 
 *  @enum VideoFrameFlags
 * 
 * Extra video frame flags
 *
 * @ingroup gstreamermmEnums
 * @par Bitwise operators:
 * <tt>%VideoFrameFlags operator|(VideoFrameFlags, VideoFrameFlags)</tt><br>
 * <tt>%VideoFrameFlags operator&(VideoFrameFlags, VideoFrameFlags)</tt><br>
 * <tt>%VideoFrameFlags operator^(VideoFrameFlags, VideoFrameFlags)</tt><br>
 * <tt>%VideoFrameFlags operator~(VideoFrameFlags)</tt><br>
 * <tt>%VideoFrameFlags& operator|=(VideoFrameFlags&, VideoFrameFlags)</tt><br>
 * <tt>%VideoFrameFlags& operator&=(VideoFrameFlags&, VideoFrameFlags)</tt><br>
 * <tt>%VideoFrameFlags& operator^=(VideoFrameFlags&, VideoFrameFlags)</tt><br>
 */
enum VideoFrameFlags
{
  VIDEO_FRAME_FLAG_NONE = 0x0,
  VIDEO_FRAME_FLAG_INTERLACED = (1 << 0),
  VIDEO_FRAME_FLAG_TFF = (1 << 1),
  VIDEO_FRAME_FLAG_RFF = (1 << 2),
  VIDEO_FRAME_FLAG_ONEFIELD = (1 << 3),
  VIDEO_FRAME_FLAG_MULTIPLE_VIEW = (1 << 4),
  VIDEO_FRAME_FLAG_FIRST_IN_BUNDLE = (1 << 5)
};

/** @ingroup gstreamermmEnums */
inline VideoFrameFlags operator|(VideoFrameFlags lhs, VideoFrameFlags rhs)
  { return static_cast<VideoFrameFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline VideoFrameFlags operator&(VideoFrameFlags lhs, VideoFrameFlags rhs)
  { return static_cast<VideoFrameFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline VideoFrameFlags operator^(VideoFrameFlags lhs, VideoFrameFlags rhs)
  { return static_cast<VideoFrameFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline VideoFrameFlags operator~(VideoFrameFlags flags)
  { return static_cast<VideoFrameFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup gstreamermmEnums */
inline VideoFrameFlags& operator|=(VideoFrameFlags& lhs, VideoFrameFlags rhs)
  { return (lhs = static_cast<VideoFrameFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline VideoFrameFlags& operator&=(VideoFrameFlags& lhs, VideoFrameFlags rhs)
  { return (lhs = static_cast<VideoFrameFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline VideoFrameFlags& operator^=(VideoFrameFlags& lhs, VideoFrameFlags rhs)
  { return (lhs = static_cast<VideoFrameFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::VideoFrameFlags> : public Glib::Value_Flags<Gst::VideoFrameFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{

  /** 
 *  @var VideoBufferFlags VIDEO_BUFFER_FLAG_INTERLACED
 * If the Gst::Buffer is interlaced. In mixed
 * interlace-mode, this flags specifies if the frame is
 * interlaced or progressive.
 * 
 *  @var VideoBufferFlags VIDEO_BUFFER_FLAG_TFF
 * If the Gst::Buffer is interlaced, then the first field
 * in the video frame is the top field.  If unset, the
 * bottom field is first.
 * 
 *  @var VideoBufferFlags VIDEO_BUFFER_FLAG_RFF
 * If the Gst::Buffer is interlaced, then the first field
 * (as defined by the Gst::VIDEO_BUFFER_TFF flag setting)
 * is repeated.
 * 
 *  @var VideoBufferFlags VIDEO_BUFFER_FLAG_ONEFIELD
 * If the Gst::Buffer is interlaced, then only the
 * first field (as defined by the Gst::VIDEO_BUFFER_TFF
 * flag setting) is to be displayed.
 * 
 *  @var VideoBufferFlags VIDEO_BUFFER_FLAG_MULTIPLE_VIEW
 * The Gst::Buffer contains one or more specific views,
 * such as left or right eye view. This flags is set on
 * any buffer that contains non-mono content - even for
 * streams that contain only a single viewpoint. In mixed
 * mono / non-mono streams, the absense of the flag marks
 * mono buffers.
 * 
 *  @var VideoBufferFlags VIDEO_BUFFER_FLAG_FIRST_IN_BUNDLE
 * When conveying stereo/multiview content with
 * frame-by-frame methods, this flag marks the first buffer
 * in a bundle of frames that belong together.
 * 
 *  @var VideoBufferFlags VIDEO_BUFFER_FLAG_LAST
 * Offset to define more flags.
 * 
 *  @enum VideoBufferFlags
 * 
 * Additional video buffer flags. These flags can potentially be used on any
 * buffers carrying video data - even encoded data.
 *
 * @ingroup gstreamermmEnums
 * @par Bitwise operators:
 * <tt>%VideoBufferFlags operator|(VideoBufferFlags, VideoBufferFlags)</tt><br>
 * <tt>%VideoBufferFlags operator&(VideoBufferFlags, VideoBufferFlags)</tt><br>
 * <tt>%VideoBufferFlags operator^(VideoBufferFlags, VideoBufferFlags)</tt><br>
 * <tt>%VideoBufferFlags operator~(VideoBufferFlags)</tt><br>
 * <tt>%VideoBufferFlags& operator|=(VideoBufferFlags&, VideoBufferFlags)</tt><br>
 * <tt>%VideoBufferFlags& operator&=(VideoBufferFlags&, VideoBufferFlags)</tt><br>
 * <tt>%VideoBufferFlags& operator^=(VideoBufferFlags&, VideoBufferFlags)</tt><br>
 */
enum VideoBufferFlags
{
  VIDEO_BUFFER_FLAG_INTERLACED = (GST_BUFFER_FLAG_LAST << 0),
  VIDEO_BUFFER_FLAG_TFF = (GST_BUFFER_FLAG_LAST << 1),
  VIDEO_BUFFER_FLAG_RFF = (GST_BUFFER_FLAG_LAST << 2),
  VIDEO_BUFFER_FLAG_ONEFIELD = (GST_BUFFER_FLAG_LAST << 3),
  VIDEO_BUFFER_FLAG_MULTIPLE_VIEW = (GST_BUFFER_FLAG_LAST << 4),
  VIDEO_BUFFER_FLAG_FIRST_IN_BUNDLE = (GST_BUFFER_FLAG_LAST << 5),
  VIDEO_BUFFER_FLAG_LAST = (GST_BUFFER_FLAG_LAST << 8)
};

/** @ingroup gstreamermmEnums */
inline VideoBufferFlags operator|(VideoBufferFlags lhs, VideoBufferFlags rhs)
  { return static_cast<VideoBufferFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline VideoBufferFlags operator&(VideoBufferFlags lhs, VideoBufferFlags rhs)
  { return static_cast<VideoBufferFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline VideoBufferFlags operator^(VideoBufferFlags lhs, VideoBufferFlags rhs)
  { return static_cast<VideoBufferFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline VideoBufferFlags operator~(VideoBufferFlags flags)
  { return static_cast<VideoBufferFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup gstreamermmEnums */
inline VideoBufferFlags& operator|=(VideoBufferFlags& lhs, VideoBufferFlags rhs)
  { return (lhs = static_cast<VideoBufferFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline VideoBufferFlags& operator&=(VideoBufferFlags& lhs, VideoBufferFlags rhs)
  { return (lhs = static_cast<VideoBufferFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline VideoBufferFlags& operator^=(VideoBufferFlags& lhs, VideoBufferFlags rhs)
  { return (lhs = static_cast<VideoBufferFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::VideoBufferFlags> : public Glib::Value_Flags<Gst::VideoBufferFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{

  /** 
 *  @var VideoFrameMapFlags VIDEO_FRAME_MAP_FLAG_NO_REF
 * Don't take another reference of the buffer and store it in
 * the GstVideoFrame. This makes sure that the buffer stays
 * writable while the frame is mapped, but requires that the
 * buffer reference stays valid until the frame is unmapped again.
 * 
 *  @var VideoFrameMapFlags VIDEO_FRAME_MAP_FLAG_LAST
 * Offset to define more flags.
 * 
 *  @enum VideoFrameMapFlags
 * 
 * Additional mapping flags for Gst::VideoFrame::map().
 *
 * @ingroup gstreamermmEnums
 * @par Bitwise operators:
 * <tt>%VideoFrameMapFlags operator|(VideoFrameMapFlags, VideoFrameMapFlags)</tt><br>
 * <tt>%VideoFrameMapFlags operator&(VideoFrameMapFlags, VideoFrameMapFlags)</tt><br>
 * <tt>%VideoFrameMapFlags operator^(VideoFrameMapFlags, VideoFrameMapFlags)</tt><br>
 * <tt>%VideoFrameMapFlags operator~(VideoFrameMapFlags)</tt><br>
 * <tt>%VideoFrameMapFlags& operator|=(VideoFrameMapFlags&, VideoFrameMapFlags)</tt><br>
 * <tt>%VideoFrameMapFlags& operator&=(VideoFrameMapFlags&, VideoFrameMapFlags)</tt><br>
 * <tt>%VideoFrameMapFlags& operator^=(VideoFrameMapFlags&, VideoFrameMapFlags)</tt><br>
 */
enum VideoFrameMapFlags
{
  VIDEO_FRAME_MAP_FLAG_NO_REF = (GST_MAP_FLAG_LAST << 0),
  VIDEO_FRAME_MAP_FLAG_LAST = (GST_MAP_FLAG_LAST << 8)
};

/** @ingroup gstreamermmEnums */
inline VideoFrameMapFlags operator|(VideoFrameMapFlags lhs, VideoFrameMapFlags rhs)
  { return static_cast<VideoFrameMapFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline VideoFrameMapFlags operator&(VideoFrameMapFlags lhs, VideoFrameMapFlags rhs)
  { return static_cast<VideoFrameMapFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline VideoFrameMapFlags operator^(VideoFrameMapFlags lhs, VideoFrameMapFlags rhs)
  { return static_cast<VideoFrameMapFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gstreamermmEnums */
inline VideoFrameMapFlags operator~(VideoFrameMapFlags flags)
  { return static_cast<VideoFrameMapFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup gstreamermmEnums */
inline VideoFrameMapFlags& operator|=(VideoFrameMapFlags& lhs, VideoFrameMapFlags rhs)
  { return (lhs = static_cast<VideoFrameMapFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline VideoFrameMapFlags& operator&=(VideoFrameMapFlags& lhs, VideoFrameMapFlags rhs)
  { return (lhs = static_cast<VideoFrameMapFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gstreamermmEnums */
inline VideoFrameMapFlags& operator^=(VideoFrameMapFlags& lhs, VideoFrameMapFlags rhs)
  { return (lhs = static_cast<VideoFrameMapFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::VideoFrameMapFlags> : public Glib::Value_Flags<Gst::VideoFrameMapFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


class VideoFrame
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = VideoFrame;
  using BaseObjectType = GstVideoFrame;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:

public:
  VideoFrame();
  explicit VideoFrame(const GstVideoFrame* gobject); // always takes a copy
  ///Provides access to the underlying C instance.
  GstVideoFrame*       gobj()       { return &gobject_; }
  ///Provides access to the underlying C instance.
  const GstVideoFrame* gobj() const { return &gobject_; }

protected:
  GstVideoFrame gobject_;

public:
  
  /** Use @a info and @a buffer to fill in the values of @a frame. @a frame is usually
   * allocated on the stack, and you will pass the address to the Gst::VideoFrame
   * structure allocated on the stack; map() will then fill in
   * the structures with the various video-specific information you need to access
   * the pixels of the video buffer. You can then use accessor macros such as
   * GST_VIDEO_FRAME_COMP_DATA(), GST_VIDEO_FRAME_PLANE_DATA(),
   * GST_VIDEO_FRAME_COMP_STRIDE(), GST_VIDEO_FRAME_PLANE_STRIDE() etc.
   * to get to the pixels.
   * 
   * 
   * [C example ellipted]
   * 
   * All video planes of @a buffer will be mapped and the pointers will be set in
   *  @a frame->data.
   * 
   * The purpose of this function is to make it easy for you to get to the video
   * pixels in a generic way, without you having to worry too much about details
   * such as whether the video data is allocated in one contiguous memory chunk
   * or multiple memory chunks (e.g. one for each plane); or if custom strides
   * and custom plane offsets are used or not (as signalled by GstVideoMeta on
   * each buffer). This function will just fill the Gst::VideoFrame structure
   * with the right values and if you use the accessor macros everything will
   * just work and you can access the data easily. It also maps the underlying
   * memory chunks for you.
   * 
   * @param info A Gst::VideoInfo.
   * @param buffer The buffer to map.
   * @param flags Gst::MapFlags.
   * @return <tt>true</tt> on success.
   */
  bool map(const Gst::VideoInfo& info, const Glib::RefPtr<Gst::Buffer>& buffer, Gst::MapFlags flags);
  
  /** Use @a info and @a buffer to fill in the values of @a frame with the video frame
   * information of frame @a id.
   * 
   * When @a id is -1, the default frame is mapped. When @a id != -1, this function
   * will return <tt>false</tt> when there is no GstVideoMeta with that id.
   * 
   * All video planes of @a buffer will be mapped and the pointers will be set in
   *  @a frame->data.
   * 
   * @param info A Gst::VideoInfo.
   * @param buffer The buffer to map.
   * @param id The frame id to map.
   * @param flags Gst::MapFlags.
   * @return <tt>true</tt> on success.
   */
  bool map_id(const Gst::VideoInfo& info, const Glib::RefPtr<Gst::Buffer>& buffer, gint id, Gst::MapFlags flags);
  
  /** Unmap the memory previously mapped with gst_video_frame_map.
   */
  void unmap();
  
  /** Copy the contents from @a src to @a dest.
   * 
   * @param dest A Gst::VideoFrame.
   * @param src A Gst::VideoFrame.
   * @return <tt>true</tt> if the contents could be copied.
   */
  static bool copy(const Gst::VideoFrame& dest, const Gst::VideoFrame& src);
  
  /** Copy the plane with index @a plane from @a src to @a dest.
   * 
   * @param dest A Gst::VideoFrame.
   * @param src A Gst::VideoFrame.
   * @param plane A plane.
   * @return <tt>true</tt> if the contents could be copied.
   */
  static bool copy_plane(const Gst::VideoFrame& dest, const Gst::VideoFrame& src, guint plane);

  void set_info(const Gst::VideoInfo& value);
  Gst::VideoInfo get_info() const;
  

  void set_flags(const Gst::VideoFrameFlags& value);
  Gst::VideoFrameFlags get_flags() const;

  void set_buffer(const Glib::RefPtr<Gst::Buffer>& value);
  Glib::RefPtr<Gst::Buffer> get_buffer() const;

  void set_meta(const gpointer& value);
  gpointer get_meta() const;

  void set_id(const gint& value);
  gint get_id() const;


};

}


#endif /* _GSTREAMERMM_VIDEOFRAME_H */

