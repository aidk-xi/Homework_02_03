#include <iostream>

struct Address {
    std::string City;
    std::string Street;
    int HouseNumber{};
    int ApartmentNumber{};
    int Index{};
};

int main () {

    Address add;
    std::cout << "Город: ";
    std::cin >> add.City;

    std::cout << "Улица: ";
    std::cin >> add.Street;

    std::cout << "Номер дома: "; std::cin >> add.HouseNumber;
    std::cout << "Номер квартиры: "; std::cin >> add.ApartmentNumber;
    std::cout << "Индекс: "; std::cin >> add.Index;

    return 0;
}