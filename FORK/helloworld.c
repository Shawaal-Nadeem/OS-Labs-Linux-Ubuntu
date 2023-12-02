#include<stdio.h>
#include<unistd.h>
int main(){

printf("Hello");
fork();
printf("World");
return 0;
}
