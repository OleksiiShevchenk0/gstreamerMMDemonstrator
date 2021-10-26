// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <gstreamermmconfig.h>
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gstreamermm/textoverlay.h>
#include <gstreamermm/private/textoverlay_p.h>


// Generated by generate_plugin_gmmproc_file. Don't edit this file.


extern "C"
{

GType gst_text_overlay_gstreamermm_get_type()
{
  static GType type = 0;
  GstElementFactory* factory = 0;
  GstPluginFeature* feature = 0;

  if(!type)
  {
    factory = gst_element_factory_find("textoverlay");
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

TextOverlay::TextOverlay()
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::Element(Glib::ConstructParams(textoverlay_class_.init(), "name",static_cast<char*>(0), nullptr))
{}

TextOverlay::TextOverlay(const Glib::ustring& name)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::Element(Glib::ConstructParams(textoverlay_class_.init(), "name",name.c_str(), nullptr))
{}

}

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::TextOverlay> wrap(GstTextOverlay* object, bool take_copy)
{
  return Glib::RefPtr<Gst::TextOverlay>( dynamic_cast<Gst::TextOverlay*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& TextOverlay_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &TextOverlay_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_text_overlay_gstreamermm_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void TextOverlay_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* TextOverlay_Class::wrap_new(GObject* object)
{
  return new TextOverlay((GstTextOverlay*)object);
}


/* The implementation: */

GstTextOverlay* TextOverlay::gobj_copy()
{
  reference();
  return gobj();
}

TextOverlay::TextOverlay(const Glib::ConstructParams& construct_params)
:
  Gst::Element(construct_params)
{

}

TextOverlay::TextOverlay(GstTextOverlay* castitem)
:
  Gst::Element((GstElement*)(castitem))
{}


TextOverlay::TextOverlay(TextOverlay&& src) noexcept
: Gst::Element(std::move(src))
{}

TextOverlay& TextOverlay::operator=(TextOverlay&& src) noexcept
{
  Gst::Element::operator=(std::move(src));
  return *this;
}


TextOverlay::~TextOverlay() noexcept
{}


TextOverlay::CppClassType TextOverlay::textoverlay_class_; // initialize static member

GType TextOverlay::get_type()
{
  return textoverlay_class_.init().get_type();
}


GType TextOverlay::get_base_type()
{
  return gst_text_overlay_gstreamermm_get_type();
}


Glib::RefPtr<TextOverlay> TextOverlay::create()
{
  return Glib::RefPtr<TextOverlay>( new TextOverlay() );
}

Glib::RefPtr<TextOverlay> TextOverlay::create(const Glib::ustring& name)
{
  return Glib::RefPtr<TextOverlay>( new TextOverlay(name) );
}


} // namespace Gst

#endif // GSTREAMERMM_DISABLE_DEPRECATED


