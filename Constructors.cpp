<<<<<<< HEAD
#include <iostream>
#include <string>
using namespace std;

class Human{
public:
int Age;
string Name; //member variables for the Human class
string Status;

void PrintToConsole(){
cout << "Name: " << Name << endl;
cout << "Status: " << Status << endl;
cout << "Age: " << Age << endl << endl;
}
Human(string name, string status, int age){ //constructor
Name = name;
Status = status;
Age = age;
}
};
int main(){
//Human man; //instantiating the Human class
//Human woman;

Human man = Human("Wizzy", "Single", 21); //envoking the Human constructor for man object
man.PrintToConsole();

Human woman = Human("Zendaya", "Baby", 1);
woman.PrintToConsole();

return 0;
}
=======
#include <iostream>
#include <string>
using namespace std;

class Human{
public:
int Age;
string Name; //member variables for the Human class
string Status;

void PrintToConsole(){
cout << "Name: " << Name << endl;
cout << "Status: " << Status << endl;
cout << "Age: " << Age << endl << endl;
}
Human(string name, string status, int age){ //constructor
Name = name;
Status = status;
Age = age;
}
};
int main(){
//Human man; //instantiating the Human class
//Human woman;

Human man = Human("Wizzy", "Single", 21); //envoking the Human constructor for man object
man.PrintToConsole();

Human woman = Human("Zendaya", "Baby", 1);
woman.PrintToConsole();

return 0;
}
>>>>>>> 28a1e182efec15b14e71fad4388f693ecf6e2c95
