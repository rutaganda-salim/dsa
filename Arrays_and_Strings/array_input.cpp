#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    cout<<"Enter numbers ";
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    cout<<"The numbers are: ";
    for(int i = 0; i < 5; i++) {
        cout << numbers[i] <<",";
    }

}