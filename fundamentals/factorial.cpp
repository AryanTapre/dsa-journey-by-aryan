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
        cout << "&fact : address = " << &fact <<" : " <<sizeof(fact)<< '\n';    
    }
    
    cout << "&fact after loop ends : address =  " << &fact << " : "<< sizeof(fact)<< '\n';

    return fact;
}

int main() { 
    
    int num;
    cout << "inital size : " << sizeof(num)  << '\n';
    cout << "enter the number : ";
    cin >> num;
    cout <<" holla : "<< num << '\n'; 
    cout << "inital size 2  : " << sizeof(num)  << '\n';
    
    cout << "\n  &num : address = " << &num << " : " <<sizeof(int)<< '\n';
    cout << "Factorial of " << num << "is : " << calculateFactorial(num) << '\n';

    return 0;
}
