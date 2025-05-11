#include "client.h"

void client::setId(int id) {
  this->id = id;
}

void client::setName(string name) {
  if (name.length() > 4 && name.length() < 21)
    this->name = name;
  else
    throw string("You must enter between range(5-20): ");
}

void client::setPass(string password) {
  if (password.length() > 7 && password.length() < 21)
    this->password = password;
  else
    throw string("You must enter between range(8-20): ");
}

void client::setBalance(double balance) {
  if (balance >= 1500)
    this->balance = balance;
  else
    throw string("You must enter at last 1500 L.E. : ");
}

int client::getId() {
  return id;
}

string client::getName() {
  return name;
}

string client::getPass() {
  return password;
}

double client::getBalance() {
  return balance;
}

void client::transformTo(double amount, client& recipient) {
  balance -= amount;
  recipient.balance += amount;
}

void client::setCli(client temp) {
  this->id = temp.id;
  this->name = temp.name;
  this->password = temp.password;
  this->balance = temp.balance;
}

int client::theSame(int id, string password) {
  int i = 0;
  if (this->id == id && this->password == password) i = 1;
  return i;
}

void client::showCli() {
  cout << "My ID is " << id << " ,name is " << name << " ,password is "
       << password << " ,balance is " << balance << endl;
}