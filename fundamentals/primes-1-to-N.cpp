#include <iostream>
using namespace std; 

/**
 * @brief Check if a number is prime.
 * 
 * @param inputnum Number to be tested
 * @return true If number is prime
 * @return false If number is not prime
 */
bool isPrime(const int inputNum) {
    if (inputNum < 2) return false;

    for (int number = 2; number * number <= inputNum; ++number) { // O(root N) time complexity
        if (inputNum % number == 0) {
            return false;
        }
    }
    return true;
}

void printPrimes(const int N) {
    if (N < 1) return;
    
    for (int i = 1; i <= N; ++i) {      // O(N)* O( ROOT N ) = O(N)
        bool primeStatus = isPrime(i);
        if (primeStatus) {
            cout << i <<" ";
        }
    }
    cout << '\n';
}

int main() { 
    int inputNum;
    cout << "Enter the number: ";
    cin >> inputNum;

    cout << "Primes are : ";
    printPrimes(inputNum);
    cout<< '\n';
    
    return 0;
}

