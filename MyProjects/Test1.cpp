#include <iostream>
using namespace std;
namespace physics
{
    float Gravity(float acceleration, float mass);
}
int main()
{
    const int name = 10;

    float objectMass = 10.0f;
    float objectAcceleration = 2.5f;

    float gravityValue = physics::Gravity(objectMass, objectAcceleration);

    cout << gravityValue << endl;
    cout << name;
    return 0;

    //name = 20;
}
float physics::Gravity(float acceleration, float mass)
{
    return mass * acceleration;
}
