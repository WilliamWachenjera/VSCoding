#include <iostream>
using namespace std;

int main(){
int num = 0;
int * dynamicArray = nullptr;

cout << "Enter the size of your array: ";
cin >> num;
dynamicArray = new int[num];

if(dynamicArray == nullptr){
    cout << "Error: memory cannot be allocated to an empty array!";
}
else{
    for(int i = 0; i < num; i++){
        cout << "Enter number"<<dynamicArray[i + 1] << ":" ;
        cin >> dynamicArray[i];
    }
    cout << "You have entered: ";
    for(int j = 0; j < num; j++)
        cout << dynamicArray[j] << ", ";
}delete[] dynamicArray;
return 0;
}
