#pragma once
#include "GeometricShape2d.h"
#include "point.h"
class Line :public shape
{
    

    public:
    Line(Point d1 , Point d2);
    ~Line();

    void lengthofLine();
    void Drawing();

    

    private:
     Point d2;

};