#ifndef MAP_H
#define MAP_H
#include <vector>
#include <QTextStream>
#include "layer.h"
#include "style.h"

class Map
{
public:
    Map();
    double left,top,right,bottom;
    int layerCount;
    Layer LAYER;
    void LoadMap(QTextStream *textStream);
    void LoadStyle(QTextStream *textStream);
    std::vector<Layer> LAYERS;
};

#endif // MAP_H
