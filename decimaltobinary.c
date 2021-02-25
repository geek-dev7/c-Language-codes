#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int binary(int number){
int rem,i=0;
int result[10];
while(number){
rem=number%2;
number=number/2;
result[i]=rem;
i++;
}
for (int j=i-1;j>=0;j--){
    printf("%d",result[j]);
}

}


int main()
{
int n,i;

printf("enter number to convert it into binary form=");
scanf(" %d",&n);
binary(n);

return 0;
}