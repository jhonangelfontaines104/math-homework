#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> math_operations = {"addition", "subtraction", "multiplication", "division"};
    string operation = math_operations[rand() % 4]; // randomize the operation

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (operation == "addition") {
        cout << "The sum is " << a + b << endl;
    } else if (operation == "subtraction") {
        cout << "The difference is " << a - b << endl;
    } else if (operation == "multiplication") {
        cout << "The product is " << a * b << endl;
    } else if (operation == "division") {
        if (b != 0) {
            cout << "The quotient is " << a / b << endl;
        } else {
            cout << "Cannot divide by zero" << endl;
        }
    }

    return 0;
}
