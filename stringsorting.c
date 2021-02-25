#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
int main()
{
char str[max];
printf("enter string=");
gets(str,max);
puts(str);
int len=strlen(str);
char temp;
for(int i=0;i<len-1;i++){
    for(int j=i+1;j<len;j++){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}
puts(str);
return 0;
}