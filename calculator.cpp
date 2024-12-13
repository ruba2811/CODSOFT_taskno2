#include <iostream>
using namespace std;

int main() {
    double a,b,res;
    char operation;
    cout << "Enter the first number: ";
    cin >>a;
    cout << "Enter the second number: ";
    cin >>b;

    cout << "Choose an operation to perform (+, -, *, /): ";
    cin >> operation;
    switch (operation) {
        case '+':
            res = a + b;
            cout << "To Adding a value "<<a<<" and "<<b<<" is " << res << endl;
            break;
        case '-':
            res = a - b;
            cout << "To Subtract a value "<<a<<" and "<<b<<" is " << res << endl;
            break;
        case '*':
            res = a * b;
            cout << "To Multiply a value "<<a<<" and "<<b<<" is " <<  res << endl;
            break;
        case '/':
            if (b != 0) {
                res = a / b;
                cout << "To Divide a value "<<a<<" and "<<b<<" is " <<  res << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please use +, -, *, or /." << endl;
    }

    return 0;
}