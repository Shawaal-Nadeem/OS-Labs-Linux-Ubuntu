#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>


int calculateSum(int arr[], int size)
{
int sumArr=0;
for(int i=0;i<size;i++){
	sumArr=sumArr+arr[i];
}
return sumArr;
}

int findMin(int arr[],int size){
int temp=0;
for(int i=0;i<size;i++){
for(int j=0;j<size;j++){
if(arr[i]<arr[j]){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
return arr[0];
}

int main(int argc, char *argv[])
{
printf("Length of Command Line Argument Array is : %d",argc);
int lenOfdynamicArray=argc-1;
int *arr=(int *)malloc(lenOfdynamicArray*sizeof(int));
int temp=0;
for(int i=1;i<argc;i++){
	arr[temp]=atoi(argv[i]);
	temp++;
}

printf("\n");
int sumPipe[2];
int minPipe[2];

pipe(sumPipe);
if(fork()==0){
	close(sumPipe[0]);
	int sum=calculateSum(arr,lenOfdynamicArray);
	write(sumPipe[1],&sum,sizeof(int));
	close(sumPipe[1]);	
}
else if(fork()>=1){

	pipe(minPipe);
	if (fork()==0){
	close(minPipe[0]);
	int min=findMin(arr,lenOfdynamicArray);
	write(minPipe[1],&min,sizeof(int));
	close(minPipe[1]);
	}
	else{

	close(sumPipe[1]);
	int sumRead;
	read(sumPipe[0],&sumRead,sizeof(int));
	printf("Sum of Array : %d\n",sumRead);
	close(sumPipe[0]);
	
	close(minPipe[1]);
	int minRead;
	read(minPipe[0],&minRead,sizeof(int));
	printf("Minimum Elemet of Array : %d\n",minRead);
	close(minPipe[0]);
	
	}
	

}



}

