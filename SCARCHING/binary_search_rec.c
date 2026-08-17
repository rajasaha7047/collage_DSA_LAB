#include <stdio.h>

int binary_search(int arr[], int low, int high, int value)
{
    if (high >= low)
    {

        int mid = low + (high - low) / 2;

        if (arr[mid] == value)
        {
            return mid;
        }
        else if (arr[mid] > value)
        {
            return binary_search(arr, low, mid - 1, value);
        }
        else
        {
            return binary_search(arr, mid + 1, high, value);
        }
    }
}
int main()
{
    int arr[] = {1, 3, 5, 7, 8, 9, 12, 35, 75, 78, 85, 94};
    int value = 78;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binary_search(arr, 0, n - 1, value);

    if (result == -1)
    {
        printf("%d element not found\n", value);
    }
    else
    {
        printf("%d element found and index is %d\n", value, result);
    }

    return 0;
}