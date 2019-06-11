#pragma once
class Jugador
{

	int vida;
	bool FinJuego;
public:
	Jugador();
	virtual ~Jugador();
	int getVida();
	void setVidas(int v);

};

