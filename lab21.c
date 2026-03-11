// code to insert a node at the given position  of a circular doubly linked list 

#include <stdio.h>
#include <stdlib.h>

struct node
{
int data;
struct node *prev;
struct node *next;
};

int main()
{
struct node *head,*second,*temp;

head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));

head->data=10;
head->prev=second;
head->next=second;

second->data=20;
second->prev=head;
second->next=head;

int pos=2,i;

struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));

newnode->data=15;

temp=head;

for(i=1;i<pos-1;i++)
{
temp=temp->next;
}

newnode->next=temp->next;
newnode->prev=temp;

temp->next->prev=newnode;
temp->next=newnode;

temp=head;

do
{
printf("%d ",temp->data);
temp=temp->next;
}
while(temp!=head);

return 0;
}