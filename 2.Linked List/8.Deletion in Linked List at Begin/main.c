#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *enterNode(struct node **head, int n);
void deleteAtBegin(struct node **head);
void deleteAtEnd(struct node **head);
void deleteLast(struct node **head);

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

    deleteAtBegin(&head);
    printf("Linked list updated after deleting first node\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    deleteAtEnd(&head);
    printf("Linked list updated after deleting last node\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    deleteLast(&head);
    printf("Linked list updated after deleting last node by single pointer\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

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

void deleteAtBegin(struct node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteAtEnd(struct node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct node *temp = *head;
    struct node *previous = NULL;

    while (temp->next != NULL)
    {
        previous = temp;
        temp = temp->next;
    }

    if (previous == NULL)
    {
        free(temp);
        *head = NULL;
    }
    else
    {
        previous->next = NULL;
        free(temp);
    }
}

void deleteLast(struct node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct node *temp = *head;
    struct node *previous = NULL;

    while (temp->next != NULL)
    {
        previous = temp;
        temp = temp->next;
    }

    if (previous == NULL)
    {
        free(temp);
        *head = NULL;
    }
    else
    {
        free(temp);
        previous->next = NULL;
    }
}
