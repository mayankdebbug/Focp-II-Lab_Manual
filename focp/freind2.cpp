static variables& methods:
#include<iostream>
using namespace std;
class university
{

string rollno;
string name;
int marks;
public:
static string univ_name;
static string section;
static int room_no;
university(){rollno="25CSU000";name="unknown";marks=0;}
university(string rollno,string name,int marks){this->rollno=rollno;
    this->name=name;this->marks=marks;}
void display_info()
{
    cout<<"\n Name = "<<name<<"\n Roll No = "<<rollno<<"\n Marks = "<<marks;
}
void static display_univ()
{
    cout<<"\n univname : "<<univ_name<<"\n section "<<section<<"\n room no"<<room_no;
    cout<<"\n rollno"<<rollno;
}
};

string university::univ_name="NCU";
string university::section="Section C";
int university::room_no=33;

int main()
{
    university s1,s2("25CSU111","ABC",45);
    //cout<<"\n university name"<<university::univ_name;//s1.univ_name
    s1.display_info();
    s2.display_info();
    university::display_univ();
    //s2.display_univ();
    return 0;
}