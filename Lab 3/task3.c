#include<stdio.h>
int main(){
int arr[20];
int arrLen=0;
int temp=0;
printf("Enter Numbers:-\n");
for(int i=0;i<20;i++){
scanf("%d",&arr[i]);
arrLen++;
if(arr[i]==-99){
arrLen--;
break;
}
}
printf("\nThe Entered Sequence is: ");
for(int i=0;i<arrLen;i++){
printf("%d",arr[i]);
printf(" ");
}
for(int i=0;i<arrLen;i++){
for(int j=0;j<arrLen;j++){
if(arr[i]<arr[j]){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("\nUpdated Sequence is: ");
for(int i=0;i<arrLen;i++){
printf("%d",arr[i]);
printf(" ");
}
return 0;
}
