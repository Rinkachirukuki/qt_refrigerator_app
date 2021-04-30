#include "processor.h"

Processor::Processor()
{

}

void Processor::EventTick(EventLog* eventLog, ControlPanel* controlPanel, Door* door, USBport* usbPort, RefrigerationUnit* refrigeratorUnit, Thermometer* thermometer, Speaker* speaker){

    ControlpanelHandler(controlPanel,refrigeratorUnit ,eventLog, speaker);

    if(tumblerState){

        DoorHandler(door, eventLog);

        USBportHandler(usbPort, eventLog, speaker);

        RefrigeratorUnitHandler(refrigeratorUnit, thermometer, eventLog, speaker);

    }

}



void Processor::DoorHandler(Door* door, EventLog* eventLog){

    if (door->GetIsClosed() != doorState){

        doorState = door->GetIsClosed();

        if(doorState)
            eventLog->AddEvent("Door was closed");
        else
            eventLog->AddEvent("Door was opened");
    }
}

void Processor::USBportHandler(USBport* usbPort, EventLog* eventLog, Speaker* speaker){

    if (usbPort->GetIsConnected() != usbPortState){

        usbPortState = usbPort->GetIsConnected();

        if(usbPortState)
            eventLog->AddEvent("Device was connected");
        else
            eventLog->AddEvent("Device was disconnected");
        speaker->PlaySound();
    }
}

void Processor::RefrigeratorUnitHandler(RefrigerationUnit* refrigeratorUnit, Thermometer* thermometer, EventLog* eventLog, Speaker* speaker){


    if (refrigeratorUnit->GetIsBroken() != motorState){

        motorState = refrigeratorUnit->GetIsBroken();

        if(motorState){
            eventLog->AddEvent("Motor broke");
            refrigeratorUnit->TurnOffMotor();
        }
        else
            eventLog->AddEvent("Motor was repaired");
        speaker->PlaySound();
    }

    if(!refrigeratorUnit->GetIsBroken()){

        if(thermometer->GetTemperature() > temperatureState){
            if(!refrigeratorUnit->GetIsEnabled()){
                refrigeratorUnit->TurnOnMotor();
                eventLog->AddEvent("Motor turned on");
            }
        }
        else{
            if(refrigeratorUnit->GetIsEnabled()){
                refrigeratorUnit->TurnOffMotor();
                eventLog->AddEvent("Motor turned off");
            }
        }
    }
}

void Processor::ControlpanelHandler(ControlPanel* controlPanel, RefrigerationUnit* refrigeratorUint, EventLog* eventLog, Speaker* speaker){

    if(tumblerState != controlPanel->GetPowerTumbler()){

        tumblerState = controlPanel->GetPowerTumbler();

        if (tumblerState){
            eventLog->AddEvent("Fridge turned on");
        }
        else{
            eventLog->AddEvent("Fridge turned off");
            refrigeratorUint->TurnOffMotor();
        }
        speaker->PlaySound();

    }

    if(tumblerState && controlPanel->GetTemperature() != temperatureState){

        if (temperatureState > controlPanel->GetTemperature()){
            eventLog->AddEvent("Temperature was decreased");
        }
        else{
            eventLog->AddEvent("Temperature was increased");
        }

        speaker->PlaySound();

        temperatureState = controlPanel->GetTemperature();
    }
}


