#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int number;
printf("enter number till you want to find fibonicc series=");
scanf("%d",&number);
printf("%d ",fib(number));

return 0;
}

int fib(int n){
    if(n<=1){
        return n;
    }
    
    return fib(n-1)+fib(n-2);

}