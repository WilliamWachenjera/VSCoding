<<<<<<< HEAD
#include "Rectangle.h"
#include <iostream>
//#ifndef RECTANGLE_H_INCLUDED
//#define RECTANGLE_H_INCLUDED
using namespace std;

int main(){
Rectangle rectangle;
double userLength, userWidth;
cout << "Enter the length of the rectangle: ";
cin >> userLength;
rectangle.setLength(userLength);

cout << "Enter the width of the rectangle: ";
cin >> userWidth;
rectangle.setWidth(userWidth);

double area = rectangle.calculateArea();
cout << "Area of the rectangle is: " << area << endl;
return 0;
}
=======
#include "Rectangle.h"
#include <iostream>
//#ifndef RECTANGLE_H_INCLUDED
//#define RECTANGLE_H_INCLUDED
using namespace std;

int main(){
Rectangle rectangle;
double userLength, userWidth;
cout << "Enter the length of the rectangle: ";
cin >> userLength;
rectangle.setLength(userLength);

cout << "Enter the width of the rectangle: ";
cin >> userWidth;
rectangle.setWidth(userWidth);

double area = rectangle.calculateArea();
cout << "Area of the rectangle is: " << area << endl;
return 0;
}
>>>>>>> 28a1e182efec15b14e71fad4388f693ecf6e2c95
