#include<stdio.h>

void main()
{
	int year,week,days,days;
	
	printf("Enter the total no. of days:");
	scanf("%d",&days);
	
	year = days/365;
	no_days = days%365;
	week = no_days/7;
	no_days = no_days%7;
	
	printf("years:%d",year);
	printf("weeks:%d",week);
	printf("days:%d",no_days);

}
