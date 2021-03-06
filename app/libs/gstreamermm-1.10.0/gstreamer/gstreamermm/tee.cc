// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <gstreamermmconfig.h>
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gstreamermm/tee.h>
#include <gstreamermm/private/tee_p.h>


// Generated by generate_plugin_gmmproc_file. Don't edit this file.


extern "C"
{

static GType gst_tee_pull_mode_get_type()
{
  static GType const type = g_type_from_name("GstTeePullMode");
  return type;
}

GType gst_tee_gstreamermm_get_type()
{
  static GType type = 0;
  GstElementFactory* factory = 0;
  GstPluginFeature* feature = 0;

  if(!type)
  {
    factory = gst_element_factory_find("tee");
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

Tee::Tee()
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::Element(Glib::ConstructParams(tee_class_.init(), "name",static_cast<char*>(0), nullptr))
{}

Tee::Tee(const Glib::ustring& name)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::Element(Glib::ConstructParams(tee_class_.init(), "name",name.c_str(), nullptr))
{}

}

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::TeePullMode>::value_type()
{
  return gst_tee_pull_mode_get_type();
}


namespace Glib
{

Glib::RefPtr<Gst::Tee> wrap(GstTee* object, bool take_copy)
{
  return Glib::RefPtr<Gst::Tee>( dynamic_cast<Gst::Tee*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& Tee_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Tee_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_tee_gstreamermm_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Tee_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Tee_Class::wrap_new(GObject* object)
{
  return new Tee((GstTee*)object);
}


/* The implementation: */

GstTee* Tee::gobj_copy()
{
  reference();
  return gobj();
}

Tee::Tee(const Glib::ConstructParams& construct_params)
:
  Gst::Element(construct_params)
{

}

Tee::Tee(GstTee* castitem)
:
  Gst::Element((GstElement*)(castitem))
{}


Tee::Tee(Tee&& src) noexcept
: Gst::Element(std::move(src))
{}

Tee& Tee::operator=(Tee&& src) noexcept
{
  Gst::Element::operator=(std::move(src));
  return *this;
}


Tee::~Tee() noexcept
{}


Tee::CppClassType Tee::tee_class_; // initialize static member

GType Tee::get_type()
{
  return tee_class_.init().get_type();
}


GType Tee::get_base_type()
{
  return gst_tee_gstreamermm_get_type();
}


Glib::RefPtr<Tee> Tee::create()
{
  return Glib::RefPtr<Tee>( new Tee() );
}

Glib::RefPtr<Tee> Tee::create(const Glib::ustring& name)
{
  return Glib::RefPtr<Tee>( new Tee(name) );
}


Glib::PropertyProxy_ReadOnly< int > Tee::property_num_src_pads() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "num-src-pads");
}

Glib::PropertyProxy< bool > Tee::property_has_chain() 
{
  return Glib::PropertyProxy< bool >(this, "has-chain");
}

Glib::PropertyProxy_ReadOnly< bool > Tee::property_has_chain() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "has-chain");
}

Glib::PropertyProxy< bool > Tee::property_silent() 
{
  return Glib::PropertyProxy< bool >(this, "silent");
}

Glib::PropertyProxy_ReadOnly< bool > Tee::property_silent() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "silent");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Tee::property_last_message() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "last-message");
}

Glib::PropertyProxy< Gst::TeePullMode > Tee::property_pull_mode() 
{
  return Glib::PropertyProxy< Gst::TeePullMode >(this, "pull-mode");
}

Glib::PropertyProxy_ReadOnly< Gst::TeePullMode > Tee::property_pull_mode() const
{
  return Glib::PropertyProxy_ReadOnly< Gst::TeePullMode >(this, "pull-mode");
}

Glib::PropertyProxy< Glib::RefPtr<Gst::Pad> > Tee::property_alloc_pad() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gst::Pad> >(this, "alloc-pad");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Pad> > Tee::property_alloc_pad() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gst::Pad> >(this, "alloc-pad");
}

Glib::PropertyProxy< bool > Tee::property_allow_not_linked() 
{
  return Glib::PropertyProxy< bool >(this, "allow-not-linked");
}

Glib::PropertyProxy_ReadOnly< bool > Tee::property_allow_not_linked() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "allow-not-linked");
}


} // namespace Gst

#endif // GSTREAMERMM_DISABLE_DEPRECATED


