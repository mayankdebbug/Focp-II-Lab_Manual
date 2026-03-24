#include<iostream>
using namespace std;
 
void computeperformance(int a[],int n){

    int min=a[0], max=a[0], avg=a[0];

    for(int i=1;i<=14;i++){
       if(a[i]>max){
            max=a[i];

        }
        if(a[i]<min){
            min=a[i];
        }
        
        avg+=a[i];
    
    }
    cout<<"\nmin= "<<min<<"\nmax= "<<max<<"\navg= "<<float(avg)/n;


}

int main(){

    int arr[]={34,23,45,65,76,45,23,45,23,45,61,73,83,37};
    int size=14;
     computeperformance(arr,size);
     return 0;
}