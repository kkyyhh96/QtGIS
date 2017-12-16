#ifndef MAP_H
#define MAP_H
#include <vector>
#include <QTextStream>
#include "layer.h"

class Map
{
public:
    Map();
    double left,top,right,bottom;
    int layerCount;
    Layer LoadMap(QTextStream *textStream);
    Layer LAYER;
    std::vector<Layer> LAYERS;

    std::vector<Layer> layers;
};

#endif // MAP_H
