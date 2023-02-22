#include "Circle.h"

using namespace std;

//const double PI = 3.14159265359;

//constructors
Circle::Circle() : PI(3.14159265359) //member initializor list
{ 
    this->radius = 1.0;
}
Circle::Circle(double radius) : PI(3.14159265359)
{
    this->radius = radius;
}
//setter
void Circle::setRadius(double radius){
    this->radius = radius;
}
//getter
double Circle::getRadius() const{
    return radius;
}
//member functions
double Circle::circumference() const{
    return (2*PI*radius);
}
double Circle::area() const{
    return (PI*radius*radius);
}