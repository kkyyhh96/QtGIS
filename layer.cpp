#include "layer.h"

Layer::Layer()
{
    layer_name="";
    layer_name_size=0;
    target_count=0;
}

void Layer::LoadLayer(QTextStream *textStream){
    QString line1 = textStream->readLine();
    QString line2 = textStream->readLine();
    QString line3 = textStream->readLine();

    int s,c;QString n ;
    s=line1.toInt();
    layer_name_size=s;
    n=line2.split('\n')[0];
    layer_name=n;
    c=line3.toInt();
    target_count=c;

    for(int i=0;i<target_count;i++){
        Feature f;
        f.LoadFeature(textStream);
        features.push_back(f);
    }
}
