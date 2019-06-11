#pragma once
#include "Mundo.h"
class Controlador
{
public:
	Controlador();
	virtual ~Controlador();
	void tecla(unsigned char key);
	void teclaEspecial(unsigned char key);
	void mover();
	void dibuja();
	void inicializa();
private:
	enum Pantalla {INICIO,JUEGO,FINJUEGO,GAMEOVER};
	Pantalla pantalla;
	Mundo miMundo; //creamos objeto tipo mundo y gestionamos las diferentes pantallas con el controlador
	float x_ojo = 0.0, y_ojo = 7.5, z_ojo = 30; //encapsula el punto de vista para que no sea modificado accidentalmente
};

