// Q14. Develop a menu-driven calculator program in C++ to perform basic arithmetic operations. The program should continue executing based on the user's choice and display the result of each operation

#include <iostream>
using namespace std;

int main()
{
    char user_choice = ' ';
    int a, b;
    while (true)
    {
        cout << "Enter the operation you want to perform.\n1. + :: Addition\n2. - :: Subtraction\n3. * :: Multiplication\n4. / :: Division\n5. E :: Exit\nYour Choice  ::  ";
        cin >> user_choice;
        cout << endl;
        cout << "Enter the first number  ::  ";
        cin >> a;
        cout << "Enter the second number  ::  ";
        cin >> b;
        cout << endl;
        cout << "Ans  ::  ";
        if (user_choice == 'E')
        {
            cout << "Exiting System";
            break;
        }
        else if (user_choice == '+')
        {
            cout << a + b;
        }
        else if (user_choice == '-')
        {
            cout << a - b;
        }
        else if (user_choice == '*')
        {
            cout << a * b;
        }
        else if (user_choice == '/')
        {
            cout << a / b;
        }
        else
        {
            cout << "Wrong input try again.";
        }
        cout << endl;
        cout << endl;
        cout << endl;
    }
    return 0;
}
