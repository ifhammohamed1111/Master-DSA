#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int addBegin(int arr[], int n, int data);

int main()
{
    int arr[10], data = 10, i, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elemetns of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    n = addBegin(arr, n, data);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int addBegin(int arr[], int n, int data)
{
    int i;
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = data;
    return n + 1;
}