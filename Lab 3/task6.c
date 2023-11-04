#include<stdio.h>
#include<stdlib.h>
int main(){
int *arr;
int sizeArr;
int temp;
printf("Enter Size of Array: ");
scanf("%d",&sizeArr);
arr=(int*)malloc(sizeArr*sizeof(int));
printf("Enter Numbers in Array:\n");
for(int i=0;i<sizeArr;i++){
scanf("%d",&arr[i]);
}
// Bubble Sorting
for(int i=0;i<sizeArr;i++){
for(int j=0;j<sizeArr;j++)
{
if(arr[i]<arr[j]){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("Second Highest Number in Array is %d",arr[1]);
printf("\n");
return 0;
}
