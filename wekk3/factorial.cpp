#include <iostream>

int main() {
   int n, acc;
   std::cin >> n;
   acc = n;
   for(int f = n-1; f>0; f--){
    acc = acc*f;
   }
   if (n == 0) {
    acc = 1;
   }
   std::cout << n << "! = " << acc;
}
