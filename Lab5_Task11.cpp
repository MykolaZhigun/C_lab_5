#include <iostream> // Замість <iostream.h>, тому що ми використовуємо в новій версії <iostream>

void myFunc(int x) {
    // Замість "return 4*a;" потрібно використовувати "y = 4 * x;" тому що ми не маємо змінної a
    int y = 4 * x;
    std::cout << "Result: " << y << std::endl; // Виводимо результат
}

int main() {
    int x = 10; // Додаємо ініціалізацію x
    int y;

    myFunc(x); // Викличкаємо функцію myFunc і зберегаємо результат в змінну y

    return 0; // Додайте повернення 0
}