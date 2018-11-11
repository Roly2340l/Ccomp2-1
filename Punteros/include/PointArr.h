#ifndef POINTARR_H
#define POINTARR_H
#include "Point.h"

class PointArr
{
 public:
  PointArr(int,Point);
  ~PointArr();
  PointArr(PointArr &o);
  void print();
  int getsize();
  void clear();
  void push_back(Point);
  void insert(const int, const Point &p);

 private:
  int size;
  Point *data;
  void resize(int);
};

#endif
