// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <gstreamermmconfig.h>
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gstreamermm/giostreamsrc.h>
#include <gstreamermm/private/giostreamsrc_p.h>


// Generated by generate_plugin_gmmproc_file. Don't edit this file.


extern "C"
{

GType gst_gio_stream_src_gstreamermm_get_type()
{
  static GType type = 0;
  GstElementFactory* factory = 0;
  GstPluginFeature* feature = 0;

  if(!type)
  {
    factory = gst_element_factory_find("giostreamsrc");
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

GioStreamSrc::GioStreamSrc()
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseSrc(Glib::ConstructParams(giostreamsrc_class_.init(), "name",static_cast<char*>(0), nullptr))
{}

GioStreamSrc::GioStreamSrc(const Glib::ustring& name)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseSrc(Glib::ConstructParams(giostreamsrc_class_.init(), "name",name.c_str(), nullptr))
{}

}

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::GioStreamSrc> wrap(GstGioStreamSrc* object, bool take_copy)
{
  return Glib::RefPtr<Gst::GioStreamSrc>( dynamic_cast<Gst::GioStreamSrc*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& GioStreamSrc_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &GioStreamSrc_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_gio_stream_src_gstreamermm_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void GioStreamSrc_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* GioStreamSrc_Class::wrap_new(GObject* object)
{
  return new GioStreamSrc((GstGioStreamSrc*)object);
}


/* The implementation: */

GstGioStreamSrc* GioStreamSrc::gobj_copy()
{
  reference();
  return gobj();
}

GioStreamSrc::GioStreamSrc(const Glib::ConstructParams& construct_params)
:
  Gst::BaseSrc(construct_params)
{

}

GioStreamSrc::GioStreamSrc(GstGioStreamSrc* castitem)
:
  Gst::BaseSrc((GstBaseSrc*)(castitem))
{}


GioStreamSrc::GioStreamSrc(GioStreamSrc&& src) noexcept
: Gst::BaseSrc(std::move(src))
{}

GioStreamSrc& GioStreamSrc::operator=(GioStreamSrc&& src) noexcept
{
  Gst::BaseSrc::operator=(std::move(src));
  return *this;
}


GioStreamSrc::~GioStreamSrc() noexcept
{}


GioStreamSrc::CppClassType GioStreamSrc::giostreamsrc_class_; // initialize static member

GType GioStreamSrc::get_type()
{
  return giostreamsrc_class_.init().get_type();
}


GType GioStreamSrc::get_base_type()
{
  return gst_gio_stream_src_gstreamermm_get_type();
}


Glib::RefPtr<GioStreamSrc> GioStreamSrc::create()
{
  return Glib::RefPtr<GioStreamSrc>( new GioStreamSrc() );
}

Glib::RefPtr<GioStreamSrc> GioStreamSrc::create(const Glib::ustring& name)
{
  return Glib::RefPtr<GioStreamSrc>( new GioStreamSrc(name) );
}


Glib::PropertyProxy< Glib::RefPtr<Gio::InputStream> > GioStreamSrc::property_stream() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gio::InputStream> >(this, "stream");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::InputStream> > GioStreamSrc::property_stream() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::InputStream> >(this, "stream");
}


} // namespace Gst

#endif // GSTREAMERMM_DISABLE_DEPRECATED


