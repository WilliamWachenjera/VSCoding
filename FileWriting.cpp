#include <fstream>
#include <iostream>
using namespace std;

int main(){
    char data[100];
    // opening the file in write mode
    ofstream MyFile;
    MyFile.open("afile.txt");

    cout << "Writing to the file " << endl;
    cout << "Enter your firstname: ";
    cin.getline(data, 100);

    // writing inputed data to a file
    MyFile << data << endl;
    cout << "enter your age: ";
    cin >> data;
    cin.ignore();
    MyFile << data << endl;

    MyFile.close();

    ifstream infile();
    infile.open("afile.txt");

    cout << "reading from the file " << endl;
    infile >> data;

    cout << data << endl;

    infile >> data;
    cout << data << endl;

    infile.close();

    return 0;

}