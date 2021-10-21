// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_SUBTITLEOVERLAY_H
#define _GSTREAMERMM_SUBTITLEOVERLAY_H

#include <gstreamermmconfig.h>

#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// Generated by generate_plugin_gmmproc_file. Don't edit this file.


#include <gstreamermm/bin.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstSubtitleOverlay = struct _GstSubtitleOverlay;
using GstSubtitleOverlayClass = struct _GstSubtitleOverlayClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class SubtitleOverlay_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** A Wrapper for the subtitleoverlay plugin.
 * Please note that not all plug-ins are available on all systems so care
 * must be taken that they exist before they are used otherwise there will
 * be errors and possibly a crash.
 *
 * @ingroup GstPlugins
 * @deprecated Plugins API is deprecated, and should not be used in a new code.
 */

class SubtitleOverlay
: public Gst::Bin
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = SubtitleOverlay;
  using CppClassType = SubtitleOverlay_Class;
  using BaseObjectType = GstSubtitleOverlay;
  using BaseClassType = GstSubtitleOverlayClass;

  // noncopyable
  SubtitleOverlay(const SubtitleOverlay&) = delete;
  SubtitleOverlay& operator=(const SubtitleOverlay&) = delete;

private:  friend class SubtitleOverlay_Class;
  static CppClassType subtitleoverlay_class_;

protected:
  explicit SubtitleOverlay(const Glib::ConstructParams& construct_params);
  explicit SubtitleOverlay(GstSubtitleOverlay* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  SubtitleOverlay(SubtitleOverlay&& src) noexcept;
  SubtitleOverlay& operator=(SubtitleOverlay&& src) noexcept;

  ~SubtitleOverlay() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstSubtitleOverlay*       gobj()       { return reinterpret_cast<GstSubtitleOverlay*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstSubtitleOverlay* gobj() const { return reinterpret_cast<GstSubtitleOverlay*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstSubtitleOverlay* gobj_copy();

private:

  
protected:
  SubtitleOverlay();
  explicit SubtitleOverlay(const Glib::ustring& name);

public:
  /** Creates a new subtitleoverlay plugin with a unique name.
   */
  
  static Glib::RefPtr<SubtitleOverlay> create();


  /** Creates a new subtitleoverlay plugin with the given name.
   */
  
  static Glib::RefPtr<SubtitleOverlay> create(const Glib::ustring& name);


  /** Whether to show subtitles.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_silent() ;

/** Whether to show subtitles.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_silent() const;

  /** Pango font description of font to be used for subtitle rendering.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_font_desc() ;

/** Pango font description of font to be used for subtitle rendering.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_font_desc() const;

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
   * @relates Gst::SubtitleOverlay
   */
  Glib::RefPtr<Gst::SubtitleOverlay> wrap(GstSubtitleOverlay* object, bool take_copy = false);
}


#endif // GSTREAMERMM_DISABLE_DEPRECATED


#endif /* _GSTREAMERMM_SUBTITLEOVERLAY_H */

