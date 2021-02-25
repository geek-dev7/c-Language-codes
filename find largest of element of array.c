#include <stdio.h>
#define max 100


int main()

{
int n,i,larg;
int arr[max];
printf("enter no of element=");
scanf ("%d",&n);
//scanning value given by the user
for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
//printing value given by the user
printf("vallues entered by user=");
for (i=0;i<n;i++)
{
printf("\n%d",arr[i]);
}

//largest

larg=arr[0];
for (i=0;i<n-1;i++)
{
if (larg<arr[i])
larg=arr[i];
}
printf("\nlargest value =%d",larg);


}

