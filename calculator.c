#include<stdio.h>

void sum(int n1,int n2){
printf("%d",n1);
printf("%d",n2);
int res=n1+n2;
printf("%d",res);
printf("\n");
}
void sub(int n1,int n2){
printf("%d",n1-n2);
printf("\n");
}
void mul(int n1,int n2){
printf("%d",n1*n2);
printf("\n");
}
void div(int n1,int n2){
printf("%d",n1/n2);
printf("\n");
}

int main(){
int num1,num2;
char operator;
printf("Enter First Number : ");
scanf("%d",&num1);
printf("Enter Second Number : ");
scanf("%d",&num2);
printf("Enter Operator : ");
scanf("%s",&operator);

if(operator=='+'){
printf("Adding");
sum(num1,num2);
}
else if(operator=='-'){
printf("Subtracting");
sub(num1,num2);
}
else if(operator=='*'){
printf("Multiplying");
mul(num1,num2);
}
else if(operator=='/'){
printf("Dividing");
div(num1,num2);
}
else{
printf("Wrong Operator");
}
return 0;
}
