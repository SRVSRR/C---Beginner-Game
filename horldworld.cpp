//if statements

#include <iostream>

int main() {
    int age;

    std::cout << "Enter Your Age: ";
    std::cin >> age;

    if(age >= 100) {
        std::cout << "You have too old to enter";
    }
    else if(age >= 18) {
        std::cout << "Welcome";
    }
    else if(age < 0) {
        std::cout << "You haven't been born yet";
    }
    else {
        std::cout << "You are not old enough to enter";
    }

    return 0;
}