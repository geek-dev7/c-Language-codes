
#include <stdio.h>

int main ()
{
	int a[100],n,i;
	printf("element in arra");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble (a,n);
	printf("sorted line us as follows");
	for (i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}

}
void bubble (int a[],int n)
{
	int temp,i,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])

			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
