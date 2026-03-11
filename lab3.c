// code to insert a node at the given position of singly linked list 

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
second->next=NULL;

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
temp->next=newnode;

temp=head;

while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->next;
}

return 0;
}