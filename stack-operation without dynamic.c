// wap to program for stack operation without dynamically

#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top=-1;

// function for inserting element in stack
void push(){
    int item;
    if(top==size-1){
        printf("stack is overflow\n");
    }
    else{
        printf("enter number to be inserted:\n");
        scanf("%d",&item);
        stack[++top]=item;

    }
}

// function for removing element from stack
void pop(){
    int item;
    if(top==-1){
        printf("stack is inderflow\n");
    }
    else{
        item=stack[top--];
        printf("%d element is deleted from stack\n",item);
    }
}

// function for display all elements in stack
void traverse(){
    int i;
    printf("elements in the stack are:\n");
    for(i=top; i>=0;i--){
        printf("%d",stack[i]);
        printf("\n");
    }
}

int main (){
    int choice ;
    while(1){
        printf("1. for push \n2. for pop \n3. for traverse \n4. for exit \n");
        printf("enter your choice\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;
         
        case 3:
            traverse();
            break;

        case 4:
        default:printf("invalid choice\n");
               exit(0);
            
        }
    }
    return 0;
}