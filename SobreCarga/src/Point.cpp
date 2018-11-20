#include "Point.h"
#include <iostream>

Point::Point(){
  x = 0;
  y = 0;
}   

Point::Point(int _x, int _y){
  x = _x;
  y = _y;
}

Point::Point(Point &o){
  x = o.x;
  y = o.y;
}

void Point::print(){
  std::cout<<"("<<x<<","<<y<<")"<<std::endl;
}

void Point::offset(int a, int b){
  x += a;
  y += b;
}
