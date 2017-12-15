#include "feature.h"

Feature::Feature()
{

}

void Feature::LoadFeature(QTextStream *textStream){
    QString line=textStream->readLine();
    this->feature_type=line.toInt();

    while (true) {
        Point p;
        Point *pt=&p;
        if(pt->LoadPoint(textStream,pt)){
            this->pts->push_back(*pt);
        }
        else {
            break;
        }
    }
}
