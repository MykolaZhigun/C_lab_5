#include <iostream>

int division(int number1, int number2) {
    if (number2 == 0 || number1 == 0) {
        return -1;
    }
    return number1 / number2;
}

int main() {
    int number1, number2;
    std::cout << "Enter first number: ";
    std::cin >> number1;
    std::cout << "Enter second number: ";
    std::cin >> number2;

    int result = division(number1, number2);

    if (result == -1) {
        std::cout << "Division is not possible." << std::endl;
    }
    else {
        std::cout << "Result: " << result << std::endl;
    }

    return 0;
}
