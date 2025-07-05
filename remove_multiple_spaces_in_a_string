#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^\n]",s);
    printf("%s",s);
    int i =0, j =0, l = strlen(s);
    
    for(i = 0 ; i < l ; i++)
        
        if(s[i] == ' ' && s[i+1] == ' ') // without space takeout the i+1 condition
        {
            for( j = i ; s[j] != '\0' ; j++ ) 
                s[j] = s[j+1];
            i--;    
        }
    printf("\n%s", s);
}
