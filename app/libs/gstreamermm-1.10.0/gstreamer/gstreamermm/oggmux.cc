// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <gstreamermmconfig.h>
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gstreamermm/oggmux.h>
#include <gstreamermm/private/oggmux_p.h>


// Generated by generate_plugin_gmmproc_file. Don't edit this file.


extern "C"
{

GType gst_ogg_mux_gstreamermm_get_type()
{
  static GType type = 0;
  GstElementFactory* factory = 0;
  GstPluginFeature* feature = 0;

  if(!type)
  {
    factory = gst_element_factory_find("oggmux");
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

OggMux::OggMux()
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::Element(Glib::ConstructParams(oggmux_class_.init(), "name",static_cast<char*>(0), nullptr))
{}

OggMux::OggMux(const Glib::ustring& name)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::Element(Glib::ConstructParams(oggmux_class_.init(), "name",name.c_str(), nullptr))
{}

}

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::OggMux> wrap(GstOggMux* object, bool take_copy)
{
  return Glib::RefPtr<Gst::OggMux>( dynamic_cast<Gst::OggMux*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& OggMux_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &OggMux_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_ogg_mux_gstreamermm_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Gst::Preset::add_interface(get_type());

  }

  return *this;
}


void OggMux_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* OggMux_Class::wrap_new(GObject* object)
{
  return new OggMux((GstOggMux*)object);
}


/* The implementation: */

GstOggMux* OggMux::gobj_copy()
{
  reference();
  return gobj();
}

OggMux::OggMux(const Glib::ConstructParams& construct_params)
:
  Gst::Element(construct_params)
{

}

OggMux::OggMux(GstOggMux* castitem)
:
  Gst::Element((GstElement*)(castitem))
{}


OggMux::OggMux(OggMux&& src) noexcept
: Gst::Element(std::move(src))
  , Gst::Preset(std::move(src))
{}

OggMux& OggMux::operator=(OggMux&& src) noexcept
{
  Gst::Element::operator=(std::move(src));
  Gst::Preset::operator=(std::move(src));
  return *this;
}


OggMux::~OggMux() noexcept
{}


OggMux::CppClassType OggMux::oggmux_class_; // initialize static member

GType OggMux::get_type()
{
  return oggmux_class_.init().get_type();
}


GType OggMux::get_base_type()
{
  return gst_ogg_mux_gstreamermm_get_type();
}


Glib::RefPtr<OggMux> OggMux::create()
{
  return Glib::RefPtr<OggMux>( new OggMux() );
}

Glib::RefPtr<OggMux> OggMux::create(const Glib::ustring& name)
{
  return Glib::RefPtr<OggMux>( new OggMux(name) );
}


Glib::PropertyProxy< guint64 > OggMux::property_max_delay() 
{
  return Glib::PropertyProxy< guint64 >(this, "max-delay");
}

Glib::PropertyProxy_ReadOnly< guint64 > OggMux::property_max_delay() const
{
  return Glib::PropertyProxy_ReadOnly< guint64 >(this, "max-delay");
}

Glib::PropertyProxy< guint64 > OggMux::property_max_page_delay() 
{
  return Glib::PropertyProxy< guint64 >(this, "max-page-delay");
}

Glib::PropertyProxy_ReadOnly< guint64 > OggMux::property_max_page_delay() const
{
  return Glib::PropertyProxy_ReadOnly< guint64 >(this, "max-page-delay");
}

Glib::PropertyProxy< guint64 > OggMux::property_max_tolerance() 
{
  return Glib::PropertyProxy< guint64 >(this, "max-tolerance");
}

Glib::PropertyProxy_ReadOnly< guint64 > OggMux::property_max_tolerance() const
{
  return Glib::PropertyProxy_ReadOnly< guint64 >(this, "max-tolerance");
}

Glib::PropertyProxy< bool > OggMux::property_skeleton() 
{
  return Glib::PropertyProxy< bool >(this, "skeleton");
}

Glib::PropertyProxy_ReadOnly< bool > OggMux::property_skeleton() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "skeleton");
}


} // namespace Gst

#endif // GSTREAMERMM_DISABLE_DEPRECATED


