/*
	Program to demonstrate Linked List.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node* start = NULL;
void create_list(int); // starts by creating a list.
void display_list(node*); // displays the contents in the list.
void insert_begin(); // inserts data in the beginning.

int main(){
    int choice, number;
    printf("\t\tLinked List\n\n");
    while(1){
        printf("-------------------------------------------\n");
        printf("1. Create List\n");
        printf("2. Display Linked List\n");
        printf("3. Insert a data at the begining of the link\n");
        printf("4. Exit\n");
        
        printf("\nEnter you choice\n");
        scanf("%d", &choice);
        switch(choice){
            case 1: printf("Enter the number of nodes\n");
                    scanf("%d", &number);
                    create_list(number);
                    break;
            case 2:
                    display_list(start);
                    break;
            case 3: 
                    insert_begin();
                    break;
            case 4:
                    exit(0);
                    break;
            default : printf("Wrong choice, try again\n");
                    break;
        }
    }
}

void create_list(int n){
    int i = 0;
    node* temp;
    node* p;
    
    while(i<n){
        temp = (node*)malloc(sizeof(node));
        printf("Enter the data to the node : %d\n", i+1);
        scanf("%d", &(temp->data));
        temp->next = NULL;
        if(start == NULL){
            start = temp;
        }
        else{
            p = start;
            while(p->next!= NULL){
                p = p->next;
            }
            p->next = temp;
        }
        i++;
    }
}

void display_list(node* start){
    node* p = start;
    if(start == NULL){
        printf("List is empty\n");
        return;
    }
    else{
        printf("\nThe elements in the list are : \n");
        while(p!=NULL){
            printf("%d->", p->data);
            p = p->next;
        }
        printf("\n");
    }
}

void insert_begin(){
    node* temp;
    temp = (node*)malloc(sizeof(node));
    if(temp == NULL){
        printf("\n Out of memory \n");
        return;
    }
    printf("Enter the data for the node\n");
    scanf("%d", &(temp->data));
    temp->next = NULL;
    if(start == NULL){
        start = temp;
    }
    else{
        temp->next = start;
        start = temp;
    }
}











