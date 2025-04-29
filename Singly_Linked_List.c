#include<stdio.h>
#include<stdlib.h>

typedef struct node node;
struct node{
    int data;
    node *address; 
};
node *start, *newnode, *temp;

void Create(){
    int n = 1;
    start = NULL;
    while (n == 1)
    {
        newnode = (node*) malloc (sizeof (node));
        printf("Enter Value: \t");
        scanf("%d",&newnode->data);
        newnode->address = NULL;
        if(start == NULL)
        {
            start = newnode;
            temp = newnode;
        }
        else{
            temp->address=newnode;
            temp = newnode;
        }
        printf("To add more press 1:\t");
        scanf("%d",&n);
    }   
}
void Display(){
    temp = start;
    printf("[");
    while(temp != NULL){
        printf(" %d ",temp->data);
        temp = temp->address;
    }
    printf("]");
}
int main(){
    Create();
    Display();
    return 0;
}


