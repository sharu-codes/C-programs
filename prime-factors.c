// write a c program to find out prime factor of given number
#include<stdio.h>
void prime_factors(int);
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    if (num<=1)
    {
        printf("there is no prime factors of %d", num);
    }
    else
    {
        prime_factors(num);
    }
}
void prime_factors(int n)
{
    printf("the prime factors of a number is: ");
    for (int i=2; i<=n; i++)
    {
        if (n%i==0)
        {
            printf("%d ", i);
            while (n%i==0)
            {
                n/=i;
            }
        }
    }
}
