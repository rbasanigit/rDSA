#include<stdio.h>
int main()
{
    int a[30], size, temp, i , j;
    printf("enter the size of array:");
    scanf("%d", &size);
    printf("enter %d elements:", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - i - 1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("the sorted elements are :\n");
    for(i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}