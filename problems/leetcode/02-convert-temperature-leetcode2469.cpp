/**
 * @link https://leetcode.com/problems/convert-the-temperature/description/
 */

#include <iostream>
#include <vector>
using namespace std; 

vector<double> convertTemperature(double celsius) {
    return { celsius + 273.15, celsius * 1.80 + 32.00 };
}

int main() { 
    double celsius = 36.50;

    vector<double> ans = convertTemperature(celsius);
    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i]<< " ";
    }
    
    
    return 0;
}

 
