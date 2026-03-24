// Q17. A learning application analyzes numbers for mathematical properties. Design a solution to check whether a given number is a Perfect number or an Armstrong number.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string num;
    int arm = 0, per = 0, intnum = 0;
    cout << "Enter the number  ::  ";
    cin >> num;
    int length = num.length();
    for (int i = 0; i < length; i++)
    {
        int n = (int)(num[i] - '0');
        intnum = intnum * 10 + n;
        arm += pow(n, length);
    }
    for (int i = 1; i < intnum; i++)
    {
        if (intnum % i == 0)
        {
            per += i;
        }
    }
    if ((arm == intnum) && (per == intnum))
    {
        cout << "This is both and armstrong and perfect number";
    }
    else if (arm == intnum)
    {
        cout << "This is an armstrong number";
    }
    else if (per == intnum)
    {
        cout << "This is an perfect number";
    }
    else
    {
        cout << "This is neighter armstrong nor a perfect number";
    }

    return 0;
}