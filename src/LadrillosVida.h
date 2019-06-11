#pragma once
#include"Vector2D.h"
#include "ColorRGB.h"
#include "Ladrillo.h"

class LadrillosVida : public Ladrillo
{
	//friend class Interaccion;


public:
	LadrillosVida();
	LadrillosVida(int i,int j);
	~LadrillosVida();
	
};