#include <iostream>
using namespace std;

int main() {
    int value;

    /*Prompt the user until a valid input between 5 and 10 and 
    repeats itelf until correct value is provided*/ 
    while (true) {
        cout << "Please enter an integer value between 5 and 10: ";
        cin >> value;

        if (value >= 5 && value <= 10) {
            cout << "You entered: " << value << endl;
            break;  // Exit the loop if the input is within the valid range
        } 
        else {
            cout << "Sorry, you entered an Invalid input. Please try again." << endl;
        }
    }

    return 0;
}
