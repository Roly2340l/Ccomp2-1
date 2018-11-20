#ifndef POINTARR_H
#define POINTARR_H
#include "Point.h"
#include <iostream>

class PointArr
{
public:
    PointArr(int,Point<int>);
    ~PointArr();
    PointArr(PointArr &o);
    void print();
    int getsize();
    void clear();
    void push_back(Point<int>);
    void insert(int,Point<int>);
    void erase(int);
    PointArr operator+(const PointArr &p1, const PointArr &p2)
    {
        PointArr res;
        res.size = p1.size + p2.size;
        for(int i = 0; i<p1.size;i++)
        {
            res.data[i] = p1.size[i];
        }
        for(int j = p2.size; j<res.size; j++)
        {
            res.data[j] = p1.data[j];
        }
    }
private:
    int size;
    Point<int> *data;
    void resize(int);
};

PointArr::PointArr(PointArr &o){
  size = o.size;
  data = new Point<int>[size];
  for(int i= 0; i<size; i++)
      data[i] = o.data[i];
}

PointArr::PointArr(int size, Point<int> p1){
  this->size = size;
  data = new Point<int>[size];
  for(int i=0; i<size; i++)
    data[i] = p1;
}

PointArr::~PointArr(){
  delete[] data;
}

int PointArr::getsize(){
  return size;
}

void PointArr::print(){
  std::cout<<"Array:"<<"\n";
  for(int i=0; i<size; i++)
    data[i].print();
}

void PointArr::resize(int newsize){
  int sizetemp = (size < newsize) ? newsize : size;
  Point<int>* temp = new Point<int>[newsize];
  for(int i=0; i<sizetemp; i++){
    temp[i] = data[i];
  }
  delete[] data;
  data = temp;
  size = newsize;
}

void PointArr::clear(){
  resize(0);
}

void PointArr::push_back(Point<int> p){
  resize(size+1);
  data[size-1]=p;
}

void PointArr::insert(int pos,Point<int> p){
  resize(size+1);
  for(int i=size-1; i>pos; i--)
    data[i]=data[i-1];
  data[pos] = p;
}

void PointArr::erase(int pos){
    for(int i=pos; i<(size-1); i++)
        data[i]=data[i+1];
    resize(size-1);
}

#endif
