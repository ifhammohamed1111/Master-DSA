#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

//FIXED - METHOD 1

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = NULL;

    struct node *new = (struct node *)malloc(sizeof(struct node));

    new->data = 45;
    new->next = NULL;
    head->next = new;

    struct node *new2 = (struct node *)malloc(sizeof(struct node));

    new2->data = 35;
    new2->next = NULL;
    new->next = new2;

    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}

//FIXED - METHOD 2

HEAD - 1000
NODE 1 - 45 | 2000
NODE 2 - 50 | 3000
NODE 3 - 55 | NULL

HEAD -> LINK : 2000
HEAD -> LINK -> LINK : 3000
HEAD -> LINK -> LINK -> LINK : NULL


