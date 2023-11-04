#include<stdio.h>
#include<stdbool.h>
int main (){

int num;
bool isPrime=true;
printf("Enter Number : ");
scanf("%d",&num);
if(num==0||num==1){
isPrime=false;
}
for(int i=2;i<=num/2;++i){
if(num%i==0){
isPrime=false;
break;
}
}
if(isPrime==true){
printf("\n");
printf("Prime Number");
}
printf("\n");
return 0;
}
