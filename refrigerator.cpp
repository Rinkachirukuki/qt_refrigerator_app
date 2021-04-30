#include "refrigerator.h"

Refrigerator::Refrigerator()
{
    emulator = new Emulator();
    processor = new Processor();
    eventLog = new EventLog("./EventLog.txt");
    controlPanel = new ControlPanel();
    door = new Door();
    usbPort = new USBport();
    refrigerationUnit = new RefrigerationUnit();
    thermometer = new Thermometer();
    speaker = new Speaker();
}

void Refrigerator::EventTick(){

    processor->EventTick(eventLog,controlPanel,door,usbPort,refrigerationUnit,thermometer,speaker);

    emulator->TemperatureEmulation(thermometer,door,refrigerationUnit);

}
