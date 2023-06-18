#pragma once
#ifndef ADVANCEDREMOTECONTROL_H
#define ADVANCEDREMOTECONTROL_H

#include "RemoteControl.h"

class AdvancedRemoteControl : public RemoteControl {
public:
    AdvancedRemoteControl(Device1* device);
    void mute();
    void setMovie(const std::string& movie);
    void setService(const std::string& service);
};

#endif  // ADVANCEDREMOTECONTROL_H


