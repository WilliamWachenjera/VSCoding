<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
int num;
cout << "Enter the size of the array: " << endl;
cin >> num;
int* arrayNum = new int[num];

for(int i = 0; i < num; i++){
    cout << "Enter the value at index " << endl;
    cin >> arrayNum[i];
    cout << endl;
}
for(int k = 0; k < num; k++ ){
    cout << arrayNum[k] << ", ";

}
delete[] arrayNum;

return 0;
}
=======
#include <iostream>
using namespace std;

int main(){
int num;
cout << "Enter the size of the array: " << endl;
cin >> num;
int* arrayNum = new int[num];

for(int i = 0; i < num; i++){
    cout << "Enter the value at index " << endl;
    cin >> arrayNum[i];
    cout << endl;
}
for(int k = 0; k < num; k++ ){
    cout << arrayNum[k] << ", ";

}
delete[] arrayNum;

return 0;
}
>>>>>>> 28a1e182efec15b14e71fad4388f693ecf6e2c95
