#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){

pid_t id;
id=fork();
if(id==0){
printf("Child Process run\n");
}
else if(id>1){
printf("Parent Process run\n");
}
else{
printf("Fork is failed");
}
return 0;
}
