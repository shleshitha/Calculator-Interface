#include <iostream>
using namespace std;

void get_input(double &a, double &b) {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    double a, b;
    cout << "Welcome to the Team Calculator!" << endl;
    get_input(a, b);
    cout << "Values received: a = " << a << ", b = " << b << endl;

    cout << "Addition of " << a << " and " << b << " is " << add(a, b) << endl;
    cout << "Subtraction of " << a << " and " << b << " is " << subtract(a, b) << endl;
    cout << "Multiplication of " << a << " and " << b << " is " << multiply(a, b) << endl;
    cout << "Division of " << a << " and " << b << " is " << divide(a, b) << endl;

    return 0;
}