#pragma once
#include"Vector2D.h"
#include "ColorRGB.h"

class LadrillosVida
{
	friend class Interaccion;
protected:
	Vector2D posicion;
	ColorRGB color;
	float radio;

public:
	LadrillosVida();
	~LadrillosVida();
	void dibuja();
	void setColor(Byte r, Byte v, Byte a);
	void setPos(float ix, float iy);
	Vector2D getPos();
	float getCentro();
	void setRadio(float f);
};