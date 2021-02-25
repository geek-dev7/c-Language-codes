#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int n,sum=0;
printf("enter number=");
scanf("%d",&n );

//iterative aproche
// for(int i=0;i<=n;i++){
//     sum=sum+i;
// }

//O(1) aproche using formula 

sum=(n*(n+1)/2);

printf("\n%d",sum);
return 0;
}