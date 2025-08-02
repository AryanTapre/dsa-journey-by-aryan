// Divide two numbers using Binary Search.
#include <iostream>
#include <limits.h>
using namespace std; 

int divide(int dividend, int divisor) {
  if ((divisor > dividend) || (dividend == 0)) {
    return -1;
  } 

  int low = 0;
  int high = abs(dividend);
  int ans;
  
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (mid * abs(divisor) == abs(dividend)) {
      return mid;
    } else if (mid * abs(divisor) < abs(dividend)) {
      ans = mid;
      low = mid + 1; // Right search
    } else {
        // mid * divisor > dividend
        high = mid - 1;
    }
  }
  if ((divisor > 0 && dividend > 0) || (divisor < 0 && dividend < 0)) {
    return ans;
  } else {
    ans = ans * -1;
    return ans;
  }
}

int main() {  
  int divisor = -3;
  int dividend = 23;
  
  cout << "Quotient is : " << divide(dividend, divisor) << "\n";
  return 0;
}
