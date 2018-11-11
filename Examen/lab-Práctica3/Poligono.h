#pragma once
#include <iostream>

using namespace std;

//PREGUNTA 1.A

class Poligono
{
protected:
	int ancho, alto;
public:
	Poligono(int a = 0, int b = 0) : ancho(a), alto(b) {}
	virtual int area(void) = 0;
	void printarea() {
		cout << this->area() << "\n";
	}
};

//PREGUNTA 1.B

class Rectangulo : public Poligono
{
	int ancho, alto;
public:
	Rectangulo(int a, int b) : ancho(a), alto(b) {}
	int area(void)
	{
		return ancho * alto;
	}
};

class Triangulo : public Poligono
{
	int ancho, alto;
public:
	Triangulo(int a, int b) : ancho(a), alto(b) {}
	int area(void)
	{
		return (ancho * alto) / 2;
	}
};

class Circulo : public Poligono
{
	double radio, pi = 3.14;
public:
	Circulo(int a) : radio(a) {}
	int area(void)
	{
		return pi * (radio * radio);
	}
};

