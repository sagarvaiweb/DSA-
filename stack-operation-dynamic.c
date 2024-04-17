// wap to perform stack operations dynamically 

#include<stdio.h>
#include<stdlib.h>
#define size 100

struct stack{
   int stack[size];
   int top;
};

// function for checking and inserting element in stack
void push(struct stack *obj1){
    int item;
    if(obj1->top==size-1){
        printf("stack is overflow and exit\n");

    }
    else{
        printf("enter element to be inserted=");
        scanf("%d",&item);
        obj1->stack[++obj1->top]=item;
       
    }
}

// function for checking and removing element from stack
void pop(struct stack *obj2){
    int item;
    if(obj2->top==-1){
        printf("stack is underflow \n");
    }
    else{
        int item= obj2->stack[obj2->top--];
        printf("%d element is removed form stack\n",item);
    }
}

// function for traversing each element in stack
void peek(struct stack *obj3){
    int i;
    
   if(obj3->top==-1){
    printf("stack is empty\n");
   }

   else{
    printf(" all elements in stack :\n");
    for( i=obj3->top; i>=0; i--){
        printf("%d",obj3->stack[i]);
        printf("\n");
    }
    
   }
}


int main(){
    int choice ;
    struct stack *obj;

    obj=(struct stack*) malloc(100* sizeof(struct stack));

    obj->top=-1;

     while(1){
    printf("1.for push \n2.for pop \n3.for peek \n4.for exit\n");

     printf("enter your choice\n");
     scanf("%d",&choice);

        switch(choice){
            case 1:

            push(obj);
            break;

            case 2:

            pop(obj);
            break;

            case 3:

            peek(obj);
            
            break;

            case 4:
           
            default: 
            printf("your choice is invalid \n");
            exit(0);

        }
        printf("press number from 1 to 3 for stack operation and press 4 for exit\n");
     } 

     return 0;
}
