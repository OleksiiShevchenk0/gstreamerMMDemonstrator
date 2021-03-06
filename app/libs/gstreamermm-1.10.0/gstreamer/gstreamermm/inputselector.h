// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_INPUTSELECTOR_H
#define _GSTREAMERMM_INPUTSELECTOR_H

#include <gstreamermmconfig.h>

#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// Generated by generate_plugin_gmmproc_file. Don't edit this file.


#include <gstreamermm/element.h>
#include <gstreamermm/pad.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstInputSelector = struct _GstInputSelector;
using GstInputSelectorClass = struct _GstInputSelectorClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class InputSelector_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** @addtogroup gstreamermmEnums gstreamermm Enums and Flags */

/** 
 *
 * @ingroup gstreamermmEnums
 */
enum InputSelectorSyncMode
{
  INPUT_SELECTOR_SYNC_MODE_ACTIVE_SEGMENT,
  INPUT_SELECTOR_SYNC_MODE_CLOCK
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::InputSelectorSyncMode> : public Glib::Value_Enum<Gst::InputSelectorSyncMode>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** A Wrapper for the input-selector plugin.
 * Please note that not all plug-ins are available on all systems so care
 * must be taken that they exist before they are used otherwise there will
 * be errors and possibly a crash.
 *
 * @ingroup GstPlugins
 * @deprecated Plugins API is deprecated, and should not be used in a new code.
 */

class InputSelector
: public Gst::Element
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = InputSelector;
  using CppClassType = InputSelector_Class;
  using BaseObjectType = GstInputSelector;
  using BaseClassType = GstInputSelectorClass;

  // noncopyable
  InputSelector(const InputSelector&) = delete;
  InputSelector& operator=(const InputSelector&) = delete;

private:  friend class InputSelector_Class;
  static CppClassType inputselector_class_;

protected:
  explicit InputSelector(const Glib::ConstructParams& construct_params);
  explicit InputSelector(GstInputSelector* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  InputSelector(InputSelector&& src) noexcept;
  InputSelector& operator=(InputSelector&& src) noexcept;

  ~InputSelector() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstInputSelector*       gobj()       { return reinterpret_cast<GstInputSelector*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstInputSelector* gobj() const { return reinterpret_cast<GstInputSelector*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstInputSelector* gobj_copy();

private:

  
protected:
  InputSelector();
  explicit InputSelector(const Glib::ustring& name);

public:
  /** Creates a new input-selector plugin with a unique name.
   */
  
  static Glib::RefPtr<InputSelector> create();


  /** Creates a new input-selector plugin with the given name.
   */
  
  static Glib::RefPtr<InputSelector> create(const Glib::ustring& name);


  /** The number of sink pads.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_n_pads() const;


  /** The currently active sink pad.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gst::Pad> > property_active_pad() ;

/** The currently active sink pad.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Pad> > property_active_pad() const;

  /** Synchronize inactive streams to the running time of the active stream or to the current clock.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_sync_streams() ;

/** Synchronize inactive streams to the running time of the active stream or to the current clock.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_sync_streams() const;

  /** Behavior in sync-streams mode.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::InputSelectorSyncMode > property_sync_mode() ;

/** Behavior in sync-streams mode.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::InputSelectorSyncMode > property_sync_mode() const;

  /** Cache buffers for active-pad.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_cache_buffers() ;

/** Cache buffers for active-pad.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_cache_buffers() const;


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
   * @relates Gst::InputSelector
   */
  Glib::RefPtr<Gst::InputSelector> wrap(GstInputSelector* object, bool take_copy = false);
}


#endif // GSTREAMERMM_DISABLE_DEPRECATED


#endif /* _GSTREAMERMM_INPUTSELECTOR_H */

