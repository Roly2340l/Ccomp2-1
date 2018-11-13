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

template<class T>
ArregloPoligonos<T>::ArregloPoligonos()
{
	siz = 0;
	poligono = new PoligonoX<T>[siz];
}

template<class T>
ArregloPoligonos<T>::ArregloPoligonos(T newsize)
{
	siz = newsize;
	poligono = new PoligonoX<T>[siz];
}

template<class T>
ArregloPoligonos<T>::ArregloPoligonos(ArregloPoligonos &p)
{
	siz = p.siz;
	poligono = new PoligonoX<T>[siz];
	for (int i = 0; i < siz; i++)
	{
		poligono[i] = p.poligono[i];
	}
}

template<class T>
ArregloPoligonos<T>::~ArregloPoligonos()
{
	delete[] poligono;
}

template<class T>
void ArregloPoligonos<T>::redimensionar(T newsize)
{
	T minsize = (newsize > siz) ? siz : newsize;
	PoligonoX<T> *p = new PoligonoX<T>[newsize];

	for (int i = 0; i < minsize; i++)
	{
		p[i] = poligono[i];
	}
	delete[] poligono;
	siz = newsize;
	poligono = p;
}

template<class T>
void ArregloPoligonos<T>::insertarFinal(PoligonoX<T> e)
{
	redimensionar(siz + 1);
	poligono[siz - 1] = e;
}

template<class T>
void ArregloPoligonos<T>::insertarPos(PoligonoX<T> e, T pos)
{
	redimensionar(siz + 1);
	for (int i = siz - 1; i > pos; i--)
	{
		poligono[i] = poligono[i - 1];
	}
	poligono[pos] = e;
}

template<class T>
void ArregloPoligonos<T>::eliminar(T pos)
{
	for (int i = pos; i < siz - 1; i++)
	{
		poligono[i] = poligono[i + 1];
	}
	redimensionar(siz - 1);
}

template<class T>
void ArregloPoligonos<T>::print()
{
	cout << "{";
	for (int i = 0; i < siz; i++)
	{
		cout << "(" << poligono[i].getx() << ", " << poligono[i].gety() << ")";
	}
	cout << "}" << endl;
}

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
    ArregloPoligonos<int> poligonos2(4);
    cout<<"Arreglo de poligonos: ";
    poligonos.print();
    cout<<"Arreglo de poligonos2: ";
    poligonos2.print();

    poligonos2.eliminar(4);
    cout<<"Arreglo de poligonos2(eliminar): ";
    poligonos2.print();

	return 0;
}
