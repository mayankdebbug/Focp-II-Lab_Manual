#include<iostream>
using namespace std;
int main()
{
    int a;
   float b;
     char c;
     string name;
    cin>>a>>b>>c>>name;
    getline(cin,name);
        
    cout<<"value of x= "<<a<<endl<<" value of y= "<<b<<endl<<" value of z= "<<c;

    cout<<"\nname is: "<<name;
    return 0;
}