// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_FAKESRC_P_H
#define _GSTREAMERMM_FAKESRC_P_H
#ifndef GSTREAMERMM_DISABLE_DEPRECATED


#include <glibmm/class.h>

namespace Gst
{

class FakeSrc_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = FakeSrc;
  using BaseObjectType = GstFakeSrc;
  using BaseClassType = GstFakeSrcClass;
  using CppClassParent = Gst::BaseSrc_Class;
  using BaseClassParent = GstBaseSrcClass;

  friend class FakeSrc;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gst

#include <gstreamermm/private/basesrc_p.h>
#endif // GSTREAMERMM_DISABLE_DEPRECATED


#endif /* _GSTREAMERMM_FAKESRC_P_H */

