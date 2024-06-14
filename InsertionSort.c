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
    for(i = 1; i < size; i++)
    {
        temp = a[i];
        j = i - 1;
        while(temp <= a[j] && j >= 0)
        {
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = temp;
    }
    printf("the sorted elements are:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}