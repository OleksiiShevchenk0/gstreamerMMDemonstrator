// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_VIDEOCONVERT_H
#define _GSTREAMERMM_VIDEOCONVERT_H

#include <gstreamermmconfig.h>

#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// Generated by generate_plugin_gmmproc_file. Don't edit this file.


#include <gstreamermm/basetransform.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstVideoConvert = struct _GstVideoConvert;
using GstVideoConvertClass = struct _GstVideoConvertClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class VideoConvert_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** @addtogroup gstreamermmEnums gstreamermm Enums and Flags */

/** 
 *  @var VideoDitherMethod VIDEO_DITHER_NONE
 * No dithering.
 * 
 *  @var VideoDitherMethod VIDEO_DITHER_VERTERR
 * Propagate rounding errors downwards.
 * 
 *  @var VideoDitherMethod VIDEO_DITHER_FLOYD_STEINBERG
 * Dither with floyd-steinberg error diffusion.
 * 
 *  @var VideoDitherMethod VIDEO_DITHER_SIERRA_LITE
 * Dither with Sierra Lite error diffusion.
 * 
 *  @var VideoDitherMethod VIDEO_DITHER_BAYER
 * Ordered dither using a bayer pattern.
 * 
 *  @enum VideoDitherMethod
 * 
 * Different dithering methods to use.
 *
 * @ingroup gstreamermmEnums
 */
enum VideoDitherMethod
{
  VIDEO_DITHER_NONE,
  VIDEO_DITHER_VERTERR,
  VIDEO_DITHER_FLOYD_STEINBERG,
  VIDEO_DITHER_SIERRA_LITE,
  VIDEO_DITHER_BAYER
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::VideoDitherMethod> : public Glib::Value_Enum<Gst::VideoDitherMethod>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** 
 *  @var VideoResamplerMethod VIDEO_RESAMPLER_METHOD_NEAREST
 * Duplicates the samples when
 * upsampling and drops when downsampling.
 * 
 *  @var VideoResamplerMethod VIDEO_RESAMPLER_METHOD_LINEAR
 * Uses linear interpolation to reconstruct
 * missing samples and averaging to downsample.
 * 
 *  @var VideoResamplerMethod VIDEO_RESAMPLER_METHOD_CUBIC
 * Uses cubic interpolation.
 * 
 *  @var VideoResamplerMethod VIDEO_RESAMPLER_METHOD_SINC
 * Uses sinc interpolation.
 * 
 *  @var VideoResamplerMethod VIDEO_RESAMPLER_METHOD_LANCZOS
 * Uses lanczos interpolation.
 * 
 *  @enum VideoResamplerMethod
 * 
 * Different subsampling and upsampling methods
 *
 * @ingroup gstreamermmEnums
 */
enum VideoResamplerMethod
{
  VIDEO_RESAMPLER_METHOD_NEAREST,
  VIDEO_RESAMPLER_METHOD_LINEAR,
  VIDEO_RESAMPLER_METHOD_CUBIC,
  VIDEO_RESAMPLER_METHOD_SINC,
  VIDEO_RESAMPLER_METHOD_LANCZOS
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::VideoResamplerMethod> : public Glib::Value_Enum<Gst::VideoResamplerMethod>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** 
 *  @var VideoAlphaMode VIDEO_ALPHA_MODE_COPY
 * When input and output have alpha, it will be copied.
 * When the input has no alpha, alpha will be set to
 * Gst::VIDEO_CONVERTER_OPT_ALPHA_VALUE.
 * 
 *  @var VideoAlphaMode VIDEO_ALPHA_MODE_SET
 * Set all alpha to
 * Gst::VIDEO_CONVERTER_OPT_ALPHA_VALUE.
 * 
 *  @var VideoAlphaMode VIDEO_ALPHA_MODE_MULT
 * Multiply all alpha with
 * Gst::VIDEO_CONVERTER_OPT_ALPHA_VALUE.
 * When the input format has no alpha but the output format has, the
 * alpha value will be set to Gst::VIDEO_CONVERTER_OPT_ALPHA_VALUE.
 * 
 *  @enum VideoAlphaMode
 * 
 * Different alpha modes.
 *
 * @ingroup gstreamermmEnums
 */
enum VideoAlphaMode
{
  VIDEO_ALPHA_MODE_COPY,
  VIDEO_ALPHA_MODE_SET,
  VIDEO_ALPHA_MODE_MULT
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::VideoAlphaMode> : public Glib::Value_Enum<Gst::VideoAlphaMode>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** 
 *  @var VideoChromaMode VIDEO_CHROMA_MODE_FULL
 * Do full chroma up and down sampling.
 * 
 *  @var VideoChromaMode VIDEO_CHROMA_MODE_UPSAMPLE_ONLY
 * Only perform chroma upsampling.
 * 
 *  @var VideoChromaMode VIDEO_CHROMA_MODE_DOWNSAMPLE_ONLY
 * Only perform chroma downsampling.
 * 
 *  @var VideoChromaMode VIDEO_CHROMA_MODE_NONE
 * Disable chroma resampling.
 * 
 *  @enum VideoChromaMode
 * 
 * Different chroma downsampling and upsampling modes
 *
 * @ingroup gstreamermmEnums
 */
enum VideoChromaMode
{
  VIDEO_CHROMA_MODE_FULL,
  VIDEO_CHROMA_MODE_UPSAMPLE_ONLY,
  VIDEO_CHROMA_MODE_DOWNSAMPLE_ONLY,
  VIDEO_CHROMA_MODE_NONE
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::VideoChromaMode> : public Glib::Value_Enum<Gst::VideoChromaMode>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** 
 *  @var VideoMatrixMode VIDEO_MATRIX_MODE_FULL
 * Do conversion between color matrices.
 * 
 *  @var VideoMatrixMode VIDEO_MATRIX_MODE_INPUT_ONLY
 * Use the input color matrix to convert
 * to and from R'G'B.
 * 
 *  @var VideoMatrixMode VIDEO_MATRIX_MODE_OUTPUT_ONLY
 * Use the output color matrix to convert
 * to and from R'G'B.
 * 
 *  @var VideoMatrixMode VIDEO_MATRIX_MODE_NONE
 * Disable color matrix conversion.
 * 
 *  @enum VideoMatrixMode
 * 
 * Different color matrix conversion modes
 *
 * @ingroup gstreamermmEnums
 */
enum VideoMatrixMode
{
  VIDEO_MATRIX_MODE_FULL,
  VIDEO_MATRIX_MODE_INPUT_ONLY,
  VIDEO_MATRIX_MODE_OUTPUT_ONLY,
  VIDEO_MATRIX_MODE_NONE
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::VideoMatrixMode> : public Glib::Value_Enum<Gst::VideoMatrixMode>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** 
 *  @var VideoGammaMode VIDEO_GAMMA_MODE_NONE
 * Disable gamma handling.
 * 
 *  @var VideoGammaMode VIDEO_GAMMA_MODE_REMAP
 * Convert between input and output gamma
 * Different gamma conversion modes.
 * 
 *  @enum VideoGammaMode
 *
 * @ingroup gstreamermmEnums
 */
enum VideoGammaMode
{
  VIDEO_GAMMA_MODE_NONE,
  VIDEO_GAMMA_MODE_REMAP
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::VideoGammaMode> : public Glib::Value_Enum<Gst::VideoGammaMode>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** 
 *  @var VideoPrimariesMode VIDEO_PRIMARIES_MODE_NONE
 * Disable conversion between primaries.
 * 
 *  @var VideoPrimariesMode VIDEO_PRIMARIES_MODE_MERGE_ONLY
 * Do conversion between primaries only
 * when it can be merged with color matrix conversion.
 * 
 *  @var VideoPrimariesMode VIDEO_PRIMARIES_MODE_FAST
 * Fast conversion between primaries.
 * 
 *  @enum VideoPrimariesMode
 * 
 * Different primaries conversion modes
 *
 * @ingroup gstreamermmEnums
 */
enum VideoPrimariesMode
{
  VIDEO_PRIMARIES_MODE_NONE,
  VIDEO_PRIMARIES_MODE_MERGE_ONLY,
  VIDEO_PRIMARIES_MODE_FAST
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::VideoPrimariesMode> : public Glib::Value_Enum<Gst::VideoPrimariesMode>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** A Wrapper for the videoconvert plugin.
 * Please note that not all plug-ins are available on all systems so care
 * must be taken that they exist before they are used otherwise there will
 * be errors and possibly a crash.
 *
 * @ingroup GstPlugins
 * @deprecated Plugins API is deprecated, and should not be used in a new code.
 */

class VideoConvert
: public Gst::BaseTransform
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = VideoConvert;
  using CppClassType = VideoConvert_Class;
  using BaseObjectType = GstVideoConvert;
  using BaseClassType = GstVideoConvertClass;

  // noncopyable
  VideoConvert(const VideoConvert&) = delete;
  VideoConvert& operator=(const VideoConvert&) = delete;

private:  friend class VideoConvert_Class;
  static CppClassType videoconvert_class_;

protected:
  explicit VideoConvert(const Glib::ConstructParams& construct_params);
  explicit VideoConvert(GstVideoConvert* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  VideoConvert(VideoConvert&& src) noexcept;
  VideoConvert& operator=(VideoConvert&& src) noexcept;

  ~VideoConvert() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstVideoConvert*       gobj()       { return reinterpret_cast<GstVideoConvert*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstVideoConvert* gobj() const { return reinterpret_cast<GstVideoConvert*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstVideoConvert* gobj_copy();

private:

  
protected:
  VideoConvert();
  explicit VideoConvert(const Glib::ustring& name);

public:
  /** Creates a new videoconvert plugin with a unique name.
   */
  
  static Glib::RefPtr<VideoConvert> create();


  /** Creates a new videoconvert plugin with the given name.
   */
  
  static Glib::RefPtr<VideoConvert> create(const Glib::ustring& name);


  /** Apply dithering while converting.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::VideoDitherMethod > property_dither() ;

/** Apply dithering while converting.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::VideoDitherMethod > property_dither() const;

  /** Quantizer to use.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_dither_quantization() ;

/** Quantizer to use.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_dither_quantization() const;

  /** Chroma resampler method.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::VideoResamplerMethod > property_chroma_resampler() ;

/** Chroma resampler method.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::VideoResamplerMethod > property_chroma_resampler() const;

  /** Alpha Mode to use.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::VideoAlphaMode > property_alpha_mode() ;

/** Alpha Mode to use.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::VideoAlphaMode > property_alpha_mode() const;

  /** Alpha Value to use.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_alpha_value() ;

/** Alpha Value to use.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_alpha_value() const;

  /** Chroma Resampling Mode.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::VideoChromaMode > property_chroma_mode() ;

/** Chroma Resampling Mode.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::VideoChromaMode > property_chroma_mode() const;

  /** Matrix Conversion Mode.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::VideoMatrixMode > property_matrix_mode() ;

/** Matrix Conversion Mode.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::VideoMatrixMode > property_matrix_mode() const;

  /** Gamma Conversion Mode.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::VideoGammaMode > property_gamma_mode() ;

/** Gamma Conversion Mode.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::VideoGammaMode > property_gamma_mode() const;

  /** Primaries Conversion Mode.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::VideoPrimariesMode > property_primaries_mode() ;

/** Primaries Conversion Mode.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::VideoPrimariesMode > property_primaries_mode() const;


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
   * @relates Gst::VideoConvert
   */
  Glib::RefPtr<Gst::VideoConvert> wrap(GstVideoConvert* object, bool take_copy = false);
}


#endif // GSTREAMERMM_DISABLE_DEPRECATED


#endif /* _GSTREAMERMM_VIDEOCONVERT_H */

