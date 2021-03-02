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
	fp = fopen("data_10.txt", "w");
	int i=0;
	while(i<5){
		printf("Enter employee id\n");
		scanf("%d", &(e[i].id));
		printf("Enter employee name\n");
		scanf("%s", e[i].name);
		printf("Enter company name\n");
		scanf("%s", e[i].comp);
		fwrite(e+i, sizeof(e[i]), 1, fp);
		i++;
	}
	printf("Done Writing data\n");
	fclose(fp);
}

