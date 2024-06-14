#include<stdio.h>
void quicksort(int arr[25], int begin, int end)
{
    int i, j, pivot, temp;
    if(begin < end)
    {
        pivot = begin;
        i = begin;
        j = end;
        while (i < j)
        {
            while(arr[i] <= arr[pivot] && i < end)
            i++;
            while(arr[j] > arr[pivot])
            j--;
            if(i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quicksort(arr, begin, j - 1);
        quicksort(arr, j + 1, end);
    }
}
int main()
{
    int i, n, arr[25];
    printf("enter the no.of elements:");
    scanf("%d", &n);
    printf("enter %d elements:", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    quicksort(arr, 0, n - 1);
    printf("the sorted elements are :\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}