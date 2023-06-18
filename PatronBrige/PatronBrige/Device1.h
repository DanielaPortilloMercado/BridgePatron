#pragma once
#ifndef DEVICE_H
#define DEVICE_H

class Device1 {
public:
    virtual bool isEnabled() const = 0;
    virtual void enable() = 0;
    virtual void disable() = 0;
    virtual int getVolume() const = 0;
    virtual void setVolume(int percent) = 0;
    virtual int getChannel() const = 0;
    virtual void setChannel(int channel) = 0;
    virtual ~Device1() {}
};

#endif  // DEVICE_H


