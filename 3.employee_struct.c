#include<stdio.h>

struct employee{
    char name[10];
    int contact;
    char Em_id[10];
};
typedef struct employee empl;

int main(){
    empl emp1;
    printf("Enter name\n");
    scanf("%s", &emp1.name);
    printf("Enter contact_number\n");
    scanf("%d", &emp1.contact);
    printf("Enter employee id\n");
    scanf("%s", &emp1.Em_id);
    printf("\n");
    printf(" Address book \n");
    printf("Employee Name = %s\n", emp1.name);
    printf("Employee contact_number = %d\n", emp1.contact);
    printf("Employee ID = %s\n", emp1.Em_id);
    
    return 0;
}