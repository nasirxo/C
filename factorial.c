#include <stdio.h>

long double factorial(int n);

int main(){
   start:
   int a;
   printf("\nEnter Number : ");
   scanf("%d",&a);
   printf(" %d! = %Lf",a,factorial(a));
   goto start;
}

long double factorial(int n){
    long double x=1;
    for(int c=1;c<=n;c++){
        x*=c;
    }
    return x;
}

