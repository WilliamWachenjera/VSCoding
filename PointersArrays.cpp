#include <iostream>
using namespace std;

int main(){
    int numberArrays[5];
    int * pPointer = nullptr;

    //assign the address to the first element to the pointer
    pPointer = numberArrays;

    *pPointer = 10; //assign a value to the first element in the array

    /*increment the pointer using pointer arithmetic
    to assign the address of the second element to the pointer*/
    pPointer++;
    *pPointer = 20;//assign avalue to the second element

    //assign the address of the third element to the pointer
    pPointer = &numberArrays[2];
    *pPointer = 30;//assign a value to the third element

    /*increment the pointer using pointer arithmetic
    to assign the address of the fourth element to the pointer*/
    pPointer = numberArrays + 3;
    *pPointer = 40;//assign a aavlue to the fourth element 

    //assign the address to the first element to the pointer
    pPointer = numberArrays;
    *(pPointer+4) = 50;

    //iterate and output all the elements in the array
    for(int n = 0; n < 5; n++){
        cout << numberArrays[n] << " ";
    }
    return 0;

}