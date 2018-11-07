#include "SFML/Graphics.hpp"
#include "Juego.h"
#include <iostream>

using namespace std;
using namespace sf;

#include <SFML\Graphics.hpp>

int main()
{
	//Pantalla
	Juego *pantalla;
	pantalla = new Juego(1088, 768, "ALien Attack");
	
	system("Pause");
	return 0;
}