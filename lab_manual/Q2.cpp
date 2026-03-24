// Q2 Calculation of average of three numbers for implementation in C++ for teacher to calculate the average marks of three students.

#include <iostream>
using namespace std;

int main()
{
    float num_1, num_2, num_3;
    cout << "Please enter three numbers :: ";
    cin >> num_1 >> num_2 >> num_3;
    cout << "The average of three numbers is :: " << (num_1 + num_2 + num_3) / 3;
    return 0;
}