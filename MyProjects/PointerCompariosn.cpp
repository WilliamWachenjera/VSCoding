#include <iostream>
using namespace std;

int main(){
int intvariable = 20;

//pointer
int* pPointer = &intvariable;
//2nd pointer
int* pPointerTwo = pPointer;

if(pPointer = nullptr){
    cout << "This is invalid pointer....." << endl;

}
else if(pPointer != nullptr && pPointer == pPointerTwo){
    cout << "Both pointers refer to the same memory location" << endl;
}
else {
    cout << "cant resolve it " << endl;
}
return 0;
}
