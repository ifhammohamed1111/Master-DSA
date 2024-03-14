#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *enterNode(struct node **head, int n);
struct node *addAtPos(struct node **head, int pos, int val);

int main()
{
    struct node *head = NULL;

    int n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    struct node *temp = enterNode(&head, n);

    printf("Linked list created\n");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    printf("\nEnter which position you want to add new node and then enter the value of it: ");
    int pos, val;
    scanf("%d %d", &pos, &val);

    if (pos > 0 && pos <= n + 1)
    {
        struct node *newHead = addAtPos(&head, pos, val);
        printf("\nNew node added at position %d\n", pos);

        struct node *newTemp = newHead;
        while (newTemp != NULL)
        {
            printf("%d -> ", newTemp->data);
            newTemp = newTemp->next;
        }
        printf("NULL\n");
    }
    else
    {
        printf("\nInvalid position\n");
    }
    return 0;
}

struct node *enterNode(struct node **head, int n)
{
    struct node *tail = NULL;

    for (int i = 0; i < n; i++)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the data to be %d inserted: ", i + 1);
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (*head == NULL)
        {
            *head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    return *head;
}

struct node *addAtPos(struct node **head, int pos, int val)
{
    struct node *currNew = malloc(sizeof(struct node));
    currNew->data = val;
    currNew->next = NULL;

    if (pos == 1)
    {
        currNew->next = *head;
        *head = currNew;
        return *head;
    }

    struct node *temp = *head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("Position out of range\n");
            return *head;
        }
    }

    currNew->next = temp->next;
    temp->next = currNew;

    return *head;
}
