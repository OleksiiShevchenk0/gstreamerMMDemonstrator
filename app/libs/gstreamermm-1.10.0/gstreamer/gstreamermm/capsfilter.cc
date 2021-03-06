// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <gstreamermmconfig.h>
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gstreamermm/capsfilter.h>
#include <gstreamermm/private/capsfilter_p.h>


// Generated by generate_plugin_gmmproc_file. Don't edit this file.


extern "C"
{

static GType gst_caps_filter_caps_change_mode_get_type()
{
  static GType const type = g_type_from_name("GstCapsFilterCapsChangeMode");
  return type;
}

GType gst_caps_filter_gstreamermm_get_type()
{
  static GType type = 0;
  GstElementFactory* factory = 0;
  GstPluginFeature* feature = 0;

  if(!type)
  {
    factory = gst_element_factory_find("capsfilter");
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

CapsFilter::CapsFilter()
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseTransform(Glib::ConstructParams(capsfilter_class_.init(), "name",static_cast<char*>(0), nullptr))
{}

CapsFilter::CapsFilter(const Glib::ustring& name)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::BaseTransform(Glib::ConstructParams(capsfilter_class_.init(), "name",name.c_str(), nullptr))
{}

}

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::CapsFilterCapsChangeMode>::value_type()
{
  return gst_caps_filter_caps_change_mode_get_type();
}


namespace Glib
{

Glib::RefPtr<Gst::CapsFilter> wrap(GstCapsFilter* object, bool take_copy)
{
  return Glib::RefPtr<Gst::CapsFilter>( dynamic_cast<Gst::CapsFilter*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& CapsFilter_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &CapsFilter_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_caps_filter_gstreamermm_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void CapsFilter_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* CapsFilter_Class::wrap_new(GObject* object)
{
  return new CapsFilter((GstCapsFilter*)object);
}


/* The implementation: */

GstCapsFilter* CapsFilter::gobj_copy()
{
  reference();
  return gobj();
}

CapsFilter::CapsFilter(const Glib::ConstructParams& construct_params)
:
  Gst::BaseTransform(construct_params)
{

}

CapsFilter::CapsFilter(GstCapsFilter* castitem)
:
  Gst::BaseTransform((GstBaseTransform*)(castitem))
{}


CapsFilter::CapsFilter(CapsFilter&& src) noexcept
: Gst::BaseTransform(std::move(src))
{}

CapsFilter& CapsFilter::operator=(CapsFilter&& src) noexcept
{
  Gst::BaseTransform::operator=(std::move(src));
  return *this;
}


CapsFilter::~CapsFilter() noexcept
{}


CapsFilter::CppClassType CapsFilter::capsfilter_class_; // initialize static member

GType CapsFilter::get_type()
{
  return capsfilter_class_.init().get_type();
}


GType CapsFilter::get_base_type()
{
  return gst_caps_filter_gstreamermm_get_type();
}


Glib::RefPtr<CapsFilter> CapsFilter::create()
{
  return Glib::RefPtr<CapsFilter>( new CapsFilter() );
}

Glib::RefPtr<CapsFilter> CapsFilter::create(const Glib::ustring& name)
{
  return Glib::RefPtr<CapsFilter>( new CapsFilter(name) );
}


Glib::PropertyProxy< Glib::RefPtr<Gst::Caps> > CapsFilter::property_caps() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gst::Caps> >(this, "caps");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Caps> > CapsFilter::property_caps() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Caps> >(this, "caps");
}

Glib::PropertyProxy< Gst::CapsFilterCapsChangeMode > CapsFilter::property_caps_change_mode() 
{
  return Glib::PropertyProxy< Gst::CapsFilterCapsChangeMode >(this, "caps-change-mode");
}

Glib::PropertyProxy_ReadOnly< Gst::CapsFilterCapsChangeMode > CapsFilter::property_caps_change_mode() const
{
  return Glib::PropertyProxy_ReadOnly< Gst::CapsFilterCapsChangeMode >(this, "caps-change-mode");
}


} // namespace Gst

#endif // GSTREAMERMM_DISABLE_DEPRECATED


