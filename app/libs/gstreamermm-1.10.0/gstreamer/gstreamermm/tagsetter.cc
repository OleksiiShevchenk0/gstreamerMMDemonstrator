// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/tagsetter.h>
#include <gstreamermm/private/tagsetter_p.h>


/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2008 The gstreamermm Development Team
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

void TagSetter::add_tag(Tag tag, const Glib::ValueBase& value,
  TagMergeMode mode)
{
  gst_tag_setter_add_tag_values(gobj(), (GstTagMergeMode) mode,
    gstreamermm_get_stock_tag(tag), value.gobj(), (void*)0);
}

void TagSetter::add_tag(const Glib::ustring& tag, const Glib::ValueBase& value,
  TagMergeMode mode)
{
  gst_tag_setter_add_tag_values(gobj(), (GstTagMergeMode) mode, tag.c_str(),
    value.gobj(), (void*)0);
}

void TagSetter::add_tag(Tag tag, const char* data, TagMergeMode mode)
{
  gst_tag_setter_add_tags(gobj(), (GstTagMergeMode) mode,
    gstreamermm_get_stock_tag(tag), data, (void*)0);
}

void TagSetter::add_tag(const Glib::ustring& tag, const char* data,
  TagMergeMode mode)
{
  gst_tag_setter_add_tags(gobj(), (GstTagMergeMode) mode, tag.c_str(),
    data, (void*)0);
}

} //namespace Gst

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::TagSetter> wrap(GstTagSetter* object, bool take_copy)
{
  return Glib::RefPtr<Gst::TagSetter>( dynamic_cast<Gst::TagSetter*> (Glib::wrap_auto_interface<Gst::TagSetter> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gst
{


/* The *_Class implementation: */

const Glib::Interface_Class& TagSetter_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &TagSetter_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gst_tag_setter_get_type();
  }

  return *this;
}

void TagSetter_Class::iface_init_function(void* g_iface, void*)
{
  const auto klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != nullptr);


}


Glib::ObjectBase* TagSetter_Class::wrap_new(GObject* object)
{
  return new TagSetter((GstTagSetter*)(object));
}


/* The implementation: */

TagSetter::TagSetter()
:
  Glib::Interface(tagsetter_class_.init())
{}

TagSetter::TagSetter(GstTagSetter* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

TagSetter::TagSetter(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

TagSetter::TagSetter(TagSetter&& src) noexcept
: Glib::Interface(std::move(src))
{}

TagSetter& TagSetter::operator=(TagSetter&& src) noexcept
{
  Glib::Interface::operator=(std::move(src));
  return *this;
}

TagSetter::~TagSetter() noexcept
{}

// static
void TagSetter::add_interface(GType gtype_implementer)
{
  tagsetter_class_.init().add_interface(gtype_implementer);
}

TagSetter::CppClassType TagSetter::tagsetter_class_; // initialize static member

GType TagSetter::get_type()
{
  return tagsetter_class_.init().get_type();
}


GType TagSetter::get_base_type()
{
  return gst_tag_setter_get_type();
}


void TagSetter::reset_tags()
{
  gst_tag_setter_reset_tags(gobj());
}

void TagSetter::merge_tags(const Gst::TagList& list, TagMergeMode mode)
{
  gst_tag_setter_merge_tags(gobj(), list.gobj(), ((GstTagMergeMode)(mode)));
}

const Gst::TagList TagSetter::get_tag_list() const
{
  return Glib::wrap_taglist(const_cast<GstTagList*>(gst_tag_setter_get_tag_list(const_cast<GstTagSetter*>(gobj()))), true);
}

void TagSetter::set_tag_merge_mode(TagMergeMode mode)
{
  gst_tag_setter_set_tag_merge_mode(gobj(), ((GstTagMergeMode)(mode)));
}

TagMergeMode TagSetter::get_tag_merge_mode() const
{
  return ((TagMergeMode)(gst_tag_setter_get_tag_merge_mode(const_cast<GstTagSetter*>(gobj()))));
}


} // namespace Gst


