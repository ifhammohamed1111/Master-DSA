#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {



//    struct node *newNode = NULL;
//
//    newNode = (struct node*) malloc(sizeof (struct node));
//
//    head ->next = newNode;
//    newNode ->data = 50;
//    newNode ->next = NULL;
//
//    printf("\n%d", newNode ->data);
//    printf("\n%d", head ->next);
//    printf("\n%d", newNode ->next);

    int num, data1;

//    printf("Enter first node value");
//    scanf("%d", &data1);

    //initialize the head node as null
    struct node *head = NULL;
    struct node *tail = NULL;


    //assigning the initial size of the node
//    head = (struct node*) malloc(sizeof (struct node));

//    head ->data = data1;
//    head ->next = NULL;
//
//    printf("\n%d", head ->data);
//    printf("\n%d", head ->next);

    printf("Enter how many nodes");
    scanf("%d", &num);

    for (int i = 0; i < num; ++i) {

        int data2;

        printf("Enter %d node value", i+1);
        scanf("%d", &data2);

        struct node *new =  (struct node*) malloc(sizeof (struct node));

        new ->data = data2;
        new ->next = NULL;


        // If the list is empty, set the new node as both head and tail
        if (head == NULL) {
            head = tail = new;
        } else {
            // Otherwise, link the new node to the tail node and update the tail
            tail->next = new;
            tail = new;
        }

//        head = tail = new;
//
//        tail ->next = new;
//        tail = new;

    }

    // Display the elements of the list
    printf("Linked List: ");
    struct node *t = head;
    while (t != NULL) {
        printf("%d -> ", t->data);
        t = t->next; // Move to the next node
    }
    printf("NULL\n");










    return 0;
}
