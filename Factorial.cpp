#include <iostream>
using namespace std;
int fact(int num);
int main(){
   int x;
   
   cout << "enter the number you wish to find the factorial for: ";
   cin >> x;
   int y = fact(x);
   cout << y;
   return 0;0

}

int fact(int num){ //finds the factorial of a num, num!
    #include <iostream>
    using namespace std;if(num ==
     0) 
       return 1; //checks 0!
    else
       return num * fact(num - 1); /* the problem is broken into two parts: 
        num-base_case and fact(num -1)-general_case*/
}
