#include <stdio.h>
int selectionsort(int a[] ,int n)
{
	int min,loc,temp,i,j;
	min=a[0];
	for (i=0;i<n;i++)
	{
		min=a[i];
		loc=i;
		for(j=i+1;j<n-1;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				loc=j;
			}
		}
		if (loc!=i)
		{
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
		}
	}
}



int main ()
{
	int n,i,a[100];

	printf("enter number element of array");
	scanf("%d",&n);
	printf("enter element of array");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("element in array");
	for (i=0;i<n;i++)
	{
		printf("\n%d\n",a[i]);
	}
	selectionsort (a,n);
	
		printf("\nsorted array\n");
	for (i=0;i<n;i++)
	{
		printf("\n%d\n",a[i]);
	}
}


