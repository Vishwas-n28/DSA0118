// code to delete a node at the begining of a circular doubly linked list 

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
struct node *head,*second,*temp,*last,*del;

head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));

head->data=10;
head->prev=second;
head->next=second;

second->data=20;
second->prev=head;
second->next=head;

del=head;
last=head->prev;

head=head->next;

head->prev=last;
last->next=head;

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