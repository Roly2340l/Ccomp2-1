#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

template<class T>
class Point
{
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(T _x, T _y)
	{
		x = _x;
		y = _y;
	}
	Point(Point &o)
	{
		x = o.x;
		y = o.y;
	}
	void print()
	{
		std::cout << "(" << x << "," << y << ")";
	}
	void offset(T a, T b)
	{
		x += a;
		y += b;
	}
	T getx() { return x; }
	T gety() { return y; }

private:
	T x, y;
};


template<class T>
class PointArr
{
public:
    PointArr()
    {
        this->size = 0;
        this->data = new Point<T>[size];
    }

	PointArr(T size)
	{
		this->size = size;
		data = new Point<T>[size];
	}

	PointArr(T size, Point<T> p1)
	{
		this->size = size;
		data = new Point<T>[size];
		for (int i = 0; i < size; i++)
			data[i] = p1;
	}

	~PointArr()
	{
		delete[] data;
	}

	PointArr(PointArr &o)
	{
		size = o.size;
		data = new Point<T>[size];
		for (int i = 0; i < size; i++)
			data[i] = o.data[i];
	}

	void print()
	{
		cout << "Array: {";
		for (int i = 0; i < size; i++)
			data[i].print();
		cout << "}" << endl;
	}

	Point<T> getPoint(int pos)
	{
		return data[pos];
	}

	T getsize()
	{
		return size;
	}

	void clear()
	{
		resize(0);
	}

	void push_back(Point<T> p)
	{
		resize(size + 1);
		data[size - 1] = p;
	}

	void insert(T pos, Point<T> p)
	{
		resize(size + 1);
		for (int i = size - 1; i > pos; i--)
			data[i] = data[i - 1];
		data[pos] = p;
	}

	void erase(T pos)
	{
		for (int i = pos; i < (size - 1); i++)
			data[i] = data[i + 1];
		resize(size - 1);
	}
private:
	T size;
	Point<T> *data;
	void resize(T newsize)
	{
		T sizetemp = (size < newsize) ? newsize : size;
		Point<T> *temp = new Point<T>[newsize];
		for (int i = 0; i < sizetemp; i++) {
			temp[i] = data[i];
		}
		delete[] data;
		data = temp;
		size = newsize;
	}
};

PointArr<int> &operator+(PointArr<int> &p1, PointArr<int> &p2)
{
	PointArr<int> *res = new PointArr<int>;

	for (int i = 0; i < p1.getsize(); i++)
	{
		Point<int> p(0, 0);
		p = p1.getPoint(i);
		res->push_back(p);
	}
	for (int i = 0; i < p2.getsize(); i++)
	{
		Point<int> p(0, 0);
		p = p2.getPoint(i);
		res->push_back(p);
	}
	return *res;
}

ostream& operator<<(ostream& o, PointArr<int> p)
{
	for (int i = 0; i < p.getsize(); i++)
	{
		o << "(" << p.getPoint(i).getx() << ", " << p.getPoint(i).gety() << ")";
	}
	return o;
}

void crear_archivo(PointArr<int> p)
{
	ofstream archivo;
	archivo.open("SobreCargas.txt", ios::out);
	if (archivo.fail())
	{
		cout << "GG";
		exit(1);
	}

	archivo << p;
	archivo.close();
}

int main() {

	//Declaracion
	Point<int> po1(2, 3);
	Point<int> po2(3, 5);
	Point<int> po3(7, 6);
	Point<int> po4(1, 7);
	Point<int> po5(4, 9);
	Point<int> po6(4, 4);
	Point<int> po7(9, 1);
	Point<int> po8(2, 4);

	PointArr<int> p1(1, po1);
	p1.push_back(po2);
	p1.push_back(po3);
	p1.push_back(po4);
	p1.print();
	PointArr<int> p2(1, po5);
	p2.push_back(po6);
	p2.push_back(po7);
	p2.push_back(po8);
	p2.print();

	PointArr<int> p3(0);

	//SOBRECARGAS:
	p3 = p1 + p2;
	cout << p3 << endl;
	crear_archivo(p3);

	system("pause");
	return 0;
}
