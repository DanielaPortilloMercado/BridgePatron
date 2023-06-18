#pragma once
#ifndef TVBOX_H
#define TVBOX_H

#include "Device1.h"
#include <string>

class TVBox : public Device1 {
private:
    bool powerOn;
    int volume;
    std::string service;
    std::string movie;

public:
    TVBox();
    bool isEnabled() const override;
    void enable() override;
    void disable() override;
    int getVolume() const override;
    void setVolume(int percent) override;
    int getChannel() const override;
    void setChannel(int channel) override;
    std::string getService() const;
    void setService(const std::string& newService);
    std::string getMovie() const;
    void setMovie(const std::string& newMovie);
};

#endif  // TVBOX_H


