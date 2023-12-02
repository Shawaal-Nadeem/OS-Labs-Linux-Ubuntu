#include<stdio.h>
#include<unistd.h>
int main()
{
int v=5;
if(fork()==0)
{
v++;
printf("Child Process v is %d\n",v);
}
else{
v--;
printf("Parent Process v is %d\n",v);
}

return 0;
}
