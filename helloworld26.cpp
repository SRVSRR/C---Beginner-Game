//Usere defined functions

#include <iostream>

void happybirthday(std::string name, int age);


int main() {

    std::string name = "Bro";
    int age = 21;


    happybirthday(name, age);

    return 0;
}

void happybirthday(std::string name, int age){
    std::cout << "Happy birthday to " << name << '\n';
    std::cout << "Happy birthday to " << name << '\n';
    std::cout << "Happy birthday to " << name << '\n';
    std::cout << "You are " << age << "Years old\n";
}


// function = block of reusbale code