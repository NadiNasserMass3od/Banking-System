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
    // setter and getter prototypes
    void setId(int id);
    void setName(string name);
    void setPass(string password);
    void setBalance(double balance);
    int getId();
    string getName();
    string getPass();
    double getBalance();

    // Member function prototypes
    void transformTo(double amount, client& recipient);
    void setCli(client temp);
    int theSame(int id, string password);
    void showCli();
};

#endif