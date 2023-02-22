#include "BankAccount.h"
#include <iostream>

using namespace std;

int main(){
    //with default constructor
    BankAccount Ziad("Ziad");
    //trying member functions
    Ziad.deposit(500);
    Ziad.deposit(1000);
    Ziad.withdraw(250);
    Ziad.printAccountDetails();
    //with overload constructor
    BankAccount Alaa("Alaa", 50000);
    //trying getters
    cout<<"Name of new account's owner is "<<Alaa.getOwner()
    <<"\nBalance: "<<Alaa.getBalance()<<endl;
    cout<<"trying to add negative deposite"<<endl;
    //trying negative numbers
    Alaa.deposit(-1000);
    cout<<"trying to take negative withdraw"<<endl;
    Alaa.withdraw(-1000);
    Alaa.printAccountDetails();
    //trying overload constructor with negative balance
    BankAccount Maro("Maro",-500);
    //trying to withdraw when amount withdrawn is greater than current balance
    Maro.withdraw(50);
    Maro.printAccountDetails();
    return 0;
}