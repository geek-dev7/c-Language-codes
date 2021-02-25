 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 int main()
 {
 int n;
 printf(" enter number to check it is prime or not=");
 scanf("%d",&n);
if(((n^n-1)%n==1)){
    printf("\n%d is prime",n);
}
else{
    printf("\n%d is not prime",n);
}

 return 0;
 }