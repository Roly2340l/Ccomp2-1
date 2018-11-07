#pragma once
#include "SFML/Graphics.hpp"
#include "Jugador.h"

using namespace sf;
using namespace std;

class Juego
{
public:
	Juego(int, int, string);
	void repetir();
	void dibujar();
private:
	//DATOS PARA LA PANTALLA
	RenderWindow *ventana;
	int fps;
	Event cerrar;

	//DATOS PARA LOS SPRITES
	Texture *textura;
	Sprite *sprite;

	//DATOS PARA EL MAPA Y FONDOS
	Texture *fondo1;
	Sprite *nivel1;

	Texture *tierra;
	Texture *pasto;
	Sprite *bloque1;
	Sprite *bloque2;

};

