//temp converter

#include <iostream>

int main() {

    double temp;
    char unit;

    std::cout << "Temp Conversion \n";
    std::cout << "F, C, K\n";

    std::cin >> unit;

    if(unit == 'F' || unit == 'f') {
        std::cout << "Enter temp: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F\n";

    } else if(unit == 'C' || unit == 'c') {
        std::cout << "Enter temp: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";

    } else {
        std::cout << "Enter in only C or F\n";
        }


    return 0;
}