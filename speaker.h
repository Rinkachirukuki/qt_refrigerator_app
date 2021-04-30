#ifndef SPEAKER_H
#define SPEAKER_H

#include <QString>


class Speaker
{
public:
    Speaker();
    Speaker(QString fileName);

    void PlaySound();
private:
    QString fileName;
};

#endif // SPEAKER_H
