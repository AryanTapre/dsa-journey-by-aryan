// Prpgram to check number is Prime?
#include<iostream>
using namespace std; 

// Function to check Prime Number
bool isPrime(const int inputNum) {
    bool primeStatus = true; // Initial Value is False
    
    for (int number = 2; number <= inputNum - 1; number++) {
        if (inputNum % number == 0) {
            primeStatus = false;
            break;
        }
    }
    
    return primeStatus;
}

int main() { 
    int inputNum;

    cout << "enter the number : ";
    cin >> inputNum;

    cout << boolalpha;
    cout << "number is prime: " << isPrime(inputNum) <<'\n';

    return 0;
}
