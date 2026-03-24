#include<stdio.h>

//     int f(int 5)
    
//         int f=1;
//         for(int i=5;i>0;i--)
//         f=f*i;
//         return f;
    
// }
// int add(int n,int c);
// n=5;
// c=4;
//     if(c==0){
//     return 5;}
//     else{ return add(++n,--c);}
// }


int add(int n, int c) {
    if (c == 0) {
        return n;
    } else {
        return add(++n, --c);
    }
}

int main() {
    int n = 5;
    int c = 4;

    int result = add(n, c);
    printf("%d", result);

    return 0;
}
