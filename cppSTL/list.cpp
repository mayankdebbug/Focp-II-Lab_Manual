#include <iostream>
#include <list>
using namespace std;

int main(){


    list<int>mylist;
    mylist.push_back(20);
    mylist.push_back(10);
    mylist.push_back(11);
    mylist.push_back(40);

    cout<<mylist.size()<<endl;
    mylist.erase(mylist.begin(),mylist.end());
    cout<<mylist.size()<<endl;
    // list<int>::iterator it=mylist.begin();

    // while(it!=mylist.end()){
    //     cout<<*it<<endl;
    //     it++;
    // }

    // list<int>list2;

    // list2.push_back(1);
    // list2.push_back(2);
    // list2.push_back(3);
    // list2.push_back(4);

    // mylist.swap(list2);
    
    // cout<<"list number 1: "<<endl;
    //  list<int>::iterator it=mylist.begin();

    // while(it!=mylist.end()){
    //     cout<<*it<<endl;
    //     it++;
    // }
    // cout<<"list number 2: "<<endl;

    //  list<int>::iterator it2=list2.begin();

    // while(it2!=list2.end()){
    //     cout<<*it2<<endl;
    //     it2++;
    // }

    // cout<<mylist.size()<<endl;

    // cout<< mylist.front() <<endl;

    //  cout<<mylist.back()<<endl;
    // cout<<"before removing: "<<endl;
    // list<int>::iterator it=mylist.begin();

    // while(it!=mylist.end()){
    //     cout<<*it<<endl;
    //     it++;
    // }

    // cout<<"after removing: "<<endl;
    // mylist.remove(10);
    // list<int>::iterator i=mylist.begin();
    //  while(i!=mylist.end()){
    //     cout<<*i<<endl;
    //     i++;
    // }

}
