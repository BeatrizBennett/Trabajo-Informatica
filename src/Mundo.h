#include "Caja.h"	
#include "Esfera.h"	
#include "Ladrillo.h"
#include "Barra.h"
#include "ListaLadrillos.h"
#include "Jugador.h"
#include "ListaLadrillosJuego.h"
#include "ListaLadrillosVidas.h"
#pragma once

class Mundo
{
	friend class Controlador;
	
private:
	Caja caja;
	Pared plataforma;
	Esfera esfera;
	Barra barra;
	ListaLadrillosJuego ladrillos;
	ListaLadrillosVidas vidas;
	Jugador jugador;

	float x_ojo;
	float y_ojo;
	float z_ojo;

	bool gameover = false;
	bool end = false;

public: 
	~Mundo();
	void tecla(unsigned char key);
	void teclaEspecial(unsigned char key);
	void inicializa();
	void rotarOjo();
	void mueve();
	void dibuja();
	Mundo();
	

	
};
