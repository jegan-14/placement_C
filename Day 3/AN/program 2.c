#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the no of elements:");
    scanf("%d", &n);
    char arr[5][20];
    printf("\nEnter the elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &arr[i]);
    }
    int prefixLength = getCommonPrefix(arr, n);
    if (prefixLength == 0)
        printf("''");
    for (int i = 0; i < prefixLength; i++)
    {
        printf("%c", arr[0][i]);
    }
    return 0;
}
int getCommonPrefix(char arr[][20], int n)
{
    char curr = "";
    int len = 0;
    int strLen = strlen(arr[0]);
    for (int i = 0; i < strLen; i++)
    {
        curr = arr[0][i];
        for (int j = 1; j < n; j++)
        {
            if (arr[j][i] != curr)
            {
                return len;
            }
        }
        len++;
    }

    return len;
}