#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insert(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

struct Node *enterNode(struct Node **head, int n)
{
    struct Node *tail = NULL;

    for (int i = 0; i < n; i++)
    {
        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
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

void deleteNode(struct Node **head, int position)
{
    if (*head == NULL)
        return;

    struct Node *temp = *head;

    if (position == 1)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    for (int i = 1; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
    {
        printf("Position out of range\n");
        return;
    }

    struct Node *next = temp->next->next;

    free(temp->next);

    temp->next = next;
}

void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = NULL;

    int numNodes;
    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);

    struct node *temp = enterNode(&head, numNodes);

    // printf("Linked list created\n");
    // while (temp != NULL)
    // {
    //     printf("%d -> ", temp->data);
    //     temp = temp->next;
    // }
    // printf("NULL\n");

    printf("Original Linked List: ");
    printList(head);

    int position;
    printf("Enter the position of the node to be deleted: ");
    scanf("%d", &position);

    deleteNode(&head, position);

    printf("Updated Linked List after deletion: ");
    printList(head);

    return 0;
}
