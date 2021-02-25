#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[]="hellonw";
    char b[]="";
    char temp;
    int c,i,j;
    int len=strlen(a);

    printf("%s",a);
    printf("\n%d",len);3

    // char b[len]="";
    
    for (i=0;i<(len/2)-1;i++){
        temp=a[i];
        a[i]=a[len-1-i];
        a[len-1-i]=temp;
        
    }
   
    printf("\n%s",a);
    printf("\n%s\n",b); 
return 0;
}