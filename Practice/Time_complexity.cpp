#include<iostream>
using namespace std;

int fun5(int n) {
    int i, j, m = 0;
    for(i=1;i<=n;i*=2) {
        for(j=0; j<=1;j++) {
            m+=1;
        }
        return m;
    }
}
int main() {
    std::cout<<"N = 100, Number of instructions::" <<fun5(100);
    return 0;
}