#pragma once


#include "Caja.h"
#include "Esfera.h"

class Interaccion  
{
public:
	Interaccion();
	virtual ~Interaccion();	
	
	static bool rebote(Esfera& e, Pared p);
	static void rebote(Esfera& e, Caja c);
	


};

