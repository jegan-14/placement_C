#include <stdio.h>
int main()
{
    char sentence[50];
    int length, strLength, spaceCount = 0;
    printf("Enter the sentence:");
    gets(sentence);
    printf("\nEnter the Screen length:");
    scanf("%d", &length);

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != ' ')
            strLength++;
        else
            spaceCount++;
    }

    int starCount = length - strLength;

    int starToSpace = starCount / spaceCount;
    int remainingStars = starCount % spaceCount;

    for (int i = 0; i < (strLength + spaceCount); i++)
    {
        if (sentence[i] == ' ')
        {
            for (int j = 0; j < starToSpace; j++)
            {
                printf("*");
            }
            if (remainingStars > 0)
            {
                printf("*");
                remainingStars--;
            }
        }
        else
        {
            printf("%c", sentence[i]);
        }
    }

    return 0;
}
