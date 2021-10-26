// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_BASESINK_P_H
#define _GSTREAMERMM_BASESINK_P_H


#include <glibmm/class.h>

namespace Gst
{

class BaseSink_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = BaseSink;
  using BaseObjectType = GstBaseSink;
  using BaseClassType = GstBaseSinkClass;
  using CppClassParent = Element_Class;
  using BaseClassParent = GstElementClass;

  friend class BaseSink;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static GstCaps* get_caps_vfunc_callback(GstBaseSink* self, GstCaps* filter);
  static gboolean set_caps_vfunc_callback(GstBaseSink* self, GstCaps* caps);
  static void get_times_vfunc_callback(GstBaseSink* self, GstBuffer* buffer, GstClockTime* start, GstClockTime* end);
  static gboolean start_vfunc_callback(GstBaseSink* self);
  static gboolean stop_vfunc_callback(GstBaseSink* self);
  static gboolean unlock_vfunc_callback(GstBaseSink* self);
  static gboolean event_vfunc_callback(GstBaseSink* self, GstEvent* event);
  static GstFlowReturn wait_event_vfunc_callback(GstBaseSink* self, GstEvent* event);
  static GstFlowReturn preroll_vfunc_callback(GstBaseSink* self, GstBuffer* buffer);
  static GstFlowReturn render_vfunc_callback(GstBaseSink* self, GstBuffer* buffer);
  static gboolean activate_pull_vfunc_callback(GstBaseSink* self, gboolean active);
  static GstCaps* fixate_vfunc_callback(GstBaseSink* self, GstCaps* caps);
  static gboolean unlock_stop_vfunc_callback(GstBaseSink* self);
  static GstFlowReturn render_list_vfunc_callback(GstBaseSink* self, GstBufferList* buffer_list);
  static GstFlowReturn prepare_vfunc_callback(GstBaseSink* self, GstBuffer* buffer);
  static GstFlowReturn prepare_list_vfunc_callback(GstBaseSink* self, GstBufferList* buffer_list);
  static gboolean propose_allocation_vfunc_callback(GstBaseSink* self, GstQuery* query);
  static gboolean query_vfunc_callback(GstBaseSink* self, GstQuery* query);
  };


} // namespace Gst

#include <gstreamermm/private/element_p.h>


#endif /* _GSTREAMERMM_BASESINK_P_H */

