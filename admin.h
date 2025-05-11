#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <string>

#include "employee.h"

using namespace std;

class admin {
  private:
    int id;
    string name;
    string password;
    double salary;
    employee tempemp[100];
    static int count;

  public:
    admin(int id, string name, string password, double salary);

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
    void addNewEmp(employee temp);
    void listEmployee();
    int searchByIdEmp(int id);
    int search(int id);
    void showAdmin();
    void editifo(int num);
    int theSame(int id, string password);
    employee getEmploye(int count);
    string nameEmp(int count);
};

#endif