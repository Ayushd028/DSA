#include<stdio.h>
#include<stdlib.h>

typedef struct node node;
struct node{
    int data;
    node *address; 
};
node *Top=NULL, *newnode, *temp;

void Create(){
    int n = 1;
    while (n == 1)
    {
        newnode = (node*) malloc (sizeof (node));
        printf("Enter Value: \t");
        scanf("%d",&newnode->data);
        newnode->address = NULL;
        if(Top == NULL)
        {
            Top = newnode;
            temp = newnode;
        }
        else{
            Top = newnode;
            Top->address=temp;
            temp=Top;
        }
        printf("To add more press 1:\t");
        scanf("%d",&n);
    }   
}

void delete(){
    int pop = 1;
    if(Top!=NULL){
        printf(" %d is deleted\n",newnode->data);
        newnode = newnode->address;
    }
    else{
        printf("Stack is underflow");
    }
}
void Display(){
    newnode = Top;
    while(newnode != NULL){
        printf(" %d \n",newnode->data);
        newnode=Top;
        Top = Top->address;
    }
}
int main(){
    int push, pop, peak;

    printf("1. To add more\n\n");
    printf("2. To delete\n\n");
    printf("3. To display\n\n");
    
    scanf("%d",&push); 
    scanf("%d",&pop);
    scanf("%d",&peak); 
    if(push==1){
        Create();
    }
    else if(pop==2){
        delete();
    }
    else if(peak==3){
        Display();
    }
    
    
    return 0;
}