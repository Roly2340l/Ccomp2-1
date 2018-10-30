#include <iostream>
#include <math.h>
#include "Vector.h"

Vector::Vector(Point a, Point b){
  start = a;
  end = b;
}

void Vector::print(){
  std::cout<<"("<<start.getx()<<","<<start.gety()<<")"<<"->";
  end.print();
}

void Vector::offset(int a, int b){
  start.offset(a,b);
  end.offset(a,b);
}

double Vector::mod(){
  double ans;
  int a,b;
  a = end.getx() - start.getx();
  b = end.gety() - start.gety();
  ans = sqrt(pow(a,2)+pow(b,2));
  return ans;
}
