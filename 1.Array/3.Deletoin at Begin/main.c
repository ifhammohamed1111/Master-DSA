#include <stdio.h>

#define MAX_SIZE 100

void deleteFirstElement(int arr[], int size)
{
    if (size <= 0)
    {
        printf("Array is empty.\n");
        return;
    }

    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("First element deleted successfully.\n");
}

int main()
{
    int arr[MAX_SIZE];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    deleteFirstElement(arr, size);

    printf("Array after deleting first element: ");
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}