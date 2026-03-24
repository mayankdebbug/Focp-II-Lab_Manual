// Q19. A network security system generates prime numbers in a range for encryption key pools. Implement a solution to find all prime numbers within a given range.

#include <iostream>
using namespace std;

int main()
{
    int s, e;
    cout << "Enter the starting of the range  ::  ";
    cin >> s;
    cout << "Enter the ending of the range  ::  ";
    cin >> e;
    cout << "The list of prime numbers is as follows  :: " << endl;
    for (int i = s; i < e; i++)
    {
        int check = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                check = -1;
            }
        }
        if (check != -1)
        {
            cout << i << endl;
        }
    }

    return 0;
}