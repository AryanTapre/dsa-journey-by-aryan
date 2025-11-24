// TODO: Solid diamond

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter value of n:";
    cin >> n;

    // create straight pyramid
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        { // printing spaces
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // create inverted pyramid
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int k = 0; k < n - i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
