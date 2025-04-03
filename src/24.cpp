#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > 0 && num2 > 0) {
        double sum = num1 + num2;
        double average = (double)num1 + num2 / 2.0;
        
        cout << "The sum of the two numbers is: " << sum << endl;
        cout << "The average of the two numbers is: " << average << endl;
    } else {
        cout << "At least one of the numbers must be positive." << endl;
    }

    return 0;
}
