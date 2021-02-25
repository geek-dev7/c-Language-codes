#include<stdio.h>

void insert(int arr[],int len,int ni,int np){
    for (int i=len;i>=len;--i){
            arr[i+1]=arr[i];

    }
    arr[np]=ni;
    if (np>len){
        printf("not valid");
    }
    len++;
    for (int i=0;i<=len-1;i+=1){
    printf("%d",arr[i]);
}


}

int main(){
int i,len,pos,num;
int arr[100],ni,np;
printf("enter length of array");
scanf("%d",&len);
for (int i=0;i<=len-1;i+=1){
    scanf("%d",&arr[i]);
}

printf("enter number to insert and position");
scanf("%d%d",&ni,&np);
--np;

insert(arr,len,ni,np);

}






