/* File Name: bankApp.cpp
  This file is the test application for the BankAccount class.
  in this file we create 2 BankAccount objects, create an array of 3 more
  objects, deposit and withdraw money into and from the accounts, and display
  the final account information.

  Example Invocation: ./bankApp
*/

#include "bankAccount.h"
#include<iostream>
#include<string>
using namespace std;

int main() {
  // Create class objects 
  BankAccount jackAccount("Jack Smith", 50);
  BankAccount jillAccount("Jill Brian", 100);
  
  // Create an array of BankAccount objects
  BankAccount BankArray[3] = {
    BankAccount("Ralph Kramden", 10),
    BankAccount("Alice Kramden", 20),
    BankAccount("Ed Norton", 30)
  };
  
  // Deposit $30 into every account
  jackAccount.deposit(30);
  jillAccount.deposit(30);
  for (int i=0; i<3; i++) {
    BankArray[i].deposit(30);
  }

  // Withdraw $20 from every account
  jackAccount.withdraw(20);
  jillAccount.withdraw(20);
  for (int i=0; i<3; i++) {
    BankArray[i].withdraw(20);
  }
  
  // Display Information
  cout << "Account Information:\n" << endl;
  cout << "Name: " << jackAccount.getName() << ", Balance: $" << jackAccount.getBalance() << endl;
  cout << "Name: " << jillAccount.getName() << ", Balance: $" << jillAccount.getBalance() << endl;

  for (int i = 0; i < 3; i++) {
    cout << "Name: " << BankArray[i].getName() << ", Balance: $" << BankArray[i].getBalance() << endl;
  }

return 0;
  
}
