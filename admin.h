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
    admin(int id, string name, string password, double salary) {
      admin::id = id;
      admin::name = name;
      admin::password = password;
      admin::salary = salary;
    }

        void setId(int id) {
      admin::id = id;
    }
    void setName(string name) {
      if (name.length() > 4 && name.length() < 21)
        admin::name = name;
      else
        throw string("You must enter between range(5-20): ");
    }
    void setPass(string password) {
      if (password.length() > 7 && password.length() < 21)
        admin::password = password;
      else
        throw string("You must enter between range(8-20): ");
    }
    void setSalary(double salary) {
      if (salary >= 5000)
        admin::salary = salary;
      else
        throw string("You must enter at last 5000 L.E. : ");
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
    double getSalary() {
      return salary;
    }

    void addNewEmp(employee temp) {
      tempemp[count].setId(temp.getId());
      tempemp[count].setName(temp.getName());
      tempemp[count].setPass(temp.getPass());
      tempemp[count].setSalary(temp.getSalary());
      count++;
    }

    void listEmployee() {
      for (int i = 0; i < count; i++) {
        cout << "Employee number " << i + 1 << " His id is "
             << tempemp[i].getId() << " ,his name is " << tempemp[i].getName()
             << " ,his password is " << tempemp[i].getPass()
             << " ,and his balance is " << tempemp[i].getSalary() << endl;
      }
    }

    int searchByIdEmp(int id) {
      int j, i = -1;
      for (j = 0; j < count; j++) {
        if ((tempemp[j].getId() == id)) {
          cout << "Employee number " << j + 1 << " His id is "
               << tempemp[j].getId() << " ,his name is " << tempemp[j].getName()
               << " ,his password is " << tempemp[j].getPass()
               << " ,and his balance is " << tempemp[j].getSalary() << endl;
          i = j;
          break;
        }
      }
      if (i == -1) cout << "He isn't found in our data.\n";
      return i;
    }

    int search(int id) {
      int j, i = -1;
      for (j = 0; j < count; j++) {
        if ((tempemp[j].getId() == id)) {
          i = j;
          break;
        }
      }
      return i;
    }

    void showAdmin() {
      cout << "My id is " << id << " ,name is " << name << " ,password is "
           << password << " ,and salary is " << salary << endl;
    }

    void editifo(int num) {
      string chioce;
      while (1) {
        cout << "Do you need to change his id(y/n): ";
        cin >> chioce;
        if (chioce == "y") {
          int id;
          cout << "Enter new id : ";
          cin >> id;
          (tempemp + num)->setId(id);
        }
        cout << "Do you need to change his name(y/n): ";
        cin >> chioce;
        if (chioce == "y") {
          string name;
          cout << "Enter new name : ";
          try {
            cin >> name;
            (tempemp + num)->setName(name);
          } catch (string error) {
            cout << error << endl;
            continue;
          }
        }
        cout << "Do you need to change his password(y/n): ";
        cin >> chioce;
        if (chioce == "y") {
          string pass;
          cout << "Enter new password : ";
          try {
            cin >> pass;
            (tempemp + num)->setPass(pass);
          } catch (string error) {
            cout << error << endl;
            continue;
          }
        }
        cout << "Do you need to change his balance(y/n): ";
        cin >> chioce;
        if (chioce == "y") {
          double balance;
          cout << "Enter new balance : ";
          try {
            cin >> balance;
            (tempemp + num)->setSalary(balance);
            break;
          } catch (string error) {
            cout << error << endl;
            continue;
          }
        } else
          break;
      }
    }

    int theSame(int id, string password) {
      int j = 0;
      if (admin::id == id && admin::password == password) j = 1;
      return j;
    }

    employee getEmploye(int count) {
      return tempemp[count];
    }

    string nameEmp(int count) {
      return tempemp[count].getName();
    }
};

int admin::count = 0;

#endif