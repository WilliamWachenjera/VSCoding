//#pragma once
#ifndef POLYGONV_H
#define POLYGONV_H


class PolygonV
{
    public:
        void SetValues(int width, int height);

    protected:
        int mWidth;
        int mHeight;
    public:
        void SetValues(int width, int height);
        virtual int Area();


};

#endif // POLYGONV_H
