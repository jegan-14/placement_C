#include <stdio.h>
int main()
{
    int noOfHrsNeeded, noOfDays, noOfWorkers;
    printf("Enter number of hours needed:");
    scanf("%d", &noOfHrsNeeded);
    printf("\nEnter number of days:");
    scanf("%d", &noOfDays);
    printf("\nEnter number of workers:");
    scanf("%d", &noOfWorkers);

    int noOfHoursLeft = noOfDays * 0.9 * 10;

    int workCanBeDone = noOfHoursLeft * noOfWorkers;

    if (workCanBeDone < noOfHrsNeeded)
    {
        int additionalHours = noOfHrsNeeded - workCanBeDone;
        printf("Not enough time! %d hours needed.", additionalHours);
    }
    else
    {
        int hoursLeft = workCanBeDone - noOfHrsNeeded;
        printf("Yes! %d hours left.", hoursLeft);
    }
    return 0;
}