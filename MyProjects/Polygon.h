//#pragma once
#ifndef POLYGON_H
#define POLYGON_H


class Polygon
{
    public:
        void SetValues(int width, int height);
        //virtual int Area();
        virtual int Area() = 0;
    protected:
        int mWidth;
        int mHeight;


};

#endif // POLYGON_H
