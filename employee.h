#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

#include "client.h"

using namespace std;

class employee {
  private:
    int id;
    string name;
    string password;
    double salary;
    client tempclient[100];
    static int count;
  public:

    // setter and getter prototypes
    void setId(int id);
    void setName(string name);
    void setPass(string password);
    void setSalary(double salary);
    int getId();
    string getName();
    string getPass();
    double getSalary();

    // Member function prototypes
    void addNewcli(client tempcl);
    void listClient();
    int searchByIdCli(int id);
    int search(int id);
    void showEmployee();
    void editifocli(int num);
    void setemp(employee temp);
    int theSame(int id, string password);
    client getClient(int count);
    void setClient(client temp, int count);
};

#endif