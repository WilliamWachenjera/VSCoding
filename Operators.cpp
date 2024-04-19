#include <iostream>
using namespace std;

main(){
    int num1;
    int num2;
    int num;

    cout <<"Enter the first num: " ;//<<endl;
    cin >> num1;
    cout << "Enter the 2nd num: ";//<<endl;
    cin >> num2;

    num = num1 + num2;
    cout << "num1 + num2 = " << num <<endl;

    num = num1 - num2;
    cout << "num1 - num2 = " << num <<endl;

    num = num1 / num2;
    cout << "num1 / num2 = " << num <<endl;

    num = num1 * num2;
    cout << "num1 * num2 = " << num <<endl;

    num = num1 % num2;
    cout << "num1 mod num2 = " << num <<endl;

    return 0;

}