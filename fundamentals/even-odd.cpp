// Program to check Number is EVEN or ODD
#include<iostream>
using namespace std; 

// Function to check even 
bool isEven(const int number) {
    //const int res = number % 2 == 0 ? true : false;
    const int res = number & 1 == 0 ?  true : false;
    return res;
    
}

int main() { 
    int num;

    cout << "enter the number:";
    cin >> num;

     cout << "Results is Even (1:true 0: false) ? : " << isEven(num) << endl;
    // cout << (num & 1) << endl;
    return 0;
}
