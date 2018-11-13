#pragma once
#include <iostream>

using namespace std;

template<class T>
class Poligono
{
protected:
	T ancho, alto;
public:
	Poligono(T a = 0, T b = 0) : ancho(a), alto(b) {}
	virtual T area(void) = 0;
	void printarea() {
		cout << this->area() << "\n";
	}
};

template<class T>
class Rectangulo : public Poligono<T>
{
	T ancho, alto;
public:
	Rectangulo(T a, T b) : ancho(a), alto(b) {}
	T area(void)
	{
		return ancho * alto;
	}
};

template<class T>
class Triangulo : public Poligono<T>
{
	T ancho, alto;
public:
	Triangulo(T a, T b) : ancho(a), alto(b) {}
	T area(void)
	{
		return (ancho * alto) / 2;
	}
};

template<class T>
class Circulo : public Poligono<T>
{
	T radio, pi = 3.14;
public:
	Circulo(T a) : radio(a) {}
	T area(void)
	{
		return pi * (radio * radio);
	}
};

