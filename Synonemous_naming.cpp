#include <iostream>
using namespace std;

int main() {
typedef double* doublePointer;
double numb = 2.5;
doublePointer firstDouble = &numb;
cout << &numb << endl;
cout << firstDouble << endl;
}
