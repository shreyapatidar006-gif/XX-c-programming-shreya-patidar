#include <stdio.h>

int main()
{
    int n, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if(sum == temp)
    {
        printf("It is an Armstrong Number");
    }
    else
    {
        printf("It is not an Armstrong Number");
    }

    return 0;
}
