// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/structure.h>
#include <gstreamermm/private/structure_p.h>


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
#include <gstreamermm/value.h>
#include <gstreamermm/miniobject.h>

namespace
{

static Glib::ustring quark_to_ustring(GQuark quark)
{
 const gchar* pch = g_quark_to_string(quark);
 Glib::ustring str;
 if(pch)
   str = pch;
   
 return str;
}

extern "C"
{

static gboolean
Structure_Foreach_gstreamermm_callback(GQuark field_id, const GValue *value, void* data)
{
  Gst::Structure::SlotForeach* slot = static_cast<Gst::Structure::SlotForeach*>(data);

  try
  {
    return (*slot)(quark_to_ustring(field_id), *reinterpret_cast<const Glib::ValueBase*>(value));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return false;
}

static gboolean
Structure_Map_gstreamermm_callback(GQuark field_id, GValue *value, void* data)
{
  Gst::Structure::SlotMap* slot = static_cast<Gst::Structure::SlotMap*>(data);

  try
  {
    bool result = (*slot)(quark_to_ustring(field_id), *reinterpret_cast<Glib::ValueBase*>(value));
    return result;
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return false;
}

} // extern "C"

} // anonymous namespace

namespace Gst
{

Structure::operator const void*() const
{
  return gobject_ ? GINT_TO_POINTER(1) : nullptr;
}

GstStructure* Structure::release() noexcept
{
  GstStructure *tmp = gobj();
  gobject_ = nullptr;
  return tmp;
}

void Structure::get_field(const Glib::ustring& name, Glib::ValueBase& value) const
{
  const GValue *val = gst_structure_get_value(gobj(), name.c_str());
  value.init(val);
}

void Structure::set_field(const Glib::ustring& fieldname,
  const Glib::ValueBase& value)
{
  gst_structure_set_value(gobj(), fieldname.c_str(), value.gobj());
}

void Structure::set_field(const Glib::ustring& fieldname, GType enumtype, int value)
{
  gst_structure_set(gobj(), fieldname.c_str(), enumtype, value, nullptr);
}

void Structure::set_field(const Glib::ustring& fieldname, const char* value)
{
  set_field<std::string>(fieldname, value);
}

void Structure::remove_field(const Glib::ustring& fieldname)
{
  gst_structure_remove_field(gobj(), fieldname.c_str());
}

bool Structure::get_field(const Glib::ustring& name, GType enum_type, int& value) const
{
  return gst_structure_get_enum(gobj(), name.c_str(), enum_type, &value);
}

bool Structure::foreach(const SlotForeach& slot)
{
  return gst_structure_foreach(gobj(), &Structure_Foreach_gstreamermm_callback, const_cast<SlotForeach*>(&slot));
}

bool Structure::map_in_place(const SlotMap& slot)
{
  return gst_structure_map_in_place(gobj(), &Structure_Map_gstreamermm_callback, const_cast<SlotMap*>(&slot));
}

Structure Structure::create_from_string(const Glib::ustring& the_string)
{
  return Structure(gst_structure_from_string(the_string.c_str(), nullptr));
}

bool Structure::fixate_nearest_fraction(const Glib::ustring& name, const Gst::Fraction& target)
{
  return gst_structure_fixate_field_nearest_fraction(gobj(), name.c_str(), target.num, target.denom);
}

} //namespace Gst

namespace
{
} // anonymous namespace


namespace Glib
{

Gst::Structure wrap(GstStructure* object, bool take_copy)
{
  return Gst::Structure(object, take_copy);
}

} // namespace Glib


namespace Gst
{


// static
GType Structure::get_type()
{
  return gst_structure_get_type();
}

Structure::Structure()
:
  gobject_ (nullptr) // Allows creation of invalid wrapper, e.g. for output arguments to methods.
{}

Structure::Structure(const Structure& other)
:
  gobject_ ((other.gobject_) ? gst_structure_copy(other.gobject_) : nullptr)
{}

Structure::Structure(Structure&& other) noexcept
:
  gobject_(other.gobject_)
{
  other.gobject_ = nullptr;
}

Structure& Structure::operator=(Structure&& other) noexcept
{
  Structure temp (other);
  swap(temp);
  return *this;
}

Structure::Structure(GstStructure* gobject, bool make_a_copy)
:
  // For BoxedType wrappers, make_a_copy is true by default.  The static
  // BoxedType wrappers must always take a copy, thus make_a_copy = true
  // ensures identical behaviour if the default argument is used.
  gobject_ ((make_a_copy && gobject) ? gst_structure_copy(gobject) : gobject)
{}

Structure& Structure::operator=(const Structure& other)
{
  Structure temp (other);
  swap(temp);
  return *this;
}

Structure::~Structure() noexcept
{
  if(gobject_)
    gst_structure_free(gobject_);
}

void Structure::swap(Structure& other) noexcept
{
  std::swap(gobject_, other.gobject_);
}

GstStructure* Structure::gobj_copy() const
{
  return gst_structure_copy(gobject_);
}


Glib::ustring Structure::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_structure_get_name(const_cast<GstStructure*>(gobj())));
}

bool Structure::has_name(const Glib::ustring& name) const
{
  return gst_structure_has_name(const_cast<GstStructure*>(gobj()), name.c_str());
}

void Structure::set_name(const Glib::ustring& name)
{
  gst_structure_set_name(gobj(), name.c_str());
}

Glib::QueryQuark Structure::get_name_id() const
{
  return Glib::QueryQuark(gst_structure_get_name_id(const_cast<GstStructure*>(gobj())));
}

void Structure::remove_all_fields()
{
  gst_structure_remove_all_fields(gobj());
}

GType Structure::get_field_type(const Glib::ustring& fieldname) const
{
  return gst_structure_get_field_type(const_cast<GstStructure*>(gobj()), fieldname.c_str());
}

int Structure::size() const
{
  return gst_structure_n_fields(const_cast<GstStructure*>(gobj()));
}

Glib::ustring Structure::get_nth_field_name(guint index) const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gst_structure_nth_field_name(const_cast<GstStructure*>(gobj()), index));
}

Glib::ustring Structure::to_string() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gst_structure_to_string(const_cast<GstStructure*>(gobj())));
}

bool Structure::fixate_field_nearest_int(const Glib::ustring& name, int target)
{
  return gst_structure_fixate_field_nearest_int(gobj(), name.c_str(), target);
}

bool Structure::fixate_field_nearest_double(const Glib::ustring& name, double target)
{
  return gst_structure_fixate_field_nearest_double(gobj(), name.c_str(), target);
}

bool Structure::fixate_field_string(const Glib::ustring& name, const Glib::ustring& target)
{
  return gst_structure_fixate_field_string(gobj(), name.c_str(), target.c_str());
}

bool Structure::fixate_field(const Glib::ustring& name)
{
  return gst_structure_fixate_field(gobj(), name.c_str());
}

bool Structure::fixate_field_boolean(const Glib::ustring& name, bool target)
{
  return gst_structure_fixate_field_boolean(gobj(), name.c_str(), static_cast<int>(target));
}

Gst::Structure Structure::intersect(const Gst::Structure& struct2) const
{
  return Glib::wrap(gst_structure_intersect(const_cast<GstStructure*>(gobj()), struct2.gobj()));
}

bool Structure::is_equal(const Gst::Structure& struct2) const
{
  return gst_structure_is_equal(const_cast<GstStructure*>(gobj()), struct2.gobj());
}

bool Structure::is_subset(const Gst::Structure& superset) const
{
  return gst_structure_is_subset(const_cast<GstStructure*>(gobj()), superset.gobj());
}

bool Structure::can_intersect(const Gst::Structure& struct2) const
{
  return gst_structure_can_intersect(const_cast<GstStructure*>(gobj()), struct2.gobj());
}

void Structure::fixate()
{
  gst_structure_fixate(gobj());
}

bool Structure::get_flagset(const Glib::ustring& fieldname, guint& value_flags, guint& value_mask) const
{
  return gst_structure_get_flagset(const_cast<GstStructure*>(gobj()), fieldname.c_str(), &(value_flags), &(value_mask));
}

bool Structure::has_field(const Glib::ustring& fieldname) const
{
  return gst_structure_has_field(const_cast<GstStructure*>(gobj()), fieldname.c_str());
}

bool Structure::has_field(const Glib::ustring& fieldname, GType type) const
{
  return gst_structure_has_field_typed(const_cast<GstStructure*>(gobj()), fieldname.c_str(), type);
}


} // namespace Gst


