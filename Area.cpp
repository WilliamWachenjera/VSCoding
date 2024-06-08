<<<<<<< HEAD
#include "Area.h"
#include "Triangle.h"
#include "Circle.h"
#include "Square.h"
#include <cmath>

// Rest of the code remains the same...
double Area::calculateTriangleArea(const Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

double Area::calculateCircleArea(const Circle& circle) {
    return M_PI * pow(circle.getRadius(), 2);
}

double Area::calculateSquareArea(const Square& square) {
    return pow(square.getSideLength(), 2);
}
=======
#include "Area.h"
#include "Triangle.h"
#include "Circle.h"
#include "Square.h"
#include <cmath>

// Rest of the code remains the same...
double Area::calculateTriangleArea(const Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

double Area::calculateCircleArea(const Circle& circle) {
    return M_PI * pow(circle.getRadius(), 2);
}

double Area::calculateSquareArea(const Square& square) {
    return pow(square.getSideLength(), 2);
}
>>>>>>> 28a1e182efec15b14e71fad4388f693ecf6e2c95
