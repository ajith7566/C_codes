#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct employee{
	char name[15];
	int id;
	char comp[15];
}emp;

emp e[5];

int main(){
	FILE *fp;
	fp = fopen("data_10.txt", "r+");
	fseek(fp, 0, SEEK_SET);
	int i=0;
	while(i<5){
		fread(e+i, sizeof(e[i]), 1, fp);
		printf("%d ", e[i].id);
		printf("%s ", e[i].name);
		printf("%s\n\n", e[i].comp);
		i++; 
	}
	fclose(fp);
}
