#include <iostream>
using namespace std;
int fun6 (int n) {
int i = 1, m = 0; 
while (i < n) {
m += 1;
i = i* 2;
   }
return m;
}

int main() {
printf("N = 100, Number of instructions 0(log(n)) :: %d \n", fun6 (100));
return 0;
}
