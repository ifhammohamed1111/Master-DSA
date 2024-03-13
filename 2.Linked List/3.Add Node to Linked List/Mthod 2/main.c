#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->next = NULL;

    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = 50;
    new->next = NULL;
    head->next = new;

    new = malloc(sizeof(struct node));
    new->data = 55;
    new->next = NULL;
    head->next->next = new;

    new = malloc(sizeof(struct node));
    new->data = 553;
    new->next = NULL;
    head->next->next->next = new;

    printf("linked list : ");
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}