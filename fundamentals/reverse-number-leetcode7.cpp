
#include <iostream>
#include <limits.h>
using namespace std; 

/**
 * @brief Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
 *
 * @param x Integer value 
 * @return Reverse of X if fits in RANGE of INTEGER; otherwise 0
 */
int reverse(int x) {
    int ans = 0, digit = 0;
    bool isNegative = false;

    if (x <= INT_MIN) {
        return 0;
    }

    if (x < 0) {
        isNegative = true;
        x = x * -1;
    }

    while (x > 0) {
        if (ans > INT_MAX / 10) {
            return 0;
        }

        digit = x % 10;
        ans = ans * 10 + digit;
        x = x / 10;
    }
    return isNegative ? -ans : ans;
}

int main() { 
    int x = 57941;

    cout << reverse(x) << '\n';

    return 0;
}

