// Program to calculate Factorial of number
// FACT(5) = 5 * 4 * 3 * 2 * 1
#include<iostream>
using namespace std; 

/**
 * @param num : Number to find factorial of.
 */
long double calculateFactorial(int num) {
    long double fact = 1;
    
    for (int index=1; index<= num; index++) {
        fact = fact * index;
    }
    
    return fact;
}

int main() { 
    
    int num;
    cout << "enter the number : ";
    cin >> num;

    cout << "Factorial of " << num << "is : " << calculateFactorial(num) << '\n';

    return 0;
}
