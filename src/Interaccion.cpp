#include "Interaccion.h"
#include <math.h>

Interaccion::Interaccion(void)
{
}


Interaccion::~Interaccion(void)
{
}





void Interaccion::rebote(Esfera& e, Caja c)
{
	//rebote(e,c.suelo);
	rebote(e,c.techo);
	rebote(e,c.pared_dcha);
	rebote(e,c.pared_izq);
}
bool Interaccion::rebote(Esfera &e, Pared p)
{
	Vector2D dir;
	float dif=p.distancia(e.posicion,&dir)-e.radio;
	if(dif<=0.0f)
		{
		Vector2D v_inicial=e.velocidad;
		e.velocidad=v_inicial-dir*2.0*(v_inicial*dir);
		e.posicion=e.posicion-dir*dif;
		return true;
		}
	return false;
}
void Interaccion::rebote(Barra &b, Caja c)
{
	float xmax = c.suelo.limite2.x;
	float xmin = c.suelo.limite1.x;
	if ((b.posicion.x) > xmax - b.longitud)
		b.posicion.x = xmax - b.longitud;
	if ((b.posicion.x) < xmin + b.longitud)
		b.posicion.x = xmin + b.longitud;
}

void Interaccion::rebote(Esfera& e, Barra b)
{
	rebote(e, b.Bpared_dcha);
	rebote(e, b.Bpared_izq);
	rebote(e, b.Btecho);
}
bool Interaccion::colision(Esfera& e, Ladrillo& l)
{
	Vector2D dif = l.posicion - e.posicion;
	float d = dif.modulo();
	float dentro = d - (e.radio + l.radio);

	if (dentro < 0.0f)//si hay colision
	{
		e.velocidad.x = -e.velocidad.x;
		e.velocidad.y = -e.velocidad.y;
		return true;
	}
	return false;
}

