<<<<<<< HEAD
//#pragma once

#include "Box.h"


Box::Box(){
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

Box::Box(const double newLength, const double newBreadth, const double newHeight){
    length = newLength;
    breadth = newBreadth;
    height = newHeight;
}
Box::~Box(){

}
double Box::getVolume(){
    return length*breadth*height;
}
void Box::setLength(double len){
    length = len;
}
void Box::setBreadth(double bre){
    breadth = bre;
}
void Box::setHeight(double hei){
    height = hei;
}

Box Box::operator+(const Box& b){
    Box box;

    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;

    return box;
}
=======
//#pragma once

#include "Box.h"


Box::Box(){
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

Box::Box(const double newLength, const double newBreadth, const double newHeight){
    length = newLength;
    breadth = newBreadth;
    height = newHeight;
}
Box::~Box(){

}
double Box::getVolume(){
    return length*breadth*height;
}
void Box::setLength(double len){
    length = len;
}
void Box::setBreadth(double bre){
    breadth = bre;
}
void Box::setHeight(double hei){
    height = hei;
}

Box Box::operator+(const Box& b){
    Box box;

    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;

    return box;
}
>>>>>>> 28a1e182efec15b14e71fad4388f693ecf6e2c95
