#include "Controlador.h"
#include "Mundo.h"
#include "glut.h"
#include <stdio.h>


using namespace std;
#pragma once




Controlador::Controlador(void)
{
	pantalla = INICIO; //Establecemos por defecto la pantalla de INICIO
}


Controlador::~Controlador(void)
{
}

void Controlador::dibuja()
{
	if (miMundo.gameover)
		pantalla = GAMEOVER;
	if (miMundo.end)
		pantalla = FINJUEGO;

	if (pantalla == INICIO)
	{
		gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
			0.0, y_ojo, 0.0,      // hacia que punto mira  (0,0,0) 
			0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

		/*meter con texturas texto inicio (título, nombres...)
		1. opción empezar a jugar 'A'
		2. opción salir del juego 'Z'*/


	}

	else if (pantalla == JUEGO) {
		miMundo.dibuja();
	}

	else if (pantalla == GAMEOVER)
	{
		gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
			0.0, y_ojo, 0.0,      // hacia que punto mira  (0,0,0) 
			0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)  
		//1. opción volver a jugar 'A'

	}

	else if (pantalla == FINJUEGO)
	{
		gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
			0.0, y_ojo, 0.0,      // hacia que punto mira  (0,0,0) 
			0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)  
		//1. opción empezar a jugar 'A'

	}
}

void Controlador::tecla(unsigned char key)
{
	if (pantalla == INICIO)
	{
		printf("S para comenzar E para terminar");
		if (key == 'S'||key=='s')
			exit(0);
		else if (key == 'E'||key=='e')
		{
			miMundo.inicializa();
			pantalla = JUEGO;
		}
		/*con texturas: Tecla incorrecta. Por favor presione una de las opciones.*/

	}

	else if (pantalla == GAMEOVER)
	{
		if (key == 'A')
		{
			pantalla = INICIO;
			miMundo.inicializa();
		}
		else
		{
			miMundo.end = true;
			exit(0);
		}


	}
	else if (pantalla == FINJUEGO)
	{
		if (key == 'A')
		{
			pantalla = INICIO;
			miMundo.inicializa();
		}
		else
		{
			miMundo.end = true;
			exit(0);
		}
	}
}


void Controlador::teclaEspecial(unsigned char key)
{
	if (pantalla == JUEGO)
		miMundo.teclaEspecial(key);
}


void Controlador::mover()
{
	if (pantalla == JUEGO)
		miMundo.mueve();
}
