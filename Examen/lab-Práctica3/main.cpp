#include <iostream>
#include "Poligono.h"
#include "PoligonoX.h"
#include "ArregloPoligonos.h"

using namespace std;

int main()
{
	//PREGUNTA 1.C

	Rectangulo rect(6, 3);
	Triangulo tria(5, 6);
	Circulo circ(6);

	cout << "La area del rectangulo \"rect\" es: "; 
	rect.printarea();
	cout << "La area del triangulo \"tria\"es: ";
	tria.printarea();
	cout << "La area el circulo \"circ\"es: "; 
	circ.printarea();
	
	//---->Punteros:
	Rectangulo *ptrRect;
	ptrRect = new Rectangulo(8, 4);
	Triangulo *ptrTria;
	ptrTria = new Triangulo(10, 8);
	Circulo *ptrCirc;
	ptrCirc = new Circulo(8);

	cout << "La area del rectangulo \"ptrRect\" es: "; ptrRect->printarea();
	cout << "La area del triangulo \"ptrTria\"es: "; ptrTria->printarea();
	cout << "La area el circulo \"ptrCirc\"es: "; ptrCirc->printarea();

	//PREGUNTA 2

	ArregloPoligonos poligonos1;
	ArregloPoligonos poligonos2(6);
	ArregloPoligonos poligonos3(poligonos2);

	cout << "Arreglo de poligonos1 (constructor sin parametros) : "; poligonos1.print();
	cout << "Arreglo de poligonos2 (constructor con parametros) : "; poligonos2.print();
	cout << "Arreglo de poligonos3 (constructor copia) : "; poligonos3.print();

	PoligonoX poli(2, 3);

	cout << "insertar poligono al final(poligonos2) :";
	poligonos2.insertarFinal(poli);
	poligonos2.print();

	cout << "insertar poligono en una posicion (poligonos3) :";
	poligonos3.insertarPos(poli, 2);
	poligonos3.print();

	cout << "Eliminar poligono (poligonos3) :";
	poligonos3.eliminar(3);
	poligonos3.print();

	system("pause");
	return 0;
}