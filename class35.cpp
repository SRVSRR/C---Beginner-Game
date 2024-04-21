//iterate over an array

#include<iostream>

using namespace std;

int main(){

    char grade[] = {'a', 'b', 'c', 'd', 'f'};

    /*string students[] = {"bob", "jib","ken", "rijj"};*/

    for(int i = 0;i < sizeof(grade)/sizeof(char); i++){
        cout << grade[i] << '\n';
    }

 
    return 0;
}