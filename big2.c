#include <stdio.h>
void big2 ()
{
    int num1, num2;
    // Ask user to enter the two numbers
    printf("\nPlease Enter Two different values to find biggest of 2\n");
    // Read two numbers from the user
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        printf("%d is Largest\n", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is Largest\n", num2);
    }
    else
    {
        printf("Both are Equal\n");
    }
    //return 0;
    printf("\n this is dummy");
}
