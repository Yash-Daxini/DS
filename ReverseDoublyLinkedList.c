#include"stdio.h"
int x;
struct node
{
    int info;
    struct node *lptr;
    struct node *rptr;
}*first,*next,*temp;
void insertatfront()
{
    printf("\nEnter a value you want insert:");
    scanf("%d",&x);
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->info=x;
    if(first==NULL)
    {
        first=p;
        first->rptr=NULL;
        first->lptr=NULL;
        return;
    }
    p->rptr=first;
    p->lptr=NULL;
    first->lptr=p;
    first=p;
}
void display()
{
    next=first;
    while(next->rptr != NULL)
    {
        printf("%d ",next->info);
        next=next->rptr;
    }
    printf("%d",next->info);
    printf("\n");
}
void reverse()
{
    next=first;
    while(next->rptr != NULL)
    {
        temp=next->rptr;
        next->rptr=next->lptr;
        next->lptr=temp;
        next=next->lptr;
    }
    next->rptr=next->lptr;
    next->lptr=NULL;
    first->rptr=NULL;
    first=next;
}
void main()
{
    int choice;
    printf("\nDoubly linked list\n");
    do
    {
        printf("\n\nEnter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insertatfront();
            break;
        case 2:
            display();
            break;
        case 3:
            reverse();
            break;
        case 0:
            return 0;
            break;
        default :
            printf("\nInvalid input");
            break;
        }
    }while(choice != 0);
}

