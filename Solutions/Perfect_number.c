#include <stdio.h>

int main()
{
    int number, rem;

    printf("Enter a number\n");
    scanf("%d", &number);

    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        rem = number % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
        printf("%d is a Perfect Number", number);
    else
        printf("%d is not a Perfect Number", number);

    return 0;
}