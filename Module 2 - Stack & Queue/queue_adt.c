#include<stdio.h>

#define SIZE 10
int queue[SIZE];
int front = -1;
int rear = -1;

int isEmpty();
int isFull();
void enQueue(int);
int deQueue();
void display();

int main(){
    int choice,value;
    while(1)
    {
        printf("\n\n***** MENU *****\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the value to be insert: ");
                scanf("%d",&value);
                enQueue(value);
                break;
            case 2:
                deQueue();
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
    if(front == rear)
        return 1;
    else
        return 0;
}
int isFull(){
    if(rear == SIZE-1)
        return 1;
    else
        return 0;
}
void enQueue(int val){
    if(isFull()){
        printf("Queue is Full");

    }else{
        rear++;
        queue[rear] = val;
    }
}
int deQueue(){
    int val;
    if(isEmpty()){
        printf("Queue is Empty");
    }
    front++;
    return queue[front];
}
void display(){
    int i;
    if(isEmpty()){
        printf("Queue is Empty");
    }
    for (i=front+1;i<=rear;i++){
        printf("%d\t", queue[i]);
    }
}

