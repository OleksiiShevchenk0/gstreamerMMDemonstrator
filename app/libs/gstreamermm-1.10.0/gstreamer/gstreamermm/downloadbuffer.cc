// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <gstreamermmconfig.h>
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gstreamermm/downloadbuffer.h>
#include <gstreamermm/private/downloadbuffer_p.h>


// Generated by generate_plugin_gmmproc_file. Don't edit this file.


extern "C"
{

GType gst_download_buffer_gstreamermm_get_type()
{
  static GType type = 0;
  GstElementFactory* factory = 0;
  GstPluginFeature* feature = 0;

  if(!type)
  {
    factory = gst_element_factory_find("downloadbuffer");
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

DownloadBuffer::DownloadBuffer()
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::Element(Glib::ConstructParams(downloadbuffer_class_.init(), "name",static_cast<char*>(0), nullptr))
{}

DownloadBuffer::DownloadBuffer(const Glib::ustring& name)
: // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gst::Element(Glib::ConstructParams(downloadbuffer_class_.init(), "name",name.c_str(), nullptr))
{}

}

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gst::DownloadBuffer> wrap(GstDownloadBuffer* object, bool take_copy)
{
  return Glib::RefPtr<Gst::DownloadBuffer>( dynamic_cast<Gst::DownloadBuffer*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gst
{


/* The *_Class implementation: */

const Glib::Class& DownloadBuffer_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &DownloadBuffer_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gst_download_buffer_gstreamermm_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void DownloadBuffer_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* DownloadBuffer_Class::wrap_new(GObject* object)
{
  return new DownloadBuffer((GstDownloadBuffer*)object);
}


/* The implementation: */

GstDownloadBuffer* DownloadBuffer::gobj_copy()
{
  reference();
  return gobj();
}

DownloadBuffer::DownloadBuffer(const Glib::ConstructParams& construct_params)
:
  Gst::Element(construct_params)
{

}

DownloadBuffer::DownloadBuffer(GstDownloadBuffer* castitem)
:
  Gst::Element((GstElement*)(castitem))
{}


DownloadBuffer::DownloadBuffer(DownloadBuffer&& src) noexcept
: Gst::Element(std::move(src))
{}

DownloadBuffer& DownloadBuffer::operator=(DownloadBuffer&& src) noexcept
{
  Gst::Element::operator=(std::move(src));
  return *this;
}


DownloadBuffer::~DownloadBuffer() noexcept
{}


DownloadBuffer::CppClassType DownloadBuffer::downloadbuffer_class_; // initialize static member

GType DownloadBuffer::get_type()
{
  return downloadbuffer_class_.init().get_type();
}


GType DownloadBuffer::get_base_type()
{
  return gst_download_buffer_gstreamermm_get_type();
}


Glib::RefPtr<DownloadBuffer> DownloadBuffer::create()
{
  return Glib::RefPtr<DownloadBuffer>( new DownloadBuffer() );
}

Glib::RefPtr<DownloadBuffer> DownloadBuffer::create(const Glib::ustring& name)
{
  return Glib::RefPtr<DownloadBuffer>( new DownloadBuffer(name) );
}


Glib::PropertyProxy< guint > DownloadBuffer::property_max_size_bytes() 
{
  return Glib::PropertyProxy< guint >(this, "max-size-bytes");
}

Glib::PropertyProxy_ReadOnly< guint > DownloadBuffer::property_max_size_bytes() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "max-size-bytes");
}

Glib::PropertyProxy< guint64 > DownloadBuffer::property_max_size_time() 
{
  return Glib::PropertyProxy< guint64 >(this, "max-size-time");
}

Glib::PropertyProxy_ReadOnly< guint64 > DownloadBuffer::property_max_size_time() const
{
  return Glib::PropertyProxy_ReadOnly< guint64 >(this, "max-size-time");
}

Glib::PropertyProxy< int > DownloadBuffer::property_low_percent() 
{
  return Glib::PropertyProxy< int >(this, "low-percent");
}

Glib::PropertyProxy_ReadOnly< int > DownloadBuffer::property_low_percent() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "low-percent");
}

Glib::PropertyProxy< int > DownloadBuffer::property_high_percent() 
{
  return Glib::PropertyProxy< int >(this, "high-percent");
}

Glib::PropertyProxy_ReadOnly< int > DownloadBuffer::property_high_percent() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "high-percent");
}

Glib::PropertyProxy< Glib::ustring > DownloadBuffer::property_temp_template() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "temp-template");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > DownloadBuffer::property_temp_template() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "temp-template");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > DownloadBuffer::property_temp_location() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "temp-location");
}

Glib::PropertyProxy< bool > DownloadBuffer::property_temp_remove() 
{
  return Glib::PropertyProxy< bool >(this, "temp-remove");
}

Glib::PropertyProxy_ReadOnly< bool > DownloadBuffer::property_temp_remove() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "temp-remove");
}


} // namespace Gst

#endif // GSTREAMERMM_DISABLE_DEPRECATED

