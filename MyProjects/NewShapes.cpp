#include <cmath>
#include <iostream>
using namespace std;

namespace Shapes{

class Triangle{
private:
    double Base;
    double Height;
public:
    void setBase(double base){
    Base = base;
    }
    double getBase(){
    return Base;
    }
    void setHeight(double height){
    Height = height;
    }
    double getHeight(){
    return Base;
    }
    Triangle(){
    Base = 0.0;
    Height = 0.0;
    }
    Triangle(double base, double height){
    Base = base;
    Height = height;
    }
};
class Square{
private:
    double Side;
public:
    void setSide(double side){
    Side = side;
    }
    double getSide(){
    return Side;
    }
    Square(){
    Side = 0.0;
    }
    Square(double side){
    Side = side;
    }
    ~Square();
};
class Circle{
private:
    double Radius;
public:
    void Shapes::Circle::setRadius(double radius){
    Radius = radius;
    }
    double Shapes::Circle::getRadius(){
    return Radius;
    }
    Shapes::Circle::Circle (){
    Radius = 0.0;
    }
    Shapes::Circle::Circle(double radius){
    Radius = radius;
    }
    ~Circle();
};
class Area{
public:
    static double Shapes::Area::getCircleArea(Circle &radius){
    return 3.4102 * radius * radius;
}
    static double Shapes::Area::getSquareArea(Square side){
    return side * side;
}
    static double Shapes::Area::getTriangleArea(Triangle base, Triangle height){
    return 0.5 * base * height;
}
};
}
int main(){

Shapes::Triangle triangle1(2.0, 3.6);
//Triangle triangle = triangle.setHeight(2);
cout << "Enter the base of the triangle: ";
cin >> triangle1.getBase;
cout << "Enter the height of the triangle: ";
cin >> triangle1.getHeight;
cout << "Area of a triangle is: " << getBase() * getHeight() * 0.5 << endl;
cout << triangle1.getTriangleArea();
return 0;
}
