#include <iostream>
using namespace std;

void get_input(double &a, double &b) {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}

double add(double a, double b) {
<<<<<<< HEAD
    //  implement your code
=======
    return a+b;
>>>>>>> upstream/main
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
<<<<<<< HEAD
    cout << "Values received: a = " << a << ", b = " << b << endl;
    cout <<"The difference of " <<a <<"and " <<b <<"= " <<subtract(a,b); <<endl;
=======
    double result = add(a, b);
    cout << "sum of "<< a << " and " << b  << " is " << result << endl;
>>>>>>> upstream/main
    return 0;
}