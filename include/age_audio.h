#ifndef AGE_AUDIO_H
#define AGE_AUDIO_H
#include <QString>
#include <QtMultimedia/qmediaplayer.h>
#include <QtMultimedia/QMediaResource>
#include <QtMultimedia/QAudioBuffer>
#include <QtMultimedia/QAbstractAudioInput>
#include <QtMultimedia/QAbstractAudioOutput>
#include <QtMultimedia/qmediaplaylist.h>
#include <QFile>
#include <QUrl>
#include <QDebug>
#include <QDir>
#include <QObjectUserData>
class AGE_Audio
{
protected:
    QFile f;
    QMediaPlayer * music;
    QMediaPlaylist *medialist;
    QString objName;
    QString audName;
    bool loopORnot;
    int Volume;
    int mods;

public:
    AGE_Audio(QString audName);
    AGE_Audio(QString audName,int mods);
    void setObjectName(QString objName);
    QString getObjectName();
    QString getAudioName();
    int getVolume();
    void setLoopORnot(bool loopORnot);
    bool getLoopORnot();
    void setVolume(int Volume);
    void audio();
    void play();
    void stop();
    void pause();
    void Init()
    {
        this->loopORnot = false;
        this->Volume = 50;
        this->mods = 0;
        music = new QMediaPlayer;
        medialist=new QMediaPlaylist;
    }
    ~AGE_Audio();
};

#endif // AGE_AUDIO_H