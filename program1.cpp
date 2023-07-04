#include <iostream>
#include <string>

using namespace std;

class Calculator {
private:
    double a;
    double b;

public:
    Calculator(double num1, double num2) {
        a = num1;
        b = num2;
    }

    double add() {
        return a + b;
    }

    double subtract() {
        return a - b;
    }

    double multiply() {
        return a * b;
    }

    double divide() {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    double num1, num2;
    string operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the operation (add, subtract, multiply, divide): ";
    cin >> operation;

    Calculator calc(num1, num2);

    if (operation == "add") {
        cout << "Result: " << calc.add() << endl;
    } else if (operation == "subtract") {
        cout << "Result: " << calc.subtract() << endl;
    } else if (operation == "multiply") {
        cout << "Result: " << calc.multiply() << endl;
    } else if (operation == "divide") {
        cout << "Result: " << calc.divide() << endl;
    } else {
        cout << "Invalid operation entered!" << endl;
    }

    return 0;
}
