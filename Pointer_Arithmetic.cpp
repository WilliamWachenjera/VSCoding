#include <iostream>
using namespace std;

int main(){
int intVariable = 20;
double doubleVariable = 9.0;

//pointer to an integer
int* pinteVariable = &intVariable;
//pointer to a double
double* pdoubleVariable = &doubleVariable;

cout << "pIntVariable before: " << pinteVariable << endl;
cout << "pDoubleVariable before: " << pdoubleVariable << endl;
cout << "pCharVariable before: " <<pcharVariable << endl;
cout << "pstringVariable before: " << pstringVariable << endl;

//increment the pointers by 1
pinteVariable = pinteVariable + 1;
pdoubleVariable = pdoubleVariable + 1;


cout << endl << endl;
out << "pIntVariable after: " << pinteVariable << endl;
cout << "pDoubleVariable after: " << pdoubleVariable << endl;
return 0;
}
