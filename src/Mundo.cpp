#include "Mundo.h"
#include "glut.h"
#include <math.h>
#include "Interaccion.h"
#include <Pared.h>


void Mundo::rotarOjo()
{
	float dist=sqrt(x_ojo*x_ojo+z_ojo*z_ojo);
	float ang=atan2(z_ojo,x_ojo);
	ang+=0.05f;
	x_ojo=dist*cos(ang);
	z_ojo=dist*sin(ang);
}
void Mundo::dibuja()
{
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
			0.0, y_ojo, 0.0,      // hacia que punto mira  (0,0,0) 
			0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

	//aqui es donde hay que poner el codigo de dibujo
	
	esfera.dibuja();
	caja.dibuja();
	ladrillo.dibuja();
	barra.dibuja();
	
	

}

void Mundo::mueve()
{
	esfera.mueve(0.025f);
	ladrillo.mueve(0.002f);
	barra.mueve(0.15f);
	Interaccion::rebote(esfera, caja);
	
}

void Mundo::inicializa()
{
	x_ojo=0;
	y_ojo=7.5;
	z_ojo=30;

	
	

	Esfera* e1 = new Esfera(1, 2, 4, 5, 15);
	e1->setColor(200, 0, 0);
	Esfera* e2 = new Esfera(2, -2, 4, -5, 15);
	e2->setColor(255, 255, 255);
	 
}

void Mundo::tecla(unsigned char key)
{
	
}
void Mundo::teclaEspecial(unsigned char key)
{
	
}
Mundo::~Mundo()
{
	
}