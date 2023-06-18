#pragma once
#ifndef RADIO_H
#define RADIO_H

#include "Device1.h"

class Radio : public Device1 {
private:
    bool powerOn;
    int volume;
    int channel;

public:
    Radio();
    bool isEnabled() const override;
    void enable() override;
    void disable() override;
    int getVolume() const override;
    void setVolume(int percent) override;
    int getChannel() const override;
    void setChannel(int newChannel) override;
};

#endif  // RADIO_H


