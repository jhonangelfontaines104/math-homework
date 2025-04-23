#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    
    if (num1 % 3 == 0 && num2 % 5 == 0) {
        cout << "FizzBuzz" << endl;
    } else if (num1 % 3 == 0) {
        cout << "Fizz" << endl;
    } else if (num2 % 5 == 0) {
        cout << "Buzz" << endl;
    } else {
        cout << num1 + num2 << endl;
    }
    
    return 0;
}
