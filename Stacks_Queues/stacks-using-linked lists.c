
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node *next;
};

struct stack
{
    struct node *top;
};

void stPush(struct stack **temp,int element)
{
    struct node *temp2=(struct node*)malloc(sizeof(struct node));
    temp2->data=element;
    temp2->next=(*temp)->top;
    (*temp)->top=temp2;
}

void stPop(struct stack **temp)
{
    if(((*temp)->top)==NULL)
        printf("stack underflow\n");
    else
    {
        printf("%d\n",((*temp)->top)->data);
        ((*temp)->top)=((*temp)->top)->next;
    }
}

void stTop(struct stack **temp)
{
    if((*temp)->top==NULL)
        printf("stack underflow\n");
    else
        printf("%d\n",((*temp)->top)->data);


}

int main()
{
    int t,element,n;
    scanf("%d",&t);
    struct stack *temp = (struct stack*)malloc(sizeof(struct stack));
    for(int i=0;i<t;++i)
    {
        char str[20];
        scanf("%d",&n);
        temp->top=NULL;
        for(int j=0;j<n;++j)
        {
            scanf("%s",str);
            if(strcmp("push",str)==0)
            {
                scanf("%d",&element);
                stPush(&temp,element);
            }
            else if(strcmp("pop",str)==0)
                stPop(&temp);
            else
                stTop(&temp);
        }
    }
}
