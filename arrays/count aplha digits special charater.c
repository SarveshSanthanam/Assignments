#include<stdio.h>

int main()
{
    char*s;
    int count_alpha =0, count_special =0 ,count_digits =0;
    scanf("%[^\n]s",s);
    printf("given string : %s\n",s);
    for(int i = 0;s[i];i++ )
    {
        if((s[i] >= 'a') && (s[i] <= 'z') || (s[i] >= 'A') && (s[i] <= 'Z'))       
        count_alpha++;
        else if((s[i] >= '0') && (s[i] <= '9'))    
        count_digits++;
        else if(s[i] != 32)
        count_special++;
    }
    
    printf("apha - %d , digits - %d , special - %d", count_alpha, count_digits, count_special);
}
