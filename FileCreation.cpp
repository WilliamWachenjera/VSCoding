#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // create a file
    ofstream MyFile;

    MyFile.open("MyFiles.txt",ios::out | ios::ate);

    if( MyFile.is_open()){
       cout << "the file is open()" << endl;
       cout << "go open the file to see its contents" << endl;

    //    write to the file
    MyFile << "Im writing to let you know, \n ";
    MyFile << "The file is open, \n";
    MyFile << "So, you can start writing to it ";
    } else{
        cout << "The file is closed" << endl;
    }
    // close a file
    MyFile.close();

    return 0;
}