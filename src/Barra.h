#pragma once
#include "Pared.h"
#include "Vector2D.h"
#include"glut.h"

class Barra
{
	friend class Interaccion;
private:
	int longitud;
	Vector2D posicion;
	Vector2D velocidad;

public:
	Barra();
	~Barra();
	Barra(float x, float y, int l);
	void dibuja();
	Pared Bsuelo;
	Pared Btecho;
	Pared Bpared_izq;
	Pared Bpared_dcha;
	void mueve(float t);
	void setPos(float ix, float iy);
	void setVel(float ix, float iy);
	
};

