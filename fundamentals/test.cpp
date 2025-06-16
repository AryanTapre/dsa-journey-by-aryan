#include <iostream>
#include <cstdint>
using namespace std; 

void print(int x) {
    cout << x << '\n';
}

int main() { 

    int data = 1;
    data = data<<2;
    cout << "data : "<<data << '\n';
    
    static_cast<int>(5.5);
    print('A');

    cout << sizeof(  char ) << '\n';
    cout << sizeof(  short ) << '\n';
    cout << sizeof(  int ) << '\n';
    cout << sizeof(  long ) << '\n';
    cout << sizeof(  float ) << '\n';
    cout << sizeof(  double ) << '\n';
    cout << sizeof(  bool ) << '\n';
    cout << sizeof(  long int ) << '\n';
    cout << sizeof(  long long int ) << '\n';
    cout << sizeof(  long double ) << '\n';
    
    // cout << sizeof(long long int  ) << '\n';    

    // bool val;
    // cin >> boolalpha >> val;
    // cout << "val is :" << boolalpha << val << '\n';   
    
    // int32_t data;
    // cout << "sizeof(int64_t)" << sizeof(data) << '\n';


    // char ch;
    // cout << "Input a Keyboard character: ";
    // cin >> ch;
    // std::cout << "You entered: " << ch << '\n';

    // std::cin >> ch; // skips leading whitespace (the space), extracts b, leaves "\n" in stream
    // std::cout << "You entered 2 : " << ch << '\n';



    return 0;
}
