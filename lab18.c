// code to delete a node at the given position of a circular linked list 

#include <stdio.h>
#include <stdlib.h>

struct node
{
int data;
struct node *next;
};

int main()
{
struct node *head,*second,*temp,*prev;

head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));

head->data=10;
head->next=second;

second->data=20;
second->next=head;

int pos=2,i;

temp=head;

for(i=1;i<pos;i++)
{
prev=temp;
temp=temp->next;
}

prev->next=temp->next;

free(temp);

temp=head;

do
{
printf("%d ",temp->data);
temp=temp->next;
}
while(temp!=head);

return 0;
}