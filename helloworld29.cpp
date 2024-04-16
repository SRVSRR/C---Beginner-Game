// Banking practice program //

#include <iostream>
#include <iomanip>

using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

    double balance = 123;
    int choice = 0 ;
    do{
        cout << "*****************\n";
        cout << "Enter your choice\n";
        cout << "*****************\n";
        cout << "1 - Show balance\n";
        cout << "2 - Deposit Money\n";
        cout << "3 - Withdraw money\n";
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
    }while(choice != 4);
    

    return 0;
}

void showBalance(double balance){
    cout << "Your balance is: $" << setprecision(2) << fixed << balance << "\n";
}

double deposit(){
    double amount = 0;
    cout << "Enter deposit amount: \n";
    cin >> amount;
    
    return 0 ;
}
double withdraw(double balance){
    return 0 ;
}

