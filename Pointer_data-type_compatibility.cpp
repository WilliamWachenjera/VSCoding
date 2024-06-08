<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
int integerArray[4] = {2,3,4,5};
//address of the first element of the array
cout << "address of the first element is: " << &integerArray << endl;
//array name indirection
cout << "Array name indirection:  " << *integerArray << endl;
//print the element at index 2
cout << "Element at index 2: " << integerArray[2] << endl;
//address of the element at the index 2
cout << "Address of the element at index 2: " << (&integerArray + 2) << endl;
//printing element at index 2

cout << "element at index 2: " << (integerArray + 2) << endl;
cout << "address of Element at index 2: " << &integerArray[2] << endl;
}
=======
#include <iostream>
using namespace std;

int main(){
int integerArray[4] = {2,3,4,5};
//address of the first element of the array
cout << "address of the first element is: " << &integerArray << endl;
//array name indirection
cout << "Array name indirection:  " << *integerArray << endl;
//print the element at index 2
cout << "Element at index 2: " << integerArray[2] << endl;
//address of the element at the index 2
cout << "Address of the element at index 2: " << (&integerArray + 2) << endl;
//printing element at index 2

cout << "element at index 2: " << (integerArray + 2) << endl;
cout << "address of Element at index 2: " << &integerArray[2] << endl;
}
>>>>>>> 28a1e182efec15b14e71fad4388f693ecf6e2c95
