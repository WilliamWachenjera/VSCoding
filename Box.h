<<<<<<< HEAD
#pragma once

#include <iostream>
using namespace std;

class Box{
    public:

        Box();

        Box(const double newLength, const double newBreadth, const double newHeight);

        ~Box();

        double getVolume();

        void setLength(double len);
        void setHeight(double hei);
        void setBreadth(double bre);

        Box operator+(const Box& b);

    private:
        double length;
        double breadth;
        double height;


};
=======
#pragma once

#include <iostream>
using namespace std;

class Box{
    public:

        Box();

        Box(const double newLength, const double newBreadth, const double newHeight);

        ~Box();

        double getVolume();

        void setLength(double len);
        void setHeight(double hei);
        void setBreadth(double bre);

        Box operator+(const Box& b);

    private:
        double length;
        double breadth;
        double height;


};
>>>>>>> 28a1e182efec15b14e71fad4388f693ecf6e2c95
