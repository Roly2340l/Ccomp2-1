#pragma once
#include <iostream>

using namespace std;

//PREGUNTA 2

class PoligonoX
{
protected:
	int ancho, alto;
public:
	PoligonoX(int a = 0, int b = 0) : ancho(a), alto(b) {}
	int area(void) {
		return ancho*alto;
	}
	void printarea() {
		cout << this->area() << "\n";
	}
	int getx() {
		return ancho;
	}
	int gety() {
		return alto;
	}
};

