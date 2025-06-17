#include <stdio.h>
int main()
{
    int dum, num, rev = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    dum = num;

    while(num/=10)
        rev = (rev * 10) + (num % 10);
  
    (dum == rev)? printf("The Given Number is Palindrome!") : printf("The Given Number is Not a Palindrome!");
}
