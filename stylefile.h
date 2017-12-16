#ifndef STYLEFILE_H
#define STYLEFILE_H
#include <QString>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <iostream>
#include "map.h"
#include "layer.h"

class StyleFile
{
public:
    StyleFile();
    Map *map;

    void LoadStyle(QString filePath);
};

#endif // STYLEFILE_H
