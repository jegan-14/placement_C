#include <stdio.h>
int main()
{
    int size;
    char shape;
    printf("Enter the shape 'S' or 'C':");
    scanf("%c", &shape);
    printf("Enter the size:");
    scanf("%d", &size);
    switch (shape)
    {
    case 'S':
    {
        int area;
        area = size * size;
        printf("Area of Square = %d", area);
        break;
    }
    case 'C':
    {
        float areaOfCircle;
        areaOfCircle = size * size * 3.14;
        printf("Area of Circle = %0.2f", areaOfCircle);
        break;
    }

    default:
        break;
    }
    return 0;
}