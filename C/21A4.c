#include <stdio.h>

struct student
{
    char name[30];
    float percentage;
    int age;
};

void main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    struct student s[n];
    int i;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Percentage: ");
        scanf("%f", &s[i].percentage);

        printf("Age: ");
        scanf("%d", &s[i].age);
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Percentage: %.2f\n", s[i].percentage);
        printf("Age: %d\n", s[i].age);
    }
}