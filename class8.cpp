//User Input

#include <iostream>

int main() {

    std::string name;
    int age;

    std::cout << "What's Your Age?: ";
    std::cin >> age;


    std::cout << "What's Your Full Name?:";
    std::getline(std::cin >> std::ws, name);
    
    std::cout << "Hello " << name;
    std::cout << " You are " << age << "Years old";

    return 0;
}
