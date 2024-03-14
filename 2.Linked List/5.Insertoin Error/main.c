#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *addAtEnd(struct node *head, int data);
struct node *addAtBegin(struct node *head, int data);

int main()
{
    struct node *head = malloc(sizeof(struct node));

    head->data = 12;
    head->next = NULL;

    struct node *temp = head;
    temp = addAtEnd(temp, 56);
    temp = addAtEnd(temp, 87);
    temp = addAtEnd(temp, 12);
    temp = addAtEnd(temp, 6);

    temp = head;
    printf("The linked list is : \n");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    int beginValue;
    printf("Enter the value to add in the Begin :");
    scanf("%d", &beginValue);

    // head = addAtBegin(head, beginValue);
    addAtBegin(head, beginValue);

    temp = head;
    printf("The linked list is in main : \n");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}

struct node *addAtEnd(struct node *head, int data)
{
    struct node *temp = head;
    struct node *new_node = malloc(sizeof(struct node));

    new_node->data = data;
    new_node->next = NULL;

    temp->next = new_node;

    return new_node;
}

struct node *addAtBegin(struct node *head, int data)
{
    struct node *new_node = malloc(sizeof(struct node));

    new_node->data = data;
    new_node->next = NULL;

    new_node->next = head;

    head = new_node;

    struct node *temp = head;
    printf("The linked list is in addAtBegin: \n");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
