#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    if (num1 > 0 && num2 > 0) {
        int sum = num1 + num2;
        cout << "The sum of the two numbers is: " << sum << endl;
    } else if (num1 < 0 || num2 < 0) {
        cout << "One or both numbers are negative." << endl;
    } else {
        cout << "Both numbers are positive and greater than zero." << endl;
    }
    
    return 0;
}
