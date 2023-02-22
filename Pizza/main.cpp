#include "Pizza.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

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
    Margrita.printToppings();
    cout<<"Cost:\t"<<Margrita.getCost()<<endl;
    cout<<"___________________________________\n\n\n";

    cout<<"Second order:"<<endl;
    Pepperoni.printToppings();
    cout<<"Cost:\t"<<Pepperoni.getCost()<<endl;
    cout<<"___________________________________\n\n\n";

    cout<<"Third order:"<<endl;
    Special.printToppings();
    cout<<"Cost:\t"<<Special.getCost()<<endl;
    cout<<"___________________________________\n\n\n";




    return 0;
}