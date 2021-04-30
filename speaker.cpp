#include "speaker.h"
#include <QSound>
#include <QDebug>

Speaker::Speaker(){

    fileName = "\popl.wav";
}

Speaker::Speaker(QString fileName){

    this->fileName = fileName;
}

void Speaker::PlaySound(){
    QSound::play(fileName);

}
