
int main(){
int i,len,etd;
int arr[100];
printf("enter length of array");
scanf("%d",&len);
for (int i=0;i<=len-1;i+=1){
    scanf("%d",&arr[i]);
}
printf("before delete");
for (int i=0;i<=len-1;i+=1){
    scanf("%d",&arr[i]);
}
printf("enter number to del from array");
scanf("%d%d",&etd);

printf("after delete");

del(arr,etd);

}
