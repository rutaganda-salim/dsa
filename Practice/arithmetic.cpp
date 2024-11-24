Example 2.4: Arithmetic Progression
#include <iostream>
using namespace std;
int fun6 (int n) {
int i,j, m = 0; 
for(i=0;i<n;i++){
for(j=0;j<i;j++){
m += 1;
   }
   }
return m;
}
// Testing Code
int main() {
std::cout << "N = 100, Number of instructions O(n^2) :: << fun4 (100);
return 0;
}
