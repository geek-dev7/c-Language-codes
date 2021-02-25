#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

char string[]="maam";
int len=strlen(string)-1;
int l=0;
while(len>l){
    if (string[l++]!=string[len--]){;
    printf("\nnot palindrom");
    return 0;
    }
}
printf("\n palindrom");
return 0;
}