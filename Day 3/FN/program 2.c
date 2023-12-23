#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of elements:");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("\nEnter the elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (isJumpPossible(arr, n))
    {
        printf("\nTrue");
    }
    else
    {
        printf("\nFalse");
    }
    free(arr);
    return 0;
}
int isJumpPossible(int *nums, int n)
{
    int last = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (i > last)
        {
            return 0;
        }
        if (last < i + nums[i])
        {
            last = i + nums[i];
        }

        if (last >= n - 1)
        {
            return 1;
        }
    }
    return last >= n - 1;
}