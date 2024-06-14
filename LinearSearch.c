#include<stdio.h>
int main()
 {
    int a[10], i, size, search;
    printf("enter the size of array:");
    scanf("%d", &size);
    printf("enter %d elements:", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d", &search);
    for(i = 0; i < size; i++)
    {
        if(search == a[i])
        {
            printf("element found at index %d\n", i);
            break;
        }
    }
    if(i == size)
    {
        printf("element not found!!!!\n");
    }
    return 0;
 }