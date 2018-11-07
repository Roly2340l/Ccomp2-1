#pragma once
#include "Poligonox.h"

//TODAS LAS INSTANCIAS

class ArregloPoligonos
{
public:
	ArregloPoligonos();
	ArregloPoligonos(int);
	ArregloPoligonos(ArregloPoligonos &p);
	~ArregloPoligonos();
	void insertarFinal(PoligonoX);
	void insertarPos(PoligonoX, int);
	void eliminar(int);
	void print();
private:
	int size;
	PoligonoX *poligono;
	void redimensionar(int);
};

