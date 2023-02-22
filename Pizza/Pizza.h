#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Pizza{
    private:
    
    string name;
    int cost;
    int diameter;
    vector<string> toppings;

    public:
    //constructor
    Pizza(string name, int cost, int diameter);
    //getter
    string getName() const;
    int getCost() const;
    int getDiameter() const;
    //member functions
    void addToppings(string topping) ;
    void printToppings() const;

};
#endif