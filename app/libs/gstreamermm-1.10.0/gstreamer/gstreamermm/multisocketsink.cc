// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <gstreamermmconfig.h>
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gstreamermm/multisocketsink.h>
#include <gstreamermm/private/multisocketsink_p.h>


// Generated by generate_plugin_gmmproc_file. Don't edit this file.


extern "C"
{

GType gst_multi_socket_sink_gstreamermm_get_type()
{
  static GType type = 0;
  GstElementFactory* factory = 0;
  GstPluginFeature* feature = 0;

  if(!type)
  {
    factory = gst_element_factory_find("multisocketsink");
    // Make sure that the feature is actually loaded:
    if(factory)
    {
      feature =
        gst_plugin_feature_load(GST_PLUGIN_FEATURE(factory));

      g_object_unref(factory);
      factory = GST_ELEMENT_FACTORY(feature);
      type = gst_element_factory_get_element_type(factory);
      g_object_unref(factory);
    }
  }

  return type;
}

} // extern "C"

namespace Gst
{

MultiSocketSink::MultiSocketSink()
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseSink(Glib::ConstructParams(multisocketsink_class_.init(), "name",static_cast<char*>(0), nullptr))
{}

MultiSocketSink::MultiSocketSink(const Glib::ustring& name)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseSink(Glib::ConstructParams(multisocketsink_class_.init(), "name",name.c_str(), nullptr))
{}

void MultiSocketSink::add(const Glib::RefPtr<Gio::Socket>& arg0)
{
  g_signal_emit_by_name(gobj(), "add", Glib::unwrap(arg0), static_cast<void*>(0));
}

void MultiSocketSink::add_full(const Glib::RefPtr<Gio::Socket>& arg0, Gst::MultiHandleSinkSyncMethod arg1, Gst::Format arg2, guint64 arg3, Gst::Format arg4, guint64 arg5)
{
  g_signal_emit_by_name(gobj(), "add-full", Glib::unwrap(arg0), ((GstMultiHandleSinkSyncMethod)(arg1)), ((GstFormat)(arg2)), arg3, ((GstFormat)(arg4)), arg5, static_cast<void*>(0));
}

void MultiSocketSink::remove(const Glib::RefPtr<Gio::Socket>& arg0)
{
  g_signal_emit_by_name(gobj(), "remove", Glib::unwrap(arg0), static_cast<void*>(0));
}

void MultiSocketSink::remove_flush(const Glib::RefPtr<Gio::Socket>& arg0)
{
  g_signal_emit_by_name(gobj(), "remove-flush", Glib::unwrap(arg0), static_cast<void*>(0));
}

Gst::Structure MultiSocketSink::get_stats(const Glib::RefPtr<Gio::Socket>& arg0)
{
  GstStructure* result;
  g_signal_emit_by_name(gobj(), "get-stats", Glib::unwrap(arg0), &result, static_cast<void*>(0));
  return Glib::wrap(result);
}

}

namespace
{


static void MultiSocketSink_signal_add_callback(GstMultiSocketSink* self, GSocket* p0,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gio::Socket>& >;

  auto obj = dynamic_cast<MultiSocketSink*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static const Glib::SignalProxyInfo MultiSocketSink_signal_add_info =
{
  "add",
  (GCallback) &MultiSocketSink_signal_add_callback,
  (GCallback) &MultiSocketSink_signal_add_callback
};


static void MultiSocketSink_signal_add_full_callback(GstMultiSocketSink* self, GSocket* p0,GstMultiHandleSinkSyncMethod p1,GstFormat p2,guint64 p3,GstFormat p4,guint64 p5,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gio::Socket>&,Gst::MultiHandleSinkSyncMethod,Gst::Format,guint64,Gst::Format,guint64 >;

  auto obj = dynamic_cast<MultiSocketSink*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
, ((Gst::MultiHandleSinkSyncMethod)(p1))
, ((Gst::Format)(p2))
, p3, ((Gst::Format)(p4))
, p5);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo MultiSocketSink_signal_add_full_info =
{
  "add-full",
  (GCallback) &MultiSocketSink_signal_add_full_callback,
  (GCallback) &MultiSocketSink_signal_add_full_callback
};


static void MultiSocketSink_signal_remove_callback(GstMultiSocketSink* self, GSocket* p0,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gio::Socket>& >;

  auto obj = dynamic_cast<MultiSocketSink*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static const Glib::SignalProxyInfo MultiSocketSink_signal_remove_info =
{
  "remove",
  (GCallback) &MultiSocketSink_signal_remove_callback,
  (GCallback) &MultiSocketSink_signal_remove_callback
};


static void MultiSocketSink_signal_remove_flush_callback(GstMultiSocketSink* self, GSocket* p0,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gio::Socket>& >;

  auto obj = dynamic_cast<MultiSocketSink*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static const Glib::SignalProxyInfo MultiSocketSink_signal_remove_flush_info =
{
  "remove-flush",
  (GCallback) &MultiSocketSink_signal_remove_flush_callback,
  (GCallback) &MultiSocketSink_signal_remove_flush_callback
};


static GstStructure* MultiSocketSink_signal_get_stats_callback(GstMultiSocketSink* self, GSocket* p0,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< Gst::Structure,const Glib::RefPtr<Gio::Socket>& >;

  auto obj = dynamic_cast<MultiSocketSink*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return ((*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
)).gobj_copy();
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = GstStructure*;
  return RType();
}

static GstStructure* MultiSocketSink_signal_get_stats_notify_callback(GstMultiSocketSink* self, GSocket* p0, void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gio::Socket>& >;

  auto obj = dynamic_cast<MultiSocketSink*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

  using RType = GstStructure*;
  return RType();
}

static const Glib::SignalProxyInfo MultiSocketSink_signal_get_stats_info =
{
  "get-stats",
  (GCallback) &MultiSocketSink_signal_get_stats_callback,
  (GCallback) &MultiSocketSink_signal_get_stats_notify_callback
};


static void MultiSocketSink_signal_client_added_callback(GstMultiSocketSink* self, GObject* p0,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Glib::Object>& >;

  auto obj = dynamic_cast<MultiSocketSink*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static const Glib::SignalProxyInfo MultiSocketSink_signal_client_added_info =
{
  "client-added",
  (GCallback) &MultiSocketSink_signal_client_added_callback,
  (GCallback) &MultiSocketSink_signal_client_added_callback
};


static void MultiSocketSink_signal_client_removed_callback(GstMultiSocketSink* self, GSocket* p0,GstMultiHandleSinkClientStatus p1,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gio::Socket>&,Gst::MultiHandleSinkClientStatus >;

  auto obj = dynamic_cast<MultiSocketSink*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
, ((Gst::MultiHandleSinkClientStatus)(p1))
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo MultiSocketSink_signal_client_removed_info =
{
  "client-removed",
  (GCallback) &MultiSocketSink_signal_client_removed_callback,
  (GCallback) &MultiSocketSink_signal_client_removed_callback
};


static void MultiSocketSink_signal_client_socket_removed_callback(GstMultiSocketSink* self, GSocket* p0,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gio::Socket>& >;

  auto obj = dynamic_cast<MultiSocketSink*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

static const Glib::SignalProxyInfo MultiSocketSink_signal_client_socket_removed_info =
{
  "client-socket-removed",
  (GCallback) &MultiSocketSink_signal_client_socket_removed_callback,
  (GCallback) &MultiSocketSink_signal_client_socket_removed_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::MultiSocketSink> wrap(GstMultiSocketSink* object, bool take_copy)
{
  return Glib::RefPtr<Gst::MultiSocketSink>( dynamic_cast<Gst::MultiSocketSink*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& MultiSocketSink_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &MultiSocketSink_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_multi_socket_sink_gstreamermm_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void MultiSocketSink_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* MultiSocketSink_Class::wrap_new(GObject* object)
{
  return new MultiSocketSink((GstMultiSocketSink*)object);
}


/* The implementation: */

GstMultiSocketSink* MultiSocketSink::gobj_copy()
{
  reference();
  return gobj();
}

MultiSocketSink::MultiSocketSink(const Glib::ConstructParams& construct_params)
:
  Gst::BaseSink(construct_params)
{

}

MultiSocketSink::MultiSocketSink(GstMultiSocketSink* castitem)
:
  Gst::BaseSink((GstBaseSink*)(castitem))
{}


MultiSocketSink::MultiSocketSink(MultiSocketSink&& src) noexcept
: Gst::BaseSink(std::move(src))
{}

MultiSocketSink& MultiSocketSink::operator=(MultiSocketSink&& src) noexcept
{
  Gst::BaseSink::operator=(std::move(src));
  return *this;
}


MultiSocketSink::~MultiSocketSink() noexcept
{}


MultiSocketSink::CppClassType MultiSocketSink::multisocketsink_class_; // initialize static member

GType MultiSocketSink::get_type()
{
  return multisocketsink_class_.init().get_type();
}


GType MultiSocketSink::get_base_type()
{
  return gst_multi_socket_sink_gstreamermm_get_type();
}


Glib::RefPtr<MultiSocketSink> MultiSocketSink::create()
{
  return Glib::RefPtr<MultiSocketSink>( new MultiSocketSink() );
}

Glib::RefPtr<MultiSocketSink> MultiSocketSink::create(const Glib::ustring& name)
{
  return Glib::RefPtr<MultiSocketSink>( new MultiSocketSink(name) );
}


Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>& > MultiSocketSink::signal_add()
{
  return Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>& >(this, &MultiSocketSink_signal_add_info);
}


Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>&,Gst::MultiHandleSinkSyncMethod,Gst::Format,guint64,Gst::Format,guint64 > MultiSocketSink::signal_add_full()
{
  return Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>&,Gst::MultiHandleSinkSyncMethod,Gst::Format,guint64,Gst::Format,guint64 >(this, &MultiSocketSink_signal_add_full_info);
}


Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>& > MultiSocketSink::signal_remove()
{
  return Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>& >(this, &MultiSocketSink_signal_remove_info);
}


Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>& > MultiSocketSink::signal_remove_flush()
{
  return Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>& >(this, &MultiSocketSink_signal_remove_flush_info);
}


Glib::SignalProxy< Gst::Structure,const Glib::RefPtr<Gio::Socket>& > MultiSocketSink::signal_get_stats()
{
  return Glib::SignalProxy< Gst::Structure,const Glib::RefPtr<Gio::Socket>& >(this, &MultiSocketSink_signal_get_stats_info);
}


Glib::SignalProxy< void,const Glib::RefPtr<Glib::Object>& > MultiSocketSink::signal_client_added()
{
  return Glib::SignalProxy< void,const Glib::RefPtr<Glib::Object>& >(this, &MultiSocketSink_signal_client_added_info);
}


Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>&,Gst::MultiHandleSinkClientStatus > MultiSocketSink::signal_client_removed()
{
  return Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>&,Gst::MultiHandleSinkClientStatus >(this, &MultiSocketSink_signal_client_removed_info);
}


Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>& > MultiSocketSink::signal_client_socket_removed()
{
  return Glib::SignalProxy< void,const Glib::RefPtr<Gio::Socket>& >(this, &MultiSocketSink_signal_client_socket_removed_info);
}


Glib::PropertyProxy< bool > MultiSocketSink::property_send_dispatched() 
{
  return Glib::PropertyProxy< bool >(this, "send-dispatched");
}

Glib::PropertyProxy_ReadOnly< bool > MultiSocketSink::property_send_dispatched() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "send-dispatched");
}

Glib::PropertyProxy< bool > MultiSocketSink::property_send_messages() 
{
  return Glib::PropertyProxy< bool >(this, "send-messages");
}

Glib::PropertyProxy_ReadOnly< bool > MultiSocketSink::property_send_messages() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "send-messages");
}


} // namespace Gst

#endif // GSTREAMERMM_DISABLE_DEPRECATED


