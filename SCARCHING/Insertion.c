    #include <stdio.h>
    void insertion(int arr[], int size, int pos, int value)
    {
        for (int i = size; i > pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos] = value;
    }
    int main()
    {
        int arr[10] = {1, 3, 6, 9, 14, 19};
        int size = 6;
        int value = 11;
        int pos = 4;
        
        insertion(arr, size, pos, value);
        size++;
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        return 0;
    }