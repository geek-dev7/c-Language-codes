#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fact(int n){
   if (n==0){
       return 1;
   }
    return n*fact(n-1);

    
}


int main()
{
int n;
printf("enter a number to find factorial=");
scanf("%d",&n);
printf("%d",fact(n));
// printf("%d",n);
return 0;
}