#include <iostream>
#include "Vector.h"
#include "PointArr.h"
using namespace std;

void swap(Point *a, Point *b){
  Point temp = *a;
  *a = *b;
  *b = temp;
}

int main(){

  //Declaracion
  Point po1(2,3);
  Point po2;

  //Punteros
  Point *ptr = &po1;
  ptr->print();

  //Funciones
  swap(&po1,&po2);
  cout<<"Swap: "<<endl;
  po1.print(); po2.print();

  //New
  Point *easy = new Point;
  easy->offset(1,2);
  cout<<"Offset: "<<endl;
  easy->print();

  //Vectores
  Vector vec(po1,po2);
  vec.print();
  cout<<vec.mod()<<endl;

  //Array de puntos
  PointArr arr(3,po2);
  if(true)
    PointArr arr2 = arr;
  arr.print();
  arr.clear();
  cout<<"Arr size: "<<arr.getsize()<<endl;

  arr.push_back(*easy);
  arr.print();


}
