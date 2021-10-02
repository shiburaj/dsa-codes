#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

struct Node * head = NULL;

void add(){
    int value;
    printf("Enter a Value:");
    scanf("%d", &value);
    struct Node * temp;

    struct Node *nt = malloc(sizeof(struct Node));
    nt->data = value;
    nt->next = NULL;

    if(head == NULL){
        head = nt;
    }else{
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = nt;
    }

    printf("Node Added.\n");
}

void display(){
    printf("LL :");
    struct Node * temp;
    temp = head;
    do{
        printf("%d-->", temp->data);
        temp = temp->next;
    }while(temp->next != NULL);
    printf("%d-->NULL", temp->data);

}

int main()
{
    int choice;
    printf("Enter an Choice:\n1.Add , 2.Display, 3. Exit\n\n");
    while(1){
        printf("Enter Choice:");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                add();
                break;
            case 2:
                display();
                break;
            case 3:
                return 0;
            default:
                printf("Wrong Option.");
        }

    }


    return 0;
}
