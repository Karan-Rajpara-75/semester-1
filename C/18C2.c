#include <stdio.h>

void printWords(int n) {
    char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                    "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
                    "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    if (n >= 1000) {
        printf("%s Thousand ", ones[n / 1000]);
        n %= 1000;
    }
    if (n >= 100) {
        printf("%s Hundred ", ones[n / 100]);
        n %= 100;
    }
    if (n >= 20) {
        printf("%s ", tens[n / 10]);
        n %= 10;
    }
    if (n > 0) printf("%s ", ones[n]);
}

int main() {
    int num;
    printf("Enter amount (up to 9999): ");
    scanf("%d", &num);
    printf("In words: ");
    printWords(num);
    return 0;
}