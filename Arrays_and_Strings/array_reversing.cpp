#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {1,2,3,4,5};
    cout<<"The original array is: ";
    for(int i = 0; i < 5; i++) {
        cout<<numbers[i] << " ";
    }
    // reversed array
    cout<<"The revered array is "<<endl;
    for(int i = 4; i >=0; i--) {
        cout<<numbers[i] <<" "<<endl;
    }
    
}