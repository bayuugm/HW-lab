#include <iostream>
using namespace std;//to avoid repeating the use std::

// function to get input from the user
int getInput(std::string prompt ) {
    int value;
    cout << prompt;
    cin >> value;
    return value;
}

// function to display the result
void displayResult(int salary, int inst, int ins, int tax, int sum, string name) {
    cout << "Payslip for Employee" << endl;
    cout << "------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Gross Salary: Rp " << salary << endl;
    cout << "Tax(20%): Rp  " << tax << endl;
    cout << "Installment Fee: Rp " << inst << endl;
    cout << "Insurance Fee: Rp  " << ins << endl;
    cout << "Net Salary: Rp " << sum << endl;
}

int main() {
    string name;
    cout<<"Name: ";
    cin >> name;
    //get the name of the employee, using the cout and cin commands because the name is a string, not an integer
    int salary = getInput("Enter the Gross Salary: ");
    int inst = getInput("Enter your Installment fee: ");
    int ins = getInput("Enter your Insurance Fee: ");
    
    int tax = salary * 20/100 ; //calculate the tax
    int sum = salary - tax - inst - ins; //calculate the net salary of the employee 
    
    displayResult(salary, inst, ins, tax, sum, name);
    
    return 0;

}
