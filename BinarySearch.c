#include<stdio.h>
int main()
{
    int a[10], i, begin, end, mid, size, search;
    printf("enter size of array:");
    scanf("%d", &size);
    printf("enter %d elements in ascending order:", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d", &search);
    begin = 0;
    end = size - 1;
    for(i = 0; i < size; i++)
    {
        if(begin < end)
        {
            mid = (begin + end) / 2;
            if(search == a[mid])
            {
                printf("element found at index %d\n", mid);
                break;
            }
            else if(search > a[mid])
            {
                begin = mid + 1;
            }
            else if(search < a[mid])
            {
                end = mid - 1;
            }
        }
    }
    if(begin > end)
    {
        printf("element not found!!!!!!\n");
    }
    return 0;
}