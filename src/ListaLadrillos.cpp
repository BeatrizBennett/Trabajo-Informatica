#include "ListaLadrillos.h"



ListaLadrillos::ListaLadrillos()
{
	numero = 0;
	for (int i = 0; i < MAX_LADRILLOS; i++)
		lista[i] = 0;
}


ListaLadrillos::~ListaLadrillos(void)
{
}

bool ListaLadrillos::agregar(Ladrillo* l)
{
	if (numero < MAX_LADRILLOS)
		lista[numero++] = l;
	else { return false; }
	return true;
}
void ListaLadrillos::dibuja()
{
	for (int i = 0; i < numero; i++)
		lista[i]->dibuja();
}
void ListaLadrillos::destruirContenido()
{
	for (int i = 0; i < numero; i++)
		delete lista[i];
	numero = 0;
}
void ListaLadrillos::eliminar(int index)
{
	if ((index < 0) || (index >= numero))
		return;
	delete lista[index];
	numero--;
	for (int i = index; i < numero; i++)
		lista[i] = lista[i + 1];
}
void ListaLadrillos::eliminar(Ladrillo* l)
{
	for (int i = 0; i < numero; i++)
		if (lista[i] == l)
		{
			eliminar(i);
			return;
		}
}
Ladrillo* ListaLadrillos::colision(Esfera* e)
{
	for (int i = 0; i < numero; i++)
	{
		if (Interaccion::colision(*e, *(lista[i])))
			return lista[i];
	}
	return 0; //no hay colisión*/
}
void ListaLadrillos::crear() 
{
	for (int i = 1; i < 19; i++) 
	{ //barrido del eje de la x para ir dibujando ladrillos
		for (int j = 10; j < 14; j++) 
		{ //barrido en el eje y para ir dibujando ladrillos
			Ladrillo* aux = new Ladrillo(i - 10, j);
			aux->setPos(i - 10, j - 1);
			aux->setColor(30 * i, 20 * j, 10 * i + 10 * j);
			ListaLadrillos::agregar(aux);
		}
	}
}
