#include<stdio.h>
#include<stdlib.h>
typedef struct node node;
struct node {
    int data;
    node *prev;
    node *next;
};
node *head, *newnode;
void create(){
    node *temp;
    int add = 1;
    head = NULL;
    while(add==1){
        newnode = (node *) malloc (sizeof(node));
        printf("Enter Value\n");
        scanf("%d",&newnode->data);
        newnode->prev = NULL;
        newnode-> next = NULL;
        if(head == NULL){
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("Do you want to add more press 1\t");
        scanf("%d",&add);
    }
}
void display(){
    node *temp;
    temp = head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}
int main(){
    create();
    display();
    return 0;
}
