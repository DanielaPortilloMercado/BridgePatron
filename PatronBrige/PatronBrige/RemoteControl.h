
#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include "Device1.h"

class RemoteControl {
public:
    RemoteControl(Device1* device);
    void togglePower();
    void volumeDown();
    void volumeUp();
    void channelDown();
    void channelUp();

private:
    Device1* device;
};

#endif  // REMOTECONTROL_H


