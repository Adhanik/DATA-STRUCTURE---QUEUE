#include<stdio.h>
#define CAPACITY 5
int queue[CAPACITY] ;
int front=0,rear=0;
void insert()
{
    int ele;//inserting only one element at a time
    if(CAPACITY==rear)
    {
        printf("queue is empty");
    }
    else
    {
    printf("enter the element you want to insert");
    scanf("%d",&ele);
    queue[rear]=ele;
    rear++;
    }
    
}
void delete()
{
    if(rear==front)
    {
        printf("queue is empty");
    }
    else
    {
        printf("element deleted is %d",queue[front]);//queue follows fifo order . so always the first element to which front is pointing is deleted.
        for(int i=front;i<rear-1;i++)
        {
            queue[i]=queue[i+1];//override the elements in present location i.e queue[i]
        }
        rear--;
    }
}
void traverse()
{
    if(front== rear)
    {
        printf("queue is empty");
    }
    else
    {
        printf("queue elements are \n");
        for(int i=0;i<rear;i++)
        {
            printf(" %d \n" , queue[i]);
            
        }
    }
}

int main()
{
    insert();
    insert();
    insert();
    insert();
    insert();
    delete();
    delete();
    traverse();

    return 0;
}
