/* Number Operations
Using pass-by-value functions, find the sum of digits, count the digits, and reverse an integer. Also determine whether the number is a palindrome.
*/

#include<stdio.h>

void CheckSum(int n);
void CheckCount(int n);
void CheckReverse(int n);
void CheckPalindrome(int n);

int main()
{
    int num;

    printf("enter integer: ");
    scanf("%d", &num);

    printf("----------Number Operations----------\n");

    CheckSum(num);
    CheckCount(num);
    CheckReverse(num);
    CheckPalindrome(num);

    return 0;
}

void CheckSum(int n)
{
    int sum=0, i;

    while (n!=0)
    {
        i=n%10;
        sum+=i;
        n=n/10;
    }

    printf("sum of digits is %d\n", sum);
}

void CheckCount(int n)
{
    int count=0;

    if (n==0)
    {
        count=1;
    }
    else
    {
        while (n!=0)
        {
            count++;
            n=n/10;
        }
    }

    printf("number of digits is %d\n", count);
}

void CheckReverse(int n)
{
    int reverse=0, i;

    while (n!=0)
    {
        i=n%10;
        reverse=reverse*10+i;
        n=n/10;
    }

    printf("reversed digit is %d\n", reverse);
}

void CheckPalindrome(int n)
{
    int original, reverse=0, remainder;

    original=n;

    while (n>0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }

    if (original==reverse)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not palindrome\n");
    }
}