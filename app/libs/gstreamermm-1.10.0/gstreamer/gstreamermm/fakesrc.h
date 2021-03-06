// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_FAKESRC_H
#define _GSTREAMERMM_FAKESRC_H

#include <gstreamermmconfig.h>

#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

// Generated by generate_plugin_gmmproc_file. Don't edit this file.


#include <gstreamermm/basesrc.h>
#include <gstreamermm/format.h>
#include <gstreamermm/buffer.h>
#include <gstreamermm/pad.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstFakeSrc = struct _GstFakeSrc;
using GstFakeSrcClass = struct _GstFakeSrcClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class FakeSrc_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

/** @addtogroup gstreamermmEnums gstreamermm Enums and Flags */

/** 
 *
 * @ingroup gstreamermmEnums
 */
enum FakeSrcDataType
{
  SRC_DATA_ALLOCATE = 1,
  SRC_DATA_SUBBUFFER
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::FakeSrcDataType> : public Glib::Value_Enum<Gst::FakeSrcDataType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** 
 *
 * @ingroup gstreamermmEnums
 */
enum FakeSrcSizeType
{
  SRC_SIZETYPE_EMPTY = 1,
  SRC_SIZETYPE_FIXED,
  SRC_SIZETYPE_RANDOM
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::FakeSrcSizeType> : public Glib::Value_Enum<Gst::FakeSrcSizeType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** 
 *
 * @ingroup gstreamermmEnums
 */
enum FakeSrcFillType
{
  SRC_FILLTYPE_NOTHING = 1,
  SRC_FILLTYPE_ZERO,
  SRC_FILLTYPE_RANDOM,
  SRC_FILLTYPE_PATTERN,
  SRC_FILLTYPE_PATTERN_CONT
};

} // namespace Gst

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gst::FakeSrcFillType> : public Glib::Value_Enum<Gst::FakeSrcFillType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gst
{


/** A Wrapper for the fakesrc plugin.
 * Please note that not all plug-ins are available on all systems so care
 * must be taken that they exist before they are used otherwise there will
 * be errors and possibly a crash.
 *
 * @ingroup GstPlugins
 * @deprecated Plugins API is deprecated, and should not be used in a new code.
 */

class FakeSrc
: public Gst::BaseSrc
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = FakeSrc;
  using CppClassType = FakeSrc_Class;
  using BaseObjectType = GstFakeSrc;
  using BaseClassType = GstFakeSrcClass;

  // noncopyable
  FakeSrc(const FakeSrc&) = delete;
  FakeSrc& operator=(const FakeSrc&) = delete;

private:  friend class FakeSrc_Class;
  static CppClassType fakesrc_class_;

protected:
  explicit FakeSrc(const Glib::ConstructParams& construct_params);
  explicit FakeSrc(GstFakeSrc* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  FakeSrc(FakeSrc&& src) noexcept;
  FakeSrc& operator=(FakeSrc&& src) noexcept;

  ~FakeSrc() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstFakeSrc*       gobj()       { return reinterpret_cast<GstFakeSrc*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstFakeSrc* gobj() const { return reinterpret_cast<GstFakeSrc*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstFakeSrc* gobj_copy();

private:

  
protected:
  FakeSrc();
  explicit FakeSrc(const Glib::ustring& name);

public:
  /** Creates a new fakesrc plugin with a unique name.
   */
  
  static Glib::RefPtr<FakeSrc> create();


  /** Creates a new fakesrc plugin with the given name.
   */
  
  static Glib::RefPtr<FakeSrc> create(const Glib::ustring& name);


  /** Data allocation method.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::FakeSrcDataType > property_data() ;

/** Data allocation method.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::FakeSrcDataType > property_data() const;

  /** How to determine buffer sizes.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::FakeSrcSizeType > property_sizetype() ;

/** How to determine buffer sizes.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::FakeSrcSizeType > property_sizetype() const;

  /** Minimum buffer size.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_sizemin() ;

/** Minimum buffer size.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_sizemin() const;

  /** Maximum buffer size.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_sizemax() ;

/** Maximum buffer size.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_sizemax() const;

  /** How to fill the buffer, if at all.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::FakeSrcFillType > property_filltype() ;

/** How to fill the buffer, if at all.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::FakeSrcFillType > property_filltype() const;

  /** Timestamps buffers with number of bytes per second (0 = none).
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_datarate() ;

/** Timestamps buffers with number of bytes per second (0 = none).
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_datarate() const;

  /** Sync to the clock to the datarate.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_sync() ;

/** Sync to the clock to the datarate.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_sync() const;

  /** Set the pattern (unused).
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_pattern() ;

/** Set the pattern (unused).
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_pattern() const;

  /** Send a signal before pushing the buffer.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_signal_handoffs() ;

/** Send a signal before pushing the buffer.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_signal_handoffs() const;

  /** Don't produce last_message events.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_silent() ;

/** Don't produce last_message events.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_silent() const;

  /** Dump buffer contents to stdout.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_dump() ;

/** Dump buffer contents to stdout.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_dump() const;

  /** Size of parent buffer for sub-buffered allocation.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_parentsize() ;

/** Size of parent buffer for sub-buffered allocation.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_parentsize() const;

  /** The last status message.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_last_message() const;


  /** Can activate in pull mode.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_can_activate_pull() ;

/** Can activate in pull mode.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_can_activate_pull() const;

  /** Can activate in push mode.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_can_activate_push() ;

/** Can activate in push mode.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_can_activate_push() const;

  /** True if the element cannot produce data in PAUSED.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_is_live() ;

/** True if the element cannot produce data in PAUSED.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_is_live() const;

  /** The format of the segment events.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gst::Format > property_format() ;

/** The format of the segment events.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gst::Format > property_format() const;


  /**
   * @par Slot Prototype:
   * <tt>void on_my_%handoff(const Glib::RefPtr<Gst::Buffer>& arg0, const Glib::RefPtr<Gst::Pad>& arg1)</tt>
   *
   */

  Glib::SignalProxy< void,const Glib::RefPtr<Gst::Buffer>&,const Glib::RefPtr<Gst::Pad>& > signal_handoff();


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
   * @relates Gst::FakeSrc
   */
  Glib::RefPtr<Gst::FakeSrc> wrap(GstFakeSrc* object, bool take_copy = false);
}


#endif // GSTREAMERMM_DISABLE_DEPRECATED


#endif /* _GSTREAMERMM_FAKESRC_H */

