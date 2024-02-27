// nested loops

#include <iostream>

int main() {
    int rows;
    int columns;
    char symbol;

    std::cout << "How Many Rows: ";
    std::cin >> rows;

    std::cout << "How Many columns: ";
    std::cin >> columns;

    std::cout << "Enter a symbol: ";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= columns; j++) {
            std::cout << symbol;
        }
        std::cout << '\n'; // Add a newline after each row
    }

    return 0;
}


// loops inside another looop