#include <iostream>
#include "university.h"
using namespace std;

int main(){
University unima;
cout << "Enter the university name: ";
cin >> unima.Name;
unima.setName(unima.Name);

cout << "enter the location: " ;
cin >> unima.Location;
unima.setLocation(unima.Location);

cout << "Enter the yearly tuition fee: ";
cin >> unima.tuitionfee;
unima.setTuitionFee(unima.tuitionfee);

cout << "University name: " << unima.Name << endl;
cout << "Location: " << unima.Location << endl;
cout << "Yearly tuition fee: " << unima.tuitionfee << endl;
cout <<unima.yearsToGo(2022, 2024) << " to go" << endl;


return 0;
}
