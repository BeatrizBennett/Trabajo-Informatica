#include "Caja.h"	
#include "Esfera.h"	
#include "Ladrillo.h"


class Mundo
{

	
	Caja caja;
	Pared plataforma;
	Esfera esfera;
	Ladrillo ladrillo;

	float x_ojo;
	float y_ojo;
	float z_ojo;

public: 
	~Mundo();
	void tecla(unsigned char key);
	void teclaEspecial(unsigned char key);
	void inicializa();
	void rotarOjo();
	void mueve();
	void dibuja();
	
private:
	
};
