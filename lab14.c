// code to insert a node at the end of a circular linked list 

#include <stdio.h>
#include <stdlib.h>

struct node
{
int data;
struct node *next;
};

int main()
{
struct node *head,*second,*temp;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));

head->data=10;
head->next=second;

second->data=20;
second->next=head;

struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));

newnode->data=30;

temp=head;
while(temp->next!=head)
{
temp=temp->next;
}

temp->next=newnode;
newnode->next=head;

temp=head;

do
{
printf("%d ",temp->data);
temp=temp->next;
}while(temp!=head);

return 0;
}