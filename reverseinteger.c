#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int n,rem,result=0;
printf("enter number to reverse it");
scanf("%d",&n);

while(n){
    rem=n%10;
    n=n/10;
    result=result*10+rem;
}
printf("%d",result);
return 0;
}