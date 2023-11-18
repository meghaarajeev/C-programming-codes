#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int n,a[20],top=-1;
void main()
{
    int c,i;
    printf("Enter the size of the stack:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<top;i++){
        scanf("%d",&a[i]);
    }
while(1){
    printf("Enter your choice 1.push 2.pop 3.display 4.exit");
    scanf("%d",&c);
    switch(c){
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: display();
        break;
        case 4 : exit(0);
        break;
        default : printf("Invalid Choice");
    }
}
}
void push(){
    int e;
    if(top==n-1){
        printf("Stack is full");
    }
    else{
        printf("Enter element to be pushed");
        scanf("%d",&e);
        top++;
        a[top]=e;
    }
}
void pop(){
    if(top==-1){
        printf("Stack is Empty");
    }
    else{
        printf("%d is the popped element",a[top]);
        top--;
    }
    void display(){
        int i;
        if(top==-1){
            printf("Stack is Empty");
        }
        else{
            printf("The elements of the stack are:");
            for(i=0;i<top;i++)
            {
                scanf("%d",a[i]);
            }
        }
    }
}