#include <iostream>

using namespace std;

class Polygon
{
    public:
        Polygon(): ancho(0), alto(0) {}
        Polygon(int a, int b) : ancho(a), alto(b) {}
        virtual int area(void);
        void printarea(){
            cout<< this->area()<<"\n";
        }
    protected:
        int ancho, alto;
};

class rectangulo : public Polygon
{
public:
    int area(void)
    {
        return (ancho*alto);
    }
private:
    int ancho, alto;
};

class triangulo : public Polygon
{
public:
    int area(void)
    {
        return (ancho*alto)/2;
    }
private:
    int ancho, alto;
};

class circulo : public Polygon
{
public:
    int area(void)
    {
        return pi*(radio*radio)/2;
    }
private:
    int radio, pi;
};
class ArrPolygon
{
public:
    ArrPolygon()
    {
        size = 0;
        ArrPolygon polygons[size];
    }
    ArrPolygon(int sizearr, int arr[])
    {
        size = sizearr;
        ArrPolygon polygons[size]
        for(int i=0; i<size; i++)
        {
            polygons[i] = arr[i]
        }
    }
    ~ArrPolygon()
    {
        delete ArrPolygon;
    }
    void redimensionar(int newsize, int arr[])
    {
        int minsize= ((size<newsize)?newsize:size);
        ArrPolygon polygons[minsize];
        for(int i=0; i<minsize; i++)
        {
            polygons[i] = arr[i];
        }
    }
    void insertar(int newsize, int pos, int &p)
    {
        size = newsize+1;
        ArrPolygon polygons[size];
        for(int i=newsize; i>newpos;i--)
        {
            ArrPolygon[i]=ArrPolygon[i-1]
        }
        ArrPolygon[pos]=p;
    }
private:
    int size;
    Polygon polygons;
};
int main()
{
    rectangulo.Polygon(2,4);


    return 0;
}
