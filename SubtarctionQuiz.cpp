#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
srand(time(0));
int num1 = rand() % 10;
int num2 = rand() % 10;

if(num1 < num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;

}
int answer;
cout << "what is " << num1 << " - " << num2 << "? ";
cin >> answer;

while(num1 - num2 != answer){
    cout << "what is " << num1 << " - " <<num2 << "? ";
    cin >> answer;
}
cout << "The correct answer is: " << answer << endl;
cout << "Well done::::BRAVO";
return 0;
}
