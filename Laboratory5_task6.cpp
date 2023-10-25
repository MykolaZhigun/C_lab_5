#include <iostream>

int main() {
    double number; 

    std::cout << "Enter the number: ";
    std::cin >> number;

    float floatNumber = static_cast<float>(number);
    int intNumber = number;

    std::cout << "Float: " << floatNumber << std::endl;
    std::cout << "Int: " << intNumber << std::endl;

    return 0;
}
