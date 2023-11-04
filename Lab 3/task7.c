#include<stdio.h>

struct Employee{
int id;
char name[15];
int age;
float pay;
};

int main (){
struct Employee obj;
printf("Enter Employee ID: ");
scanf("%d",&obj.id);
printf("\nEnter Employee Name: ");
scanf("%s",obj.name);
printf("\nEnter Employee Age: ");
scanf("%d",&obj.age);
printf("\nEnter Employee Pay: ");
scanf("%f",&obj.pay);
printf("\n");
printf("Display Information of Employee");
printf("\nEmployee ID: %d",obj.id);
printf("\nEmployee Name: %s",obj.name);
printf("\nEmployee Age: %d",obj.age);
printf("\nEmployee Pay: %f",obj.pay);
return 0;
}
