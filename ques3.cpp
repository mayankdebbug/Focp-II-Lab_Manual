#include <iostream>
using namespace std;
int main(){
    int a,t;
    int c,f;
    cout<<"for C to F type 1 \n for F to C type 2";
    cin>>a;
    if(a==1){
        cout<<"enter temperature in celcius: ";
        cin>>c;
        t=(c*2)+30;
        cout<<"temperature in ferahanite is:"<<t;
    }
    else if(a==2){cout<<"enter temperature in farahenite: ";
        cin>>f;
        t=(f-30)/2;
        cout<<"tempreature in celcius is "<<t;

    }
}