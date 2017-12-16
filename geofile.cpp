#include "geofile.h"

GeoFile::GeoFile()
{

}

void GeoFile::LoadFile(QString filePath){
    QFile file(filePath);
    file.open(QIODevice::ReadOnly);
    QTextStream textStream(&file);

    layer=map.LoadMap(&textStream);
    //layer=this->map->LoadMap(&textStream);
    int a=5;

    file.close();
}
