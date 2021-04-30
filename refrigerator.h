#ifndef REFRIGERATOR_H
#define REFRIGERATOR_H

#include "processor.h"
#include "emulator.h" //

class Refrigerator
{

public:
    Refrigerator();

    ControlPanel* controlPanel;
    USBport* usbPort;
    Door* door;

    RefrigerationUnit* refrigerationUnit;
    EventLog* eventLog;
    Speaker* speaker;
    Thermometer* thermometer;

    Processor* processor;
    Emulator* emulator;

    void EventTick();

private:





};

#endif // REFRIGERATOR_H
