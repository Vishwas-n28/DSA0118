// code to delete a node at the end of the  doubly linked list 

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
head->prev=NULL;
head->next=second;

second->data=20;
second->prev=head;
second->next=NULL;

temp=head;

while(temp->next!=NULL)
{
temp=temp->next;
}

temp->prev->next=NULL;
free(temp);

temp=head;

while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->next;
}

return 0;
}