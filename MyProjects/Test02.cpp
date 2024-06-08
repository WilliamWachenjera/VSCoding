#include <iostream>
using namespace std;
void Add(int paramOne, int paramTwo);
void Gravity(float mass, float acceleration);
void Subtract(int leftSideParam, int rightSideParam);

int main()
{
    int length = 21;
    int width = 30;
    cout << "Subtract: " << endl;
    int num;
    num = Subtract(width,length);
    cout << num << endl;
    cout <<endl<<endl;
    float resulto;
    resulto = Gravity(50.0f, 10.0f);
    cout << resulto << endl;
    cout <<endl<<endl;

    cout << "Add: " << endl;
    cout << Add(length, width);
    return 0;
}

void Add(int paramOne, int paramTwo)
{
    int addResult = paramOne +,paramTwo;
    Subtract(addResult, paramOne);
}
void Gravity(float mass, float acceleration)
{
    float result = mass * acceleration;
    cout << "Gravity is: " result << endl;
}
void Subtract(int leftSideParam, int rightSideParam)
{
    int subResult = leftSideParam - rightSideParam;
    cout << "Result is: " << subResult << endl;

    Gravity(50.0f, 10.0f);
}
