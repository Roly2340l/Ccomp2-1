#include <iostream>
#include "Poligono.h"
#include "PoligonoX.h"
#include "ArregloPoligonos.h"

using namespace std;

int main()
{
	//POLIGONO.H
	Rectangulo<int> rect(6, 3);
	Triangulo<int> tria(5, 6);
	Circulo<double> circ(6);

	cout << "La area del rectangulo \"rect\" es: ";
	rect.printarea();
	cout << "La area del triangulo \"tria\" es: ";
	tria.printarea();
	cout << "La area el circulo \"circ\" es: ";
	circ.printarea();

	//POLIGONOX.H Y ARREGLO POLIGONOS.H
    ArregloPoligonos<int> poligonos;

	return 0;
}
