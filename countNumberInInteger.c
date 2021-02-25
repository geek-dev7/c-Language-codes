#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int n,rem,count=0;
printf("enter number to count digit in it=");
scanf("%d",&n);
while(n){
    rem=n%10;
    n=n/10;
    count++;
}
printf("%d",count);
return 0;
}