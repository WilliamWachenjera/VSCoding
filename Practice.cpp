#include <iostream>
using namespace std;

int main(){
cout << "Hello_World" << endl;
int counti = 0;
int i =0;
int sum[3] = {1, 2, 3};
for(int i : sum){
        counti = counti + sum[i];
    cout << "sum: " << i << endl;
    cout << "counti: "<< counti << endl;
}
}
