#ifndef POINT_H
#define POINT_H

class Point
{
 public:
  Point();
  Point(int, int);
  Point(Point &o);
  void print();
  void offset(int,int);
  int getx() {return x;}
  int gety() {return y;}

 private:
  int x,y;
};

#endif

