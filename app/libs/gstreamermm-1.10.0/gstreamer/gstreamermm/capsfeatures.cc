// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/capsfeatures.h>
#include <gstreamermm/private/capsfeatures_p.h>


/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2014-2016 The gstreamermm Development Team
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

namespace Gst
{
CapsFeatures::CapsFeatures(std::initializer_list<Glib::ustring> features)
 : CapsFeatures()
{
  for (auto feature : features)
  {
    gst_caps_features_add(gobject_, feature.c_str());
  }
}

Glib::ustring CapsFeatures::memory_system_memory()
{
  return GST_CAPS_FEATURE_MEMORY_SYSTEM_MEMORY;
}

}

namespace
{
} // anonymous namespace


namespace Glib
{

Gst::CapsFeatures wrap(GstCapsFeatures* object, bool take_copy)
{
  return Gst::CapsFeatures(object, take_copy);
}

} // namespace Glib


namespace Gst
{


// static
GType CapsFeatures::get_type()
{
  return gst_caps_features_get_type();
}

CapsFeatures::CapsFeatures()
:
  gobject_ (gst_caps_features_new_empty())
{}

CapsFeatures::CapsFeatures(const CapsFeatures& other)
:
  gobject_ ((other.gobject_) ? gst_caps_features_copy(other.gobject_) : nullptr)
{}

CapsFeatures::CapsFeatures(CapsFeatures&& other) noexcept
:
  gobject_(other.gobject_)
{
  other.gobject_ = nullptr;
}

CapsFeatures& CapsFeatures::operator=(CapsFeatures&& other) noexcept
{
  CapsFeatures temp (other);
  swap(temp);
  return *this;
}

CapsFeatures::CapsFeatures(GstCapsFeatures* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? gst_caps_features_copy(gobject) : gobject)
{}

CapsFeatures& CapsFeatures::operator=(const CapsFeatures& other)
{
  CapsFeatures temp (other);
  swap(temp);
  return *this;
}

CapsFeatures::~CapsFeatures() noexcept
{
  if(gobject_)
    gst_caps_features_free(gobject_);
}

void CapsFeatures::swap(CapsFeatures& other) noexcept
{
  std::swap(gobject_, other.gobject_);
}

GstCapsFeatures* CapsFeatures::gobj_copy() const
{
  return gst_caps_features_copy(gobject_);
}


Gst::CapsFeatures CapsFeatures::create_any()
{
  return CapsFeatures(gst_caps_features_new_any(), false);
}

Gst::CapsFeatures CapsFeatures::create_from_string(const Glib::ustring& features)
{
  return CapsFeatures(gst_caps_features_from_string(features.c_str()), false);
}

Glib::ustring CapsFeatures::to_string() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gst_caps_features_to_string(const_cast<GstCapsFeatures*>(gobj())));
}

bool CapsFeatures::set_parent_refcount(gint * refcount)
{
  return gst_caps_features_set_parent_refcount(gobj(), refcount);
}

bool CapsFeatures::is_equal(const Gst::CapsFeatures& features2) const
{
  return gst_caps_features_is_equal(const_cast<GstCapsFeatures*>(gobj()), features2.gobj());
}

bool CapsFeatures::is_any() const
{
  return gst_caps_features_is_any(const_cast<GstCapsFeatures*>(gobj()));
}

bool CapsFeatures::contains(const Glib::ustring& feature) const
{
  return gst_caps_features_contains(const_cast<GstCapsFeatures*>(gobj()), feature.c_str());
}

bool CapsFeatures::contains(GQuark feature) const
{
  return gst_caps_features_contains_id(const_cast<GstCapsFeatures*>(gobj()), feature);
}

guint CapsFeatures::get_size() const
{
  return gst_caps_features_get_size(const_cast<GstCapsFeatures*>(gobj()));
}

Glib::ustring CapsFeatures::get_nth(guint i) const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_caps_features_get_nth(const_cast<GstCapsFeatures*>(gobj()), i));
}

GQuark CapsFeatures::get_nth_id(guint i) const
{
  return gst_caps_features_get_nth_id(const_cast<GstCapsFeatures*>(gobj()), i);
}

void CapsFeatures::add(const Glib::ustring& feature)
{
  gst_caps_features_add(gobj(), feature.c_str());
}

void CapsFeatures::add(GQuark feature)
{
  gst_caps_features_add_id(gobj(), feature);
}

void CapsFeatures::remove(const Glib::ustring& feature)
{
  gst_caps_features_remove(gobj(), feature.c_str());
}

void CapsFeatures::remove(GQuark feature)
{
  gst_caps_features_remove_id(gobj(), feature);
}


} // namespace Gst


