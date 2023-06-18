#include "TVBox.h"
#include <iostream>

TVBox::TVBox() : powerOn(false), volume(0), service(""), movie("") {}

bool TVBox::isEnabled() const {
    return powerOn;
}

void TVBox::enable() {
    powerOn = true;
    std::cout << "TV Box is on" << std::endl;
}

void TVBox::disable() {
    powerOn = false;
    std::cout << "TV Box is off" << std::endl;
}

int TVBox::getVolume() const {
    return volume;
}

void TVBox::setVolume(int percent) {
    volume = percent;
    std::cout << "TV Box volume set to " << volume << std::endl;
}

int TVBox::getChannel() const {
    // La clase TVBox no utiliza el concepto de canal,
    // por lo que simplemente devolvemos 0.
    return 0;
}

void TVBox::setChannel(int channel) {
    // La clase TVBox no utiliza el concepto de canal,
    // por lo que no realizamos ninguna acción.
}

std::string TVBox::getService() const {
    return service;
}

void TVBox::setService(const std::string& newService) {
    service = newService;
    std::cout << "TV Box service set to " << service << std::endl;
}

std::string TVBox::getMovie() const {
    return movie;
}

void TVBox::setMovie(const std::string& newMovie) {
    movie = newMovie;
    std::cout << "TV Box movie set to " << movie << std::endl;
}
