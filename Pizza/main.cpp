#include "Pizza.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void printPizzaDetails(const Pizza& pizza); //passing by constant reference

int main(){
    Pizza Margrita("Margrita", 50, 15);
    Pizza Pepperoni("Pepperoni", 75, 20);
    Pizza Special("Special", 100, 25);
    
    Pepperoni.addToppings("Pepperoni");
    Pepperoni.addToppings("Olives");

    Special.addToppings("Chicken with chicken ranch");
    Special.addToppings("Barbeque Mashrooms");
    Special.addToppings("Parmesian");

    cout<<"First order:"<<endl;
    printPizzaDetails(Margrita);

    cout<<"Second order:"<<endl;
    printPizzaDetails(Pepperoni);

    cout<<"Third order:"<<endl;
    printPizzaDetails(Special);

    return 0;
}

void printPizzaDetails(const Pizza& pizza){
    cout<<"**********************************\n";
    cout<<"Pizza name: \t"<<pizza.getName()
    <<"\nDiameter: \t"<<pizza.getDiameter()
    <<"\nToppings:"<<endl;
    pizza.printToppings();
    cout<<"Cost: \t"<<pizza.getCost()<<endl;
    cout<<"**********************************\n\n\n";
}