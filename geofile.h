#ifndef GEOFILE_H
#define GEOFILE_H
#include <QString>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <iostream>
#include "map.h"

class GeoFile
{
public:
    GeoFile();
    Map *map;

    void LoadFile(QString filePath);

    //void LoadMapInfo(QTextStream* textStream);
};

#endif // GEOFILE_H
