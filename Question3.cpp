#include <iostream>
#include <cmath> // For mathematical functions

using namespace std;

// Function to calculate the area of a square
int calculateSquareArea(int side) {
    return side * side;
}

// Function to calculate the area of a rectangle
int calculateRectangleArea(int length, int width) {
    return length * width;
}

// Function to calculate the area of a triangle
float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    cout << "Choose a shape to calculate the area:" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Quit the program! "<<endl;
    cin >> choice;

    while (true){
        if(choice <=4){
    switch (choice) {
        case 1: {
            int side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            cout << "Area of the square is: " << calculateSquareArea(side) << endl;
            break;
        }
        case 2: {
            int length, width;
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            cout << "Area of the rectangle is: " << calculateRectangleArea(length, width) << endl;
            break;
        }
        case 3: {
            float base, height;
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            cout << "Area of the triangle is: " << calculateTriangleArea(base, height) << endl;
            break;
        
        }
        case 4:{
            cout << "Program closed successfully "<<endl;
            quick_exit(0);
        }
        
        }
        }else{
            cout << "you have entered an invalid input. pls try again: ";
            cin >> choice;
        }
        
    }


    return 0;
}