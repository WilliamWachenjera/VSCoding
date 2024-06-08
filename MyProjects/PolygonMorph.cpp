#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "Polygon.h"

using namespace std;

int main(){
Rectangle rect;
Triangle tria;
Polygon poly;
Polygon* pPoly1 = &rect;
Polygon* pPoly2 = &tria;
Polygon* pPoly3 = &poly;

pPoly1 -> SetValues(4,5);
pPoly2 -> SetValues(4,5);
pPoly3 -> SetValues(4,5);

cout << "Area of pPoly1 -> triangle object:" << pPoly1 -> Area() << endl;
cout << "Area of pPoly2 -> Rectangle object: " << pPoly2 -> Area() << endl;
cout << "Area of pPoly3 -> Polygon object: " << pPoly3 -> Area() << endl;

return 0;
}
