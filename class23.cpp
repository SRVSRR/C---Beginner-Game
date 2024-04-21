// random number generator

#include <iostream>
#include <ctime>

int main() {

    srand(time(NULL));

    for(int i = 1; i <= 10; i++){
        int num = (rand() % 6 + 1);
        std::cout << num << '\n';
    } 



    return 0; 
}