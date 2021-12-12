
#include"stdio.h"
int x;
struct node
{
    int info;
    struct node *link;
}*first,*next,*temp,*next1,*last;
void insertatfront()
{
    printf("\nEnter a value you want insert:");
    scanf("%d",&x);
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->info=x;
    if(first==NULL && last==NULL)
    {
        first=p;
        last=p;
        first->link=NULL;
        return;
    }
    last->link=p;
    p->link=first;
    first=p;
}
void display()
{
    next=first;
    while(next!=last)
    {
        printf("%d ",next->info);
        next=next->link;
    }
    printf("%d",next->info);
    printf("\n");
}
void reverse()
{
    next=first;
    next1=next->link;
    while(next1!= last)
    {
        temp=next1->link;
        next1->link=next;
        next=next1;
        next1=temp;
    }
    next1->link=next;
    first->link=last;
    last=first;
    first=next1;
}
void main()
{
    int choice;
    printf("\nCircular linked list\n");
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
            return ;
            break;
        default :
            printf("\nInvalid input");
            break;
        }
    }while(choice != 0);
}
