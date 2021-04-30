#include "eventlog.h"

#include <QFile>
#include <QTextStream>



EventLog::EventLog(){
    QString filename="Data.txt";
}
EventLog::EventLog(QString filename){

    this->filename = filename;
}

void EventLog::AddEvent(QString situation){

    QString filename= "eventlog.txt";

    QFile file( filename );

    if ( file.open(QIODevice::Append) )
    {
        QTextStream stream( &file );

        stream << (QDateTime::currentDateTime().toString("dd/MM/yyyy | HH:mm:ss")) << " | " << situation << endl;
    }

    file.close();
}
