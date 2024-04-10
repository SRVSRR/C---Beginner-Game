//Banking practice program

#include <iostream>

using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

    double balance = 0;
    int choice = 0 ;

    cout << "Enter your choice\n";
    cout << "Show balance\n";
    cout << "Deposit Money\n";
    cout << "Withdraw money\n";
    cin >> choice;

    switch(choice){
        case 1: showBalance(balance);
                break;
        case 2: balance += deposit();
                break;
        case 3: balance -= withdraw(balance);
                break;
        case 4: cout << "Thanks for visiting\n";
                break;

        default:cout << "Invalid choice\n";
    }

    return 0;
}