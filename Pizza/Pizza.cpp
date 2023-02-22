#include "Pizza.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

//constructor
Pizza::Pizza(string name, int cost, int diameter){
    this->name = name;
    this->cost = cost;
    this->diameter = diameter;
    this->toppings = {"Cheese"};
}
//getters
string Pizza::getName() const{
    return name;
}
int Pizza::getCost() const{
    return cost;
}
int Pizza::getDiameter() const{
    return diameter;
}
//member functions
void Pizza::addToppings(string topping){
    toppings.push_back(topping);
}
void Pizza::printToppings() const{
    for(string topping : toppings){
        cout<<"\t"<<topping<<endl;
    }
}