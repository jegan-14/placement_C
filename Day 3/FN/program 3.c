#include <stdio.h>
int main()
{
    int n, arr[10];
    printf("Enter the no of elements : ");
    scanf("%d", &n);
    printf("\nEnter the elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int curr = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        curr += arr[i];
        if (curr < 0)
            curr = 0;
        if (curr > max)
            max = curr;
    }
    printf("\nMax sum of subarray = %d", max);
    return 0;
}