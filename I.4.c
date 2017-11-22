#include <stdio.h>
#include <math.h>
int convert(long long n);

int main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in base 2 = %d in base 8 ", n, convert(n));
    return 0;
}

int convert(long long n)
{
    int Number = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%8;
        n /= 8;
        Number += remainder*pow(2,i);
        ++i;
    }
    return Number;
}
