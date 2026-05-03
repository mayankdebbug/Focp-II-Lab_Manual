#include<iostream>
using namespace std;

template<typename T1>
T1 add(T1 v1,T1 v2)
{
    return (v1+v2);
}
int main(){
    cout<<add<int>(10,20)<<endl;
    cout<<add<double>(30.5,10.45)<<endl;
    cout<<add<string>("hello ","world");
    return 0;
}
