#include<stdio.h>

void main()
{
	int a,b;
	printf("Enter no 1:");
	scanf("%d",&a);
	printf("Enter no 2:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n num 1 = %d",a);
	printf("\n num 2 = %d",b);

}
