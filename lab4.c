// code to delete a node at the begining of singly linked list 

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

temp=head;

head=head->next;

free(temp);

temp=head;

while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->next;
}

return 0;
}