#ifndef MAP_H
#define MAP_H
#include "layer.h"
#include <vector>
#include <QTextStream>

class Map
{
public:
    Map();
    double left,top,right,bottom;
    int layerCount;
    void LoadMap(QTextStream *textStream);

    std::vector <Layer> *Layers;
};

#endif // MAP_H
