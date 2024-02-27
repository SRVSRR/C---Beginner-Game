// random number generator

#include <iostream>
#include <ctime>

int main() {

    srand(time(NULL));

    int num = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';



    return 0; 
}