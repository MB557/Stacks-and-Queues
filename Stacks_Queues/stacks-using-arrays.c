#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
int top;
int array[100];
};

void push(struct stack *mb, int k)
{
    int entry;
    scanf("%d",&entry);
    if (mb->top==k-1)
        printf("stack overflow \n");
    else
        mb->array[++(mb->top)]=entry;
        

}

void pop(struct stack *mb, int k)
{
    if(mb->top==-1)
        printf("stack underflow \n");
    else
        printf("%d\n",mb->array[(mb->top)--]);

}

void display(struct stack *mb, int k)
{
    if ((mb->top)==-1)
        printf("stack underflow\n");
    else
            printf("%d\n", mb->array[mb->top]);


}

int main()
{
    int t,n,k;
    struct stack mb;
    scanf("%d",&t);
    char str[5];
    for(int i=0;i<t;++i)
    {
        scanf("%d%d",&n,&k);
        mb.top=-1;
        while(n--)
        {
            scanf("%s",str);
            if (strcmp(str,"push") == 0)
                push(&mb,k);
            else if(strcmp(str,"pop")==0)
                pop(&mb,k);
            else
                display(&mb,k);

        }
    }
}
