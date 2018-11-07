#pragma once
#include "SFML/Graphics.hpp"

using namespace sf;
using namespace std;

class Jugador
{
public:
	Jugador(string);

private:
	Texture *tex_jugador;
	Sprite *spr_jugador;
};

