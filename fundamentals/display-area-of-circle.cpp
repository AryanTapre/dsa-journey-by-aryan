// Program to calculate the area of circle
#include<iostream>
using namespace std; 

// Function to calculate area
float calculateCircleArea(float radius) {
    const int PI = 3.14;
    return PI * radius * radius;
}

int main() { 
    float radius;

    cout << "enter the radius:";

    cin >> radius;

    cout << "Area of circle is : " << calculateCircleArea(radius) << endl;
    
    return 0;
}


