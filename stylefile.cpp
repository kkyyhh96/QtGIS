#include "stylefile.h"

StyleFile::StyleFile()
{

}

void StyleFile::LoadStyle(QString filePath){
    QFile file(filePath);
    file.open(QIODevice::ReadOnly);
    QTextStream textStream(&file);

    map->LoadStyle(&textStream);
    file.close();
}
