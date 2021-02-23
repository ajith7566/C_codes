/*
	fork() process program.
*/

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
	int pid = 0;
	pid = fork();
	if(pid == 0)
		printf("Inside child process\n");
	else
		printf("Inside parent process\n");
	
	return 0;

}
