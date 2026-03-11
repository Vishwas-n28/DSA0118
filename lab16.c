// code to delete a node at the begining of a circular linked list 

#include <stdio.h>
#include <stdlib.h>

struct node
{
int data;
struct node *next;
};

int main()
{
struct node *head,*second,*temp,*del;

head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));

head->data=10;
head->next=second;

second->data=20;
second->next=head;

del=head;

temp=head;
while(temp->next!=head)
{
temp=temp->next;
}

head=head->next;
temp->next=head;

free(del);

temp=head;

do
{
printf("%d ",temp->data);
temp=temp->next;
}
while(temp!=head);

return 0;
}