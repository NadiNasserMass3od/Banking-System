#include "employee.h"

#include "client.h"

int employee::count = 0;

void employee::setId(int id) {
  this->id = id;
}

void employee::setName(string name) {
  if (name.length() > 4 && name.length() < 21)
    this->name = name;
  else
    throw string("You must enter between range(5-20): ");
}

void employee::setPass(string password) {
  if (password.length() > 7 && password.length() < 21)
    this->password = password;
  else
    throw string("You must enter between range(8-20): ");
}

void employee::setSalary(double salary) {
  if (salary >= 5000)
    this->salary = salary;
  else
    throw string("You must enter at last 5000 L.E. : ");
}

int employee::getId() {
  return id;
}

string employee::getName() {
  return name;
}

string employee::getPass() {
  return password;
}

double employee::getSalary() {
  return salary;
}

void employee::addNewcli(client tempcl) {
  tempclient[count].setId(tempcl.getId());
  tempclient[count].setName(tempcl.getName());
  tempclient[count].setPass(tempcl.getPass());
  tempclient[count].setBalance(tempcl.getBalance());
  count++;
}

void employee::listClient() {
  for (int i = 0; i < count; i++) {
    cout << "client number " << i + 1 << " His id is " << tempclient[i].getId()
         << " ,His name is " << tempclient[i].getName() << " ,His password is "
         << tempclient[i].getPass() << " ,And his balance is "
         << tempclient[i].getBalance() << endl;
  }
}

int employee::searchByIdCli(int id) {
  int j, i = -1;
  for (j = 0; j < count; j++) {
    if (tempclient[j].getId() == id) {
      cout << "client number " << j + 1 << " His id is "
           << (tempclient + j)->getId() << " ,his name is "
           << (tempclient + j)->getName() << " ,his password is "
           << (tempclient + j)->getPass() << " ,and his balance is "
           << (tempclient + j)->getBalance() << endl;
      i = j;
      break;
    }
  }
  if (i == -1) cout << "He is not found in our data.\n";
  return i;
}

int employee::search(int id) {
  int j, i = -1;
  for (j = 0; j < count; j++) {
    if (tempclient[j].getId() == id) {
      i = j;
      break;
    }
  }
  return i;
}

void employee::showEmployee() {
  cout << "My id is " << id << " ,name is " << name << " ,password is "
       << password << " ,and salary is " << salary << endl;
}

void employee::editifocli(int num) {
  string chioce;
  client temp;
  temp.setId(tempclient[num].getId());
  temp.setName(tempclient[num].getName());
  temp.setPass(tempclient[num].getPass());
  temp.setBalance(tempclient[num].getBalance());
  while (1) {
    tempclient[num].setId(temp.getId());
    tempclient[num].setName(temp.getName());
    tempclient[num].setPass(temp.getPass());
    tempclient[num].setBalance(temp.getBalance());
    cout << "Do you need to change his id(y/n): ";
    cin >> chioce;
    if (chioce == "y") {
      int id;
      cout << "Enter new id : ";
      cin >> id;
      tempclient[num].setId(id);
    }
    cout << "Do you need to change his name(y/n): ";
    cin >> chioce;
    if (chioce == "y") {
      string name;
      cout << "Enter new name : ";
      try {
        cin >> name;
        tempclient[num].setName(name);
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
        tempclient[num].setPass(pass);
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
        tempclient[num].setBalance(balance);
        break;
      } catch (string error) {
        cout << error << endl;
        continue;
      }
    } else
      break;
  }
}

void employee::setemp(employee temp) {
  this->id = temp.id;
  this->name = temp.name;
  this->password = temp.password;
  this->salary = temp.salary;
}

int employee::theSame(int id, string password) {
  int j = 0;
  if (this->id == id && this->password == password) j = 1;
  return j;
}

client employee::getClient(int count) {
  return tempclient[count];
}

void employee::setClient(client temp, int count) {
  tempclient[count] = temp;
}