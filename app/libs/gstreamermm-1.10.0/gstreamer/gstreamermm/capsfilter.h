// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_CAPSFILTER_H
#define _GSTREAMERMM_CAPSFILTER_H

#include <gstreamermmconfig.h>

#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// Generated by generate_plugin_gmmproc_file. Don't edit this file.


#include <gstreamermm/basetransform.h>
#include <gstreamermm/caps.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstCapsFilter = struct _GstCapsFilter;
using GstCapsFilterClass = struct _GstCapsFilterClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class CapsFilter_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** @addtogroup gstreamermmEnums gstreamermm Enums and Flags */

/** 
 *
 * @ingroup gstreamermmEnums
 */
enum CapsFilterCapsChangeMode
{
  CAPS_FILTER_CAPS_CHANGE_MODE_IMMEDIATE,
  CAPS_FILTER_CAPS_CHANGE_MODE_DELAYED
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::CapsFilterCapsChangeMode> : public Glib::Value_Enum<Gst::CapsFilterCapsChangeMode>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** A Wrapper for the capsfilter plugin.
 * Please note that not all plug-ins are available on all systems so care
 * must be taken that they exist before they are used otherwise there will
 * be errors and possibly a crash.
 *
 * @ingroup GstPlugins
 * @deprecated Plugins API is deprecated, and should not be used in a new code.
 */

class CapsFilter
: public Gst::BaseTransform
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = CapsFilter;
  using CppClassType = CapsFilter_Class;
  using BaseObjectType = GstCapsFilter;
  using BaseClassType = GstCapsFilterClass;

  // noncopyable
  CapsFilter(const CapsFilter&) = delete;
  CapsFilter& operator=(const CapsFilter&) = delete;

private:  friend class CapsFilter_Class;
  static CppClassType capsfilter_class_;

protected:
  explicit CapsFilter(const Glib::ConstructParams& construct_params);
  explicit CapsFilter(GstCapsFilter* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  CapsFilter(CapsFilter&& src) noexcept;
  CapsFilter& operator=(CapsFilter&& src) noexcept;

  ~CapsFilter() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstCapsFilter*       gobj()       { return reinterpret_cast<GstCapsFilter*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstCapsFilter* gobj() const { return reinterpret_cast<GstCapsFilter*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstCapsFilter* gobj_copy();

private:

  
protected:
  CapsFilter();
  explicit CapsFilter(const Glib::ustring& name);

public:
  /** Creates a new capsfilter plugin with a unique name.
   */
  
  static Glib::RefPtr<CapsFilter> create();


  /** Creates a new capsfilter plugin with the given name.
   */
  
  static Glib::RefPtr<CapsFilter> create(const Glib::ustring& name);


  /** Restrict the possible allowed capabilities (NULL means ANY). Setting this property takes a reference to the supplied GstCaps object.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gst::Caps> > property_caps() ;

/** Restrict the possible allowed capabilities (NULL means ANY). Setting this property takes a reference to the supplied GstCaps object.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Caps> > property_caps() const;

  /** Filter caps change behaviour.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::CapsFilterCapsChangeMode > property_caps_change_mode() ;

/** Filter caps change behaviour.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::CapsFilterCapsChangeMode > property_caps_change_mode() const;


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
   * @relates Gst::CapsFilter
   */
  Glib::RefPtr<Gst::CapsFilter> wrap(GstCapsFilter* object, bool take_copy = false);
}


#endif // GSTREAMERMM_DISABLE_DEPRECATED


#endif /* _GSTREAMERMM_CAPSFILTER_H */

