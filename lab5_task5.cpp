#include <iostream>
#include <cstdlib>

int main() {
    int count = 0; // Змінна для збереження кількості чисел більше трьох

    // Генеруємо 5 випадкових чисел від 0 до 9 і перевіряємо, чи вони більше трьох
    for (int i = 0; i < 5; i++) {
        int randomNumber = std::rand() % 10; // Генеруємо випадкове число від 0 до 9
        std::cout << "Random number " << i + 1 << ": " << randomNumber << std::endl;

        if (randomNumber > 3) {
            count++;
        }
    }

    std::cout << "\nNumber highrt than 3: " << count << std::endl;

    return 0;
}
