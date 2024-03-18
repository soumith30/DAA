#include <stdio.h>
int isPrime(int num, int divisor) 
{
    if (divisor >= sqrt(num)) 
	{
        return 1;
    }
    if (num % divisor == 0) 
	{
        return 0;
    } 
	else 
	{
        return isPrime(num, divisor + 1);
    }
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num, 2)) 
	{
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
