#include<stdio.h>
#include<stdlib.h>

int main(){
	int pid;
	pid = fork();
	
	if(pid == 0){
		system("ls -l");
		sleep(10);
	}
	else{
		sleep(3);
	}
	return 0;

}
