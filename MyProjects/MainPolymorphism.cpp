#include "Rectangle.h"
#include  "Triangle.h"
#include <iostream>

using namespace std;
int main(){
Rectangle rect;
Triangle tria;
Polygon* pPoly1 = &rect;
Polygon* pPoly2 = &tria;

pPoly1 ->SetValues(4,5);
pPoly2 ->SetValues(4,5);

cout << "Area of Rectangle: "<< rect.Area() << endl;
cout << "Area of Triangle: " << tria.Area() << endl;

return 0;
}
