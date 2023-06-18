#include "Radio.h"
#include <iostream>

Radio::Radio() : powerOn(false), volume(0), channel(1) {}

bool Radio::isEnabled() const {
    return powerOn;
}

void Radio::enable() {
    powerOn = true;
    std::cout << "Radio is on" << std::endl;
}

void Radio::disable() {
    powerOn = false;
    std::cout << "Radio is off" << std::endl;
}

int Radio::getVolume() const {
    return volume;
}

void Radio::setVolume(int percent) {
    volume = percent;
    std::cout << "Radio volume set to " << volume << std::endl;
}

int Radio::getChannel() const {
    return channel;
}

void Radio::setChannel(int newChannel) {
    channel = newChannel;
    std::cout << "Radio channel set to " << channel << std::endl;
}
