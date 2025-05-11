# Banking System Project

This project is a simple banking system implemented in C++. It manages clients, employees, and an administrator.

## Project Structure

-   `client.h`: Declares the `client` class.
-   `client.cpp`: Implements the `client` class member functions.
-   `employee.h`: Declares the `employee` class.
-   `employee.cpp`: Implements the `employee` class member functions.
-   `admin.h`: Declares the `admin` class.
-   `admin.cpp`: Implements the `admin` class member functions.
-   `main.cpp`: Contains the main function to run the application and handle user interaction.

## How to Compile and Run

1.  Save the code for each file in the structure described above.
2.  Open a terminal or command prompt.
3.  Navigate to the project directory.
4.  Compile the code using a C++ compiler (like g++). You need to compile all `.cpp` files together:

    ```bash
    g++ main.cpp client.cpp employee.cpp admin.cpp -o banking_system
    ```

5.  Run the executable:

    ```bash
    ./banking_system
    ```

## Initial Credentials

Here are the initial credentials for the administrator:

-   **Admin ID:** 1
-   **Admin Password:** 00000000
-   **Admin Name:** NadiNasser
-   **Admin Salary:** 5000

**Important:** For security reasons, it is highly recommended to change the default password after the first login.

## Functionality

The system provides the following functionalities:

### Admin

-   Manage employees (add, list, search, edit).
-   View own details.

### Employee

-   Manage clients (add, list, search, edit).
-   View own details.

### Client

-   Deposit money.
-   Withdraw money.
-   Transfer money to another client.
-   View own details.

## Notes

-   Client and employee data is stored in arrays within the `employee` and `admin` classes respectively. This data is not persistent and will be lost when the program exits.
-   Password and name length validations are implemented.
-   Initial balance for a new client must be at least 1500 L.E.
-   Initial salary for a new employee must be at least 5000 L.E.
