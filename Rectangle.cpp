//
// Created by Moaaz Harby Abdullah on 06/12/2021.
//
/// Return type + the Class name + the Function name
#include "Rectangle.h"
#include <iostream>
#include <cstdlib> // for exit fun.
using namespace std;

void Rectangle::setWidth(double w) {
    if (w>=0)
        width=w;
    else
    {
        cout << "Invalid\n";
        exit(EXIT_FAILURE);
    }
}

void Rectangle::setLength(double l) {
    if (l>=0)
        length=l;
    else
    {
        cout << "Invalid\n";
        exit(EXIT_FAILURE);
    }
}

/*double Rectangle::getWidth() const {
    return width;
}*/

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getArea() const {
    return (width*length);
}

/*Rectangle::Rectangle() { // default
    width=0;
    length=0;
}
// the default constructor can also use initialization lists
Rectangle::Rectangle(): width(0),length(0) {} // this way is faster
 */

Rectangle::Rectangle(double axi1, double axi2): axis1(axi1), axis2(axi2) // member initializer list
{} // or axis1{axi1}
//{axis1=axi1;
//axis2=axi2;}
double Rectangle::getaxis1() const {
    return axis1;
}
double Rectangle::getaxis2() const {
    return axis2;
}

