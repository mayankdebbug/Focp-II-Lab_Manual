// Q34. A graphics rendering engine adds pixel intensity matrices. Implement a solution to store two 3×3 matrices and compute their sum.

#include <iostream>
using namespace std;

int main()
{
    int m1[3][3] = {0}, m2[3][3] = {0}, sum[3][3] = {0};
    cout << "MATRIX 1 VALUES INPUT" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the values for row " << i + 1 << "  ::  ";
        for (int j = 0; j < 3; j++)
        {
            cin >> m1[i][j];
        }
        cout << endl;
    }
    cout << "\nMATRIX 2 VALUES INPUT" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the values for row " << i + 1 << "  ::  ";
        for (int j = 0; j < 3; j++)
        {
            cin >> m2[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "The sum martix is " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}