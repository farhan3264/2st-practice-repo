#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "\I MADE THIS BASIC CALCULATOR\n";
        cout << "\n===== Basic Calculator =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. EX\n";
        cout << "Enter your choice: ";
        cin >> choice;

    } while (choice != 5);

    return 0;
}