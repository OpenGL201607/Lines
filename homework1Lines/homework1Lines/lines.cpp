#include "lines.h"

Lines::Lines(QGLWidget *parent)
	: QGLWidget(parent)
{
	ui.setupUi(this);
	x=0.8;

}

Lines::~Lines()
{

}

void Lines::initializeGL()
{
	setGeometry(150,100,640,480);
	glClearColor(0,0,0,0);
	glClearDepth(1);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT,GL_NICEST);
}

void Lines::paintGL()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glPushMatrix();
	glRotatef(xRot,1.0,0.0,0.0);
	glRotatef(yRot,0.0,1.0,0.0);
	glBegin(GL_LINES);
	y=-0.8;
	for(int i=0;i<10;i++)
	{
		glVertex3f(-x,y,0.0);
		glVertex3f(x,y,0.0);
		y +=0.2;
	}
	glEnd();
	glPopMatrix();
}

void Lines::resizeGL(int w,int h)
{
	if(0 == h)
		h =1;
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	updateGL();
}

void Lines::keyPressEvent(QKeyEvent *e)
{
	switch (e->key())
	{
	case Qt::Key_Up:
		xRot += 0.5f;
		break;
	case Qt::Key_Down:
		xRot -= 0.5f;
		break;
	case Qt::Key_Left:
		yRot += 0.5f;
		break;
	case Qt::Key_Right:
		yRot -= 0.5f;
		break;
	default:
		break;
	}
	updateGL();
}