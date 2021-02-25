#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int a,b;
printf("enter value of a and b for find it's gcd or hcf");
printf("\na=");
scanf("%d",&a);
printf("\nb=");
scanf("%d",&b);
printf("\ngcd=%d",gcd(a,b));
return 0;
}
int gcd(int a,int b){
    if (a==0){
        return b;
    }
    return gcd(b%a,a);
}