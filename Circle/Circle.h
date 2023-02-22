#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
    private:
    double radius;
    const double PI;
    
    public:
    //constructors
    Circle();
    Circle(double radius);
    //setter
    void setRadius(double radius);
    //getter
    double getRadius() const;
    //member functions
    double circumference() const;
    double area() const;

};
#endif