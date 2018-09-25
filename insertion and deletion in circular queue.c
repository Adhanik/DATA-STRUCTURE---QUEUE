#define CAPACITY 5
#include <stdio.h>
int cqueue[CAPACITY];
int front=-1,rear=-1;//HERE INDEXING FROM 0 AS OPPOSED TO IN CASE OF  normal queue.
void insert()//IN INSERTION ,WE HAVE TO INSERT ELEMENTS SO WE CHECK IF queue IS FULL OR NOT . WHEN queue IS NOT FULL, THEN ONLY WE CAN INSERT ELEMENTS 
{
    if((rear==CAPACITY-1 && front==0)  ||(front == rear+1) )//indexing from 0
    {
        printf("circular queue is full \n ");
    }
    else if(front ==-1 && rear== -1) //firstly this condition is carried out
    {
        int ele;
        printf("enter the element you want to insert \n");
        scanf("%d",&ele);
        front=rear=0;
        cqueue[rear]=ele;
    }
    else if(rear==CAPACITY-1)//we have to insert element again once the linked list has been full.this only works when delete has been called once after cqueue is full so front moves from 0 to 1
    {
        rear=0;
        int ele;
        printf("enter the element you want to insert \n");
        scanf("%d",&ele);
        cqueue[rear]=ele;
    }
    else //this condition is carried till the all elements of circularqueue has been filled
    {
        int ele;
        printf("enter the element you want to insert \n");
        scanf("%d",&ele);
        rear++;
        cqueue[rear]=ele;
    }
}

void delete()//IN DELETE, WE HAVE TO DELETE THE ELEMENTS SO WE CHECK IF WHETHER THE queue IS EMPTY OR NOT FIRST.
{
    if(front== -1 && rear== -1)
    {
        printf("the circular queue is EMPTY\n");
    }
    else if(front == rear)// whenever there is only one element left in queue,  so front and rear should again point to -1
    {
        int ele;
        ele = cqueue[front];//deleting the last element from the queue
        front=rear=-1;
    }
    else if(front == CAPACITY-1) //when last element is deleted , front should again point to 0.
    {
        int ele;
        ele= cqueue[front];
        printf("deleted element is %d",ele);
        front=0;
    }
    else
    {
        int ele;
        ele= cqueue[front];// deletion is done from top;
        front++; 
    }
}

int main()
{
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    delete();
    delete();
    insert();
    insert();
    return 0;
}
