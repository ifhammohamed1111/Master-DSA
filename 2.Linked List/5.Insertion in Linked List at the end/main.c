#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printLinkedList(struct node *head);
void createLinkedList(int numNodes);
void createNewNode(struct node *head, int numNodes);
void printNewNode(struct node *temp);
void addAtEnd(head, newValue);

int main()
{

    int numNodes;
    printf("Enter how many nodes :");
    scanf("%d", &numNodes);

    createLinkedList(numNodes);

    return 0;
}

void createLinkedList(int numNodes)
{
    struct node *head = NULL;
    struct node *tail = NULL;

    for (int i = 0; i < numNodes; i++)
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));

        printf("Enter the %d value", i + 1);
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    printLinkedList(head);

    createNewNode(head, numNodes);

    int newValue;
    printf("Enter the new number :");
    scanf("%d", &newValue);

    addAtEnd(head, newValue);
}

void printLinkedList(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}

void createNewNode(struct node *head, int numNodes)
{
    struct node *newUserNode = (struct node *)malloc(sizeof(struct node));

    if (newUserNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    int newValue;
    printf("\nEnter new node value: ");
    scanf("%d", &newValue);

    newUserNode->data = newValue;
    newUserNode->next = NULL;

    if (head == NULL)
    {
        head = newUserNode;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newUserNode;
    }

    printLinkedList(head);
}

void printNewNode(struct node *temp)
{
    if (temp == NULL)
    {
        printf("\nList is empty");
        exit(1);
    }

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("Null\n");
}

void addAtEnd(head, newValue)
{
    struct node *next = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = newValue;
    temp->next = NULL;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while (next->next != NULL)
    {
        {
            next = next->next;
        }
    }

    next->next = temp;

    printNewNode(head);
}
