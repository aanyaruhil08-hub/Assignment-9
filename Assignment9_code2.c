/* Number Classification
Write pass-by-value function to check whether a number is even or odd, positive, negative or zero, prime and perfect. display a complete classification report. */

#include<stdio.h>

void CheckEvenOdd(int n);
void CheckPositiveNegative(int n);
void CheckPrime(int n);
void CheckPerfect(int n);

int main()
{
    int num;

    printf("enter number:");
    scanf("%d", &num);

    printf("-----Classification Report-----\n");

    CheckEvenOdd(num);
    CheckPositiveNegative(num);
    CheckPrime(num);
    CheckPerfect(num);

    return 0;
}

void CheckEvenOdd(int n)
{
    if (n%2==0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }
}

void CheckPositiveNegative(int n)
{
    if (n>0)
    {
        printf("number is positive\n");
    }
    else if (n<0)
    {
        printf("number is negative\n");
    }
    else if (n==0)
    {
        printf("number is zero\n");
    }
}

void CheckPrime(int n)
{
    int i, count=0;

    if (n<=1)
    {
        printf("number is not prime\n");
    }
    else
    {
        for (i=1; i<=n; i++)
        {
            if (n%i==0)
            {
                count++;
            }
        }

        if (count==2)
        {
            printf("number is prime\n");
        }
        else
        {
            printf("number is not prime\n");
        }
    }
}

void CheckPerfect(int n)
{
    int i, sum=0;

    if (n<=0)
    {
        printf("number is not perfect\n");
    }
    else
    {
        for (i=1; i<n; i++)
        {
            if (n%i==0)
            {
                sum=sum+i;
            }
        }

        if (sum==n)
        {
            printf("number is perfect\n");
        }
        else
        {
            printf("number is not perfect\n");
        }
    }
}
