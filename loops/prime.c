#include <stdio.h>

int main()
{
    int x, y = 1;
    printf("To exit, press 0\n");

    while (y != 0)
    {
        printf("Enter 1 to continue, 0 to exit: ");
        scanf("%d", &y);

        if (y == 0)
            break;

        printf("Enter the number to check if it's prime: ");
        scanf("%d", &x);

        if (x <= 1)
        {
            printf("%d is not a prime number\n", x);
        }
        else if (x == 2 || x == 3)
        {
            printf("%d is a prime number\n", x);
        }
        else if (x % 2 == 0 || x % 3 == 0)
        {
            printf("%d is not a prime number\n", x);
        }
        else
        {
            int isPrime = 1; // assume prime
            for (int i = 5; i * i <= x; i += 6)
            {
                if (x % i == 0 || x % (i + 2) == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime)
                printf("%d is a prime number\n", x);
            else
                printf("%d is not a prime number\n", x);
        }
    }

    return 0;
}
