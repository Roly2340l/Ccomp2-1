#pragma once
#include "Poligonox.h"

//TODAS LAS INSTANCIAS

template<class T>
class ArregloPoligonos
{
public:
	ArregloPoligonos();
	ArregloPoligonos(T);
	ArregloPoligonos(ArregloPoligonos<T> &p);
	~ArregloPoligonos();
	void insertarFinal(PoligonoX<T>);
	void insertarPos(PoligonoX<T>, T);
	void eliminar(T);
	void print();
private:
	int siz;
	PoligonoX<T> *poligono;
	void redimensionar(T);
};

