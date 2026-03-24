// Q39. In software applications such as data analytics and probability systems, combinatorial values are frequently
// required. To ensure efficiency, developers avoid factorial-based solutions and use iterative logic with loops.
// As a Junior Software Developer, design a C++ program to generate Pascal’s Triangle for a given number of
// rows.

#include <iostream>
#include <cmath>
using namespace std;

int factorial(int a)
{
    int ans = 1;
    for (int i = 1; i <= a; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the no of rows you want to print the pascals triangle for  ::  ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << factorial(n) / factorial(i) * factorial(abs(n - 1)) << " ";
        }
        cout << endl;
    }

    return 0;
}