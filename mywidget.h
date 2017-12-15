#ifndef MYWIDGET_H
#define MYWIDGET_H
#include "QGLWidget"
#include "qgl.h"

class MyWidget : public QGLWidget
{
public:
    MyWidget();
    void initializeGL();
    void paintGL();
    void resizeGL(int width,int height);
};

#endif // MYWIDGET_H
