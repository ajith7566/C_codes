#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* next;
}node;

node* front = NULL;
node* rear  = NULL;

void enqueue(int);
void dequeue();
void display();

int main(){
	int choice, value;
	while(1){
		printf("----------- QUEUE --------------\n");
		printf("1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4. EXIT\n");
		printf("Enter your choice\n");
		scanf("%d", &choice);
		
		switch(choice){
			case 1: printf("Enter the value to enqueue\n");
					scanf("%d", &value);
					enqueue(value);
					break;
					
			case 2:
					dequeue();
					break;
					
			case 3:
					display();
					break;
					
			case 4:
					exit(0);
					break;
			default:
					printf("Wrong choice, try again!!!!!\n\n");
					break;
		}
	}
}

void enqueue(int val){
	//create a node.
	node* temp;
	temp = (node*)malloc(sizeof(node));
	temp->data = val;
	temp->next = NULL;
	// if it is first node.
	if(front == NULL && rear == NULL)
		front =  rear = temp;
	else{
		rear->next = temp;
		rear = temp;
	}
}

void dequeue(){
	//used to free first node after dequeue.
	node* temp;
	if(front == NULL)
		printf("Queue is empty. can't perform dequeue\n");
	else{
		// take backup
		temp = front;
		
		//make the front node point to the next node.
		//logical remove the front element.
		front = front->next;
		
		// if front == NULL then set rear == NULL.
		if(front == NULL)
			rear = NULL;
		
		// free the first node.
		free(temp);		
	}
}

void display(){
	node *temp = front;
    while(temp)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}