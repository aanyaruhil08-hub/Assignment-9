/* Arithematic Operations 
Write seperate pass-by-value functions to calculate addition, subtraction, multiplication, division, and modulus of two integers. handle division and modulus by zero.*/
#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
void divide(int a, int b);
void modulus(int a, int b);

int main()
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Addition = %d\n", add(num1, num2));
    printf("Subtraction = %d\n", subtract(num1, num2));
    printf("Multiplication = %d\n", multiply(num1, num2));

    divide(num1, num2);
    modulus(num1, num2);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

void divide(int a, int b)
{
    if (b == 0)
        printf("Division is not possible (division by zero).\n");
    else
        printf("Division = %.2f\n", (float)a / b);
}

void modulus(int a, int b)
{
    if (b == 0)
        printf("Modulus is not possible (division by zero).\n");
    else
        printf("Modulus = %d\n", a % b);
}