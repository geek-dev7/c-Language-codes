#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int number;
printf("'enter number to check its amstrong or not=");
scanf("%d",&number);
if(checkamstrong(number)==number){
    printf("\nnumber %d is amstrong number",number);
}
else{
    printf("\nnumber %d is not amstrong number",number);
}


return 0;
}

int checkamstrong(int n){
    int i=0,check=0;
    while(n){
    i=n%10;
    check=check+(i*i*i);
    // printf("\ni=%d",i);
    n=n/10;
    // printf("\nn=%d",n);
    
}
return check;
}