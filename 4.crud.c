#include<stdio.h>

struct employee{
    char name[10];
    int contact;
    char em_id[10];
};

typedef struct employee emp;

int main(){
    
    // create
    emp e1;
    e1.name;
    e1.contact;
    e1.em_id;
    
    //read
    printf("Enter employee name\n");
    scanf("%s", e1.name);
    printf("Enter contact\n");
    scanf("%d", &e1.contact);
    printf("Entre employee id\n");
    scanf("%s", &e1.em_id);
    
    printf("Employee Name = %s\n", e1.name);
    printf("Employee contact_number = %d\n", e1.contact);
    printf("Employee ID = %s\n", e1.em_id);
    
    //update
    printf("Update\n");
    printf("Enter employee name\n");
    scanf("%s", e1.name);
    printf("Enter contact\n");
    scanf("%d", &e1.contact);
    printf("Entre employee id\n");
    scanf("%s", &e1.em_id);
    
    printf("Updated Employee Name = %s\n", e1.name);
    printf("updated Employee contact_number = %d\n", e1.contact);
    printf("updated Employee ID = %s\n", e1.em_id);
    
    // delete
     printf("delete\n");
    printf("delete name\n");
    scanf("%s", e1.name);
    printf("delete contact\n");
    scanf("%d", &e1.contact);
    printf("delete emp id\n");
    scanf("%s", &e1.em_id);
    
    printf("Employee Name = %s\n", e1.name);
    printf("Employee contact_number = %d\n", e1.contact);
    printf("Employee ID = %s\n", e1.em_id);
    
    return 0;
}


