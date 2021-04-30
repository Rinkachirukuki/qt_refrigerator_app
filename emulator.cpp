#include "emulator.h"

Emulator::Emulator()
{
    outsideTemperature = 20;
}

void Emulator::TemperatureEmulation(Thermometer* thermometer, Door* door, RefrigerationUnit* refrigerationUnit){

    float temp = thermometer->GetTemperature()+ 0.03f;

    if (!door->GetIsClosed()){
        temp += 0.02f;
    }
    if (refrigerationUnit->GetIsEnabled()){
        temp -= 0.04f;
    }

    if (temp > outsideTemperature){
        temp = outsideTemperature;
    }

    thermometer->SetTemperature(temp);
}
