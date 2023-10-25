#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Ініціалізуємо генератор випадкових чисел на основі поточного часу
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Генеруємо та виводимо випадкове число в діапазоні від 0 до 9
    int i = 0;
    int number_high_than_3 = 0;

    while(i <= 3){
        int randomNum = std::rand() % 10;
        if (randomNum > 3) {
            std::cout << "Number higher than 3" << std::endl;
            std::cout << "Number: " << randomNum << std::endl << std::endl;
            number_high_than_3++;
        }
        else if (randomNum < 3)
        {
            std::cout << "Number less than 3" << std::endl;
            std::cout << "Number: " << randomNum << std::endl << std::endl;
        }
        
        i++;
    }

    std::cout << "Number higher than 3: " << number_high_than_3;

    return 0;
}