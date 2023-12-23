#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];
    printf("Enter the string 1:");
    scanf("%s", str1);
    printf("Enter the string 2:");
    scanf("%s", str2);
    int result = isAnagram(str1, str2);
    if (result == 0)
        printf("false");
    else
    {
        printf("true");
    }
    return 0;
}

int isAnagram(char str1[], char str2[])
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2)
        return 0;
    int occurences[15] = {0};

    for (int i = 0; i < len1; i++)
    {
        int idx = str1[i] - 'a';
        occurences[idx]++;
    }

    for (int i = 0; i < len2; i++)
    {
        int idx = str2[i] - 'a';
        occurences[idx]--;
    }

    for (int i = 0; i < 15; i++)
    {
        if (occurences[i] != 0)
            return 0;
    }
    return 1;
}