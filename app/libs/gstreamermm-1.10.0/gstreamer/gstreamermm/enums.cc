// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gstreamermm/enums.h>
#include <gstreamermm/private/enums_p.h>


/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2008 The gstreamermm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gst/gst.h>

// Plug-in non-generated enum *_get_type() functions:
extern "C"
{

static GType gst_autoplug_select_result_get_type()
{
  static GType const type = g_type_from_name("GstAutoplugSelectResult");
  return type;
}

static GType gst_multi_handle_sink_client_status_get_type()
{
  static GType const type = g_type_from_name("GstMultiHandleSinkClientStatus");
  return type;
}

static GType gst_multi_handle_sink_sync_method_get_type()
{
  static GType const type = g_type_from_name("GstMultiHandleSinkSyncMethod");
  return type;
}

static GType gst_play_flags_get_type()
{
  static GType const type = g_type_from_name("GstPlayFlags");
  return type;
}

}

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gst::State>::value_type()
{
  return gst_state_get_type();
}

// static
GType Glib::Value<Gst::AutoplugSelectResult>::value_type()
{
  return gst_autoplug_select_result_get_type();
}

// static
GType Glib::Value<Gst::MultiHandleSinkClientStatus>::value_type()
{
  return gst_multi_handle_sink_client_status_get_type();
}

// static
GType Glib::Value<Gst::MultiHandleSinkSyncMethod>::value_type()
{
  return gst_multi_handle_sink_sync_method_get_type();
}

// static
GType Glib::Value<Gst::PlayFlags>::value_type()
{
  return gst_play_flags_get_type();
}

