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
	int search;
	printf("Enter the Id to update\n");
	scanf("%d", &search);
	int i = 0;
	while(i<5){
		fread(e+i, sizeof(e[i]), 1, fp);
		if(search == e[i].id){
			printf("Record found\n\n");
			printf("Enter new name\n");
			scanf("%s", e[i].name);
			printf("Enter company name\n");
			scanf("%s", e[i].comp);
			fseek(fp, sizeof(e[i])*i, SEEK_SET);
			fwrite(e+i, sizeof(emp), 1, fp);
			break;
		}else{
			printf("Record doesnt exist\n");
		}
		i++;
	}
	fclose(fp);
}
