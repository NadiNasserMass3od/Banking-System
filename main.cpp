#include <iostream>
#include <string>

#include "admin.h"

using namespace std;

int main() {
  admin adm(1, "NadiNasser", "00000000", 5000);
  employee emp;
  client cli, cli2;
  int id, count, count2, choice = 1;
  string name, password;
  double balance, salary;
  bool test = true;
  cout << "Enter number 1 if you admin\n"
          "Enter number 2 if you employee\n"
          "Enter number 3 if you client\n";
  cin >> choice;

  while (choice != 0) {
    test = true;
    switch (choice) {
      case 1:
        cout << "Please enter your id and password!\n"
                "Id: ";
        cin >> id;
        cout << "Password: ";
        cin >> password;
        if (adm.theSame(id, password))
          while (test) {
            cout << "Welcome " << adm.getName() << endl
                 << "To change your id enter number 1,\n"
                    "To change your name enter number 2,\n"
                    "To change your password enter number 3,\n"
                    "To change your salary enter number 4,\n"
                    "To show your data enter number 5\n"
                    "To add new employee enter number 6\n"
                    "To show all employees enter number 7\n"
                    "To search by id of employee enter number 8\n"
                    "To edit inf by id of employee enter number 9\n"
                    "To go back enter number 0"
                 << endl;
            cin >> choice;
            switch (choice) {
              case 0:
                test = false;
                break;
              case 1:
                cout << "Enter new id : ";
                cin >> id;
                adm.setId(id);
                break;
              case 2:
                while (1) {
                  cout << "Enter new name range (5-20) : ";
                  try {
                    cin >> name;
                    adm.setName(name);
                    break;
                  } catch (string error) {
                    cout << error << endl;
                    continue;
                  }
                }
                break;
              case 3:
                cout << "Enter new password range (8-20) : ";
                while (1) {
                  try {
                    cin >> password;
                    adm.setPass(password);
                    break;
                  } catch (string error) {
                    cout << error << endl;
                    continue;
                  }
                }
                break;
              case 4:
                cout << "Enter new salary at last 5000 L.E. : ";
                while (1) {
                  try {
                    cin >> salary;
                    adm.setSalary(salary);
                    break;
                  } catch (string error) {
                    cout << error << endl;
                    continue;
                  }
                }
                break;
              case 5:
                adm.showAdmin();
                break;
              case 6:
                cout << "To add new employee enter\n"
                        "His id : ";
                cin >> id;
                emp.setId(id);
                cout << "His name range(5-20) : ";
                try {
                  cin >> name;
                  emp.setName(name);
                } catch (string error) {
                  cout << error << endl;
                  continue;
                }
                cout << "His password range(8-20) : ";
                try {
                  cin >> password;
                  emp.setPass(password);
                } catch (string error) {
                  cout << error << endl;
                  continue;
                }
                cout << "His salary at last 5000 : ";
                try {
                  cin >> salary;
                  emp.setSalary(salary);
                } catch (string error) {
                  cout << error << endl;
                  continue;
                }
                adm.addNewEmp(emp);
                break;
              case 7:
                adm.listEmployee();
                break;
              case 8:
                cout << "Enter id : ";
                cin >> id;
                adm.searchByIdEmp(id);
                break;
              case 9:
                cout << "Enter his id to edit his informations : ";
                cin >> id;
                count = adm.searchByIdEmp(id);
                if (count != -1) adm.editifo(count);
                break;
              default:
                cout << "Error" << endl;
                break;
            }
          }
        else
          cout << "Your input is wrong! try again" << endl;
        break;
      case 2:
        cout << "Please enter your id and password!\n"
                "Id: ";
        cin >> id;
        cout << "Password: ";
        cin >> password;
        count = adm.search(id);
        emp.setemp(adm.getEmploye(count));
        if (emp.theSame(id, password)) {
          while (test) {
            cout << "Welcome " << emp.getName() << endl
                 << "To change your id enter number 1,\n"
                    "To change your name enter number 2,\n"
                    "To change your password enter number 3,\n"
                    "To change your salary enter number 4,\n"
                    "To show your data enter number 5\n"
                    "To add new client enter number 6\n"
                    "To show all client enter number 7\n"
                    "To search by id of client enter number 8\n"
                    "To edit inf by id of client enter number 9\n"
                    "To go back enter number 0"
                 << endl;
            cin >> choice;
            switch (choice) {
              case 0:
                test = false;
                break;
              case 1:
                cout << "Enter new id : ";
                cin >> id;
                emp.setId(id);
                break;
              case 2:
                cout << "Enter new name range (5-20) : ";
                while (1) {
                  try {
                    cin >> name;
                    emp.setName(name);
                    break;
                  } catch (string error) {
                    cout << error << endl;
                    continue;
                  }
                }
                break;
              case 3:
                cout << "Enter new password range (8-20) : ";
                while (1) {
                  try {
                    cin >> password;
                    emp.setPass(password);
                    break;
                  } catch (string error) {
                    cout << error << endl;
                    continue;
                  }
                }
                break;
              case 4:
                cout << "Enter new salary at last 5000 L.E. : ";
                while (1) {
                  try {
                    cin >> salary;
                    emp.setSalary(salary);
                    break;
                  } catch (string error) {
                    cout << error << endl;
                    continue;
                  }
                }
                break;
              case 5:
                emp.showEmployee();
                break;
              case 6:
                cout << "To add new client enter\n"
                        "His id : ";
                cin >> id;
                cli.setId(id);
                cout << "His name range(5-20) : ";
                try {
                  cin >> name;
                  cli.setName(name);
                } catch (string error) {
                  cout << error << endl;
                  continue;
                }
                cout << "His password range(8-20) : ";
                try {
                  cin >> password;
                  cli.setPass(password);
                } catch (string error) {
                  cout << error << endl;
                  continue;
                }
                cout << "His salary at last 5000 : ";
                try {
                  cin >> balance;
                  cli.setBalance(balance);
                } catch (string error) {
                  cout << error << endl;
                  continue;
                }
                emp.addNewcli(cli);
                break;
              case 7:
                emp.listClient();
                break;
              case 8:
                cout << "Enter id : ";
                cin >> id;
                emp.searchByIdCli(id);
                break;
              case 9:
                cout << "Enter his id to edit his informations : ";
                cin >> id;
                count = emp.searchByIdCli(id);
                if (count != -1) emp.editifocli(count);
                break;
              default:
                cout << "Error" << endl;
                break;
            }
          }
        } else
          cout << "Your input is wrong! try again" << endl;
        break;
      case 3:
        cout << "Please enter your id and password!\n"
                "Id: ";
        cin >> id;
        cout << "Password: ";
        cin >> password;
        count = emp.search(id);
        cli.setCli(emp.getClient(count));
        if (cli.theSame(id, password))
          while (test) {
            cout << "Welcome " << cli.getName() << endl
                 << "To depost amount of money enter number 1\n"
                    "To withdraw amount of money enter number 2\n"
                    "To show your data enter number 3\n"
                    "To tranform to other enter number 4\n"
                    "To go back enter number 0"
                 << endl;
            cin >> choice;
            switch (choice) {
              case 0:
                test = false;
                break;
              case 1:
                cout << "Enter your depost amount of money: ";
                cin >> balance;
                balance += cli.getBalance();
                cli.setBalance(balance);
                emp.setClient(cli, count);
                break;
              case 2:
                cout << "Enter your withdraw amount of money: ";
                cin >> balance;
                if (balance <= cli.getBalance()) {
                  balance -= cli.getBalance();
                  cli.setBalance(-balance);
                  emp.setClient(cli, count);
                } else
                  cout << "This amount is large !!";
                break;
              case 3:
                cli.showCli();
                break;
              case 4:
                cout << "Enter amount of money to transform: ";
                cin >> balance;
                if (balance <= cli.getBalance()) {
                  cout << "Enter ID the other person:";
                  cin >> id;
                  count2 = emp.search(id);
                  if (count2 != -1) {
                    salary = balance;
                    balance -= cli.getBalance();
                    cli.setBalance(-balance);
                    emp.setClient(cli, count);
                    cli2.setCli(emp.getClient(count2));
                    salary += cli2.getBalance();
                    cli2.setBalance(salary);
                    emp.setClient(cli2, count2);
                  } else
                    cout << "This person is not found!!!" << endl;
                } else
                  cout << "This amount is large !!" << endl;
                break;
            }
          }
    }
    cout << "Enter number 0 to exit\n"
            "Enter number 1 if you admin\n"
            "Enter number 2 if you employee\n"
            "Enter number 3 if you client\n";
    cin >> choice;
  }
  return 0;
}