#include <stdio.h>
int gcd(int a, int b) 
{
    if (b == 0)
        return a; 
        return gcd(b, a % b); 
}
int main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 < 0 || num2 < 0) 
    {
        printf("Both numbers should be positive.\n");
        return 1;
    }
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    return 0;
}
