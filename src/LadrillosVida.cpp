#include "LadrillosVida.h"
#include "glut.h"


LadrillosVida::LadrillosVida()
{
	
}


LadrillosVida::~LadrillosVida()
{
}


void LadrillosVida::dibuja()
{
	color.ponColor();
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);

	glTranslatef(-posicion.x, -posicion.y, 0);
}
void LadrillosVida::setColor(Byte r, Byte v, Byte a)
{
	color.set(r, v, a);
}
void LadrillosVida::setPos(float ix, float iy)
{
	posicion.x = ix;
	posicion.y = iy;
}
Vector2D LadrillosVida::getPos()
{
	return LadrillosVida::posicion;
}
float LadrillosVida::getCentro()
{
	return LadrillosVida::posicion.x;
}

void LadrillosVida::setRadio(float f)
{
	this->radio = f;
}
