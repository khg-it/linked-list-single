# include <stdio.h>
# include <stdlib.h>

struct node{
            int data;
            struct node *next;
};
struct node *head=0,*temp;
int getlen(void);


void creation()
{
      int choice=1;
      while(choice)
      {
        struct node *newnode;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("\n enter the data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
           temp->next=newnode;
           temp=newnode;

        }
        printf("do u want to continue press 1 else 0: ");
        scanf("%d",&choice);

    }
}
void printlinkedlist()
{
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("\n %d",ptr->data);
        ptr=ptr->next;
    }
}
void insertatbeg(int x)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(head==0)
    {
        printf("\n linked list is empty");
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }

}
void insertatend(int x)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(head==0)
    {
        printf("\n linked list is empty");
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }

}
int getlen()
{
    int count=0;
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    return count;

}
void insertatspe(int x)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    struct node *ptr=head;
    int pos,i=1;
    printf("\n enter the position: ");
    scanf("%d",&pos);
    int len=getlen();
    printf("%d",len);
    if((pos<1))
    {
        printf("\n invalid position");
    }
    else if(pos==1)
    {
        insertatbeg(x);
    }
    else
    {

        while(i<(pos-1))
        {
            ptr=ptr->next;
            i++;
        }
        newnode->next=ptr->next;
        ptr->next=newnode;

    }
}
void delatbeg()
{
    struct node *temp=head;
    head=head->next;
    printf("\n deleted element is %d",temp->data);
    free (temp);
}
/*void delatend()
{
    struct node *ne=head;
    struct node *ptr;
    while(ne->next!=NULL)
    {
        ptr=ne;
        ne=ne->next;
    }
    ptr->next=NULL;
    free (ne);
}*/
void delatend()
{
    struct node *ne=head;
    struct node *ptr=head->next;
    if(head==NULL)
    {
        printf("\n linked list is empty");
    }
    else
    {
        while(ne->next!=temp)
        {
            ne=ne->next;
            ptr=ptr->next;

        }

        printf("\n deleted element is %d",ptr->data);
        free(ptr);
        ne->next=0;
    }
}
void delatspec()
{
struct node *newnode=(struct node *)malloc(sizeof(struct node));

    struct node *ptr=head;
    struct node *get=head->next;
    int pos,i=1;
    printf("\n enter the position: ");
    scanf("%d",&pos);
    int len=getlen();
    printf("%d",len);
    if((pos<1))
    {
        printf("\n invalid position");
    }
    else if(pos==1)
    {
        delatbeg();
    }
    else
    {
         while(i<(pos-1))
        {
            ptr=ptr->next;
            get=get->next;
            i++;
        }
        ptr->next=get->next;
        free(get);
        }
}

int main()
{
    creation();
    /*struct linked *first,*second,*third,*fourth,*five;
    first=(struct linked *)malloc(sizeof(struct linked));
    second=(struct linked *)malloc(sizeof(struct linked));
    third=(struct linked *)malloc(sizeof(struct linked));
    fourth=(struct linked *)malloc(sizeof(struct linked));
    five=(struct linked *)malloc(sizeof(struct linked));
    head=first;
    first->data=1;
    first->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=five;
    five->data=5;
    five->next=NULL;*/
    printlinkedlist();
    insertatbeg(7);
    printf("\n linked list after insertion at beginning.");
    printlinkedlist();
    printf("\n linked list after insertion at end");
    insertatend(10);
    printlinkedlist();
    insertatspe(30);
    printf("\n linked list after insertion at specific position: ");
    printlinkedlist();
    delatbeg();
    printf("\n linked list after deletion at beg");
    printlinkedlist();
    delatend();
    printf("\n linked list after deletion at end");
    printlinkedlist();
    delatspec();
    printf("\n linked list after deletion  at specific position: ");
    printlinkedlist();

     return 0;

}
