<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
int intvariable = 20;

//pointer
int* pPointer = &intvariable;
//2nd pointer
int * pPointerTwo = pPointer;

if(pPointer = nullptr){
    cout << "This is invalid pointer....." << endl;

}
else if(pPointer != nullptr && pPointer == pPointerTwo){
    cout << "Both pointers refer to the same memory location"
}
return 0;
}
=======
#include <iostream>
using namespace std;

int main(){
int intvariable = 20;

//pointer
int* pPointer = &intvariable;
//2nd pointer
int * pPointerTwo = pPointer;

if(pPointer = nullptr){
    cout << "This is invalid pointer....." << endl;

}
else if(pPointer != nullptr && pPointer == pPointerTwo){
    cout << "Both pointers refer to the same memory location"
}
return 0;
}
>>>>>>> 28a1e182efec15b14e71fad4388f693ecf6e2c95
