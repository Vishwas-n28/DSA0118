// code to insert a node at the begining of a circular doubly linked list 

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
struct node *head,*second,*temp,*last;

head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));

head->data=10;
head->prev=second;
head->next=second;

second->data=20;
second->prev=head;
second->next=head;

struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));

newnode->data=5;

last=head->prev;

newnode->next=head;
newnode->prev=last;

last->next=newnode;
head->prev=newnode;

head=newnode;

temp=head;

do
{
printf("%d ",temp->data);
temp=temp->next;
}
while(temp!=head);

return 0;
}