#include<stdio.h>

// int main()
// {
//     float b,h,area;
//     printf("enter the base and height");
//     scanf("%f%f",&b,&h);
//     area=0.5*b*h;
//     printf("\n the area of the right angle triamgle is:%f",area);
//     return 0;
// }
// #include<math.h>
// int main()
// {
//     float b,p,h;
//     printf("enter the base and perpendicular");
//     scanf("%f%f",&b,&p);
//     h=sqrt((b*b)+(p*p));
//     printf("\nthe longest side%f",h);
//     return 0;

// }
// int main()
// {
//     int itemn,quantity;
//     float price,amo,discount,final;
//     printf("enter itemn,quantity,price");
//     scanf("%d%d%f",&itemn,&quantity,&price);
//     amo=quantity*price;
//     discount=amo*0.2;
//     final=amo-discount;
//     printf("/nthe amount before discount is:%f",amo);
//     printf("/nthe price after discount:%f",final);
//     return 0;

// }
// int main()
// {
//     int a,b,c;
//     printf("enter the two values for a and b");
//     scanf("%d%d",&a,&b);
//     c=a;a=b;b=c;
//     printf("a is%d and b is%d",a,b);
//     return 0;
// }
// int main()
// {
//     int a,q;
//     printf("enter the two numbers to swap");
//     scanf("%d%d",&a,&q);
//     a=a+q;
//     q=a-q;
//     a=a-q;
//     printf("after swapping \na is%d",a);
//     printf("and the b \n is%d",q);
//     return 0;
// }
#include<math.h>
int main()
{
    double x,y,result;
    printf("enter the base value");
    scanf("%lf",&x);

    printf("\nenter the raise to power");
    scanf("%lf",&y);

    result=pow(x,y);
    printf("%.1lf and raised to power %.1lfis\n:%.2lf",x,y,result);

}