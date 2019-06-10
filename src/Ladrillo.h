#pragma once
#include"Vector2D.h"
#include "ColorRGB.h"
class Ladrillo
{
	friend class Interaccion;
private:
	Vector2D posicion;
	Vector2D velocidad;
	ColorRGB color;
	float radio;
public:
	Ladrillo();
	~Ladrillo();
	Ladrillo(float px, float py, float vx, float vy);
	void mueve(float t);
	void dibuja();
	void setColor(Byte r, Byte v, Byte a);
	void setPos(float ix, float iy);
	Vector2D getPos();
	float getCentro();
	
};

