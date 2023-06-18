#include "RemoteControl.h"


RemoteControl::RemoteControl(Device1* device) : device(device) {}

void RemoteControl::togglePower() {
    if (device->isEnabled()) {
        device->disable();
    }
    else {
        device->enable();
    }
}

void RemoteControl::volumeDown() {
    device->setVolume(device->getVolume() - 10);
}

void RemoteControl::volumeUp() {
    device->setVolume(device->getVolume() + 10);
}

void RemoteControl::channelDown() {
    device->setChannel(device->getChannel() - 1);
}

void RemoteControl::channelUp() {
    device->setChannel(device->getChannel() + 1);
}
