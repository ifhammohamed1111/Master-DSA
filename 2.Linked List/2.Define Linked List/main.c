#include <stdio.h>
#include <stdlib.h>

// Function declaration
int nodeCreation(int data);
void mulNodeCreation();

struct node {
    int data;
    struct node *next;
};

int main() {

    int data;
    printf("Enter the data of the head: ");
    scanf("%d", &data);

    nodeCreation(data);



    mulNodeCreation();
    return 0;
}

int nodeCreation(int data){
    struct node *newNode = (struct node *) malloc(sizeof (struct node));

    if(newNode == NULL) {
        printf("Memory allocation error..");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;

    printf("\n%d -> ", newNode->data);
    printf("\n%p -> ", (void*)newNode);
    printf("%p -> ", (void*)newNode->next);

    return 0;
}

void mulNodeCreation() {

    int numNodes;

    printf("Enter how many nodes: ");
    scanf("%d", &numNodes);

    // Initialize the head & tail node as null
    struct node *head = NULL;
    struct node *tail = NULL;

    for (int i = 0; i < numNodes; ++i) {
        int value;
        printf("Enter the %d value: ", i+1);
        scanf("%d", &value);

        struct node * new = (struct node *) malloc(sizeof (struct node));

        new ->data = value;
        new ->next = NULL;

        if(head == NULL) {
            head = tail = new;
        } else {
            tail ->next = new;
            tail = new;
        }
    }

    printf("Linked List: ");
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next; // Move to the next node
    }
    printf("NULL\n");

}
