#include <iostream>
using namespace std;

int avg(double a, double b );
int main(){
    double x;
    double y;
    double n;
    cout << "enter x: \n";
    cin >> x ;

    cout << "enter y: \n";
    cin >> y;
    n = avg(x, y);
    cout << n;
    return 0;
}
int avg(double a, double b){
    #include <iostream>
    using namespace std;
    return (a + b)/2;

}