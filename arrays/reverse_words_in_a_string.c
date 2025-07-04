#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^\n]",s);
    printf("%s",s);
    int i, k , j= 0, l = strlen(s),temp; 
    printf("\n%d" , l);
	
    k = l-1;
    for( i= 0; i<k ; k--,i++ )
    {
    	temp = s[i];
	s[i] = s[k];
	s[k] = temp;
    }

    printf("\n%s",s);

    for(i = 0; i<l; i=k ,j=k )
    {
        for(; (s[j] !=32) && (s[j] != '\0')  ; j++);
	for(k =j-- ; i<j ; j-- , i++)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
	for( ; (s[k] == 32) ; k++ );
    }
    printf("\n%s\n", s);
}


