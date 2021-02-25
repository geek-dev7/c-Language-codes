#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int a,b;
printf("enter value of a and b for find it's lcm");
printf("\na=");
scanf("%d",&a);
printf("\nb=");
scanf("%d",&b);
printf("\nlcm=%d",lcm(a,b));
return 0;
}
int gcd(int a,int b){
    if (a==0){
        return b;
    }
    return gcd(b%a,a);
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}