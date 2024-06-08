#include <iostream>
using namespace std;

int main(){
cout << "Hello_World" << endl;
int counti = 0;
int sum[3] = {1, 2, 3};
for(int i; i < 3; i++){
        counti = counti + sum[i];
    cout << "sum: " << i << endl;
    cout <<"counti: " <<counti << endl;
}
}
