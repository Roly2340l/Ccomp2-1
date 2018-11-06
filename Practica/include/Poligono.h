#ifndef POLIGONO_H
#define POLIGONO_H


class Poligono
{
    public:
        Poligono(int a, int b) : ancho(a), alto(b) {}
        void area(int a, int b) : a*b {}
        void printarea(){
            cout<< this->area()<<"\n";
        }
    protected:
        int ancho, alto;
};

#endif // POLIGONO_H
