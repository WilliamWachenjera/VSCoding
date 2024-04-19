#include <iostream>
#include <cstring>

using namespace std;

main(){
    char stri1[10] = "Hello";
    char stri2[10] = "World";
    char stri3[10];
    int len;
    strcpy(stri3, stri1);
    cout << "strcpy(stri3, stri1) :" << stri3 << endl;

    strcat(stri1, stri2);
    cout << "strcat(stri1, stri2) : " << stri1 << endl;

    len = strlen(stri1);
    cout << "strlen(stri1): "<<len << endl;

    stri3 = stri1 + stri2;
    cout << "stri3 = stri1 + stri2; " <<stri3 << endl;

    len = stri3.size();
    cout << "stri3.size(); "<<len << endl;

    return 0;
}
