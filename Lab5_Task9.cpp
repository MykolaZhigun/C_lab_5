#include <iostream>

int Perimeter(int length, int width) {
    return 2 * (length + width);
}

int main() {
    int length = 5;
    int width = 3;
    int perimeter = Perimeter(length, width);
    std::cout << "Perimetr: \nLength: " << length << "\nWidth " << width << "\nEqual " << perimeter << std::endl;
    return 0;
}