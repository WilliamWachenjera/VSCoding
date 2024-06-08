#include <iostream>
using namespace std;
int nameso(int param, int param2);
double nameso(double you, double me);
int main()
{
    double names = 0;
    int name = 4;

    //cout << name << endl;
    cout << nameso(names, name);

    return 0;
}
int nameso(int param, int param2)
{
    return param + param2;
}
double nameso(double you, double me)
{
    return you + me;
}
