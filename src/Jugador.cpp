#pragma once
#include "Jugador.h"



Jugador::Jugador()
{
	vida = 3;
}


Jugador::~Jugador()
{
}

int Jugador::getVida()
{ 
	return vida;
}
void Jugador::setVidas(int v) 
{
	vida = v;
}


