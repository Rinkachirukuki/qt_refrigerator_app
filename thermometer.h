#ifndef THERMOMETER_H
#define THERMOMETER_H


class Thermometer
{
public:
    Thermometer();

     float GetTemperature();
     void SetTemperature(float temperature);

private:
    float temperature;
};

#endif // THERMOMETER_H
