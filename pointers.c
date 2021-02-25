#include<stdio.h>
int main()
{
    int a=5;
    int *ptr=&a;
    printf("value=%d",a);
    printf("\naddress=%d",ptr);
    printf("\naddress+1=%d",ptr+1); 
    return 0;
}