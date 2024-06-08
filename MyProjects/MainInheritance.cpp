//#pragma once
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main(){
Rectangle rect;
Triangle tria;
rect.SetValues(4,5);
tria.SetValues(4,5);
cout << rect.Area() << '\n';
cout << tria.Area() << '\n';
return 0;
}
