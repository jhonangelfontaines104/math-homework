#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if (num1 > num2) {
        std::cout << "The larger number is " << num1 << std::endl;
    } else {
        std::cout << "The larger number is " << num2 << std::endl;
    }

    return 0;
}
