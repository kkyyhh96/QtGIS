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
        Layer layer;
        layer.LoadLayer(textStream);
        LAYER=layer;
        LAYERS.push_back(LAYER);
    }
}

void Map::LoadStyle(QTextStream *textStream){
   QString line=textStream->readLine() ;
   if(this->layerCount!= line.toInt()){
       return;
   }
   for(int i=0;i<layerCount;i++){
       QString name=textStream->readLine() ;

       int index=0;
       for(int i=0;i<layerCount;i++){
           if(name==LAYERS[i].layer_name){
               index=i;
               break;
           }
       }
       Style style;
       style.LoadStyle(textStream);
       LAYERS[index].layer_style=style;
   }
}
