//switch statements

#include <iostream>

int main() {

    //int month;
    //std::cout << "Enter the month (1-12): ";
    //std::cin >> month;

    /*switch(month) {
        case 1:
        std::cout << "It is January";
        break;

        case 2:
        std::cout << "It is Feb";
        break;

        case 3:
        std::cout << "It is March";
        break;

        case 4:
        std::cout << "It is April";
        break;

        case 5:
        std::cout << "It is May";
        break;

        case 6:
        std::cout << "It is June";
        break;

        case 7:
        std::cout << "It is July";
        break;

        case 8:
        std::cout << "It is Aug";
        break;

        case 9:
        std::cout << "It is Sept";
        break;

        case 10:
        std::cout << "It is Oct";
        break;

        case 11:
        std::cout << "It is Nov";
        break;

        case 12:
        std::cout << "It is Dec";
        break;

        default:
        std::cout << "Please enter in only numbers (1-12)";

    }*/

    char grade;

    std::cout << "Which letter grade?: ";
    std::cin >> grade;

    switch(grade) {
        case 'A' :
        std::cout << "You did great";
        break;

        case 'B' :
        std::cout << "Good";
        break;

         case 'C' :
        std::cout << "Good Try";
        break;

         case 'D' :
        std::cout << "F";
        break;

         case 'E' :
        std::cout << "Try harder";
        break;

         case 'F' :
        std::cout << "You did bad";
        break;

        default :
        std::cout << "Enter a grade (A-F): ";

    }

    return 0;
}