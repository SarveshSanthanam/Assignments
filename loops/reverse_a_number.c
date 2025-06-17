#include<stdio.h>
int main()
{
    int val,rev=0;
    printf("Enter a number to reverse: ");
    scanf("%d",&val);

    while(num/=10)
        rev = (rev*10)+(num%10);
    printf("%d",rev);
}
