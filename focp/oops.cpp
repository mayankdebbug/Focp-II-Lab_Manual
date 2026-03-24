#include <iostream>
using namespace std;

class candy{
    string color;
    int points;
    public:
    void setcandy();
    void setcandy(string,int);
    void displaycandy();
    void loosePoints();
    void loosecandy(int);
    void gainpoints();
    void gainpoints(int);
}; 
void candy::gainpoints(int pointsgain){
    points += pointsgain;
}
void candy::gainpoints(){
    points+=2;

}
void candy::loosecandy(int pointsreduce){
    points-=pointsreduce;
    if(points<0)
    points=0;
}


void candy::loosePoints() {
    points -= 2;
    if(points < 0) points = 0;
}
void candy::setcandy() {
    color = "Black";
    points = 0;
}

void candy::setcandy(string c, int p)
{
    color=c;points=p;

}
 void candy::displaycandy(){
    cout<<"\n color: "<<color;
    cout<<"\n points: "<<points;
}

 int main(){
    // candy c1,c2;
    // c1.setcandy("black",67);
    // c1.displaycandy();
    // c2.setcandy("purple",68);
    // c2.displaycandy();

    candy c3;
    c3.gainpoints();
    c3.gainpoints(5);
    c3.displaycandy();
    return 0;
 }

