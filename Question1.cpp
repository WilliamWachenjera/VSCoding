#include <iostream>
using namespace std;

int main() {
    int userValue;

    // Prompt the user for an integer value between 5 and 10
    do {
        cout << "Please enter an integer value between 5 and 10: ";
        cin >> userValue;

        // Check if the input is valid (between 5 and 10)
        if (userValue >= 5 && userValue <= 10) {
            cout << "Your input value (" << userValue << ") has been accepted." << endl;
            break; // Exit the loop if the input is valid
        } else {
            cout << "Invalid input. Please enter a value between 5 and 10." << endl;
        }
    } while (true); // Continue until a valid input is provided

    return 0;
}
