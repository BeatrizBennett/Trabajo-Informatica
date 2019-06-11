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
void Ladrillo::dibuja()
{
	color.ponColor();
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);

	glTranslatef(-posicion.x, -posicion.y, 0);
}
void Ladrillo::setColor(Byte r, Byte v, Byte a)
{
	color.set(r, v, a);
}
void Ladrillo::setPos(float ix, float iy)
{
	posicion.x = ix;
	posicion.y = iy;
}
Vector2D Ladrillo::getPos()
{
	return Ladrillo::posicion;
}
float Ladrillo::getCentro()
{
	return Ladrillo::posicion.x;
}

void Ladrillo::setRadio(float f)
{
	this->radio = f;
}


