#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct queue{
int front;
int rear;
int array[100];
};

void enqueue(struct queue *mb, int k,int element)
{
    if(((mb->front)==(mb->rear) + 1) || (mb->front==0 && mb->rear==k-1))
        printf("queue overflow\n");
    else if(k==0)
        printf("queue overflow\n");
    else
    {
        if(mb->rear==-1)
        {
        mb->rear=0;
        mb->front=0;
        mb->array[((mb->rear))]=element;
        return;
        }

        else if(mb->rear==k-1)
            {
                mb->rear=0;
                mb->array[((mb->rear))]=element;
                return;
            }
        else
            mb->array[(++(mb->rear))]=element;
    }
}

void dequeue(struct queue *mb, int element, int k)
{
    if(mb->front==-1)
        printf("queue underflow\n");

    else
    {
        printf("%d\n",mb->array[(mb->front)]);
        if(mb->front==mb->rear)
            {
                mb->front=mb->rear=-1;
            }
        else
        {
            if(mb->front == k-1)
                mb->front = 0;
            else
                (mb->front)++;
        }
    }
}

void display(struct queue *mb, int k)
{
    if ((mb->front)==-1)
        printf("queue underflow\n");
    else
        printf("%d\n", mb->array[(mb->front)]);
}

int main()
{
    int t,n,k,element;
    struct queue mb;
    scanf("%d",&t);
    char str[10];
    for(int i=0;i<t;++i)

    {
        scanf("%d%d",&n,&k);
        mb.front=-1;
        mb.rear=-1;
        while(n--)
        {
            scanf("%s",str);
            if (strcmp(str,"enqueue") == 0)
                {
                    scanf("%d",&element);
                    enqueue(&mb,k,element);
                }
            else if(strcmp(str,"dequeue")==0)
                dequeue(&mb,element,k);
            else
                display(&mb,k);

        }
    }
}
