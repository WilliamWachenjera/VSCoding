#include <iostream>
using namespace std;
namespace One
{
    void sayHello();
    int Add(int a, int b);
    int number = 500;
    class Deep;
    namespace Two
{
    void sayHello();
}


}
class One::Deep
{
    public:
    void display(string sentence);

};
int number = 400;
using namespace One;
//using namespace Two;
int main()
{
    string name = "wills";
    int number = 300;
    int num1 = 20;
    int num2 = 35;
    One::Deep object;
    object.display(name);

    cout << "sum of num1 and num2: " << Add(num1, num2) << endl;
    sayHello();

    cout << "Number: " << One::number << endl;

    return 0;
}
void One::sayHello()
{
    cout << "Hello namespace one! " << endl;
}
int One::Add(int a, int b)
{
    return a + b;
}
void One::Two::sayHello()
{
    cout << "Hello namespace two" << endl;
}
void One::Deep::display(string sentence)
{
    cout << "Very deep with " <<One::number << " Inches! " << endl;
}
