#include <iostream>
#include <string>

struct Address {
    std::string City;
    std::string Street;
    int HouseNumber{};
    int ApartmentNumber{};
    int Index{};
};

void printAddress (const Address& add){
    std::cout << "Город:" << add.City << "\n";
    std::cout << "Улица:" << add.Street << "\n";
    std::cout << "Номер дома:" << add.HouseNumber << "\n";
    std::cout << "Номер квартиры:" << add.ApartmentNumber << "\n";
    std::cout << "Индекс:" << add.Index << "\n";
}

int main () {

    Address add;
    std::cout << "Город: ";
    std::cin >> add.City;

    std::cout << "Улица: ";
    std::cin >> add.Street;

    std::cout << "Номер дома: "; std::cin >> add.HouseNumber;
    std::cout << "Номер квартиры: "; std::cin >> add.ApartmentNumber;
    std::cout << "Индекс: "; std::cin >> add.Index;

    printAddress(add);

    return 0;
}