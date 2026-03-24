// Q37. A registration system rejects usernames that contain spaces or special characters. Write a C++ program to validate whether a given string can be accepted as a username.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username;
    cout << "Enter Your Username  ::  ";
    getline(cin, username);
    int check = 0;
    for (int i = 0; i < username.length(); i++)
    {
        if ((username[i] < '0' && username[i] > '9' && username[i] < 'a' && username[i] > 'z' && username[i] < 'A' && username[i] > 'Z') || username[i] == ' ')
        {
            cout << "This username has special characters please enter again";
            check = -1;
            break;
        }
    }
    if (check == 0)
    {
        cout << "Username accepted";
    }

    return 0;
}