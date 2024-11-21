#include <iostream>
using namespace std;

int main() {
    int numbers[10] = {100, 200, 3000, 789, 120, 12012, 90,898, 8912, 982};

    int largest = numbers[0];

    for (int i = 1; i < 10; i++){
        if(numbers[i] > largest){
            largest = numbers[i];
        }
    }
    cout<<"The largest number is " <<largest;
}