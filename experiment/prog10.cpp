#include <iostream>
using namespace std;

// int swap(int*p1,int*p2){
//     int temp=*p1;
//     *p1=*p2;
//     *p2=temp;
//     cout<<*p1<<*p2;
// }
// int main(){
//     int a,b;
//     a=30,b=55;
//     cout<<a<<b;
//     swap(&a,&b);
//     cout<<a<<b;

// return 0;
// }

swap(int &r1,int &r2){
    int temp=r1;
    r1=r2;
    r2=temp;
    cout<<r1<<r2<<endl;
}

int main(){
    int a,b;
    a=30,b=55;
    cout<<a<<b<<endl;
    swap(a,b);
    cout<<a<<b;
    return 0;
}