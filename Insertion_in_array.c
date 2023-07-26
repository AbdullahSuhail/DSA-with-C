#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int indinsertion(int arr[], int size, int element, int capacity, int index)
{ // NOTE :- "THIS INSERTION IS BY INDEX OF ARRAY NOT POSITION OF ELEMENT ""
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main()
{

    int arr[10] = {1, 2, 3};
    int size = 3;
    int element = 45;
    int index = 1;
    display(arr, size);
    int t = indinsertion(arr, size, element, 10, index);
    if (t == 1)
    {
        printf("succes\n");
        size++;
        display(arr, size);
    }
    else
    {
        printf("failed\n");
    }

    return 0;
}