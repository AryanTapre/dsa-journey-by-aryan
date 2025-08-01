#include <iostream>
using namespace std; 
  
double squareRoot(const int n, int const precision) {
  int target = n;
  int low = 0;
  int high = n;
  int mid;
  
  while (low <= high) {
    mid = low + (high - low) / 2;

    if ((mid * mid) == target) {
      return mid;
    } else if ((mid * mid) < target) {
      low = mid + 1;
    } else {
      // left search
      high = mid - 1;  
    } 
  }

  double ans = mid;
  double step = 0.1;

  for (int i = 1; i <= precision; ++i) {
    for (double j = ans; j * j <= n; j = j + step) {
      ans = j;
    }
    step = step / 10;
  }

  return ans;
}

int main() {  
  int n = 6;
  int precision = 3;

  cout << "square root is : " << squareRoot(n, precision) << endl;  
  
  return 0;
}
