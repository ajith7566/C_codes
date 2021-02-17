// program to simulate stack in C
#include<stdio.h>
#include<stdlib.h>
void menu();
void push();
void pop();
void print();

int stack[5];
int top=-1;
int choice=0;
int size = 5, element;
    
int main(){
    
    while(choice!=4){
        menu();
        printf("Enter your choice \n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                    if(top == size-1){
                        printf("Stack is full, can't push values\n");
                        break;
                    }
                    else{
                        push();
                    }
                    break;
            case 2:
                    if(top == -1){
                        printf("Stack is empty, can't pop values\n");
                        break;
                    }
                    else{
                        pop();
                    }
                    break;
            case 3:
                    print();
                    break;
            case 4:
                    if(choice == 4)
                        exit(0);
            default: printf("\nWrong choice, Try again!!\n");
                    break;
        }
    }
}

void menu(){
    printf("Enter your choice\n");
    printf("1.Push \n2.Pop \n3.print \n4.Exit\n");
}

void push(){
    printf("Push a value: \n");
    scanf("%d", &element);
    ++top;
    stack[top] = element;
    printf("Pushed %d\n", element);
}

void pop(){
    printf("Pop a value: %d\n", element);
   // scanf("%d", &element);
    --top;
}
    
void print(){
    printf("------------STACK-------------\n");
    for(int i=top-i; i>=0; --i){
        printf("%d \n", stack[i]);
    }
    printf("------------STACK-------------\n");
}