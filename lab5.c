#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* head = NULL;

void deleteBeginning() {
    if (head == NULL)
        return;
    struct Node *temp = head;
    head = head->next;
    free(temp);
}

void deleteEnd() {
    if (head == NULL)
        return;
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    struct Node *temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;
    free(temp->next);
    temp->next = NULL;
}

void deletePosition(int pos) {
    if (head == NULL)
        return;
    if (pos == 1) {
        deleteBeginning();
        return;
    }
    struct Node *temp = head;
    for (int i = 1; i < pos - 1 && temp->next != NULL; i++)
        temp = temp->next;
    if (temp->next == NULL)
        return;
    struct Node *del = temp->next;
    temp->next = del->next;
    free(del);
}

void display() {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10; head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 20; head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 30; head->next->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->next->data = 40; head->next->next->next->next = NULL;

    deleteBeginning();
    deleteEnd();
    deletePosition(2);

    display();

    return 0;
}
