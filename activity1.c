#include<stdio.h>
#include<stdlib.h>
#define maxsize 1000
int list[maxsize],size;
void Create()
{
    int i;
    printf("Enter size of list:\n");
    scanf("%d",&size);
    if(size>maxsize)
    printf("List overflow !!!!!!\n");
else{
    printf("Enter the element:\n");
    for(i=0;i<size;i++)
    
        scanf("%d",&list[i]);

    }
}

void Display()
{
    int i; 
    if(size==0)
        printf("List is Empty !!!!!\n");
    else{
        printf("Enter the list Element:\n");
        for(i=0;i<size;i++)
            printf("%d\t",list[i]);
    }
    printf("\n");
}
void Insert(){
    if(size==0)
    printf("List is Empty !!!!\n");
else{
    int pos,value,i;
    printf("Enter Position Where You Want To Insert New Element:");
    scanf("%d",&pos);
    printf("Enter the value to Insert :");
    scanf("%d",&value);
    if(pos>0 && pos<=size){
        for(i=size;i>=pos;i--)
        list[i]=list[i-1];
    list[pos-1]=value;
    size++;
    printf("Elemented Added !!!!\n");
    }
    else
    printf("Invalid Position !!!!\n\n");
}
}
void delete()
{
    if(size==0)
    printf("List is Empty !!!!\n");
else{
    int pos,i;
    printf("Enter Position Where You Want To Delete:");
    scanf("%d",&pos);
    if(pos>0 && pos<=size){
        for(i=pos-1;i<size;i++)
        list[i]=list[i+1];
    size--;
    printf("Element Deleted !!!!\n");
    }
    else
    printf("Invalid Position !!!!\n");

}
}
void search()
{
    if(size==0)
    printf("List Is Empty !!!!\n");
else{
    int val,i;
    printf("Enter the value to search:");
    scanf("%d",&val);
    for(i=0;i<size;i++){
        if(list[i]==val){
            break;
        }
    }
    if(i==size)
    printf("Element Not Found !!!!\n");
else
printf("Element Found !!!!\n");
}
}

int main()
{
Create();
Insert();
Display();
delete();
Display();
search();
return 0;
}