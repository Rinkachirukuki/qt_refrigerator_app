#include "refrigerationunit.h"

RefrigerationUnit::RefrigerationUnit()
{
    isBroken = false;
    isEnabled = false;
}

void RefrigerationUnit::TurnOnMotor(){
    isEnabled = true;
}

void RefrigerationUnit::TurnOffMotor(){
    isEnabled = false;
}

void RefrigerationUnit::BreakDownMotor(){
    isBroken = true;
}

void RefrigerationUnit::FixMotor(){
    isBroken = false;
}


bool RefrigerationUnit::GetIsEnabled(){
    return isEnabled;
}

bool RefrigerationUnit::GetIsBroken(){
    return isBroken;
}
