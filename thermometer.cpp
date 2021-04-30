#include "thermometer.h"

Thermometer::Thermometer()
{
    temperature = 4;
}


float Thermometer::GetTemperature(){
    return temperature;
}

void Thermometer::SetTemperature(float temperature){
    this->temperature = temperature;
}
