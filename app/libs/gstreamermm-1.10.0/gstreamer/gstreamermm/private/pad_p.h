// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_PAD_P_H
#define _GSTREAMERMM_PAD_P_H


#include <glibmm/class.h>

namespace Gst
{

class Pad_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Pad;
  using BaseObjectType = GstPad;
  using BaseClassType = GstPadClass;
  using CppClassParent = Object_Class;
  using BaseClassParent = GstObjectClass;

  friend class Pad;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void linked_callback(GstPad* self, GstPad* p0);
  static void unlinked_callback(GstPad* self, GstPad* p0);

  //Callbacks (virtual functions):
};


} // namespace Gst

#include <glibmm/private/object_p.h>
#include <gstreamermm/private/object_p.h>


#endif /* _GSTREAMERMM_PAD_P_H */

