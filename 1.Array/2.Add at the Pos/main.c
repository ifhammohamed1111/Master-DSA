#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int arr[10], pos, data, i, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    printf("Enter data to insert: ");
    scanf("%d", &data);

    printf("Enter the elements of the array :");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    n = addAtPos(arr, pos, data, n);

    for (int j = 0; j < n; j++)
    {
        printf("%d -> ", arr[j]);
    }
}

int addAtPos(int arr[], int pos, int data, int n)
{
    for (int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = data;
    return n + 1;
}