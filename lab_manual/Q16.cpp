// Q16. A cybersecurity tool verifies prime numbers used in encryption keys. Implement a solution to accept a number and check whether it is prime.

#include <iostream>
using namespace std;

int main()
{
    int num, check = 0;
    cout << "Enter the number  ::  ";
    cin >> num;
    if (!(num % 2))
    {
        check = -1;
    }
    if (check > 0)
    {
        for (int i = 3; i < num; i += 2)
        {
            if (num % i == 0)
            {
                check = -1;
                break;
            }
        }
    }
    if (check > 0)
    {
        cout << "This is a prime number";
    }
    else
    {
        cout << "This is not prime number";
    }

    return 0;
}