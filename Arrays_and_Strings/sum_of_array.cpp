#include<iostream>
using namespace std;

int main() {
    int numbers[10] = {1,2,3,4,5};
    int sum = 0;

    for(int i = 0; i < 10; i++) {
        sum+=numbers[i];
    }
    cout<<"The sum is : "<<sum;
}