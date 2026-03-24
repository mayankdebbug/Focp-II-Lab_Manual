// Q35. A data analytics tool flips rows and columns for better visualization. Implement a solution to store a 3×3 matrix and compute its transpose.

#include <iostream>
using namespace std;

int main()
{

    int matrix[3][3], transpose[3][3];
    cout << "MATRIX VALUES INPUT" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the values for row " << i + 1 << "  ::  ";
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    cout << "\n The matrix is " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n The transpose is " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}