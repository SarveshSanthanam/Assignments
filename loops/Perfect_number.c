#include <stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    int i = 1, rem, sum = 0;

    while (i < num)
    {
        rem = num % i;
        if (rem == 0)
        {
            sum += i;
        }
        ++i;
    }
    if (sum == num)
    {
        printf("%d is a Perfect Number", num);
    }
    else
    {
        printf("%d is Not a Perfect Number", num);
    }
}
