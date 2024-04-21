//Logical Operators (&& || !)

#include <iostream>

int main() {

    int temp;
    bool sunny = true;

    std::cout << "Enter temp";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30) {
        std::cout << "Good Temp\n";
    } else {
        std::cout << "Bad Temp\n";
    }

    if(!sunny) {
        std::cout << "It is sunny";
    } else {
        std::cout << "It is cloudy";
    }

    return 0;
}