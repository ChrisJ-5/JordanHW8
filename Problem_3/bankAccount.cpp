// File Name: bankAccount.cpp

#include"bankAccount.h"
#include<string>
using namespace std;

BankAccount::BankAccount(string n, float bal) {
  customerName = n;
  balance = bal;
}

void BankAccount::setName(string n) {
  customerName = n;
}

string BankAccount::getName() {
  return customerName;
}

void BankAccount::setBalance(float bal) {
  balance = bal;
}

float BankAccount::getBalance() {
  return balance;
}

void BankAccount::deposit(float dep) {
  balance = balance + dep;
}

void BankAccount::withdraw(float draw) {
  balance = balance - draw;
}

BankAccount::~BankAccount(){}
