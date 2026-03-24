// A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a solution to classify the symbol.

#include <iostream>
using namespace std;

int main()
{
    char user_char;
    cout << "enter a letter :: ";
    cin >> user_char;
    if (user_char == 'a' || user_char == 'e' || user_char == 'i' || user_char == 'o' || user_char == 'u' || user_char == 'A' || user_char == 'E' || user_char == 'I' || user_char == 'O' || user_char == 'U')
    {
        cout << "It is a vowel";
    }
    else if (user_char >= 'a' && user_char <= 'z' || user_char >= 'A' && user_char <= 'Z')
    {
        cout << "It is a consonant";
    }
    else
    {
        cout << "It is a number";
    }
    return 0;
}