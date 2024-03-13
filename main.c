#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {

    struct node *head = NULL;

    head = (struct node *) malloc(sizeof (struct node));

    head ->data = 60;
    head ->next = NULL;

    printf("\n%d -> ", head ->data);
    printf("\n%d -> ", *head);
    printf("%d -> ", head ->next);

    return 0;
}
