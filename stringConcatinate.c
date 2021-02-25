#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char s1[100]="hello";
char s2[]="world";
int length=0,j;
while(s1[length]!='\0'){
    length++;
}
for(j=0;s2[j]!='\0';++j,++length){
    s1[length]=s2[j];
}
s1[length]='\0';

puts(s1);
return 0;
}