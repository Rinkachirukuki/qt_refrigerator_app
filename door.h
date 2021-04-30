#ifndef DOOR_H
#define DOOR_H


class Door
{
public:
    Door();
    Door(bool isClosed);

    void Open();
    void Close();

    bool GetIsClosed();

private:
    bool isClosed;
};

#endif // DOOR_H
