#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    int numNodes;
    printf("Enter how many nodes: ");
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

    printf("Linked List: ");
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
