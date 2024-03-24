#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size],top=-1;
int isEmpty(){
    return (top==size-1)?1:0;
}
int isFull(){
    return (top==size-1)?1:0;
}
void push(){
    if(isFull())
    printf("Stack Overflow !!!!\n");
else{
    top++;
    int val;
    printf("Enter the value:");
    scanf("%d",&val);
    stack[top]=val;
    printf("Element Added !!!!\n");
}
}
void show()
{
    if(isEmpty())
    printf("Stack is Empty:\n");
else{
    int i;
    printf("Stack Elements are:\n");
    for(i=top;i>=0;i--)
    printf("%d ",stack[i]);
}
printf("\n");
}
void pop(){
    if(isEmpty())
    printf("Stack is Empty!!!!\n");
else{
    int val=stack[top];
    top--;
    printf("Element %d remove from the stack\n",val);

}
}
int main(){
push();
push();
push();
show();
pop();
show();
return 0;
}