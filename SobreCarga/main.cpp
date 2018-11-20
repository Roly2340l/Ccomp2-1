#include <iostream>
#include "Vector.h"
#include "PointArr.h"
using namespace std;

int main(){

  //Declaracion
  Point<int> po1(2,3);
  Point<int> po2;

  //Punteros
  Point<int> *ptr = &po1;
  ptr->print();



    return 0;
}

