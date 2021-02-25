#include <stdio.h>
#define max 100


int main()

{
int n,i,j,temp;
int arr[max];
printf("enter no of element");
scanf ("%d",&n);
//scanning value given by the user
for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
//printing value given by the user
printf("vallues entered by user");
for (i=0;i<n;i++)
{
printf("\n%d",arr[i]);
}

//ascending


for (i=0;i<n-1;i++)
{

for (j=i+1;j<n-1;j++)
{
if(arr[i]<arr[j]);
temp=arr[j];

 arr[i]=arr[j];
arr[j]=temp;
}

}

printf("\n\n\n");
for (i=0;i<n;i++)
{
printf("\n%d",arr[i]);
}



}


