#include <iostream>
using namespace std;
int add(int a, int b);
int mutiply(int* a, int b);
int subtract(int& a, int b);

int main(){
int n = 20;
int p = 10;
//int result = 0;
cout << "n - p = " << subtract(n, p)<< endl;
cout << "n + p = " << add(n, p) << endl;
cout << "n * p = " << mutiply(&n, p) << endl;

return 0;
}
int add(int a, int b){
a = a + 2;
return (a + b);
}
int multiply(int* a, int b){
*a = *a * 2;
return(*a * b);
}
int subtract(int& a, int b){
a = a - 1;
return (a - b);
}
