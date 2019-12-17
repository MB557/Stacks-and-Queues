#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node *next;
};

struct queue
{
    struct node *front;
    struct node *rear;
};

void quEnqueue(struct queue **temp,int element)
{
    struct node *temp2=(struct node*)malloc(sizeof(struct node));
    if(((*temp)->front)==NULL && ((*temp)->rear)==NULL)
    {
        temp2->data=element;
        temp2->next=NULL;
        ((*temp)->front)=temp2;
        ((*temp)->rear)=temp2;
    }
    else
    {
        temp2->data=element;
        temp2->next=NULL;
        ((*temp)->rear)->next=temp2;
        ((*temp)->rear)=temp2;
    }

}

void quDequeue(struct queue **temp)
{
    if(((*temp)->front)==NULL)
        printf("queue underflow\n");
    else
    {
        printf("%d\n",((*temp)->front)->data);
        ((*temp)->front)=((*temp)->front)->next;
        if((*temp)->front==NULL)
            (*temp)->rear=NULL;
    }
}

void quPrint(struct queue **temp)
{
    if((*temp)->front==NULL)
        printf("queue underflow\n");
    else
        printf("%d\n",((*temp)->front)->data);


}

int main()
{
    int t,element,n;
    scanf("%d",&t);
    struct queue *temp = (struct queue*)malloc(sizeof(struct queue));
    for(int i=0;i<t;++i)
    {
        char str[20];
        scanf("%d",&n);
        temp->front=temp->rear=NULL;
        for(int j=0;j<n;++j)
        {
            scanf("%s",str);
            if(strcmp("enqueue",str)==0)
            {
                scanf("%d",&element);
                quEnqueue(&temp,element);
            }
            else if(strcmp("dequeue",str)==0)
                quDequeue(&temp);
            else
                quPrint(&temp);
        }
    }
}
