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

int main() { 
    int inputNum;
    cout << "Enter the number: ";
    cin >> inputNum;

    if (cin.fail()) {
        cerr << "Invalid input. Please enter an integer.\n";
        return 1;
    }

    cout << boolalpha; // Print true/false instead of 1/0
    cout << "Number is prime: " << isPrime(inputNum) << '\n';
    
    return 0;
}
