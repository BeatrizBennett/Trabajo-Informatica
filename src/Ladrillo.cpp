#include "Ladrillo.h"
#include "glut.h"



Ladrillo::Ladrillo()
{
	setPos(5, 7);
	setColor(255, 0, 255);
	setRadio(0.6f);
	//velocidad.y = -1;
	//this->setColor(200,0,0);
	//color=200,0,0;
}


Ladrillo::~Ladrillo()
{
}

Ladrillo::Ladrillo(float px, float py)
{
	setPos(px, py);
	setRadio(0.6f);
	//Ladrillo::setColor(100,100,55);
}


