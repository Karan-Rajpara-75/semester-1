//3. Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice using switch.
#include <stdio.h>
void main()
{
    int choice;
    float num1, num2, result;
     
    // input two numbers
    printf("enter a number(num1): ");
    scanf("%f", &num1);
    printf("enter a number(num2): ");
    scanf("%f", &num2);

    //menu
    printf("\nChoose an operation:\n");
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3. multiplication\n");
    printf("4. Division\n");
    printf("enter your choice(1-4): ");
    scanf("%d", choice);

    //switch case for operation
    switch (choice)
    {
    case 1: 
      result = num1 + num2;
      printf("Result = %.2f\n", result);        
        break;
    case 2: 
      result = num1 - num2;
      printf("Result = %.2f\n", result);        
        break;
    case 3: 
      result = num1 * num2;
      printf("Result = %.2f\n", result);        
        break;
    case 4: 
        if(num2!=0)
        {
      result = num1 / num2;
      printf("Result = %.2f\n", result);        
        }
        else
        {
            printf("ERROE! divion by zero is not allowed.\n");
        }
         break;
    
    default:
           printf("invalid choice! please select between 1-4.\n");
        break;
    }
}