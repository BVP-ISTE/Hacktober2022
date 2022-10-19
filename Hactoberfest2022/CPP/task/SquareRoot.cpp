// Find Square Root of an Integer[both int & floating part] using Binary Search

#include<iostream>
using namespace std;
float sqrtBinarySearch(int num, int p) {
   int left = 0, right = num;
   int mid;
   float res;
   while (left <= right) {
      mid = (left + right) / 2;
      if (mid * mid == num) {
         res = mid;
         break;
      }
      if (mid * mid < num) {
         left = mid + 1;
         res = mid;
      } else {
         right = mid - 1;
      }
   }
   float incr = 0.1;
   for (int i = 0; i < p; i++) {
      while (res * res <= num) {
         res += incr;
      }
      res -= incr;
      incr /= 10;
   }
   return res;
}
int main() {
   int n = 50, p = 3;
   cout << "Square root of " << n << " up to precision " << p << " is: " << sqrtBinarySearch(50, 3) << endl;
}
