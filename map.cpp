#include "map.h"

Map::Map()
{

}

void Map::LoadMap(QTextStream *textStream){
    QString line1 = textStream->readLine();
    QString line2 = textStream->readLine();
    QString line3 = textStream->readLine();

    double l,t,r,b,c;
    l=line1.split(',')[0].toDouble();
    this->left=l;

    t=line1.split(',')[1].toDouble();
    this->top=t;

    r=line2.split(',')[0].toDouble();
    this->right=r;

    b=line2.split(',')[1].toDouble();
    this->bottom=b;

    c=line3.toDouble();
    this->layerCount=c;

    for(int i=0;i<layerCount;i++){
        //Load Layers
        Layer l;
        Layer *layer=&l;
        layer->LoadLayer(textStream);
        this->Layers->push_back(*layer);
    }
}
