#pragma once
#include"Ladrillo.h"
#include "Interaccion.h"
#include "Esfera.h"
#define MAX_LADRILLOS 100

class ListaLadrillos
{
private:
	Ladrillo* lista[MAX_LADRILLOS];
	int numero;
public:
	ListaLadrillos();
	virtual ~ListaLadrillos(void);
	bool agregar(Ladrillo* l);
	void dibuja();
	void mueve(float t);
	void destruirContenido();
	void eliminar(int index);
	void eliminar(Ladrillo* l);
	//Ladrillo* colision(Esfera* e);
};

