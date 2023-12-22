#include <stdio.h>
int main()
{
    int array[20];
    int n;
    printf("Enter N:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the value:");
        scanf("%d", &array[i]);
    }
    countOccurence(array, n);
    return 0;
}
void countOccurence(int arr[], int n)
{
    if (n == 0)
        return;
    int current = arr[0];
    int occurence = 1;
    for (int i = 1; i < n; i++)
    {
        if (current == arr[i])
        {
            occurence++;
        }
        else
        {
            if (occurence > 1)
            {
                printf("%d -> %d,", current, occurence);
            }
            occurence = 1;
            current = arr[i];
        }
    }
    if (occurence > 1)
    {
        printf("%d -> %d", current, occurence);
    }
}
