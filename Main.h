<<<<<<< HEAD
#ifndef MAIN_H_INCLUDED
#include "Rectangle.h"
#include <iostream>
#define MAIN_H_INCLUDED
using namespace std;

int main(){
Rectangle Rectangle;
double userLength, userWidth;
cout << "Enter the lenghth of the rectangle: ";
cin >> userLength;
Rectangle.setLegth(userLength);

cout << "Enter the width of the rectangle: ";
cin >> userWidth;
Rectangle.setWidth(userWidth);

double area = Rectangle.calculateArea();
cout << "Area of the rectangle is: " << area << endl;
return 0;
}


#endif // MAIN_H_INCLUDED
=======
#ifndef MAIN_H_INCLUDED
#include "Rectangle.h"
#include <iostream>
#define MAIN_H_INCLUDED
using namespace std;

int main(){
Rectangle Rectangle;
double userLength, userWidth;
cout << "Enter the lenghth of the rectangle: ";
cin >> userLength;
Rectangle.setLegth(userLength);

cout << "Enter the width of the rectangle: ";
cin >> userWidth;
Rectangle.setWidth(userWidth);

double area = Rectangle.calculateArea();
cout << "Area of the rectangle is: " << area << endl;
return 0;
}


#endif // MAIN_H_INCLUDED
>>>>>>> 28a1e182efec15b14e71fad4388f693ecf6e2c95
