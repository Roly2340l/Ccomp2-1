#include "Jugador.h"

using namespace std;

Jugador::Jugador(string direccion)
{
	tex_jugador = new Texture;
	tex_jugador->loadFromFile("imagenes/bola.png");

	spr_jugador = new Sprite;
	spr_jugador->setTexture(*tex_jugador);
	spr_jugador->setScale(16 / spr_jugador->getTexture()->getSize().x, 16 / spr_jugador->getTexture()->getSize().y);
}


