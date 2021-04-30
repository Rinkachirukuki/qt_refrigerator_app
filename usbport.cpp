#include "usbport.h"

USBport::USBport()
{
    isConnected = false;
}


void USBport::Connect(){
        isConnected = true;
}

void USBport::Disconnect(){
        isConnected = false;
}

bool USBport::GetIsConnected(){
    return isConnected;
}
