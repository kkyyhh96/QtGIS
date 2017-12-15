#include "mywidget.h"

MyWidget::MyWidget()
{

}
void MyWidget::initializeGL(){
    glClearColor(1.0,1.0,1.0,1.0);
}
void MyWidget::resizeGL(int width,int height){
   glViewport(0,0,width,height);

   glMatrixMode(GL_PROJECTION);
}
void MyWidget::paintGL(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(0,0);
    glVertex2f(1,0);
    glVertex2f(-1,-1);
    glEnd();
    glFlush();
}
