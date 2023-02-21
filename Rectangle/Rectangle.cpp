#include"Rectangle.h"
#include <iostream>
//constructors
Rectangle::Rectangle(){
    this->length = 1.0;
    this->width = 1.0;
}
Rectangle::Rectangle(double length, double width){
    this->length = length; //this-> for overshadowing names 
    this->width = width;
}
//deconstructor
Rectangle::~Rectangle(){
    std::cout<<"Rectangle is Destroyed!"<<std::endl;
}
//getters
double Rectangle::getLength() const{
    return length;
}
double Rectangle::getwidth() const{
    return width;
}
//setters
void Rectangle::setLength(double length){
    this->length = length;
}
void Rectangle::setWidth(double width){
    this->width = width;
}
// methods/member functions
double Rectangle::area() const{
    return length*width;
}
double Rectangle::perimeter() const{
    return 2*(width+length);
}