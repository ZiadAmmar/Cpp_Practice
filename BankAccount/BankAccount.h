#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include<string>

using namespace std;

class BankAccount{
    private:
        string owner;
        int balance;
    public:
        //constructors
        BankAccount(string owner); //default
        BankAccount(string owner, int balance); //overload constructor
        //destructor
        ~BankAccount();
        //getters
        string getOwner() const;
        int getBalance() const;
        //member functions
        void deposit(int amount);
        void withdraw(int amount);
        void printAccountDetails();

};



#endif