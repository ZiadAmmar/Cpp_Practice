#include "BankAccount.h"
#include <string>
#include <iostream>

using namespace std;

    //constructors
    BankAccount::BankAccount(string owner){
        this->owner = owner;
        this->balance = 0;
    } //default
    BankAccount::BankAccount(string owner, int balance){
        this->owner = owner;
        if (balance >= 0 ){
            this->balance = balance;
        } else {
            cout<<"Can not start balance of "<<owner<<" with negative number"<<endl;
            cout<<"Setting balance to 0"<<endl;
            this->balance = 0;
        }
    } //overload constructor

    //destructor
    BankAccount::~BankAccount(){
        cout<<"Deleting Account of\t"<<owner<<endl;
    }
    //getters
    string BankAccount::getOwner() const{
        return owner;
    }
    int BankAccount::getBalance() const{
        return balance;
    }
    //member functions
    void BankAccount::deposit(int amount){
        if(amount >= 0){
            balance += amount;
            cout<<"Adding deposit of: "<<amount<<" to account of: "<<owner<<endl; 
            cout<<"New Balance is: "<<balance<<endl;
        } else {
            cout<<"ERR: Negative numbers for deposits are not allowed"<<endl;
            cout<<"Balance is still: "<<balance<<endl;
        }   
    }
    void BankAccount::withdraw(int amount){
         if(amount >= 0){
            if(amount > balance){
                cout<<"ERR: Current Balance is: "<<balance
                <<"\nAmount: "<<amount<<" is greater than balance."<<endl;
            }else{
            balance -= amount;
            cout<<"Substracting Withdraw of: "<<amount<<" to account of: "<<owner<<endl;
            cout<<"New Balance is: "<<balance<<endl;
            }
        } else {
            cout<<"ERR: Negative numbers for withdraw are not allowed"<<endl;
            cout<<"Balance is still: "<<balance<<endl;
        }   
    }
    void BankAccount::printAccountDetails(){
        cout<<"**********************************\n";
        cout<<"Account Owner:   \t"<<owner<<endl;
        cout<<"Account Balance: \t"<<balance<<endl;
        cout<<"**********************************\n";
    }