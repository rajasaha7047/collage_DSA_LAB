#include <stdio.h>
void deletion(int arr[], int size, int pos)
{
    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[10] = {1, 4, 7, 9, 12, 16, 19};
    int size = 7;
    int pos = 4;

    deletion(arr, size, pos);
    size--;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}