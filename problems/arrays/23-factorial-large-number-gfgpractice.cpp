// Factorial of a large number gfg practice.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

vector<int> largeFactorial(const int N) {
    vector<int> ans;
    ans.push_back(1);
    int carry = 0;

    for (int i = 2; i <= N; i++) {
        for (int j = 0; j < ans.size(); j++) {
            int no = ans[j]*i + carry;
            ans[j] = no % 10;
            carry = no / 10;
        }
        while (carry > 0) {
            ans.push_back(carry % 10);
            carry = carry / 10;
        }
        
        carry = 0;
    }
    
    reverse(ans.begin(), ans.end());
    
    return ans;
    
} 

int main() { 
    constexpr int N = 1000;

    vector<int> ans = largeFactorial(N);

    for (auto i :  ans) {
        cout << i;
    }
    cout << "\n";
    return 0;
}
