#include <iostream>
using namespace std;

int main(){
int countv = 4;
int number = 10;
int* pcountv = &countv;
int* pnumber = &number;
*pnumber = *pcountv;
pcountv = pnumber;
cout << "*pcountv: " << *pcountv << endl;
cout << "&countv: " << &countv << endl;
cout << "pcountv: " << pcountv << endl;
cout << "pnumber: " << pnumber << endl;

return 0;
}
