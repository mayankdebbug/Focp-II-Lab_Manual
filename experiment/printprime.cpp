    #include <iostream>
    using namespace std;
    

    //  int sum2(int a,int b){
    //     int add;
    //     add=a+b;
    //     return add;
    // }

    //  float sum1(float a,float b){
    //     float add;
    //     add=a+b;
    //     return add;
    // }
    // double sum3(double a,double b){
    //     double add;
    //     add=a+b;
    //     return add;
    // }
    // int main(){

    //     cout<<sum2(5.,10)<<endl;
    //     cout<<sum1(5.5,10.4)<<endl;
    //     cout<<sum3(5.34334,10.392932)<<endl;
    // }




    // int result(int arr[],int size){
    //     int total=0;
    //     for(int i=0;i<size;i++){
    //         cout<<i+1<<" subject marks: "<<endl;
    //         cin>>arr[i];
            
    //         total=total+arr[i];
    //     }
    //     return total;
    // }

    // int main(){
    //     int subjects;
    //     int arr[subjects];
        
    //     cout<<"number of subjects: "<<endl;
        
    //     cin>>subjects;

    //     cout<<result(arr,subjects);
    // }


          void welcome(string fname,string lname){
            cout<<"Welcome "<<fname<<" "<<lname;
        
          }

          int main(){
            string fname;
            string lname;
            cout<<"enter first and last name: ";
            cin>>fname>>lname;

            welcome(fname,lname);
          }



        