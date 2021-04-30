#ifndef CONTROLPANEL_H
#define CONTROLPANEL_H


class ControlPanel
{
public:
    ControlPanel();

    ControlPanel
    (bool powerTumbler,
     int temperature = 5,
     int maxTemperature = 10,
     int minTemperature = 3);

    bool GetPowerTumbler();
    int GetTemperature();

    void TurnOnFridge();
    void TurnOffFridge();

    bool IncreaseTemperature();
    bool DecreaseTemperature();

private:
    bool powerTumbler;

    int temperature;
    int maxTemperature;
    int minTemperature;
};

#endif // CONTROLPANEL_H
