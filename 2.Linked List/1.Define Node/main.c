#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL;

    struct node *new = (struct node *)malloc(sizeof(struct node));

    int value;

    printf("Enter the value fo the first node:");
    scanf("%d", &value);

    new->data = value;
    new->next = NULL;

    printf("\n%d -> ", new->data);
    printf("\n%p -> ", (void *)new);
    printf("%p -> ", (void *)new->next);

    return 0;
}