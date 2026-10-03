/* GCD and LCM
Write pass-by-value functions to calculate the GCD and LCM of three positive integers.
*/

#include<stdio.h>

int CheckGCD(int a, int b, int c);
int CheckLCM(int a, int b, int c);

int main()
{
    int a, b, c;

    printf("enter numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("----------GCD and LCM----------\n");

    printf("GCD is %d\n", CheckGCD(a, b, c));
    printf("LCM is %d\n", CheckLCM(a, b, c));

    return 0;
}

int CheckGCD(int a, int b, int c)
{
    int i, gcd;

    for (i=1; i<=a && i<=b && i<=c; i++)
    {
        if (a%i==0 && b%i==0 && c%i==0)
        {
            gcd=i;
        }
    }

    return gcd;
}

int CheckLCM(int a, int b, int c)
{
    int lcm;

    if (a>=b && a>=c)
    {
        lcm=a;
    }
    else if (b>=a && b>=c)
    {
        lcm=b;
    }
    else
    {
        lcm=c;
    }

    while (1)
    {
        if (lcm%a==0 && lcm%b==0 && lcm%c==0)
        {
            return lcm;
        }

        lcm++;
    }
}