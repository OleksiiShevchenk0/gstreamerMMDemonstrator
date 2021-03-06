// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/bus.h>
#include <gstreamermm/private/bus_p.h>


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


namespace
{

extern "C"
{

static gboolean Bus_Message_gstreamermm_callback(GstBus* bus, GstMessage* message, void* data)
{
  Gst::Bus::SlotMessage* the_slot = static_cast<Gst::Bus::SlotMessage*>(data);

  try
  {
    return (*the_slot)(Glib::wrap(bus, true), Glib::wrap(message, true));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return false;
}

static void Bus_Message_gstreamermm_callback_destroy(void* data)
{
  delete static_cast<Gst::Bus::SlotMessage*>(data);
}

static GstBusSyncReply Bus_Message_Sync_gstreamermm_callback(GstBus* bus, GstMessage* message, void* data)
{
  Gst::Bus::SlotMessageSync* the_slot = static_cast<Gst::Bus::SlotMessageSync*>(data);

  try
  {
    return static_cast<GstBusSyncReply>((*the_slot)(Glib::wrap(bus, true), Glib::wrap(message, true)));
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }

  return GST_BUS_PASS;
}

} // extern "C"

} // anonymous namespace

namespace Gst
{

guint Bus::add_watch(const SlotMessage& slot, int priority)
{
  //Create a copy of the slot. A pointer to this will be passed through the callback's data parameter.
  //It will be deleted when Bus_Message_gstreamermm_callback_destroy() is called.
  SlotMessage* slot_copy = new SlotMessage(slot);
  return gst_bus_add_watch_full(gobj(), priority,
    &Bus_Message_gstreamermm_callback, slot_copy,
    &Bus_Message_gstreamermm_callback_destroy);
}

bool Bus::remove_watch(guint id)
{
  return g_source_remove(id);
}

void Bus::set_sync_handler(const SlotMessageSync& slot)
{
  // Clear a possibly existing sync handler by calling with 0 before setting
  // a new one (see gst_bus_set_sync_handler docs)
  gst_bus_set_sync_handler(gobj(), 0, 0, 0);

  SlotMessageSync* slot_copy = new SlotMessageSync(slot);
  gst_bus_set_sync_handler(gobj(), &Bus_Message_Sync_gstreamermm_callback, slot_copy, &Bus_Message_gstreamermm_callback_destroy);
}

} //namespace Gst

namespace
{


static void Bus_signal_message_callback(GstBus* self, GstMessage* p0,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gst::Message>& >;

  auto obj = dynamic_cast<Bus*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Bus_signal_message_info =
{
  "message",
  (GCallback) &Bus_signal_message_callback,
  (GCallback) &Bus_signal_message_callback
};


static void Bus_signal_sync_message_callback(GstBus* self, GstMessage* p0,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gst::Message>& >;

  auto obj = dynamic_cast<Bus*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Bus_signal_sync_message_info =
{
  "sync-message",
  (GCallback) &Bus_signal_sync_message_callback,
  (GCallback) &Bus_signal_sync_message_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gst::BusFlags>::value_type()
{
  return gst_bus_flags_get_type();
}

// static
GType Glib::Value<Gst::BusSyncReply>::value_type()
{
  return gst_bus_sync_reply_get_type();
}


namespace Glib
{

Glib::RefPtr<Gst::Bus> wrap(GstBus* object, bool take_copy)
{
  return Glib::RefPtr<Gst::Bus>( dynamic_cast<Gst::Bus*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& Bus_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Bus_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_bus_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Bus_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->message = &message_callback;
  klass->sync_message = &sync_message_callback;
}


void Bus_Class::message_callback(GstBus* self, GstMessage* p0)
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
        obj->on_message(Glib::wrap(p0, true)
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
  if(base && base->message)
    (*base->message)(self, p0);
}
void Bus_Class::sync_message_callback(GstBus* self, GstMessage* p0)
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
        obj->on_sync_message(Glib::wrap(p0, true)
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
  if(base && base->sync_message)
    (*base->sync_message)(self, p0);
}


Glib::ObjectBase* Bus_Class::wrap_new(GObject* object)
{
  return new Bus((GstBus*)object);
}


/* The implementation: */

GstBus* Bus::gobj_copy()
{
  reference();
  return gobj();
}

Bus::Bus(const Glib::ConstructParams& construct_params)
:
  Object(construct_params)
{

}

Bus::Bus(GstBus* castitem)
:
  Object((GstObject*)(castitem))
{}


Bus::Bus(Bus&& src) noexcept
: Object(std::move(src))
{}

Bus& Bus::operator=(Bus&& src) noexcept
{
  Object::operator=(std::move(src));
  return *this;
}


Bus::~Bus() noexcept
{}


Bus::CppClassType Bus::bus_class_; // initialize static member

GType Bus::get_type()
{
  return bus_class_.init().get_type();
}


GType Bus::get_base_type()
{
  return gst_bus_get_type();
}


Bus::Bus()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Object(Glib::ConstructParams(bus_class_.init()))
{
  

}

Glib::RefPtr<Bus> Bus::create()
{
  return Glib::RefPtr<Bus>( new Bus() );
}

bool Bus::post(Glib::RefPtr<Gst::Message>&& message)
{
  return gst_bus_post(gobj(), (message) ? message.release()->gobj() : nullptr);
}

bool Bus::have_pending() const
{
  return gst_bus_have_pending(const_cast<GstBus*>(gobj()));
}

Glib::RefPtr<Gst::Message> Bus::peek()
{
  return Glib::wrap(gst_bus_peek(gobj()));
}

Glib::RefPtr<const Gst::Message> Bus::peek() const
{
  return Glib::wrap(gst_bus_peek(const_cast<GstBus*>(gobj())));
}

Glib::RefPtr<Gst::Message> Bus::pop()
{
  return Glib::wrap(gst_bus_pop(gobj()));
}

Glib::RefPtr<Gst::Message> Bus::pop(MessageType message_type)
{
  return Glib::wrap(gst_bus_pop_filtered(gobj(), ((GstMessageType)(message_type))));
}

Glib::RefPtr<Gst::Message> Bus::pop(ClockTime timeout)
{
  return Glib::wrap(gst_bus_timed_pop(gobj(), ((GstClockTime)(timeout))));
}

Glib::RefPtr<Gst::Message> Bus::pop(ClockTime timeout, MessageType message_type)
{
  return Glib::wrap(gst_bus_timed_pop_filtered(gobj(), ((GstClockTime)(timeout)), ((GstMessageType)(message_type))));
}

void Bus::set_flushing(bool flushing)
{
  gst_bus_set_flushing(gobj(), static_cast<int>(flushing));
}

void Bus::disable_sync_message_emission()
{
  gst_bus_disable_sync_message_emission(gobj());
}

void Bus::enable_sync_message_emission()
{
  gst_bus_enable_sync_message_emission(gobj());
}

void Bus::add_signal_watch(int priority)
{
  gst_bus_add_signal_watch_full(gobj(), priority);
}

void Bus::remove_signal_watch()
{
  gst_bus_remove_signal_watch(gobj());
}

Glib::RefPtr<Gst::Message> Bus::poll(MessageType message_type, ClockTime timeout)
{
  return Glib::wrap(gst_bus_poll(gobj(), ((GstMessageType)(message_type)), ((GstClockTime)(timeout))));
}


Glib::SignalProxy< void,const Glib::RefPtr<Gst::Message>& > Bus::signal_message()
{
  return Glib::SignalProxy< void,const Glib::RefPtr<Gst::Message>& >(this, &Bus_signal_message_info);
}


Glib::SignalProxy< void,const Glib::RefPtr<Gst::Message>& > Bus::signal_sync_message()
{
  return Glib::SignalProxy< void,const Glib::RefPtr<Gst::Message>& >(this, &Bus_signal_sync_message_info);
}


void Gst::Bus::on_message(const Glib::RefPtr<Gst::Message>& message)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->message)
    (*base->message)(gobj(),Glib::unwrap(message));
}
void Gst::Bus::on_sync_message(const Glib::RefPtr<Gst::Message>& message)
{
  const auto base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->sync_message)
    (*base->sync_message)(gobj(),Glib::unwrap(message));
}


} // namespace Gst


