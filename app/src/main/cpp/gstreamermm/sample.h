// Generated by gmmproc 2.50.1 -- DO NOT MODIFY!
#ifndef _GSTREAMERMM_SAMPLE_H
#define _GSTREAMERMM_SAMPLE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * sample.hg
 *
 *  Created on: Jul 30, 2013
 *      Author: m.kolny
 */
/* gstreamermm - a C++ wrapper for gstreamer
 *
 * Copyright 2008-2016 The gstreamermm Development Team
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
#include <gstreamermm/miniobject.h>
#include <gstreamermm/buffer.h>
#include <gstreamermm/caps.h>
#include <gstreamermm/segment.h>
#include <gstreamermm/structure.h>


namespace Gst
{

/**
 * A Gst::Sample is a small object containing data, a type, timing and
 * extra arbitrary information.
 *
 * Last reviewed on 2016-09-14 (1.8.0).
 */
class Sample : public MiniObject
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Sample;
  using BaseObjectType = GstSample;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


  /** Increment the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void reference()   const;

  /** Decrement the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void unreference() const;

  ///Provides access to the underlying C instance.
  GstSample*       gobj();

  ///Provides access to the underlying C instance.
  const GstSample* gobj() const;

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GstSample* gobj_copy() const;

  Sample() = delete;

  // noncopyable
  Sample(const Sample&) = delete;
  Sample& operator=(const Sample&) = delete;

protected:
  // Do not derive this.  Gst::Sample can neither be constructed nor deleted.

  void operator delete(void*, std::size_t);

private:

  
public:
   static Glib::RefPtr<Gst::Sample> create(const Glib::RefPtr<Gst::Buffer>& buffer, const Glib::RefPtr<Gst::Caps>& caps, const Gst::Segment& segment, Gst::Structure&& info);

  
  /** Get the buffer associated with @a sample
   * 
   * @return The buffer of @a sample or <tt>nullptr</tt>
   * when there is no buffer. The buffer remains valid as long as
   *  @a sample is valid.  If you need to hold on to it for longer than
   * that, take a ref to the buffer with Gst::Buffer::ref().
   */
  Glib::RefPtr<Gst::Buffer> get_buffer();
  
  /** Get the buffer associated with @a sample
   * 
   * @return The buffer of @a sample or <tt>nullptr</tt>
   * when there is no buffer. The buffer remains valid as long as
   *  @a sample is valid.  If you need to hold on to it for longer than
   * that, take a ref to the buffer with Gst::Buffer::ref().
   */
  Glib::RefPtr<const Gst::Buffer> get_buffer() const;
  
  /** Get the caps associated with @a sample
   * 
   * @return The caps of @a sample or <tt>nullptr</tt>
   * when there is no caps. The caps remain valid as long as @a sample is
   * valid.  If you need to hold on to the caps for longer than that,
   * take a ref to the caps with Gst::Caps::ref().
   */
  Glib::RefPtr<Gst::Caps> get_caps();
  
  /** Get the caps associated with @a sample
   * 
   * @return The caps of @a sample or <tt>nullptr</tt>
   * when there is no caps. The caps remain valid as long as @a sample is
   * valid.  If you need to hold on to the caps for longer than that,
   * take a ref to the caps with Gst::Caps::ref().
   */
  Glib::RefPtr<const Gst::Caps> get_caps() const;
  
  /** Get extra information associated with @a sample.
   * 
   * @return The extra info of @a sample.
   * The info remains valid as long as @a sample is valid.
   */
  Gst::Structure get_info() const;
  
  /** Create a copy of the given sample. This will also make a newly allocated
   * copy of the data the source sample contains.
   * 
   * @return A new copy of @a buf.
   */
  Glib::RefPtr<Gst::Sample> copy() const;

 
  /** Get the segment associated with @a sample
   * 
   * @return The segment of @a sample.
   * The segment remains valid as long as @a sample is valid.
   */
  Gst::Segment get_segment() const;


};

}//namespace Gst


namespace Glib
{

  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gst::Sample
   */
  Glib::RefPtr<Gst::Sample> wrap(GstSample* object, bool take_copy = false);

} // namespace Glib


#endif /* _GSTREAMERMM_SAMPLE_H */
