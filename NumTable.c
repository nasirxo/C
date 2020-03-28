#include <stdio.h>
int table(int n);

int main()
{ 
    int y[]= {5,7,8,9,7,4};
    printf("%d",sizeof(y)/sizeof(y[0]));
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    table(num);
}

int table(int n){
    printf("===[Table of %d]===\n",n);
    for(int i=1;i<=10;i++){
      printf("    %d x %d = %d \n",n,i,n*i);
    } 
    printf("==================\n"); 
}
