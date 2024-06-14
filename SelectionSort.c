#include<stdio.h>
int main()
{
    int a[30], size, temp, i, j;
    printf("enter size of array:");
    scanf("%d", &size);
    printf("enter %d elements:", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("the sorted elements are:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}