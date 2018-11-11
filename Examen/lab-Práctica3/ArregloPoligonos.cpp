#include "ArregloPoligonos.h"

using namespace std;

//FUNCIONES MIEMBRO DE LAS INSTANCIAS

ArregloPoligonos::ArregloPoligonos()
{
	size = 0;
	poligono = new PoligonoX[size];
}


ArregloPoligonos::ArregloPoligonos(int newsize)
{
	size = newsize;
	poligono = new PoligonoX[size];
}

ArregloPoligonos::ArregloPoligonos(ArregloPoligonos &p)
{
	size = p.size;
	poligono = new PoligonoX[size];
	for (int i = 0; i < size; i++)
	{
		poligono[i] = p.poligono[i];
	}
}

ArregloPoligonos::~ArregloPoligonos()
{
	delete[] poligono;
}

void ArregloPoligonos::redimensionar(int newsize)
{
	int minsize = (newsize > size) ? size : newsize;
	PoligonoX *p = new PoligonoX[newsize];

	for (int i = 0; i < minsize; i++)
	{
		p[i] = poligono[i];
	}
	delete[] poligono;
	size = newsize;
	poligono = p;
}

void ArregloPoligonos::insertarFinal(PoligonoX e)
{
	redimensionar(size + 1);
	poligono[size - 1] = e;
}

void ArregloPoligonos::insertarPos(PoligonoX e, int pos)
{
	redimensionar(size + 1);
	for (int i = size - 1; i > pos; i--)
	{
		poligono[i] = poligono[i - 1];
	}
	poligono[pos] = e;
}

void ArregloPoligonos::eliminar(int pos)
{
	for (int i = pos; i < size - 1; i++)
	{
		poligono[i] = poligono[i + 1];
	}
	redimensionar(size - 1);
}

void ArregloPoligonos::print()
{
	cout << "{";
	for (int i = 0; i < size; i++)
	{
		cout << "(" << poligono[i].getx() << ", " << poligono[i].gety() << ")";
	}
	cout << "}" << endl; 
}