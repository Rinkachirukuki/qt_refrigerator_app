#ifndef PROCESSOR_H
#define PROCESSOR_H

#include "controlpanel.h"
#include "door.h"
#include "eventlog.h"
#include "refrigerationunit.h"
#include "speaker.h"
#include "thermometer.h"
#include "usbport.h"

class Processor
{
public:
    Processor();

    void EventTick(EventLog* eventLog, ControlPanel* controlPanel, Door* door, USBport* usbPort, RefrigerationUnit* refrigeratorUnit, Thermometer* thermometer, Speaker* speaker);

    void DoorHandler(Door* door, EventLog* eventLog);
    void USBportHandler(USBport* usbPort, EventLog* eventLog, Speaker* speaker);
    void RefrigeratorUnitHandler(RefrigerationUnit* refrigeratorUnit, Thermometer* thermometer, EventLog* eventLog, Speaker* speaker);
    void ControlpanelHandler(ControlPanel* controlPanel,RefrigerationUnit* refrigeratorUint, EventLog* eventLog, Speaker* speaker);


private:
    bool doorState = false;

    bool usbPortState = false;

    bool motorState = false;
    bool motorEnableState = false;

    int temperatureState = 0;

    bool tumblerState = false;
};

#endif // PROCESSOR_H
