#include <iostream>

class Perimeter {
public:
    int length;
    int width;

    int Calculate() {
        return 2 * length + 2 * width;
    }
};

int main() {
    Perimeter rectangle;

    std::cout << "Length: ";
    std::cin >> rectangle.length;

    std::cout << "Width: ";
    std::cin >> rectangle.width;

    // Виклик методу Calculate() для обчислення периметру
    int result = rectangle.Calculate();

    std::cout << "Result: " << result;

    return 0;
}
