#ifndef USBPORT_H
#define USBPORT_H


class USBport
{
public:
    USBport();

    void Connect();
    void Disconnect();

    bool GetIsConnected();

private:
    bool isConnected;
};

#endif // USBPORT_H
