#pragma once
#include <iostream>

using namespace std;

template<class T>
class PoligonoX
{
protected:
	T ancho, alto;
public:
	PoligonoX(T a = 0, T b = 0) : ancho(a), alto(b) {}
	T area(void) {
		return ancho * alto;
	}
	void printarea() {
		cout << this->area() << "\n";
	}
	T getx() {
		return ancho;
	}
	T gety() {
		return alto;
	}
};

