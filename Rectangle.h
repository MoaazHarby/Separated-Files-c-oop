//
// Created by Moaaz Harby Abdullah on 06/12/2021.
//

#ifndef EXERCISE1_RECTANGLE_H
#define EXERCISE1_RECTANGLE_H

#endif //EXERCISE1_RECTANGLE_H
class Rectangle
{
private:
    double width{};
    double length{};
    double axis1{};
    double axis2{};
public:
    Rectangle(){
        width=0;
        length=0;
        axis1=0;
        axis2=0;
    }
    Rectangle(double ,double );
    // Rectangle(double =0 ,double =0 ); default values for the fun. parameters / take the action of default constructor
    // -> so if U use it, U can't create deflaut constructor (Rectangle();)
    // when using the constructor not should to pass values, because if U didn't, it will take the default or one or
    // -> more parameterized / U can't do another default constructor
    // You can creat many constructors but with different number or datatypes of parameters ==> (constructor overloading)
    void setWidth(double ); // inline
    void setLength(double );
    double getWidth() const
    { return width; } // inline member fun. is faster
    double getLength() const;
    double getArea() const;
    double getaxis1() const;
    double getaxis2() const;
};