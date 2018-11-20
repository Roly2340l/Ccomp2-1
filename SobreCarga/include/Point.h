#ifndef POINT_H
#define POINT_H
#include <iostream>

template<class T>
class Point
{
 public:
  Point();
  Point(T, T);
  Point(Point &o);
  void print();
  void offset(T,T);
  T getx() {return x;}
  T gety() {return y;}

 private:
  T x,y;
};

template<class T>
Point<T>::Point(){
  x = 0;
  y = 0;
}

template <class T>
Point<T>::Point(T _x, T _y){
  x = _x;
  y = _y;
}

template <class T>
Point<T>::Point(Point &o){
  x = o.x;
  y = o.y;
}

template <class T>
void Point<T>::print(){
  std::cout<<"("<<x<<","<<y<<")"<<std::endl;
}

template <class T>
void Point<T>::offset(T a, T b){
  x += a;
  y += b;
}

#endif


