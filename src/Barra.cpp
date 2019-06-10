#include "Barra.h"
#include "glut.h"


Barra::Barra()
{
	posicion.x = 0;
	posicion.y = 1;
	longitud = 1;
	velocidad.x = 1;
	Bsuelo.setColor(0, 150, 100);
	Bsuelo.setPos(posicion.x - longitud, posicion.y, posicion.x + longitud, posicion.y);

	Btecho.setColor(0, 150, 100);
	Btecho.setPos(posicion.x - longitud, posicion.y + 1, posicion.x + longitud, posicion.y + 1);

	Bpared_dcha.setColor(0, 150, 100);
	Bpared_dcha.setPos(posicion.x - longitud, posicion.y, posicion.x - longitud, posicion.y + 1);

	Bpared_izq.setColor(0, 150, 100);
	Bpared_izq.setPos(posicion.x + longitud, posicion.y, posicion.x + longitud, posicion.y + 1);
}


Barra::~Barra()
{

}

Barra::Barra(float x, float y, int l)
{
	//Constructor de la barra para cuando sea necesario cambiar la longitud de la misma
	posicion.x = x;
	posicion.y = y;
	longitud = l;

	//Bsuelo.setColor(150, 150, 100);
	Bsuelo.setPos(posicion.x - longitud, posicion.y, posicion.x + longitud, posicion.y);

	//Btecho.setColor(150, 150, 100);
	Btecho.setPos(posicion.x - longitud, posicion.y + 1, posicion.x + longitud, posicion.y + 1);

	//Bpared_dcha.setColor(150, 150, 100);
	Bpared_dcha.setPos(posicion.x - longitud, posicion.y, posicion.x - longitud, posicion.y + 1);

	//Bpared_izq.setColor(150, 150, 100);
	Bpared_izq.setPos(posicion.x + longitud, posicion.y, posicion.x + longitud, posicion.y + 1);
}
void Barra::dibuja()
{
	Bsuelo.dibuja();
	Btecho.dibuja();
	Bpared_izq.dibuja();
	Bpared_dcha.dibuja();
}
void Barra::mueve(float t)
{
	posicion.x = posicion.x + velocidad.x * t;
	Bsuelo.setPos(posicion.x - longitud, posicion.y, posicion.x + longitud, posicion.y);
	Btecho.setPos(posicion.x - longitud, posicion.y + 1, posicion.x + longitud, posicion.y + 1);
	Bpared_dcha.setPos(posicion.x - longitud, posicion.y, posicion.x - longitud, posicion.y + 1);
	Bpared_izq.setPos(posicion.x + longitud, posicion.y, posicion.x + longitud, posicion.y + 1);
}
void Barra::setPos(float ix, float iy)
{
	posicion.x = ix;
	posicion.y = iy;
}
void Barra::setVel(float vx, float vy)
{
	velocidad.x = vx;
	velocidad.y = vy;
}