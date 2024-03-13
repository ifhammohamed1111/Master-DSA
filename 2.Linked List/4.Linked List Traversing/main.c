#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverseList(struct node *);

int main()
{
    int numNodes;

    printf("Enter how many nodes you want to enter: ");
    scanf("%d", &numNodes);

    struct node *head = NULL;
    struct node *tail = NULL;

    for (int i = 0; i < numNodes; i++)
    {
        int value;
        printf("Enter the value of %d node", i + 1);
        scanf("%d", &value);

        struct node *new = (struct node *)malloc(sizeof(struct node));

        new->data = value;
        new->next = NULL;

        if (head == NULL)
        {
            head = tail = new;
        }
        else
        {
            tail->next = new;
            tail = new;
        }
    }

    traverseList(head);

    return 0;
}

void traverseList(struct node *head)
{
    int i = 0;
    struct node *temp = head;

    if (head == NULL)
    {
        printf("Linked List is empty:");
    }

    while (temp != NULL)
    {
        // printf("%d -> ", temp->data);
        temp = temp->next;
        i++;
    }

    printf("\nTraversal completed! %d\n", i);
}
