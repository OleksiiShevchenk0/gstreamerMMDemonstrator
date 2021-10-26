// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_AUDIOFILTER_P_H
#define _GSTREAMERMM_AUDIOFILTER_P_H


#include <glibmm/class.h>

namespace Gst
{

class AudioFilter_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = AudioFilter;
  using BaseObjectType = GstAudioFilter;
  using BaseClassType = GstAudioFilterClass;
  using CppClassParent = Gst::BaseTransform_Class;
  using BaseClassParent = GstBaseTransformClass;

  friend class AudioFilter;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static gboolean setup_vfunc_callback(GstAudioFilter* self, const GstAudioInfo* info);
};


} // namespace Gst

#include <gstreamermm/private/basetransform_p.h>


#endif /* _GSTREAMERMM_AUDIOFILTER_P_H */

