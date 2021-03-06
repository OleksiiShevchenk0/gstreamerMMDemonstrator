// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <gstreamermmconfig.h>
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gstreamermm/streamsynchronizer.h>
#include <gstreamermm/private/streamsynchronizer_p.h>


// Generated by generate_plugin_gmmproc_file. Don't edit this file.


extern "C"
{

GType gst_stream_synchronizer_gstreamermm_get_type()
{
  static GType type = 0;
  GstElementFactory* factory = 0;
  GstPluginFeature* feature = 0;

  if(!type)
  {
    factory = gst_element_factory_find("streamsynchronizer");
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

StreamSynchronizer::StreamSynchronizer()
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::Element(Glib::ConstructParams(streamsynchronizer_class_.init(), "name",static_cast<char*>(0), nullptr))
{}

StreamSynchronizer::StreamSynchronizer(const Glib::ustring& name)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::Element(Glib::ConstructParams(streamsynchronizer_class_.init(), "name",name.c_str(), nullptr))
{}

}

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::StreamSynchronizer> wrap(GstStreamSynchronizer* object, bool take_copy)
{
  return Glib::RefPtr<Gst::StreamSynchronizer>( dynamic_cast<Gst::StreamSynchronizer*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& StreamSynchronizer_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &StreamSynchronizer_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_stream_synchronizer_gstreamermm_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void StreamSynchronizer_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* StreamSynchronizer_Class::wrap_new(GObject* object)
{
  return new StreamSynchronizer((GstStreamSynchronizer*)object);
}


/* The implementation: */

GstStreamSynchronizer* StreamSynchronizer::gobj_copy()
{
  reference();
  return gobj();
}

StreamSynchronizer::StreamSynchronizer(const Glib::ConstructParams& construct_params)
:
  Gst::Element(construct_params)
{

}

StreamSynchronizer::StreamSynchronizer(GstStreamSynchronizer* castitem)
:
  Gst::Element((GstElement*)(castitem))
{}


StreamSynchronizer::StreamSynchronizer(StreamSynchronizer&& src) noexcept
: Gst::Element(std::move(src))
{}

StreamSynchronizer& StreamSynchronizer::operator=(StreamSynchronizer&& src) noexcept
{
  Gst::Element::operator=(std::move(src));
  return *this;
}


StreamSynchronizer::~StreamSynchronizer() noexcept
{}


StreamSynchronizer::CppClassType StreamSynchronizer::streamsynchronizer_class_; // initialize static member

GType StreamSynchronizer::get_type()
{
  return streamsynchronizer_class_.init().get_type();
}


GType StreamSynchronizer::get_base_type()
{
  return gst_stream_synchronizer_gstreamermm_get_type();
}


Glib::RefPtr<StreamSynchronizer> StreamSynchronizer::create()
{
  return Glib::RefPtr<StreamSynchronizer>( new StreamSynchronizer() );
}

Glib::RefPtr<StreamSynchronizer> StreamSynchronizer::create(const Glib::ustring& name)
{
  return Glib::RefPtr<StreamSynchronizer>( new StreamSynchronizer(name) );
}


} // namespace Gst

#endif // GSTREAMERMM_DISABLE_DEPRECATED


