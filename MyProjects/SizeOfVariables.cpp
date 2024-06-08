#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
    int num = 5;
    const int &number = num;//this is ok
    /*const int num = 5;
    int &number = num; // this will result into error
    binding non-const object to a const object discards qualifiers
    */
    int &num2 = num;

     cout << "num2: " << num2 << endl;
    cout << "num at first: " << num << endl;
    cout << "number after referencing: " << number << endl;
    cout << "num after referencing:  " << num << endl;


    //number++;
    cout << "num at after: " << num << endl;
    cout << "number after referencing: " << number << endl;
    cout << "num after referencing:  " << num << endl;
cout << "size of int: " << sizeof(int) << endl;
cout << "size of double: " << sizeof(double) << endl;
cout << "size of float: " << sizeof(float) << endl;
cout << "size of string: " << sizeof(string) << endl;
cout << "size of char: " << sizeof(char) << endl;
cout << "size of char16_t: " << sizeof(char16_t) << endl;
cout << "size of wchar_t: " << sizeof(wchar_t) << endl;
cout << "size of bool: " << sizeof(bool) << endl;
//cout << "size of main: " << sizeof(main) << endl;..ISO C++ forbids applying sizeof to functions
return 0;

}
