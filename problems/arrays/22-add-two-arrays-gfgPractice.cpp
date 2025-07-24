#include<iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std; 

string calc_Sum(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        string ans2;
        int carry = 0;
        
        int sum = 0;
        int digit = 0;
        int i = arr1.size() - 1;
        int j = arr2.size() - 1;
        
        while (i >= 0 && j >= 0) {
            sum = arr1[i] + arr2[j] + carry;
            digit = sum % 10;
            carry = sum / 10;
            ans.push_back(digit);
            --i;
            --j;
        }
        
        while (i >= 0) {
            sum = arr1[i] + carry;
            digit = sum % 10;
            carry = sum / 10;
            ans.push_back(digit);
            --i;
        }
        
        while (j >= 0) {
            sum = arr2[j] + carry;
            digit = sum % 10;
            carry = sum / 10;
            ans.push_back(digit);
            --j;
        }
        
        while (carry > 0) {
            digit = carry % 10;
            carry = carry / 10;
            ans.push_back(digit);
        }
        
        cout << "size is  : " << ans.size() << "\n";
        for (int i = ans.size()-1; i>=0; --i) {
            int dig = ans[i];
            char charDigit = dig + '0';
            ans2.push_back(charDigit);
        }
       
        return ans2;
    }

int main() { 
    vector<int> a = {1 ,2};
    vector<int> b = {2, 1};

    string ans = calc_Sum(a, b);

    cout << ans << "\n";

    return 0; 

}