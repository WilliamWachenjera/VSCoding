#include <iostream>
float Product(const float paramOne, float patamTwo);

int main()
{
    const float value;
    value = Product(100.0f, 40.0f);
    return 0;
}
float Product(const float paramOne, float paramTwo)
{
    paramOne = paramOne * 2.0f;
    return paramOne * paramTwo;
}
