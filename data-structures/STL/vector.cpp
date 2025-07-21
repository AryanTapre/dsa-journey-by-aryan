#include <iostream>
#include<vector>
// #include<bits/stdc++.h>
using namespace std; 
    
void traverseVector(const vector<int>& v) { 
    for (auto i : v) {
        cout << i << " ";
    }
    cout << "\n";

}

int main() { 
    // vector<int> v(5,1); // declared, and allocation vector of size 5, all initialized with 1.
    vector<int> v;

    v.push_back(10);
    v.push_back(90);
    traverseVector(v);
    cout << v.capacity() << " " << v.size() << "\n";

    if (v[0]) {
        cout << "Hola";
    }

    v.push_back(100);
    cout << v.capacity() << " " << v.size() << "\n"; // Doubled the capacity 

    v.insert(v.begin(), 89);

    traverseVector(v);

    v.erase(v.begin()); 

    traverseVector(v);
    
    v.pop_back();

    traverseVector(v);

    cout << "element at(1) : " << v.at(1) << "\n";

    cout << "vector is empty ? :  " << v.empty() << "\n"; 

    cout << "clearing entire vector : " << "\n";
    v.clear();

    cout << "vector is empty ? :  " << v.empty() << "\n"; 


    cout << "size : " << v.size() << ", capacity : " << v.capacity() << "\n";

    return 0;
}
