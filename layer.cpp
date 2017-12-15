#include "layer.h"

Layer::Layer()
{

}

void Layer::LoadLayer(QTextStream *textStream){
    QString line1 = textStream->readLine();
    QString line2 = textStream->readLine();
    QString line3 = textStream->readLine();

    int s,c;QString n ;
    s=line1.toInt();
    layer_name_size=s;
    n=line2.split('\n')[0];
    this->layer_name=n;
    c=line3.toInt();
    this->target_count=c;

    for(int i=0;i<target_count;i++){
        Feature f;
        Feature *feature=&f;
        feature->LoadFeature(textStream);
        this->features->push_back(*feature);
    }
}
