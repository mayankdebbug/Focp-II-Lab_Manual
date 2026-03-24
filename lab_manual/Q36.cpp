// Q36. A machine learning model multiplies matrices for neural network layers. Implement a solution to multiply two matrices of order m×n and p×q (if valid).

#include <iostream>
using namespace std;

int main()
{
    int m, n, p, q;
    int x[m][n], y[p][q], ans[m][q] = {0};
    cout << "Enter the order of 1st matrix in format row columns  ::  ";
    cin >> m;
    cin >> n;
    cout << "Enter the order of 2st matrix in format row columns  ::  ";
    cin >> p;
    cin >> q;
    if (n != p)
    {
        cout << "\nThe multiplication is not possible" << endl;
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                for (int z = 0; z < n; z++)
                {
                    ans[i][j] += x[j][z] * y[z][j];
                }
            }
        }
    }
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j];
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}