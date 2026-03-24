#include<iostream>
using namespace std;

class Person 
{
    string name;int age;
    public:
    Person(){
        cout<<"\nperson default constructor: ";name="default";age=18;
    }
    Person(string nm,int ag){
        cout<<"\n person parametarized constructor";
        name=nm;
        age=ag;
    }
    void display(){
        cout<<"\n name= "<<name<<"\n age="<<age;
    
    }

};

class Student:public Person
{
    string rollno;
    public:
    Student(){
        cout<<"\n student default constructor:";
        rollno="25csu000";

    }
    Student(string nm,int ag,string rno):Person(nm,ag)
    {
        cout<<"\nstudent parameterised constructor";
        rollno=rno;

    }
    void display_student(){
        display();
        cout<<"\nrollno: "<<rollno;

    }
};
int main(){
    Student p1,p2("mayank",25,"25csu140");
    p1.display();
    p1.display_student();
    p2.display_student();
    return 0;
}


