//5. Check whether number is even number or odd number using conditional operator. 
 #include <stdio.h>
void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Using conditional (ternary) operator
    (num % 2 == 0) ? printf("%d is Even\n", num) : printf("%d is Odd\n", num);
}
