// Q26. The school report card system stores subject marks for each student. Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.

#include <iostream>
using namespace std;

int main()
{
    int sub[5];
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the marks of subject " << i + 1 << " :: ";
        cin >> sub[i];
        total += sub[i];
    }
    int percent = total / 5;
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " :: " << sub[i] << endl;
    }
    cout << "Total :: " << total << endl;
    cout << "Percentage :: " << percent << endl;
    return 0;
}