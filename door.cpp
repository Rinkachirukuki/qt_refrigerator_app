#include "door.h"

Door::Door()
{
    isClosed = true;
}

Door::Door(bool isClosed)
{
    this->isClosed = isClosed;
}

void Door::Open(){
    isClosed = false;
}

void Door::Close(){
    isClosed = true;
}

bool Door::GetIsClosed(){
    return isClosed;
}
