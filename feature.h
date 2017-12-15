#ifndef FEATURE_H
#define FEATURE_H
#include "point.h"
#include <vector>
#include <QString>
#include <QTextStream>

class Feature
{
public:
    Feature();
    int feature_type;
    void LoadFeature(QTextStream *textStream);

    std::vector<Point> *pts;
};

#endif // FEATURE_H
