#include <stdio.h>

struct book {
    char title[50];
    char author[50];
    char publication[50];
    float price;
};

int  main() {
    int n;
    printf("enter  a number:");
    scanf("%d", &n);
    struct book b[n];
    int i;

    for (i = 0; i < n; i++) {
        printf("\nEnter details of book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", b[i].title);

        printf("Author: ");
        scanf("%s", b[i].author);

        printf("Publication: ");
        scanf("%s", b[i].publication);

        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    printf("\n--- Book Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Publication: %s\n", b[i].publication);
        printf("Price: %.2f\n", b[i].price);
    }

    return 0;
}
