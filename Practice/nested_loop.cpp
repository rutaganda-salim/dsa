#include <iostream>
using namespace std;

int fun6(int n) {
    int m = 0; 
    for (int i = 0; i < n; i++) {         // Loop over i
        for (int j = 0; j < n; j++) {     // Loop over j
            m += 1;                       // Increment m
        }
    }
    return m;                              // Return the total
}

// Testing Code
int main() {
    std::cout << "N = 100, Number of instructions O(n^2)::" << fun6(100);  // Fixed function call and syntax
    return 0;
}
