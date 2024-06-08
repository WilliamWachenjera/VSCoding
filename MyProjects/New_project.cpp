#include <iostream>
using namespace std;

int main(){
    int * pPointer = nullptr;
    int somersort = 50;
    *pPointer = somersort;
    pPointer = &somersort;
    cout << "somersort: " <<somersort <<endl;
    cout << "pPointer: " <<pPointer <<endl;

int practice[4];
for(int i = 0; i < sizeof(practice) / sizeof(int); i++){
    cout << "Enter your number: ";
    cin >> practice[i];
}
return 0;
}
