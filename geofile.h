#ifndef GEOFILE_H
#define GEOFILE_H
#include <QString>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <iostream>
#include "map.h"
#include "layer.h"

class GeoFile
{
public:
    GeoFile();
    Map map;
    Layer layer;

    void LoadFile(QString filePath);
};

#endif // GEOFILE_H
