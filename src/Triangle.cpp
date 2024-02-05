#include <iostream>
#include <fstream>
#include "../headers/Triangle.h"

using namespace std;

Triangle::Triangle(Point mVertex1, Point mVertex2, Point mVertex3)
{
    mandatory = mVertex1;
    this->mVertex2 = mVertex2;
    this->mVertex3 = mVertex3;
}

void Triangle::AreaofTriangle()
{
    cout << " Area of Triangle " << (0.5 * height * base) << endl;
}

void Triangle ::PerimeterofTriangle()
{
    cout << " Perimeter of Triangle " << (base + side1 + side2) << endl;
}

void Triangle ::Drawing()
{

    ofstream myfile("../textfile/triangle.txt");

    myfile << mandatory.x() << " " << mandatory.y() << endl;
    myfile << mVertex2.x() << " " << mVertex2.y() << endl;
    myfile << mVertex3.x() << " " << mVertex3.y() << endl;
    myfile << mandatory.x() << " " << mandatory.y() << endl;

    myfile.close();
}
Triangle::~Triangle()
{
}