#ifndef LINES_H
#define LINES_H

#include <QtWidgets/QWidget>
#include "ui_lines.h"
#include <QtGui>
#include <QtCore>
#include <QtOpenGL>
class Lines : public QGLWidget
{
	Q_OBJECT

public:
	Lines(QGLWidget *parent = 0);
	~Lines();
	void initializeGL();
	void paintGL();
	void resizeGL(int w,int h);
	void keyPressEvent(QKeyEvent *e);
private:
	Ui::LinesClass ui;
	GLfloat x,y,xs,xRot,yRot;
};

#endif // LINES_H
