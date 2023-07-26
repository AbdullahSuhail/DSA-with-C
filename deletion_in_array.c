#include <stdio.h>

void display(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
void inddeletion(int arr[], int size, int index)
{ // NOTE :- "THIS DELETION IS BY INDEX OF ARRAY NOT POSITION OF ELEMENT ""
  for (int i = index; i < size - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
}
int main()
{

  int arr[10] = {1, 2, 3, 4, 5, 6};
  int size = 6;
  int index = 2;
  display(arr, size);
  inddeletion(arr, size, index);
  size--;
  display(arr, size);

  return 0;
}