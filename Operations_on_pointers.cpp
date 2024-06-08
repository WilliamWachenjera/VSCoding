<<<<<<< HEAD
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
=======
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
>>>>>>> 28a1e182efec15b14e71fad4388f693ecf6e2c95
