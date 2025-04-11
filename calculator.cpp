#include <iostream>
using namespace std;

void get_input(double &a, double &b) {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}

double add(double a, double b) {
    //  implement your code
}

double subtract(double a, double b) {
    return a-b;
}

double multiply(double a, double b) {
    // implement your code
}

double divide(double a, double b) {
    // implement your code
}

int main() {
    double a, b;
    cout << "Welcome to the Team Calculator!" << endl;
    get_input(a, b);
    cout << "Values received: a = " << a << ", b = " << b << endl;
    cout <<"The difference of " <<a <<"and " <<b <<"= " <<subtract(a,b); <<endl;
    return 0;
}