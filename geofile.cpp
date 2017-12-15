#include "geofile.h"

GeoFile::GeoFile()
{

}

/*
void GeoFile::LoadMapInfo(QTextStream* textStream)
{
    QString line1 = textStream->readLine();
    map.left=line1.split(',')[0].toDouble();
    map.top=line1.split(',')[1].toDouble();
    QString line2 = textStream->readLine();
    map.right=line2.split(',')[0].toDouble();
    map.bottom=line2.split(',')[1].toDouble();
    QString line3 = textStream->readLine();
    map.layerCount=line3.toDouble();
}
*/

void GeoFile::LoadFile(QString filePath){
    QFile file(filePath);
    file.open(QIODevice::ReadOnly);
    QTextStream textStream(&file);

    this->map->LoadMap(&textStream);
    int a=5;

    /*
    // read map information
    LoadMapInfo(&textStream);

    int layerCount=0,featureCount=0;
    while (!textStream.atEnd()) {

    }

    */
    /*
    Layer layer;
    bool readLayerInfo=true;
    while (!textStream.atEnd()) {
        if(readLayerInfo){
            // read layer information
            QString line1 = textStream.readLine();
            layer.layer_name_size=line1.toDouble();
            QString line2 = textStream.readLine();
            layer.layer_name=line2;
            QString line3 = textStream.readLine();
            layer.target_count=line3.toInt();
            QString line4 = textStream.readLine();
            layer.target_count=line4.toInt();
            readLayerInfo=!readLayerInfo;
        }
        else {
            // read points
            Point point;
            QString line = textStream.readLine();
            point.x=line.split(',')[0].toDouble();
            point.y=line.split(',')[1].toDouble();
            if(point.x==-99999&&point.y==-99999){
                readLayerInfo=!readLayerInfo;
                map.Layers.push_back(layer);
                Layer layer;
                continue;
            }
            layer.pts.push_back(point);
        }
        */

    file.close();
}
