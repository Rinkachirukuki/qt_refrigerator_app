#include "controlpanel.h"

ControlPanel::ControlPanel()
{
    powerTumbler = true;

    temperature = 5;
    maxTemperature = 10;
    minTemperature = 3;
}

ControlPanel::ControlPanel(bool powerTumbler, int temperature, int maxTemperature, int minTemperature)
{
    this->powerTumbler = powerTumbler;

    this->maxTemperature = maxTemperature;
    this->minTemperature = minTemperature;

    this->temperature =
            temperature > maxTemperature ? maxTemperature :
            temperature < minTemperature ? minTemperature :
            temperature;

}

bool ControlPanel::GetPowerTumbler()
{
    return powerTumbler;
}

int ControlPanel::GetTemperature()
{
    return temperature;
}

void ControlPanel::TurnOnFridge()
{
    powerTumbler = true;
}

void ControlPanel::TurnOffFridge()
{
    powerTumbler = false;
}

bool ControlPanel::IncreaseTemperature()
{
    if (temperature >= maxTemperature) return false;

    temperature++;
    return true;
}

bool ControlPanel::DecreaseTemperature()
{
    if (temperature <= minTemperature) return false;

    temperature--;
    return true;
}
