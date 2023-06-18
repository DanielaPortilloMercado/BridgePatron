
#include "TV.h"
#include <iostream>

Tv::Tv() : powerOn(false), volume(0), channel(1) {}

bool Tv::isEnabled() const {
    return powerOn;
}

void Tv::enable() {
    powerOn = true;
    std::cout << "TV is on" << std::endl;
}

void Tv::disable() {
    powerOn = false;
    std::cout << "TV is off" << std::endl;
}

int Tv::getVolume() const {
    return volume;
}

void Tv::setVolume(int percent) {
    volume = percent;
    std::cout << "TV volume set to " << volume << std::endl;
}

int Tv::getChannel() const {
    return channel;
}

void Tv::setChannel(int newChannel) {
    channel = newChannel;
    std::cout << "TV channel set to " << channel << std::endl;
}
