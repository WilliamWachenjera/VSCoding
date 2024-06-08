#include <iostream>
using namespace std;
class Cars{
public:
    string carName; //attributes of a class
    string dateOfRelease;
    int price;
    double number;
    int depreciation(int buyingPrice, int sellingPrice){
    if(buyingPrice > sellingPrice){
        return buyingPrice - sellingPrice;
        cout << "You made a loss " << endl;
     }else{
        return sellingPrice - buyingPrice;
            cout << "You made a damn profit" << endl;
    }

    }
};
int main(){
Cars car1; //creating objects of cars class
//Cars car2; ////creating objects of cars class
cout << "Enter the name of your first car: ";
cin >> car1.carName;
cout << "Enter the Release date of your first car: ";
cin >> car1.dateOfRelease;
cout << "Enter the price of your first car: ";
cin >> car1.price;
cout << "enter the selling price; ";
cin >> car1.price;

cout << "Car 1 Name: " << car1.carName << endl;
cout << "Car 1 date of release: " <<car1.dateOfRelease << endl;
cout << "Car 1 Price: " <<car1.price <<endl;
cout << "the calculated depreciation is: " << car1.depreciation(car1.price, car1.price);
cout << endl;

return 0;
}
