#include <stdio.h>
int linear_search(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 4, 7, 9, 14, 18, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 14;
    int result = linear_search(arr, size, value);
    if (result == -1)
    {
        printf("%d not found in an array\n",value);
    }
    else
    {
        printf("%d found at position %d in an array\n",value, result);
    }

    return 0;
}