#pragma once
#include"Vector2D.h"
#include "ColorRGB.h"
#include "LadrillosVida.h"

class Ladrillo : public LadrillosVida

{
	//friend class Interaccion;
private:
	
public:
	Ladrillo();
	~Ladrillo();
	Ladrillo(float px, float py);
	
};

