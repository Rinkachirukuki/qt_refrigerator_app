#ifndef EMULATOR_H
#define EMULATOR_H

#include "thermometer.h"
#include "door.h"
#include "refrigerationunit.h"

class Emulator
{
public:
    Emulator();

    void TemperatureEmulation(Thermometer* thermometer, Door* door, RefrigerationUnit* refrigerationUnit);

private:
    float outsideTemperature;
};

#endif // EMULATOR_H
