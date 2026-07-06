//2. Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3 days] 
#include <stdio.h>

int main() {
    int totalDays, years, weeks, days;
    printf("Enter number of days: ");
    scanf("%d", &totalDays);

    years = totalDays / 365;
    weeks = (totalDays % 365) / 7;
    days = (totalDays % 365) % 7;

    printf("%d days = %d year(s), %d week(s), and %d day(s)\n", totalDays, years, weeks, days);

    return 0;
}
