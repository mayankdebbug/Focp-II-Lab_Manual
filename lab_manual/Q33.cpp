// Q33. A grading system stores marks of multiple students in arrays. Implement a solution to accept
// marks in 5 subjects for 3 students, then display:
// • marks in 2nd subject of 1st student, and
// • marks in 5th subject of 3rd student.

#include <iostream>
using namespace std;

int main()
{
    int marks[3][5];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the marks for 5 subjects for student " << i + 1 << "  ::  ";
        for (int j = 0; j < 5; j++)
        {
            cin >> marks[i][j];
        }
        cout << endl;
    }
    cout << "marks in 2nd subject of 1st student are  ::  " << marks[0][1] << endl;
    cout << "marks in 5th subject of 3rd student are  ::  " << marks[2][4];

    return 0;
}