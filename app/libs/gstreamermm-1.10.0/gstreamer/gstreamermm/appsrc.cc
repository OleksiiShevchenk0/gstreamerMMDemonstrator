// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <gstreamermmconfig.h>
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gstreamermm/appsrc.h>
#include <gstreamermm/private/appsrc_p.h>


// Generated by generate_plugin_gmmproc_file. Don't edit this file.


extern "C"
{

static GType gst_app_stream_type_get_type()
{
  static GType const type = g_type_from_name("GstAppStreamType");
  return type;
}

GType gst_app_src_gstreamermm_get_type()
{
  static GType type = 0;
  GstElementFactory* factory = 0;
  GstPluginFeature* feature = 0;

  if(!type)
  {
    factory = gst_element_factory_find("appsrc");
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

AppSrc::AppSrc()
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseSrc(Glib::ConstructParams(appsrc_class_.init(), "name",static_cast<char*>(0), nullptr))
{}

AppSrc::AppSrc(const Glib::ustring& name)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseSrc(Glib::ConstructParams(appsrc_class_.init(), "name",name.c_str(), nullptr))
{}

Gst::FlowReturn AppSrc::push_buffer(const Glib::RefPtr<Gst::Buffer>& arg0)
{
  GstFlowReturn result;
  g_signal_emit_by_name(gobj(), "push-buffer", Glib::unwrap(arg0), &result, static_cast<void*>(0));
  return ((Gst::FlowReturn)(result));
}

Gst::FlowReturn AppSrc::push_sample(const Glib::RefPtr<Gst::Sample>& arg0)
{
  GstFlowReturn result;
  g_signal_emit_by_name(gobj(), "push-sample", Glib::unwrap(arg0), &result, static_cast<void*>(0));
  return ((Gst::FlowReturn)(result));
}

Gst::FlowReturn AppSrc::end_of_stream()
{
  GstFlowReturn result;
  g_signal_emit_by_name(gobj(), "end-of-stream", &result, static_cast<void*>(0));
  return ((Gst::FlowReturn)(result));
}

}

namespace
{


static void AppSrc_signal_need_data_callback(GstAppSrc* self, guint p0,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,guint >;

  auto obj = dynamic_cast<AppSrc*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo AppSrc_signal_need_data_info =
{
  "need-data",
  (GCallback) &AppSrc_signal_need_data_callback,
  (GCallback) &AppSrc_signal_need_data_callback
};


static const Glib::SignalProxyInfo AppSrc_signal_enough_data_info =
{
  "enough-data",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static gboolean AppSrc_signal_seek_data_callback(GstAppSrc* self, guint64 p0,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< bool,guint64 >;

  auto obj = dynamic_cast<AppSrc*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(p0));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static gboolean AppSrc_signal_seek_data_notify_callback(GstAppSrc* self, guint64 p0, void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,guint64 >;

  auto obj = dynamic_cast<AppSrc*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  using RType = gboolean;
  return RType();
}

static const Glib::SignalProxyInfo AppSrc_signal_seek_data_info =
{
  "seek-data",
  (GCallback) &AppSrc_signal_seek_data_callback,
  (GCallback) &AppSrc_signal_seek_data_notify_callback
};


static GstFlowReturn AppSrc_signal_push_buffer_callback(GstAppSrc* self, GstBuffer* p0,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< Gst::FlowReturn,const Glib::RefPtr<Gst::Buffer>& >;

  auto obj = dynamic_cast<AppSrc*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return ((GstFlowReturn)((*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
)));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = GstFlowReturn;
  return RType();
}

static GstFlowReturn AppSrc_signal_push_buffer_notify_callback(GstAppSrc* self, GstBuffer* p0, void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gst::Buffer>& >;

  auto obj = dynamic_cast<AppSrc*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

  using RType = GstFlowReturn;
  return RType();
}

static const Glib::SignalProxyInfo AppSrc_signal_push_buffer_info =
{
  "push-buffer",
  (GCallback) &AppSrc_signal_push_buffer_callback,
  (GCallback) &AppSrc_signal_push_buffer_notify_callback
};


static GstFlowReturn AppSrc_signal_push_sample_callback(GstAppSrc* self, GstSample* p0,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< Gst::FlowReturn,const Glib::RefPtr<Gst::Sample>& >;

  auto obj = dynamic_cast<AppSrc*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return ((GstFlowReturn)((*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
)));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = GstFlowReturn;
  return RType();
}

static GstFlowReturn AppSrc_signal_push_sample_notify_callback(GstAppSrc* self, GstSample* p0, void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gst::Sample>& >;

  auto obj = dynamic_cast<AppSrc*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

  using RType = GstFlowReturn;
  return RType();
}

static const Glib::SignalProxyInfo AppSrc_signal_push_sample_info =
{
  "push-sample",
  (GCallback) &AppSrc_signal_push_sample_callback,
  (GCallback) &AppSrc_signal_push_sample_notify_callback
};


static GstFlowReturn AppSrc_signal_end_of_stream_callback(GstAppSrc* self, void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< Gst::FlowReturn >;

  auto obj = dynamic_cast<AppSrc*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return ((GstFlowReturn)((*static_cast<SlotType*>(slot))()));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = GstFlowReturn;
  return RType();
}

static GstFlowReturn AppSrc_signal_end_of_stream_notify_callback(GstAppSrc* self,  void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void >;

  auto obj = dynamic_cast<AppSrc*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))();
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  using RType = GstFlowReturn;
  return RType();
}

static const Glib::SignalProxyInfo AppSrc_signal_end_of_stream_info =
{
  "end-of-stream",
  (GCallback) &AppSrc_signal_end_of_stream_callback,
  (GCallback) &AppSrc_signal_end_of_stream_notify_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gst::AppStreamType>::value_type()
{
  return gst_app_stream_type_get_type();
}


namespace Glib
{

Glib::RefPtr<Gst::AppSrc> wrap(GstAppSrc* object, bool take_copy)
{
  return Glib::RefPtr<Gst::AppSrc>( dynamic_cast<Gst::AppSrc*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& AppSrc_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &AppSrc_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_app_src_gstreamermm_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Gst::URIHandler::add_interface(get_type());

  }

  return *this;
}


void AppSrc_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* AppSrc_Class::wrap_new(GObject* object)
{
  return new AppSrc((GstAppSrc*)object);
}


/* The implementation: */

GstAppSrc* AppSrc::gobj_copy()
{
  reference();
  return gobj();
}

AppSrc::AppSrc(const Glib::ConstructParams& construct_params)
:
  Gst::BaseSrc(construct_params)
{

}

AppSrc::AppSrc(GstAppSrc* castitem)
:
  Gst::BaseSrc((GstBaseSrc*)(castitem))
{}


AppSrc::AppSrc(AppSrc&& src) noexcept
: Gst::BaseSrc(std::move(src))
  , Gst::URIHandler(std::move(src))
{}

AppSrc& AppSrc::operator=(AppSrc&& src) noexcept
{
  Gst::BaseSrc::operator=(std::move(src));
  Gst::URIHandler::operator=(std::move(src));
  return *this;
}


AppSrc::~AppSrc() noexcept
{}


AppSrc::CppClassType AppSrc::appsrc_class_; // initialize static member

GType AppSrc::get_type()
{
  return appsrc_class_.init().get_type();
}


GType AppSrc::get_base_type()
{
  return gst_app_src_gstreamermm_get_type();
}


Glib::RefPtr<AppSrc> AppSrc::create()
{
  return Glib::RefPtr<AppSrc>( new AppSrc() );
}

Glib::RefPtr<AppSrc> AppSrc::create(const Glib::ustring& name)
{
  return Glib::RefPtr<AppSrc>( new AppSrc(name) );
}


Glib::SignalProxy< void,guint > AppSrc::signal_need_data()
{
  return Glib::SignalProxy< void,guint >(this, &AppSrc_signal_need_data_info);
}


Glib::SignalProxy< void > AppSrc::signal_enough_data()
{
  return Glib::SignalProxy< void >(this, &AppSrc_signal_enough_data_info);
}


Glib::SignalProxy< bool,guint64 > AppSrc::signal_seek_data()
{
  return Glib::SignalProxy< bool,guint64 >(this, &AppSrc_signal_seek_data_info);
}


Glib::SignalProxy< Gst::FlowReturn,const Glib::RefPtr<Gst::Buffer>& > AppSrc::signal_push_buffer()
{
  return Glib::SignalProxy< Gst::FlowReturn,const Glib::RefPtr<Gst::Buffer>& >(this, &AppSrc_signal_push_buffer_info);
}


Glib::SignalProxy< Gst::FlowReturn,const Glib::RefPtr<Gst::Sample>& > AppSrc::signal_push_sample()
{
  return Glib::SignalProxy< Gst::FlowReturn,const Glib::RefPtr<Gst::Sample>& >(this, &AppSrc_signal_push_sample_info);
}


Glib::SignalProxy< Gst::FlowReturn > AppSrc::signal_end_of_stream()
{
  return Glib::SignalProxy< Gst::FlowReturn >(this, &AppSrc_signal_end_of_stream_info);
}


Glib::PropertyProxy< Glib::RefPtr<Gst::Caps> > AppSrc::property_caps() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gst::Caps> >(this, "caps");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Caps> > AppSrc::property_caps() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Caps> >(this, "caps");
}

Glib::PropertyProxy< gint64 > AppSrc::property_size() 
{
  return Glib::PropertyProxy< gint64 >(this, "size");
}

Glib::PropertyProxy_ReadOnly< gint64 > AppSrc::property_size() const
{
  return Glib::PropertyProxy_ReadOnly< gint64 >(this, "size");
}

Glib::PropertyProxy< Gst::AppStreamType > AppSrc::property_stream_type() 
{
  return Glib::PropertyProxy< Gst::AppStreamType >(this, "stream-type");
}

Glib::PropertyProxy_ReadOnly< Gst::AppStreamType > AppSrc::property_stream_type() const
{
  return Glib::PropertyProxy_ReadOnly< Gst::AppStreamType >(this, "stream-type");
}

Glib::PropertyProxy< guint64 > AppSrc::property_max_bytes() 
{
  return Glib::PropertyProxy< guint64 >(this, "max-bytes");
}

Glib::PropertyProxy_ReadOnly< guint64 > AppSrc::property_max_bytes() const
{
  return Glib::PropertyProxy_ReadOnly< guint64 >(this, "max-bytes");
}

Glib::PropertyProxy< Gst::Format > AppSrc::property_format() 
{
  return Glib::PropertyProxy< Gst::Format >(this, "format");
}

Glib::PropertyProxy_ReadOnly< Gst::Format > AppSrc::property_format() const
{
  return Glib::PropertyProxy_ReadOnly< Gst::Format >(this, "format");
}

Glib::PropertyProxy< bool > AppSrc::property_block() 
{
  return Glib::PropertyProxy< bool >(this, "block");
}

Glib::PropertyProxy_ReadOnly< bool > AppSrc::property_block() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "block");
}

Glib::PropertyProxy< bool > AppSrc::property_is_live() 
{
  return Glib::PropertyProxy< bool >(this, "is-live");
}

Glib::PropertyProxy_ReadOnly< bool > AppSrc::property_is_live() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "is-live");
}

Glib::PropertyProxy< gint64 > AppSrc::property_min_latency() 
{
  return Glib::PropertyProxy< gint64 >(this, "min-latency");
}

Glib::PropertyProxy_ReadOnly< gint64 > AppSrc::property_min_latency() const
{
  return Glib::PropertyProxy_ReadOnly< gint64 >(this, "min-latency");
}

Glib::PropertyProxy< gint64 > AppSrc::property_max_latency() 
{
  return Glib::PropertyProxy< gint64 >(this, "max-latency");
}

Glib::PropertyProxy_ReadOnly< gint64 > AppSrc::property_max_latency() const
{
  return Glib::PropertyProxy_ReadOnly< gint64 >(this, "max-latency");
}

Glib::PropertyProxy< bool > AppSrc::property_emit_signals() 
{
  return Glib::PropertyProxy< bool >(this, "emit-signals");
}

Glib::PropertyProxy_ReadOnly< bool > AppSrc::property_emit_signals() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "emit-signals");
}

Glib::PropertyProxy< guint > AppSrc::property_min_percent() 
{
  return Glib::PropertyProxy< guint >(this, "min-percent");
}

Glib::PropertyProxy_ReadOnly< guint > AppSrc::property_min_percent() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "min-percent");
}

Glib::PropertyProxy_ReadOnly< guint64 > AppSrc::property_current_level_bytes() const
{
  return Glib::PropertyProxy_ReadOnly< guint64 >(this, "current-level-bytes");
}


} // namespace Gst

#endif // GSTREAMERMM_DISABLE_DEPRECATED


