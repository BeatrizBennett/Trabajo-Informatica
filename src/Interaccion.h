#pragma once


#include "Caja.h"
#include "Esfera.h"
#include "Barra.h"
#include"Ladrillo.h"

class Interaccion  
{
public:
	Interaccion();
	virtual ~Interaccion();	
	
	static bool rebote(Esfera& e, Pared p);
	static void rebote(Esfera& e, Caja c);
	static void rebote(Barra &b, Caja c);
	static void rebote(Esfera& e, Barra b);
	static bool Interaccion::colision(Esfera& e, Ladrillo& l);

	bool colision(Esfera& e, Pared&);


};

