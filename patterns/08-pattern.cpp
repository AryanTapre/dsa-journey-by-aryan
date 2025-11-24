#include <iostream>
using namespace std; 

int main() {
    int n;
    cout << "enter value of N :";
    cin >> n;
    
    int starCount = -1;
    for (int i = 0;  i < n; i++) {
        starCount += 2;
        for (int j = 0; j < n + i; j++) {
            int tempCount = starCount;
            if (j >= n - i - 1 && tempCount > 0) {
                cout << "*" << " ";
                tempCount -= 1;    
            } else {
                cout << " "<< " ";
            }    
        }
        cout << endl;    
    }    
    return 0;
}
