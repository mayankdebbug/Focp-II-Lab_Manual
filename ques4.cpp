#include <iostream>
using namespace std;
int main(){
    int item,vol,cash;
    float total,dis,pay;

    cout<<"item number: \n number of items: \n price of item:\n";
    cin>>item>>vol>>cash;
    total=vol*cash;
    dis=total/5;
    pay=total-dis;
    cout<<"pay "<<pay;


}