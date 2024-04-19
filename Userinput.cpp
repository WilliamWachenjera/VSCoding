#include <iostream>
using namespace std; 
int global;

int main() { 
 int x, y; 
 int sum;// = x + y; 
 int product;// = x * y;
 int quotient;// = x / y;
 int difference;// = x - y;
 int modulo;// = x % y;

 cout << "Type a number , x: "; 
 cin >> x; 
 cout << "Type another number, y: "; 
 cin >> y; 
 sum = x + y;
 product = x * y;
 quotient = x / y;
 difference = x - y;
 modulo = x % y;
 global = (x + y) / (x - y);

 cout << "Sum x and y is: " << sum <<endl;
 cout << "product of x and y is: " << product <<endl;
 cout << "quotient of x and y is: " << quotient <<endl;
 cout << "difference of x and y is: " << difference <<endl;
 cout << "modulus of x and y  is: " << modulo <<endl; 
 cout << "global: " << global <<endl;

 return 0;
}