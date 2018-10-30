#include <iostream>
#include "PointArr.h"

PointArr::PointArr(int size, Point p1){
  this->size = size;
  data = new Point[size];
  for(int i=0; i<size; i++)
    data[i] = p1;
}

PointArr::PointArr(PointArr &o){
  size = o.size;
  data = new Point[size];
  for(int i=0; i<size; i++)
    data[i] = o.data[i];
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
  Point* temp = new Point[newsize];
  for(int i=0; i<size; i++){
    temp[i] = data[i];
  }
  delete[] data;
  data = temp;
  size = newsize;
}

void PointArr::clear(){
  resize(0);
}

void PointArr::push_back(Point p){
  resize(size+1);
  data[size-1]=p;
}

void PointArr::insert(int pos,Point p){

}
