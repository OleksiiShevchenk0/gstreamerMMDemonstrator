// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/caps.h>
#include <gstreamermm/private/caps_p.h>


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

#include <gstreamermm/capsfeatures.h>

namespace Gst
{

GType Caps::get_type()
{
  return gst_caps_get_type();
}

Glib::RefPtr<Caps> Caps::create_writable()
{
  return Glib::RefPtr<Caps>::cast_static(MiniObject::create_writable());
}

Glib::RefPtr<Gst::Caps> Caps::create(const Structure& structure)
{
  //We take a copy because gst_caps_append_structure() wants to take ownership:
  GstStructure* copy = gst_structure_copy(structure.gobj());
  return Glib::wrap(gst_caps_new_full(copy, nullptr));
}

void Caps::append_structure(const Structure& structure)
{
  //We take a copy because gst_caps_append_structure() wants to take ownership:
  GstStructure* copy = gst_structure_copy(structure.gobj());
  gst_caps_append_structure(gobj(), copy);
}

void Caps::append_structure(const Structure& structure, const CapsFeatures& features)
{
  //We take a copy because gst_caps_append_structure_full() wants to take ownership:
  GstStructure* copy_structure = gst_structure_copy(structure.gobj());
  GstCapsFeatures* copy_features = gst_caps_features_copy(features.gobj());
  gst_caps_append_structure_full(gobj(), copy_structure, copy_features);
}


Glib::RefPtr<Caps> Caps::merge_structure(const Structure& structure)
{
  //We take a copy because gst_caps_merge_structure() wants to take ownership:
  GstStructure* copy = gst_structure_copy(structure.gobj());
  return Glib::wrap(gst_caps_merge_structure(gobj(), copy), true);
}

Glib::RefPtr<Caps> Caps::merge_structure(const Structure& structure, const CapsFeatures& features)
{
  //We take a copy because gst_caps_merge_structure_full() wants to take ownership:
  GstStructure* copy_structure = gst_structure_copy(structure.gobj());
  GstCapsFeatures* copy_features = gst_caps_features_copy(features.gobj());
  return Glib::wrap(gst_caps_merge_structure_full(gobj(), copy_structure, copy_features), true);
}

//TODO: Want to return RefPtr to Caps but using RefPtr in expressions such
// as 'caps->set_simple(name1, value1)->set_simple(name2, value2)' a
// causes gstreamer Structure immutability warnings because the Caps is
// referenced more than once in the expression (see bug #510301).
/*
  This method is implemented in place of gst_caps_set_simple which is a
  variable argument function and cannot be wrapped.  We don't call
  gst_caps_set_simple() directly because we are using a Glib::ValueBase as the
  value to be set instead of listing out each field in the value as would be
  done with gst_caps_set_simple()
*/
//Glib::RefPtr<Gst::Caps>
void
Caps::set_simple(const Glib::ustring& name, const Glib::ValueBase& value)
{
  g_return_if_fail (g_atomic_int_get(&(this->gobj())->mini_object.refcount) == 1); // IS_WRITABLE(caps) fails

  //The result of gst_caps_get_structure() should not be modified, according to
  //its documentation, but we are reimplementing gst_caps_set_simple() which
  //does that:
  GstStructure* structure = gst_caps_get_structure(gobj(), 0);
  if(structure)
    gst_structure_set_value(structure, name.c_str(), value.gobj());

  //return Glib::wrap(gobj(), true);
}

void
Caps::set_simple(const Glib::ustring& name, const char* data)
{
  set_simple(name, std::string(data));
}

CapsFeatures Caps::get_features(guint index) const
{
  GstCapsFeatures* features = gst_caps_get_features(gobj(), index);
  return CapsFeatures(features, true);
}

void Caps::set_features(guint index, const CapsFeatures& features)
{
  GstCapsFeatures* copy = gst_caps_features_copy(features.gobj());
  gst_caps_set_features(gobj(), index, copy);
}

Glib::RefPtr<Gst::Caps> Caps::truncate()
{
  reference();
  return Glib::wrap(gst_caps_truncate(gobj()));
}

Glib::RefPtr<Gst::Caps> Caps::merge(Glib::RefPtr<Gst::Caps>&& caps)
{
  if (is_writable())
  {
    return Glib::wrap(gst_caps_merge(gobj(), caps.release()->gobj()), true);
  }
  else
  {
    reference();
    return Glib::wrap(gst_caps_merge(gobj(), caps.release()->gobj()), false);
  }
}

} //namespace Gst

namespace Glib 
{
Glib::RefPtr<Gst::Caps> Value< Glib::RefPtr<Gst::Caps> >::get()
{
  return Glib::wrap(reinterpret_cast<GstCaps*>(get_boxed()), true); 
}
}

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::CapsFlags>::value_type()
{
  return gst_caps_flags_get_type();
}


/* Why reinterpret_cast<Caps*>(gobject) is needed:
 *
 * A Caps instance is in fact always a GstCaps instance.
 * Unfortunately, GstCaps cannot be a member of Caps,
 * because it is an opaque struct.  Also, the C interface does not provide
 * any hooks to install a destroy notification handler, thus we cannot
 * wrap it dynamically either.
 *
 * The cast works because Caps does not have any member data, and
 * it is impossible to derive from it.  This is ensured by using final on the
 * class and by using = delete on the default constructor.
 */

namespace Glib
{

Glib::RefPtr<Gst::Caps> wrap(GstCaps* object, bool take_copy)
{
  if(take_copy && object)
    gst_caps_ref(object);

  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Gst::Caps>(reinterpret_cast<Gst::Caps*>(object));
}

} // namespace Glib


namespace Gst
{


// static
Glib::RefPtr<Caps> Caps::create()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return Glib::RefPtr<Caps>(reinterpret_cast<Caps*>(gst_caps_new_empty()));
}

void Caps::reference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gst_caps_ref(reinterpret_cast<GstCaps*>(const_cast<Caps*>(this)));
}

void Caps::unreference() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  gst_caps_unref(reinterpret_cast<GstCaps*>(const_cast<Caps*>(this)));
}

GstCaps* Caps::gobj()
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<GstCaps*>(this);
}

const GstCaps* Caps::gobj() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  return reinterpret_cast<const GstCaps*>(this);
}

GstCaps* Caps::gobj_copy() const
{
  // See the comment at the top of this file, if you want to know why the cast works.
  const auto gobject = reinterpret_cast<GstCaps*>(const_cast<Caps*>(this));
  gst_caps_ref(gobject);
  return gobject;
}


Glib::RefPtr<Gst::Caps> Caps::create_from_string(const Glib::ustring& string)
{
  return Glib::wrap(gst_caps_from_string(string.c_str()));
}

Glib::RefPtr<Gst::Caps> Caps::copy_nth(guint nth) const
{
  return Glib::wrap(gst_caps_copy_nth(const_cast<GstCaps*>(gobj()), nth));
}

void Caps::append(Glib::RefPtr<Gst::Caps>&& caps)
{
  gst_caps_append(gobj(), (caps) ? caps.release()->gobj() : nullptr);
}

void Caps::append_structure(Gst::Structure&& structure)
{
  gst_caps_append_structure(gobj(), (structure) ? structure.release() : nullptr);
}

const Structure Caps::get_structure(guint idx) const
{
  return Glib::wrap(gst_caps_get_structure(const_cast<GstCaps*>(gobj()), idx), true);
}

void Caps::remove_structure(guint idx)
{
  gst_caps_remove_structure(gobj(), idx);
}

guint Caps::size() const
{
  return gst_caps_get_size(const_cast<GstCaps*>(gobj()));
}

Structure Caps::steal_structure(guint index)
{
  return Glib::wrap(gst_caps_steal_structure(gobj(), index));
}

void Caps::set_value(const Glib::ustring& field, const Glib::ValueBase& value)
{
  gst_caps_set_value(gobj(), field.c_str(), (value).gobj());
}

bool Caps::is_any() const
{
  return gst_caps_is_any(const_cast<GstCaps*>(gobj()));
}

bool Caps::empty() const
{
  return gst_caps_is_empty(const_cast<GstCaps*>(gobj()));
}

bool Caps::is_fixed() const
{
  return gst_caps_is_fixed(const_cast<GstCaps*>(gobj()));
}

bool Caps::equals(const Glib::RefPtr<const Gst::Caps>& other_caps) const
{
  return gst_caps_is_equal(const_cast<GstCaps*>(gobj()), Glib::unwrap(other_caps));
}

bool Caps::equals_fixed(const Glib::RefPtr<const Gst::Caps>& other_caps) const
{
  return gst_caps_is_equal_fixed(const_cast<GstCaps*>(gobj()), Glib::unwrap(other_caps));
}

bool Caps::is_always_compatible(const Glib::RefPtr<const Gst::Caps>& other_caps) const
{
  return gst_caps_is_always_compatible(const_cast<GstCaps*>(gobj()), Glib::unwrap(other_caps));
}

bool Caps::is_subset(const Glib::RefPtr<const Gst::Caps>& superset_caps) const
{
  return gst_caps_is_subset(const_cast<GstCaps*>(gobj()), Glib::unwrap(superset_caps));
}

bool Caps::can_intersect(const Glib::RefPtr<const Gst::Caps>& caps2) const
{
  return gst_caps_can_intersect(const_cast<GstCaps*>(gobj()), Glib::unwrap(caps2));
}

Glib::RefPtr<Gst::Caps> Caps::fixate() const
{
  return Glib::wrap(gst_caps_fixate(const_cast<GstCaps*>(gobj())));
}

bool Caps::is_strictly_equal(const Glib::RefPtr<const Gst::Caps>& caps2) const
{
  return gst_caps_is_strictly_equal(const_cast<GstCaps*>(gobj()), Glib::unwrap(caps2));
}

Glib::RefPtr<Gst::Caps> Caps::copy() const
{
  return Glib::wrap(gst_caps_copy(const_cast<GstCaps*>(gobj())));
}

bool Caps::is_subset_structure(const Gst::Structure& structure) const
{
  return gst_caps_is_subset_structure(const_cast<GstCaps*>(gobj()), structure.gobj());
}

bool Caps::is_subset_structure(const Gst::Structure& structure, const Gst::CapsFeatures& features) const
{
  return gst_caps_is_subset_structure_full(const_cast<GstCaps*>(gobj()), structure.gobj(), features.gobj());
}

Glib::RefPtr<Gst::Caps> Caps::create_any()
{
  return Glib::wrap(gst_caps_new_any());
}

Glib::RefPtr<Gst::Caps> Caps::get_intersect(const Glib::RefPtr<const Gst::Caps>& other_caps) const
{
  return Glib::wrap(gst_caps_intersect(const_cast<GstCaps*>(gobj()), const_cast<GstCaps*>(Glib::unwrap(other_caps))));
}

Glib::RefPtr<Gst::Caps> Caps::get_intersect(const Glib::RefPtr<const Gst::Caps>& other_caps, CapsIntersectMode p2) const
{
  return Glib::wrap(gst_caps_intersect_full(const_cast<GstCaps*>(gobj()), const_cast<GstCaps*>(Glib::unwrap(other_caps)), ((GstCapsIntersectMode)(p2))));
}

Glib::RefPtr<Gst::Caps> Caps::get_normal() const
{
  return Glib::wrap(gst_caps_normalize(const_cast<GstCaps*>(gobj())));
}

Glib::RefPtr<Gst::Caps> Caps::simplify()
{
  return Glib::wrap(gst_caps_simplify(gobj()));
}

Glib::ustring Caps::to_string() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gst_caps_to_string(const_cast<GstCaps*>(gobj())));
}

Glib::RefPtr<Gst::Caps> Caps::get_difference(const Glib::RefPtr<const Gst::Caps>& subtrahend_caps) const
{
  return Glib::wrap(gst_caps_subtract(const_cast<GstCaps*>(gobj()), const_cast<GstCaps*>(Glib::unwrap(subtrahend_caps))));
}


} // namespace Gst


