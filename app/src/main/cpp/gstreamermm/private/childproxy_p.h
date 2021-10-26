// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_CHILDPROXY_P_H
#define _GSTREAMERMM_CHILDPROXY_P_H


#include <glibmm/private/interface_p.h>

namespace Gst
{

class ChildProxy_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = ChildProxy;
  using BaseObjectType = GstChildProxy;
  using BaseClassType = GstChildProxyInterface;
  using CppClassParent = Glib::Interface_Class;

  friend class ChildProxy;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void child_added_callback(GstChildProxy* self, GObject* p0, const gchar* p1);
  static void child_removed_callback(GstChildProxy* self, GObject* p0, const gchar* p1);

  //Callbacks (virtual functions):
  static GObject* get_child_by_name_vfunc_callback(GstChildProxy* self, const gchar* name);
  static GObject* get_child_by_index_vfunc_callback(GstChildProxy* self, guint index);
  static guint get_children_count_vfunc_callback(GstChildProxy* self);
};


} // namespace Gst


#endif /* _GSTREAMERMM_CHILDPROXY_P_H */
