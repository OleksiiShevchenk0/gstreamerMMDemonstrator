// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_THEORAENC_H
#define _GSTREAMERMM_THEORAENC_H

#include <gstreamermmconfig.h>

#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// Generated by generate_plugin_gmmproc_file. Don't edit this file.


#include <gstreamermm/element.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstTheoraEnc = struct _GstTheoraEnc;
using GstTheoraEncClass = struct _GstTheoraEncClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class TheoraEnc_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** @addtogroup gstreamermmEnums gstreamermm Enums and Flags */

/** 
 *
 * @ingroup gstreamermmEnums
 */
enum TheoraEncMultipassMode
{
  MODE_SINGLE_PASS,
  MODE_FIRST_PASS,
  MODE_SECOND_PASS
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::TheoraEncMultipassMode> : public Glib::Value_Enum<Gst::TheoraEncMultipassMode>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** A Wrapper for the theoraenc plugin.
 * Please note that not all plug-ins are available on all systems so care
 * must be taken that they exist before they are used otherwise there will
 * be errors and possibly a crash.
 *
 * @ingroup GstPlugins
 * @deprecated Plugins API is deprecated, and should not be used in a new code.
 */

class TheoraEnc
: public Gst::Element
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = TheoraEnc;
  using CppClassType = TheoraEnc_Class;
  using BaseObjectType = GstTheoraEnc;
  using BaseClassType = GstTheoraEncClass;

  // noncopyable
  TheoraEnc(const TheoraEnc&) = delete;
  TheoraEnc& operator=(const TheoraEnc&) = delete;

private:  friend class TheoraEnc_Class;
  static CppClassType theoraenc_class_;

protected:
  explicit TheoraEnc(const Glib::ConstructParams& construct_params);
  explicit TheoraEnc(GstTheoraEnc* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  TheoraEnc(TheoraEnc&& src) noexcept;
  TheoraEnc& operator=(TheoraEnc&& src) noexcept;

  ~TheoraEnc() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstTheoraEnc*       gobj()       { return reinterpret_cast<GstTheoraEnc*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstTheoraEnc* gobj() const { return reinterpret_cast<GstTheoraEnc*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstTheoraEnc* gobj_copy();

private:

  
protected:
  TheoraEnc();
  explicit TheoraEnc(const Glib::ustring& name);

public:
  /** Creates a new theoraenc plugin with a unique name.
   */
  
  static Glib::RefPtr<TheoraEnc> create();


  /** Creates a new theoraenc plugin with the given name.
   */
  
  static Glib::RefPtr<TheoraEnc> create(const Glib::ustring& name);


  /** Compressed video bitrate (kbps).
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_bitrate() ;

/** Compressed video bitrate (kbps).
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_bitrate() const;

  /** Video quality.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_quality() ;

/** Video quality.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_quality() const;

  /** Automatic keyframe detection.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_keyframe_auto() ;

/** Automatic keyframe detection.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_keyframe_auto() const;

  /** Keyframe frequency.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_keyframe_freq() ;

/** Keyframe frequency.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_keyframe_freq() const;

  /** Force keyframe every N frames.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_keyframe_force() ;

/** Force keyframe every N frames.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_keyframe_force() const;

  /** Controls the amount of motion vector searching done while encoding.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_speed_level() ;

/** Controls the amount of motion vector searching done while encoding.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_speed_level() const;

  /** Disables non-VP3 compatible features.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_vp3_compatible() ;

/** Disables non-VP3 compatible features.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_vp3_compatible() const;

  /** Allow or disallow frame dropping.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_drop_frames() ;

/** Allow or disallow frame dropping.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_drop_frames() const;

  /** Enable capping of bit reservoir overflows.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_cap_overflow() ;

/** Enable capping of bit reservoir overflows.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_cap_overflow() const;

  /** Enable capping of bit reservoir underflows.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_cap_underflow() ;

/** Enable capping of bit reservoir underflows.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_cap_underflow() const;

  /** Sets the size of the rate control buffer, in units of frames. The default value of 0 instructs the encoder to automatically select an appropriate value.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_rate_buffer() ;

/** Sets the size of the rate control buffer, in units of frames. The default value of 0 instructs the encoder to automatically select an appropriate value.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_rate_buffer() const;

  /** Multipass cache file.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_multipass_cache_file() ;

/** Multipass cache file.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_multipass_cache_file() const;

  /** Single pass or first/second pass.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::TheoraEncMultipassMode > property_multipass_mode() ;

/** Single pass or first/second pass.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::TheoraEncMultipassMode > property_multipass_mode() const;


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
   * @relates Gst::TheoraEnc
   */
  Glib::RefPtr<Gst::TheoraEnc> wrap(GstTheoraEnc* object, bool take_copy = false);
}


#endif // GSTREAMERMM_DISABLE_DEPRECATED


#endif /* _GSTREAMERMM_THEORAENC_H */

