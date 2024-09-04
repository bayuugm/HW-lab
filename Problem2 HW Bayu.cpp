#include <iostream>
#include <cmath>
using namespace std;

int getInput(std::string prompt ) {
    double value;
    cout << prompt;
    cin >> value;
    return value;
}

void displayResult(double num1, double num2, double num3, double discriminant) {
    if (discriminant > 0) {
        double x1 = (-num2 + sqrt(discriminant)) / (2 * num1);
        double x2 = (-num2 - sqrt(discriminant)) / (2 * num1);
        cout << "The polynomial has two distinct real roots: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (discriminant == 0) {
        double x = -num2 / (2 * num1);
        cout << "The polynomial has one distinct real root: " << endl;
        cout << "x = " << x << endl;
    } else {
        cout << "The polynomial has no distinct roots or has complex roots." << endl;
    }
}

int main() {
    double num1 = getInput("Enter the value of A: ");
    double num2 = getInput("Enter the value of B: ");
    double num3 = getInput("Enter the value of C: ");

    double discriminant = num2 * num2 - 4 * num1 * num3;

    displayResult(num1, num2, num3, discriminant);

    return 0;
}