//reading from a file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string line;
    ofstream MyFile("example.txt");

    if(MyFile.is_open()){
        while (getline(MyFile,line))
        cout << line << '\n';
    MyFile.close();
    }
    else{
        cout << "unable to open MyFile ";
    }
    return 0;
}