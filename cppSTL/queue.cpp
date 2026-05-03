#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>first;
    queue<int>second;

    first.push(1);
    first.push(2);
    first.push(3);

    second.push(10);
    second.push(20);
    second.push(30);

    first.swap(second);

    cout<<first.front()<<first.back();
}