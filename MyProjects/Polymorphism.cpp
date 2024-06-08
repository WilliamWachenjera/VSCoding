#include "Triangle.h"
#include <iostream>
using namespace std;

int main(){
Triangle triangle;
Polygon* Tria = &triangle;
Tria -> SetValues(0.2, 12.6);

cout << "Area of the triangle: " <<triangle.Area();

return 0;
}
