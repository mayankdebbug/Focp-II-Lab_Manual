#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A()
    {
        a = 15;
        cout << "Default construcctor called " << endl;
    }
    void display()
    {
        cout << "Function a called: " <<a<< endl;
    }
    ~A()
    {
        cout << "destructor called " << endl;
    };
    class B : public A
    {
        public:
        int b;
        B(){
            b=100;
            cout<<"default B cuntructor called"<<endl;

        }
        void display(){
            cout<<"function B called: "<<b<<endl;
        }
    }
}