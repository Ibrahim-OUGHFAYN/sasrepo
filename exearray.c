#include <stdio.h>
int main()
{
    int k = 0, j;
    int arr[10] = {1, 2, 7, 5, 9, 0, 6, 9, 5, 3};
    for (int i = 0, j = 9; i < j, j > i; i++, j--)
    {
        k = arr[j];
        arr[j] = arr[i];
        arr[i] = k;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}