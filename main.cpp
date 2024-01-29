#include <iostream>
#include "Headers/Rectangle.h"
#include "Headers/Line.h"
#include "Headers/Triangle.h"
#include "Headers/Square.h"
#include "Headers/Circle.h"
#include "Headers/Ellipse.h"

using namespace std;
int main()
{

    int c;
    do
    {

        cout << " Choose a shape - >"<<endl;
     cout<<" 1.Line " <<endl;
     cout<<" 2.Triangle "<<endl;;
     cout<<" 3.Square "<<endl;
     cout<<" 4.Rectange "<<endl;
     cout<<" 5.Circle " <<endl;
     cout<<" 6.Ellipse " <<endl;
     cout<<" 0.Exit " << endl;
        cin >> c;
        switch (c)
        {
        // Case for line
        case 1:
        {
            double x1, y1, x2, y2;

            cout << "Enter x-coordinate1 : ";
            cin >> x1;
            cout << "Enter y-coordinate1 : ";
            cin >> y1;
            cout << "Enter x-coordinate2 : ";
            cin >> x2;
            cout << "Enter y-coordinate2 : ";
            cin >> y2;

            Line line(x1, y1, x2, y2);
            cout << "Length of line is : " << line.length() << endl;
        }
        break;

        // Case for triangle
        case 2:
        {
            float base, height;
            cout << "Input base and height of triangle ->" << endl;
            cin >> base >> height;
            Triangle tr(base, height);
            cout << "The area of triangle is :" << tr.area() << endl;
        }
        break;

        // Case for square
        case 3:
        {
            float side;
            cout << "Input side of square ->";
            cin >> side;
            Square sq(side);
            int input;
            cout << "Select area or perimeter(1/2) and for both enter 3 " << endl;
            cin >> input;
            switch (input)
            {
            case 1:
                cout << "The area of square is :" << sq.area() << endl;
                break;

            case 2:
                cout << "The perimeter of square is :" << sq.perimeter() << endl;
                break;

            case 3:
                cout << "The area of square is :" << sq.area() << endl;
                cout << "The perimeter of square is :" << sq.perimeter() << endl;
                break;

            default:
                cout << "Incorrect Selection !!!" << endl;
                break;
            }
        }
        break;

        // Case for rectangle
        case 4:
        {
            float length, breadth;
            cout << "Input lenght and breadth of square ->" << endl;
            cin >> length >> breadth;
            Rectangle rect(length, breadth);
            cout << "The area of square is :" << rect.area() << endl;
            cout << "The perimeter of square is :" << rect.perimeter() << endl;
        }
        break;

        // Case for circle
        case 5:
        {
            float radius;
            cout << "Input radius of circle ->" << endl;
            cin >> radius;
            Circle cir(radius);
            cout << "The area of circle is :" << cir.area() << endl;
            cout << "The perimeter of circle is :" << cir.circumference() << endl;
        }
        break;

        // Case for ellipse
        case 6:
        {
            float semi_major, semi_minor;
            cout << "Input the length of semi_major axis of ellipse and semi_minor axis of ellipse ->" << endl;
            cin >> semi_major >> semi_minor;
            Ellipse elps(semi_major, semi_minor);
            cout << "The area of ellipse is :" << elps.area() << endl;
            cout << "The perimeter of ellipse is :" << elps.circumference() << endl;
        }
        break;

        case 0:
            cout << "Thank You!!!";
            break;

        // Default case
        default:
            cout << "Incorrect Selection !!!" << endl;
            break;
        }

    } while (c != 0);

    return 0;
}