#include<stdio.h>
#include<string.h>

int main()
{
    char* s;
    scanf("%[^\n]s",s);
    printf("     old : %s ",s);
    int i = 0 ,temp =0;
    for(i; s[i] ; i++);
    i--;
    
    for(int j =0 ;i > j;i--,j++)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    printf("\nreversed : %s",s);
}
