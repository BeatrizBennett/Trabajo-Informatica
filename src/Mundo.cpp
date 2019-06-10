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
	ladrillos.dibuja();
	

}

void Mundo::mueve()
{
	esfera.mueve(0.025f);
	ladrillo.mueve(0.002f);
	barra.mueve(0.15f);
	ladrillos.mueve(0.002f);
	Interaccion::rebote(esfera, caja);
	
}

void Mundo::inicializa()
{
	x_ojo=0;
	y_ojo=7.5;
	z_ojo=30;

	
	
	esfera.setRadio(1.0f);
	for (int i = 1; i < 19; i++) { //barrido del eje de la x para ir dibujando ladrillos
		for (int j = 10; j < 14; j++) { //barrido en el eje y para ir dibujando ladrillos
			Ladrillo* aux = new Ladrillo(i - 10, j, 0, -1);
			aux->setPos(i - 10, j);
			aux->setColor(30 * i, 20 * j, 10 * i + 10 * j);
			ladrillos.agregar(aux);
		}
	}
	 
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