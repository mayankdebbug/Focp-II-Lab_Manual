// Q18. A String-matching tool validates if IDs are palindromes. Implement a solution to check whether a given ID is a palindrome.

#include <iostream>
using namespace std;

int main()
{

    string input, palindrome;
    cout << "Enter your id  ::  ";
    cin >> input;
    for (int i = 0; i < input.length(); i++)
    {
        palindrome = palindrome + input[input.length() - i - 1];
    }
    if (palindrome == input)
    {
        cout << "This is a palindrome ID";
    }
    else
    {
        cout << "This is NOT a palindrome ID";
    }

    return 0;
}