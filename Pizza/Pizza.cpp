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
//getter
int Pizza::getCost() const{
    return cost;
}
//member functions
void Pizza::addToppings(string topping){
    toppings.push_back(topping);
}
void Pizza::printToppings(){
    cout<<"**********************************\n";
    cout<<"The Pizza: \t"<<name<<endl;
    cout<<"Toppings: "<<endl;
    for(string topping : toppings){
        cout<<"\t"<<topping<<endl;
    }
    cout<<"**********************************\n";

}