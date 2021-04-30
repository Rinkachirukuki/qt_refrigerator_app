#ifndef EVENTLOG_H
#define EVENTLOG_H

#include "Enumerators.h"

#include <QString>
#include <QDateTime>


class EventLog
{
public:
    EventLog();
    EventLog(QString filename);

    void AddEvent(QString situation);

private:
    QString filename;

};

#endif // EVENTLOG_H
