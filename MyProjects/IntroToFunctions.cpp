#include <iostream>
#include <cmath>
using namespace std;

int max(int num1, int num2){
int maxNum;

if(num1 > num2){
    maxNum = num1;
}
else{
    maxNum = num2;
}
return maxNum;
}
double hypotenuse(double adj, double opp){
double result= sqrt(pow(adj, 2) + pow(opp,2));
return result;
}
int main(){
int number1, number2;
double num1, num2, result;

cout <<"Enter two numbers to compare: ";
cin >> number1 >> number2;
cout <<"Enter the opposite and the adjacent sides of the triangle: ";
cin >> num1 >> num2;

cout <<"The max Number between the two is: " << max(number1, number2) <<endl;
cout <<"The hypotenuse of the given sides is: " << hypotenuse(num1, num2);
return 0;

}
