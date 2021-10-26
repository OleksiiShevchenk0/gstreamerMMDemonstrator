//
// Created by oshevchenko on 10/20/21.
//
//#include "gstreamermm/pipeline.h"
#include "gstreamermm.h"
#include <gstreamermm/elementfactory.h>
#include <glibmm/main.h>
#include <iostream>
#include <iomanip>
#include <glibmm/ustring.h>
namespace {
    Glib::RefPtr<Glib::MainLoop> mainloop;
}
void playFile(){
    Gst::init();
    std::string pipelineString = "v4l2src device=/dev/video0 ! video/x-raw, width=1280, height=720! filesink location=capture1.mp4 ";
    auto pipeline = Gst::Parse::launch(pipelineString);

    mainloop = Glib::MainLoop::create();
    pipeline->set_state(Gst::STATE_PAUSED);
    pipeline->set_state(Gst::STATE_PLAYING);

    mainloop->run();

    pipeline->set_state(Gst::STATE_READY);
}
