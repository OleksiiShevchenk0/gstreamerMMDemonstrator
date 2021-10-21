// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_ENCODINGPROFILE_H
#define _GSTREAMERMM_ENCODINGPROFILE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2008-2016 The gstreamermm Development Team
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
 
#include <gst/gst.h>
#include <gstreamermm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GstEncodingProfile = struct _GstEncodingProfile;
using GstEncodingProfileClass = struct _GstEncodingProfileClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gst
{ class EncodingProfile_Class; } // namespace Gst
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gst
{

class Caps;

/** Gst::EncodingProfile can be provided to the 'encodebin' element, which will take
 * care of selecting and setting up the required elements to produce an output stream
 * conforming to the specifications of the profile.
 *
 * TODO update example
 *
 * Last reviewed on 2016-05-21 (1.8.0).
 *
 */

class EncodingProfile : public Gst::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = EncodingProfile;
  using CppClassType = EncodingProfile_Class;
  using BaseObjectType = GstEncodingProfile;
  using BaseClassType = GstEncodingProfileClass;

  // noncopyable
  EncodingProfile(const EncodingProfile&) = delete;
  EncodingProfile& operator=(const EncodingProfile&) = delete;

private:  friend class EncodingProfile_Class;
  static CppClassType encodingprofile_class_;

protected:
  explicit EncodingProfile(const Glib::ConstructParams& construct_params);
  explicit EncodingProfile(GstEncodingProfile* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  EncodingProfile(EncodingProfile&& src) noexcept;
  EncodingProfile& operator=(EncodingProfile&& src) noexcept;

  ~EncodingProfile() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GstEncodingProfile*       gobj()       { return reinterpret_cast<GstEncodingProfile*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GstEncodingProfile* gobj() const { return reinterpret_cast<GstEncodingProfile*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstEncodingProfile* gobj_copy();

private:


public:
  
  /** @return The name of the profile, can be <tt>nullptr</tt>.
   */
  Glib::ustring get_name() const;
  
  /** @return The description of the profile, can be <tt>nullptr</tt>.
   */
  Glib::ustring get_description() const;
  
  /** @return The Gst::Caps corresponding to the media format used
   * in the profile. Unref after usage.
   */
  Glib::RefPtr<Gst::Caps> get_format();
  
  /** @return The Gst::Caps corresponding to the media format used
   * in the profile. Unref after usage.
   */
  Glib::RefPtr<const Gst::Caps> get_format() const;
  
  /** @return The name of the Gst::Preset to be used in the profile.
   * This is the name that has been set when saving the preset.
   */
  Glib::ustring get_preset() const;
  
  /** @return The name of the Gst::Preset factory to be used in the profile.
   */
  Glib::ustring get_preset_name() const;
  
  /** @return The number of times the profile is used in its parent
   * container profile. If 0, it is not a mandatory stream.
   */
  guint get_presence() const;
  
  /** @return The restriction Gst::Caps to apply before the encoder
   * that will be used in the profile. The fields present in restriction caps are
   * properties of the raw stream (that is before encoding), such as height and
   * width for video and depth and sampling rate for audio. Does not apply to
   * Gst::EncodingContainerProfile (since there is no corresponding raw stream).
   * Can be <tt>nullptr</tt>. Unref after usage.
   */
  Glib::RefPtr<Gst::Caps> get_restriction();
  
  /** @return The restriction Gst::Caps to apply before the encoder
   * that will be used in the profile. The fields present in restriction caps are
   * properties of the raw stream (that is before encoding), such as height and
   * width for video and depth and sampling rate for audio. Does not apply to
   * Gst::EncodingContainerProfile (since there is no corresponding raw stream).
   * Can be <tt>nullptr</tt>. Unref after usage.
   */
  Glib::RefPtr<const Gst::Caps> get_restriction() const;
  
  /** @return A suitable file extension for @a profile, or <tt>nullptr</tt>.
   */
  Glib::ustring get_file_extension() const;
  
  /** Set @a name as the given name for the @a profile. A copy of @a name will be made
   * internally.
   * 
   * @param name The name to set on the profile.
   */
  void set_name(const Glib::ustring& name);
  
  /** Set @a name as the given description for the @a profile. A copy of
   *  @a name will be made internally.
   * 
   * @param name The description to set on the profile.
   */
  void set_description(const Glib::ustring& name);
  
  /** Set whether the profile should be used or not.
   * 
   * @param enabled <tt>false</tt> to disable #profile, <tt>true</tt> to enable it.
   */
  void set_enabled(bool enabled);
  
  /** Sets the media format used in the profile.
   * 
   * @param format The media format to use in the profile.
   */
  void set_format(const Glib::RefPtr<Gst::Caps>& format);
  
  /** Sets the name of the Gst::Element that implements the Gst::Preset interface
   * to use for the profile.
   * This is the name that has been set when saving the preset.
   * 
   * @param preset The element preset to use.
   */
  void set_preset(const Glib::ustring& preset);
  
  /** Sets the name of the Gst::Preset's factory to be used in the profile.
   * 
   * @param preset_name The name of the preset to use in this @a profile.
   */
  void set_preset_name(const Glib::ustring& preset_name);
  
  /** Set the restriction Gst::Caps to apply before the encoder
   * that will be used in the profile. See gst_encoding_profile_get_restriction()
   * for more about restrictions. Does not apply to Gst::EncodingContainerProfile.
   * 
   * @param restriction The restriction to apply.
   */
  void set_restriction(const Glib::RefPtr<Gst::Caps>& restriction);
  
  /** Set the number of time the profile is used in its parent
   * container profile. If 0, it is not a mandatory stream
   * 
   * @param presence The number of time the profile can be used.
   */
  void set_presence(guint presence);
  
  /** Checks whether the two Gst::EncodingProfile are equal
   * 
   * @param profile2 A Gst::EncodingProfile.
   * @return <tt>true</tt> if @a a and @a profile2 are equal, else <tt>false</tt>.
   */
  bool is_equal(const Glib::RefPtr<Gst::EncodingProfile>& profile2) const;
  
  bool is_enabled() const;
  
  /** Computes the full output caps that this @a profile will be able to consume.
   * 
   * @return The full caps the given @a profile can consume. Call
   * Gst::Caps::unref() when you are done with the caps.
   */
  Glib::RefPtr<Gst::Caps> get_input_caps() const;
  
  /** @return The human-readable name of the type of @a profile.
   */
  Glib::ustring get_type_nick() const;

  
  /** Get whether the format that has been negotiated in at some point can be renegotiated
   * later during the encoding.
   */
  bool get_allow_dynamic_output() const;
  
  /** Sets whether the format that has been negotiated in at some point can be renegotiated
   * later during the encoding.
   * 
   * @param allow_dynamic_output Whether the format that has been negotiated first can be renegotiated
   * during the encoding.
   */
  void set_allow_dynamic_output(bool allow_dynamic_output);

  //gtkmmproc error: restriction-caps : property defs lookup failed.


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
   * @relates Gst::EncodingProfile
   */
  Glib::RefPtr<Gst::EncodingProfile> wrap(GstEncodingProfile* object, bool take_copy = false);
}


#endif /* _GSTREAMERMM_ENCODINGPROFILE_H */

