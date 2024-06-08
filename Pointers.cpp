#include <iostream>
using namespace std;

int main(){
    int firstValue;
    int secondValue;

    int * pPointer = nullptr;

    //assign pointer to the address of firstValue
    pPointer = &firstValue;
    *pPointer = 10; //indirection... assigns 10 to firstValue

    //assign pointer to the address of secondtValue
    pPointer = &secondValue;
    *pPointer = 20; //indirection

    cout << "firstValue: " <<firstValue << endl;
    cout << "secondValue: "<<secondValue <<endl;

    return 0;

}
