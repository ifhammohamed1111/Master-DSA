#include <stdio.h>
#include <stdlib.h>

void insertElement(int arr[], int pos, int *size, int data);
void insertElementNew(int arr[], int pos, int *size, int data);

int main()
{
    int arr[10], pos, data, n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 10)
    {
        printf("Invalid number of elements. Enter a value between 1 and 10.\n");
        return 1;
    }

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position. Enter a value between 1 and %d.\n", n + 1);
        return 1;
    }

    printf("Enter data to insert: ");
    scanf("%d", &data);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    if (n < 10)
    {
        insertElement(arr, pos, &n, data);
    }
    else
    {
        printf("Array is full.\n");
    }

    printf("Updated array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void insertElement(int arr[], int pos, int *size, int data)
{
    if (*size >= 10)
    {
        printf("Array is full.\n");
        return;
    }

    for (int i = *size - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = data;
    (*size)++;
}

void insertElementNew(int arr[], int pos, int *size, int data)
{
    if (*size >= 10)
    {
        printf("Array is full.\n");
        return;
    }

    for (int i = *size - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = data;
    (*size)++;
}
