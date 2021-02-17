/* program to demonstrate creating and displaying linkedlist.............
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* link;
}Node;

Node* createList(int n); //creates a linked list.
void displayList(Node*); // displays the data in the list.

int main(){
    int n = 0;
    Node* head = NULL;
    printf("How many Nodes?\n");
    scanf("%d", &n);
    head = createList(n);
    displayList(head);
    return 0;
}

Node* createList(int n){
    int i=0;
    Node* head = NULL;
    Node* temp = NULL;
    Node* p = NULL;
    //individual isolated node
    while(i<n){
        temp = (Node*)malloc(sizeof(Node));
        printf("Enter data to the node - %d :\n", i+1);
        scanf("%d", &(temp->data));
        temp->link = NULL;
        
        if(head == NULL){
            head = temp; //if list is empty, then make it as first node.
        }
        else{
            p = head;
            while(p->link != NULL){
                p = p->link;
            }
            p->link = temp;
        }
        i++;
    }
    return head;
}


void displayList(Node* head){
    Node* p = head;
    while(p!=NULL){
        printf(" %d->", p->data);
        p = p->link;
    }
}
