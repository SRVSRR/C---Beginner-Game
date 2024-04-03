#include <iostream>

using namespace std;

int myNum = 3;

void printNum();

int main() {
    int myNum = 1;

    printNum();
    cout << ::myNum << '\n';


    return 0;
}
void printNum(){
    int myNum = 2;

    cout << ::myNum << '\n';
}