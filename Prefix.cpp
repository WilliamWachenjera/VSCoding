#include <iostream>
using namespace std;

int main(){
    int x = 3;

    /*the value of x is increased before the value of x is assigned
    to y
    hence the value assigned to y is the value of x after increment*/
    int y = ++x;
    cout << "x: " <<x << endl; //x will be 4
    cout << "y: " <<y << endl;

    return 0;
}
