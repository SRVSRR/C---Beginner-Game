//string references

#include <iostream>

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    /*/*if(name.length() > 12) {
        std::cout << "Too Long";
    } else {
        std::cout << "Welcome " << name;
    } */

    /*if(name.empty()) {
        std::cout << "Enter plz";
    } else {
        std::cout << "Hello " << name;
    }*/

    /*name.clear();

    std::cout << "Hello " << name; */

    /*name.append("@gmail.com");

    std::cout << "Your username is now " << name; */

    /*std::cout << name.at(0);*/

    /*name.insert(0, "@");

    std::cout << name;*/

    /*std::cout << name.find(' ');*/

    name.erase(1, 3);

    std::cout << name;





    return 0;
}