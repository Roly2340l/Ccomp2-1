#include "ArregloPoligonos.h"

using namespace std;

//FUNCIONES MIEMBRO DE LAS INSTANCIAS

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
