#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[5], n;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the values of array :\n");
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        num = num * 10 + arr[i];
    }
    num++;
    int temp = num;
    int len = 0;
    while (temp > 0)
    {
        len++;
        temp /= 10;
    }
    int *ptr = (int *)malloc(len * sizeof(int));
    for (int i = len - 1; i >= 0; i--)
    {
        int a = num % 10;
        ptr[i] = a;
        num /= 10;
    }
    printf("\nThe resultant array is ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ,", ptr[i]);
    }
    free(ptr);

    return 0;
}