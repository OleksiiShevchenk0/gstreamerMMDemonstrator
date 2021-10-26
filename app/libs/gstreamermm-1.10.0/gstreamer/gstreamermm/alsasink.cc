// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <gstreamermmconfig.h>
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gstreamermm/alsasink.h>
#include <gstreamermm/private/alsasink_p.h>


// Generated by generate_plugin_gmmproc_file. Don't edit this file.


extern "C"
{

GType gst_alsa_sink_gstreamermm_get_type()
{
  static GType type = 0;
  GstElementFactory* factory = 0;
  GstPluginFeature* feature = 0;

  if(!type)
  {
    factory = gst_element_factory_find("alsasink");
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

AlsaSink::AlsaSink()
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseSink(Glib::ConstructParams(alsasink_class_.init(), "name",static_cast<char*>(0), nullptr))
{}

AlsaSink::AlsaSink(const Glib::ustring& name)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseSink(Glib::ConstructParams(alsasink_class_.init(), "name",name.c_str(), nullptr))
{}

}

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::AlsaSink> wrap(GstAlsaSink* object, bool take_copy)
{
  return Glib::RefPtr<Gst::AlsaSink>( dynamic_cast<Gst::AlsaSink*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& AlsaSink_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &AlsaSink_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_alsa_sink_gstreamermm_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void AlsaSink_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* AlsaSink_Class::wrap_new(GObject* object)
{
  return new AlsaSink((GstAlsaSink*)object);
}


/* The implementation: */

GstAlsaSink* AlsaSink::gobj_copy()
{
  reference();
  return gobj();
}

AlsaSink::AlsaSink(const Glib::ConstructParams& construct_params)
:
  Gst::BaseSink(construct_params)
{

}

AlsaSink::AlsaSink(GstAlsaSink* castitem)
:
  Gst::BaseSink((GstBaseSink*)(castitem))
{}


AlsaSink::AlsaSink(AlsaSink&& src) noexcept
: Gst::BaseSink(std::move(src))
{}

AlsaSink& AlsaSink::operator=(AlsaSink&& src) noexcept
{
  Gst::BaseSink::operator=(std::move(src));
  return *this;
}


AlsaSink::~AlsaSink() noexcept
{}


AlsaSink::CppClassType AlsaSink::alsasink_class_; // initialize static member

GType AlsaSink::get_type()
{
  return alsasink_class_.init().get_type();
}


GType AlsaSink::get_base_type()
{
  return gst_alsa_sink_gstreamermm_get_type();
}


Glib::RefPtr<AlsaSink> AlsaSink::create()
{
  return Glib::RefPtr<AlsaSink>( new AlsaSink() );
}

Glib::RefPtr<AlsaSink> AlsaSink::create(const Glib::ustring& name)
{
  return Glib::RefPtr<AlsaSink>( new AlsaSink(name) );
}


Glib::PropertyProxy< Glib::ustring > AlsaSink::property_device() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "device");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > AlsaSink::property_device() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "device");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > AlsaSink::property_device_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "device-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > AlsaSink::property_card_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "card-name");
}


} // namespace Gst

#endif // GSTREAMERMM_DISABLE_DEPRECATED

