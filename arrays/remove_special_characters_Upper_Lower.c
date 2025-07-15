#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i=0,k;
    scanf("%[^\n]",a);
    printf("%s",a);
    k = strlen(a);
    for(i = 0 ; a[i] ; i++ )
    {
        if(a[i] >='a'  && a[i] <= 'z')
        a[i] = a[i]^32;  //a[i] = a[i]-32;
        
        //if(a[i] >='A'  && a[i] <= 'Z')
        //a[i] = a[i]^32;  //a[i] = a[i]+32;
        
        if( !((a[i] >='a'  && a[i] <= 'z') || (a[i] >='A'  && a[i] <= 'Z') || (a[i] ==' ') && (a[i+1] !=' ')) )
        {   
            for(int j = i ; j < k ; j++)
            a[j] = a[j+1];
            i--;
        }
    }

    a[i] = '\0';
    printf("\n%s",a);
}
