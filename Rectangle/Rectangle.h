#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double length;
    double width;
public:
    //constructors
    //Constructors can overload such as this
    Rectangle(); //this is default constructor if no parameters are passed
    Rectangle(double length, double width); //this is overload constructor when parameters are passed
    //deconstructor
    ~Rectangle(); //can only have one deconstructor
    //getters or accessors
    double getLength() const; //const limits the access of the method in order not to change the values
    double getwidth() const;
    //setters or mutators
    void setLength(double length);
    void setWidth(double width);
    //members function or methods
    double area() const;
    double perimeter() const;
};

#endif