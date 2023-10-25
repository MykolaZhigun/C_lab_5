#include <iostream>
#include <string>
    
int main() {
    // Оголошення та ініціалізація символьних масивів для елементів адреси
    std::string city = "";
    std::string region = "";
    std::string street = "";
    std::string house = "";
    std::string apartment = "";

    // Введення значень елементів адреси
    std::cout << "Enter the city: ";
    std::cin >> city;

    std::cout << "Enter the district: ";
    std::cin >> region;

    std::cout << "Enter the street: ";
    std::cin >> street;

    std::cout << "Enter the house: ";
    std::cin >> house;

    std::cout << "Enter the number in house: ";
    std::cin >> apartment;

    // Формування всієї адреси
    std::string full_address = city + ", " + region + ", street. " + street + ", house. " + house + ", number_house. " + apartment;

    // Визначення довжини елементів адреси та всієї адреси
    int city_length = city.length();
    int region_length = region.length();
    int full_address_length = full_address.length();

    // Порівняння міста та району за довжиною
    std::string result;
    if (city_length > region_length) {
        result = "The city is more than a region";
    }
    else if (city_length < region_length) {
        result = "The region is more out of town";
    }
    else {
        result = "The city and region are the same";
    }

    // Виведення результатів
    std::cout << "City: " << city << ", Region: " << region << std::endl;
    std::cout << "Adress: " << full_address << std::endl;
    std::cout << "City length: " << city_length << std::endl;
    std::cout << "Region Length: " << region_length << std::endl;
    std::cout << "Length all address: " << full_address_length << std::endl;
    std::cout << result << std::endl;

    return 0;
}
