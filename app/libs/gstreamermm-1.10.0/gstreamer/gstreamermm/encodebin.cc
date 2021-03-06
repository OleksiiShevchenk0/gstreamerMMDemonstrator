// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <gstreamermmconfig.h>
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gstreamermm/encodebin.h>
#include <gstreamermm/private/encodebin_p.h>


// Generated by generate_plugin_gmmproc_file. Don't edit this file.


extern "C"
{

static GType gst_encode_bin_flags_get_type()
{
  static GType const type = g_type_from_name("GstEncodeBinFlags");
  return type;
}

GType gst_encode_bin_gstreamermm_get_type()
{
  static GType type = 0;
  GstElementFactory* factory = 0;
  GstPluginFeature* feature = 0;

  if(!type)
  {
    factory = gst_element_factory_find("encodebin");
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

EncodeBin::EncodeBin()
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::Bin(Glib::ConstructParams(encodebin_class_.init(), "name",static_cast<char*>(0), nullptr))
{}

EncodeBin::EncodeBin(const Glib::ustring& name)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::Bin(Glib::ConstructParams(encodebin_class_.init(), "name",name.c_str(), nullptr))
{}

Glib::RefPtr<Gst::Pad> EncodeBin::request_pad(const Glib::RefPtr<Gst::Caps>& arg0)
{
  GstPad* result;
  g_signal_emit_by_name(gobj(), "request-pad", Glib::unwrap(arg0), &result, static_cast<void*>(0));
  return Glib::wrap(result);
}

Glib::RefPtr<Gst::Pad> EncodeBin::request_profile_pad(const Glib::ustring& arg0)
{
  GstPad* result;
  g_signal_emit_by_name(gobj(), "request-profile-pad", arg0.c_str(), &result, static_cast<void*>(0));
  return Glib::wrap(result);
}

}

namespace
{


static GstPad* EncodeBin_signal_request_pad_callback(GstEncodeBin* self, GstCaps* p0,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< Glib::RefPtr<Gst::Pad>,const Glib::RefPtr<Gst::Caps>& >;

  auto obj = dynamic_cast<EncodeBin*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return Glib::unwrap((*static_cast<SlotType*>(slot))(Glib::wrap(p0, true)
));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = GstPad*;
  return RType();
}

static GstPad* EncodeBin_signal_request_pad_notify_callback(GstEncodeBin* self, GstCaps* p0, void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::RefPtr<Gst::Caps>& >;

  auto obj = dynamic_cast<EncodeBin*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
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

  using RType = GstPad*;
  return RType();
}

static const Glib::SignalProxyInfo EncodeBin_signal_request_pad_info =
{
  "request-pad",
  (GCallback) &EncodeBin_signal_request_pad_callback,
  (GCallback) &EncodeBin_signal_request_pad_notify_callback
};


static GstPad* EncodeBin_signal_request_profile_pad_callback(GstEncodeBin* self, const gchar* p0,void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< Glib::RefPtr<Gst::Pad>,const Glib::ustring& >;

  auto obj = dynamic_cast<EncodeBin*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        return Glib::unwrap((*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  using RType = GstPad*;
  return RType();
}

static GstPad* EncodeBin_signal_request_profile_pad_notify_callback(GstEncodeBin* self, const gchar* p0, void* data)
{
  using namespace Gst;
  using SlotType = sigc::slot< void,const Glib::ustring& >;

  auto obj = dynamic_cast<EncodeBin*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(const auto slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  using RType = GstPad*;
  return RType();
}

static const Glib::SignalProxyInfo EncodeBin_signal_request_profile_pad_info =
{
  "request-profile-pad",
  (GCallback) &EncodeBin_signal_request_profile_pad_callback,
  (GCallback) &EncodeBin_signal_request_profile_pad_notify_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gst::EncodeBinFlags>::value_type()
{
  return gst_encode_bin_flags_get_type();
}


namespace Glib
{

Glib::RefPtr<Gst::EncodeBin> wrap(GstEncodeBin* object, bool take_copy)
{
  return Glib::RefPtr<Gst::EncodeBin>( dynamic_cast<Gst::EncodeBin*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& EncodeBin_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &EncodeBin_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_encode_bin_gstreamermm_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void EncodeBin_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* EncodeBin_Class::wrap_new(GObject* object)
{
  return new EncodeBin((GstEncodeBin*)object);
}


/* The implementation: */

GstEncodeBin* EncodeBin::gobj_copy()
{
  reference();
  return gobj();
}

EncodeBin::EncodeBin(const Glib::ConstructParams& construct_params)
:
  Gst::Bin(construct_params)
{

}

EncodeBin::EncodeBin(GstEncodeBin* castitem)
:
  Gst::Bin((GstBin*)(castitem))
{}


EncodeBin::EncodeBin(EncodeBin&& src) noexcept
: Gst::Bin(std::move(src))
{}

EncodeBin& EncodeBin::operator=(EncodeBin&& src) noexcept
{
  Gst::Bin::operator=(std::move(src));
  return *this;
}


EncodeBin::~EncodeBin() noexcept
{}


EncodeBin::CppClassType EncodeBin::encodebin_class_; // initialize static member

GType EncodeBin::get_type()
{
  return encodebin_class_.init().get_type();
}


GType EncodeBin::get_base_type()
{
  return gst_encode_bin_gstreamermm_get_type();
}


Glib::RefPtr<EncodeBin> EncodeBin::create()
{
  return Glib::RefPtr<EncodeBin>( new EncodeBin() );
}

Glib::RefPtr<EncodeBin> EncodeBin::create(const Glib::ustring& name)
{
  return Glib::RefPtr<EncodeBin>( new EncodeBin(name) );
}


Glib::SignalProxy< Glib::RefPtr<Gst::Pad>,const Glib::RefPtr<Gst::Caps>& > EncodeBin::signal_request_pad()
{
  return Glib::SignalProxy< Glib::RefPtr<Gst::Pad>,const Glib::RefPtr<Gst::Caps>& >(this, &EncodeBin_signal_request_pad_info);
}


Glib::SignalProxy< Glib::RefPtr<Gst::Pad>,const Glib::ustring& > EncodeBin::signal_request_profile_pad()
{
  return Glib::SignalProxy< Glib::RefPtr<Gst::Pad>,const Glib::ustring& >(this, &EncodeBin_signal_request_profile_pad_info);
}


Glib::PropertyProxy< Glib::RefPtr<Gst::EncodingProfile> > EncodeBin::property_profile() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gst::EncodingProfile> >(this, "profile");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::EncodingProfile> > EncodeBin::property_profile() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::EncodingProfile> >(this, "profile");
}

Glib::PropertyProxy< guint > EncodeBin::property_queue_buffers_max() 
{
  return Glib::PropertyProxy< guint >(this, "queue-buffers-max");
}

Glib::PropertyProxy_ReadOnly< guint > EncodeBin::property_queue_buffers_max() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "queue-buffers-max");
}

Glib::PropertyProxy< guint > EncodeBin::property_queue_bytes_max() 
{
  return Glib::PropertyProxy< guint >(this, "queue-bytes-max");
}

Glib::PropertyProxy_ReadOnly< guint > EncodeBin::property_queue_bytes_max() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "queue-bytes-max");
}

Glib::PropertyProxy< guint64 > EncodeBin::property_queue_time_max() 
{
  return Glib::PropertyProxy< guint64 >(this, "queue-time-max");
}

Glib::PropertyProxy_ReadOnly< guint64 > EncodeBin::property_queue_time_max() const
{
  return Glib::PropertyProxy_ReadOnly< guint64 >(this, "queue-time-max");
}

Glib::PropertyProxy< guint64 > EncodeBin::property_audio_jitter_tolerance() 
{
  return Glib::PropertyProxy< guint64 >(this, "audio-jitter-tolerance");
}

Glib::PropertyProxy_ReadOnly< guint64 > EncodeBin::property_audio_jitter_tolerance() const
{
  return Glib::PropertyProxy_ReadOnly< guint64 >(this, "audio-jitter-tolerance");
}

Glib::PropertyProxy< bool > EncodeBin::property_avoid_reencoding() 
{
  return Glib::PropertyProxy< bool >(this, "avoid-reencoding");
}

Glib::PropertyProxy_ReadOnly< bool > EncodeBin::property_avoid_reencoding() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "avoid-reencoding");
}

Glib::PropertyProxy< Gst::EncodeBinFlags > EncodeBin::property_flags() 
{
  return Glib::PropertyProxy< Gst::EncodeBinFlags >(this, "flags");
}

Glib::PropertyProxy_ReadOnly< Gst::EncodeBinFlags > EncodeBin::property_flags() const
{
  return Glib::PropertyProxy_ReadOnly< Gst::EncodeBinFlags >(this, "flags");
}


} // namespace Gst

#endif // GSTREAMERMM_DISABLE_DEPRECATED


