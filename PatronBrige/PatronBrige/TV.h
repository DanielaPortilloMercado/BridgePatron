#pragma once
#ifndef TV_H
#define TV_H

#include "Device1.h"

class Tv : public Device1 {
private:
    bool powerOn;
    int volume;
    int channel;

public:
    Tv();
    bool isEnabled() const override;
    void enable() override;
    void disable() override;
    int getVolume() const override;
    void setVolume(int percent) override;
    int getChannel() const override;
    void setChannel(int newChannel) override;
};

#endif  // TV_H

