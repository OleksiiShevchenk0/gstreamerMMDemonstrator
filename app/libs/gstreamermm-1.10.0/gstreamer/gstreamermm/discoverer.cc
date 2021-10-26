// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/discoverer.h>
#include <gstreamermm/private/discoverer_p.h>


/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2011-2016 gstreamermm Development Team
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

#include <gstreamermm/discovererinfo.h>
#include <gstreamermm/element.h>


namespace Gst
{

Discoverer::Discoverer(ClockTime timeout)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(discoverer_class_.init(), "timeout",static_cast<GstClockTime>(timeout), nullptr))
{
}

} // namespace Gst

namespace
{


static void Discoverer_signal_discovered_callback(GstDiscoverer* self, GstDiscovererInfo* p0,const GError* p1,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gst::DiscovererInfo>&,const Glib::Error& >;

  auto obj = dynamic_cast<Discoverer*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0,true)
, Glib::Error(const_cast<GError*>(p1), true)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Discoverer_signal_discovered_info =
{
  "discovered",
  (GCallback) &Discoverer_signal_discovered_callback,
  (GCallback) &Discoverer_signal_discovered_callback
};


static const Glib::SignalProxyInfo Discoverer_signal_finished_info =
{
  "finished",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Discoverer_signal_starting_info =
{
  "starting",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static void Discoverer_signal_source_setup_callback(GstDiscoverer* self, GstElement* p0,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gst::Element>& >;

  auto obj = dynamic_cast<Discoverer*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0,true)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Discoverer_signal_source_setup_info =
{
  "source_setup",
  (GCallback) &Discoverer_signal_source_setup_callback,
  (GCallback) &Discoverer_signal_source_setup_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::Discoverer> wrap(GstDiscoverer* object, bool take_copy)
{
  return Glib::RefPtr<Gst::Discoverer>( dynamic_cast<Gst::Discoverer*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& Discoverer_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Discoverer_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_discoverer_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Discoverer_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->discovered = &discovered_callback;
  klass->finished = &finished_callback;
  klass->starting = &starting_callback;
  klass->source_setup = &source_setup_callback;
}


void Discoverer_Class::discovered_callback(GstDiscoverer* self, GstDiscovererInfo* p0, const GError* p1)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_discovered(Glib::wrap(p0,true)
, Glib::Error(const_cast<GError*>(p1), true)
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->discovered)
    (*base->discovered)(self, p0, p1);
}
void Discoverer_Class::finished_callback(GstDiscoverer* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_finished();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->finished)
    (*base->finished)(self);
}
void Discoverer_Class::starting_callback(GstDiscoverer* self)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_starting();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->starting)
    (*base->starting)(self);
}
void Discoverer_Class::source_setup_callback(GstDiscoverer* self, GstElement* p0)
{
  const auto obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    const auto obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_source_setup(Glib::wrap(p0,true)
);
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  const auto base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->source_setup)
    (*base->source_setup)(self, p0);
}


Glib::ObjectBase* Discoverer_Class::wrap_new(GObject* object)
{
  return new Discoverer((GstDiscoverer*)object);
}


/* The implementation: */

GstDiscoverer* Discoverer::gobj_copy()
{
  reference();
  return gobj();
}

Discoverer::Discoverer(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Discoverer::Discoverer(GstDiscoverer* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Discoverer::Discoverer(Discoverer&& src) noexcept
: Glib::Object(std::move(src))
{}

Discoverer& Discoverer::operator=(Discoverer&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


Discoverer::~Discoverer() noexcept
{}


Discoverer::CppClassType Discoverer::discoverer_class_; // initialize static member

GType Discoverer::get_type()
{
  return discoverer_class_.init().get_type();
}


GType Discoverer::get_base_type()
{
  return gst_discoverer_get_type();
}


Glib::RefPtr<Discoverer> Discoverer::create(ClockTime timeout)
{
  return Glib::RefPtr<Discoverer>( new Discoverer(timeout) );
}

void Discoverer::start()
{
  gst_discoverer_start(gobj());
}

void Discoverer::stop()
{
  gst_discoverer_stop(gobj());
}

Glib::RefPtr<Gst::DiscovererInfo> Discoverer::discover_uri(const Glib::ustring& uri)
{
  GError* gerror = nullptr;
  Glib::RefPtr<Gst::DiscovererInfo> retvalue = Glib::wrap(gst_discoverer_discover_uri(gobj(), uri.c_str(), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool Discoverer::discover_uri_async(const Glib::ustring& uri)
{
  return gst_discoverer_discover_uri_async(gobj(), uri.c_str());
}


Glib::SignalProxy< void,const Glib::RefPtr<Gst::DiscovererInfo>&,const Glib::Error& > Discoverer::signal_discovered()
{
  return Glib::SignalProxy< void,const Glib::RefPtr<Gst::DiscovererInfo>&,const Glib::Error& >(this, &Discoverer_signal_discovered_info);
}


Glib::SignalProxy< void > Discoverer::signal_finished()
{
  return Glib::SignalProxy< void >(this, &Discoverer_signal_finished_info);
}


Glib::SignalProxy< void > Discoverer::signal_starting()
{
  return Glib::SignalProxy< void >(this, &Discoverer_signal_starting_info);
}


Glib::SignalProxy< void,const Glib::RefPtr<Gst::Element>& > Discoverer::signal_source_setup()
{
  return Glib::SignalProxy< void,const Glib::RefPtr<Gst::Element>& >(this, &Discoverer_signal_source_setup_info);
}


Glib::PropertyProxy< guint64 > Discoverer::property_timeout() 
{
  return Glib::PropertyProxy< guint64 >(this, "timeout");
}

Glib::PropertyProxy_ReadOnly< guint64 > Discoverer::property_timeout() const
{
  return Glib::PropertyProxy_ReadOnly< guint64 >(this, "timeout");
}


void Gst::Discoverer::on_discovered(const Glib::RefPtr<Gst::DiscovererInfo>& info, const Glib::Error& error)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->discovered)
    (*base->discovered)(gobj(),Glib::unwrap(info),error.gobj());
}
void Gst::Discoverer::on_finished()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->finished)
    (*base->finished)(gobj());
}
void Gst::Discoverer::on_starting()
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->starting)
    (*base->starting)(gobj());
}
void Gst::Discoverer::on_source_setup(const Glib::RefPtr<Gst::Element>& source)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->source_setup)
    (*base->source_setup)(gobj(),Glib::unwrap(source));
}


} // namespace Gst

