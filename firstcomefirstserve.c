#include<stdio.h>
#define max 100
int main(){
    
    int p0[max],p1[max],p2[max];
    int n=2;
    int i,j,k;
    printf("for p0");
    
    for (i=0;i<n;i++)
    {
        printf("enter at & bt");
        scanf("%d", &p0[i]);
    }
    // for ( i = 0; i < n; i++)
    // {
    //     /* code */
    //     printf("%d",p0[i]);

    // }
        printf("for p1");

        for (i=0;i<n;i++)
    {
        printf("enter at & bt");
        scanf("%d", &p1[i]);
    }

    //  for (i=0;i<n;i++)
    // {
    //     printf("enter at & bt");
    //     scanf("%d", &p2[i]);
    // }

   printf("\narrvial time of p0=%d",p0[0]);
    printf("\nturn around time of p0=%d",p0[1]);
    printf("\narrvial time of p1=%d",p1[0]);
    printf("\nturn around time of p0=%d",p1[1]);

    printf("\nwating time of p0 process =%d",p0[0]);
        int turnaroundtimeofp0=p0[1];
         int watingtimeofp1=turnaroundtimeofp0-p1[0];

    printf("\nwating time of p1=%d",watingtimeofp1);
    int turnaroundtimeofp1=p0[1]+p1[1];
    printf("\nturnaroundtimeofp1=%d",turnaroundtimeofp1);

    

    
}
