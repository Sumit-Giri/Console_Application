#pragma once
#include "point.h"

#include "GeometricShape2d.h"

using namespace Shapes2d;

class Triangle : public shape
{

public:
    Triangle(Point mVertex1, Point mVertex2, Point mVertex3);

    ~Triangle();

    void AreaofTriangle();

    void PerimeterofTriangle();

    void Drawing();

private:
    float height;
    float base;
    float side1;
    float side2;

    Point mVertex2;
    Point mVertex3;
};