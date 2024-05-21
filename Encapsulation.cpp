#include <iostream>
#include <string>
using namespace std;

class Human{
private: //This is encapsulated class!
    int Age;
string Name; //member variables for the Human class
string Status;

public:
    void setName(string name){
    Name = name;
    }
    string getName(){
    return Name;
    }
    void setAge(int age){
    Age = age;
    }
    int getAge(){
    return Age;
    }
    void setStatus(string status){
    Status = status;
    }
    string getStatus(){
    return Status;
    }
void PrintToConsole(){
cout << "Name: " << Name << endl;
cout << "Status: " << Status << endl;
cout << "Age: " << Age << endl << endl;
}
Human(string name, string status, int age){//constructor
    cout << "Enter the name: ";
    cin >> name;
Name = name;
    cout << "Enter the status: ";
    cin >> status;
Status = status;
    cout << "Enter the age: ";
    cin >>age;
Age = age;
}
};
int main(){

Human man = Human(); //envoking the Human constructor for man object
man.PrintToConsole();

Human woman = Human();
woman.PrintToConsole();

return 0;
}
