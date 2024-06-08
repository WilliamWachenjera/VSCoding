#include <iostream>
using namespace std;

int main(){
    /*declaring a pointer and initialize it
    so that it doesnot take random address*/
    int* pPointer = nullptr;
    int integerVar = 5;
    int val = 10;

    //assign pointer to address of an object
    pPointer = &integerVar;

    //output the value of integerVar
    cout << "integerVar: " <<integerVar << endl;

    //output the address of integerVar
    cout << "address of IntegerVar: " << &integerVar <<endl;

    //output value assigned to the pPointer
    cout << "pPointer: "<< pPointer << endl;

    //output the address of pPointer
    cout << "address of pPointer: " <<&pPointer << endl;
    cout << "size of pointer: " <<sizeof(pPointer) << endl;
    cout << "size of integerval: " << sizeof(integerVar) << endl;
    /*int * integerVar2 = &val;
    cout << "integerVal2: " << integerVar2 << endl;
    cout << "*integerval2: " << *integerVar2 << endl;
    cout << "&integerval2: " << &integerVar2 << endl;
    cout << "val: " << val << endl;
    cout << "&val: " <<&val << endl;
    pPointer = integerVar2;
    cout << "Ppointer final: " << pPointer << endl;
    cout << "intergerVar2 final: " << integerVar2 << endl;
        */
    return 0;
}
