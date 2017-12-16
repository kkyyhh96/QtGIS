#include "geofile.h"

GeoFile::GeoFile()
{

}

void GeoFile::LoadFile(QString filePath){
    QFile file(filePath);
    file.open(QIODevice::ReadOnly);
    QTextStream textStream(&file);

    map->LoadMap(&textStream);

    file.close();
}
