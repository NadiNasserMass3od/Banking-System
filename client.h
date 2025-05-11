#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>

using namespace std;

class client {
  private:
    int id;
    string name;
    string password;
    double balance;

  public:
    void setId(int id) {
      client::id = id;
    }
    void setName(string name) {
      if (name.length() > 4 && name.length() < 21)
        client::name = name;
      else
        throw string("You must enter between range(5-20): ");
    }
    void setPass(string password) {
      if (password.length() > 7 && password.length() < 21)
        client::password = password;
      else
        throw string("You must enter between range(8-20): ");
    }
    void setBalance(double balance) {
      if (balance >= 1500)
        client::balance = balance;
      else
        throw string("You must enter at last 1500 L.E. : ");
    }
    int getId() {
      return id;
    }
    string getName() {
      return name;
    }
    string getPass() {
      return password;
    }
    double getBalance() {
      return balance;
    }

    void transformTo(double amount, client& recipient) {
      balance -= amount;
      recipient.balance += amount;
    }

    void setCli(client temp) {
      client::id = temp.id;
      client::name = temp.name;
      client::password = temp.password;
      client::balance = temp.balance;
    }
    int theSame(int id, string password) {
      int i = 0;
      if (client::id == id && client::password == password) i = 1;
      return i;
    }

    void showCli() {
      cout << "My ID is " << id << " ,name is " << name << " ,password is "
           << password << " ,balance is " << balance << endl;
    }
};

#endif