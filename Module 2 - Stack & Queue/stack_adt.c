#include<stdio.h>

#define SIZE 10
int stack[SIZE];
int top = -1;

int isEmpty();
int isFull();
void push(int);
int pop();
void display();

int main(){
    int choice,value;
    while(1)
    {
        printf("\n\n***** MENU *****\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the value to be insert: ");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("\nWrong selection!!! Try again!!!");
        }
    }

    return 0;
}


int isEmpty(){
    if(top == -1)
        return 1;
    else
        return 0;
}
int isFull(){
    if(top == SIZE-1)
        return 1;
    else
        return 0;
}
void push(int val){
    if(isFull()){
        printf("Stack is Full");

    }else{
        top++;
        stack[top] = val;
    }
}
int pop(){
    int val;
    if(isEmpty()){
        printf("Stack is Empty");
    }
    val = stack[top];
    top--;
}
void display(){
    int i;
    if(isEmpty()){
        printf("Stack is Empty");
    }
    for (i=top;i>=0;i--){
        printf("%d\t", stack[i]);
    }
}

