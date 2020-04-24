//C program to add two number using pointers

#include <stdio.h>

int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;

    ptr1 = &num1; 
    ptr2 = &num2;

    printf("Enter any two numbers: ");
    scanf("%d%d", ptr1, ptr2);
	printf("Sum = %d \n", (*ptr1 + *ptr2));
	printf("Difference = %d \n", (*ptr1 - *ptr2));
	printf("Product = %d \n", (*ptr1 * *ptr2));
	printf("Division = %d \n", (*ptr1 / *ptr2));
    return 0;
}
