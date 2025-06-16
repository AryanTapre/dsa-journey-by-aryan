/**
 * @brief Given a number n and a value k. From the right, set the kth bit in the binary representation of n. The position of the Least Significant Bit(or last bit) is 0, the second last bit is 1 and so on.
 * @link https://www.geeksforgeeks.org/problems/set-kth-bit3724/1 
 */

#include <iostream>
using namespace std; 

int setKthBit(int n, int k) {
    int mask = 1<<k;
    int result = n | mask;
    return result;
}

int main() { 
    
    cout << "kth bit : " <<setKthBit(10, 2) << '\n';

    return 0;
}
