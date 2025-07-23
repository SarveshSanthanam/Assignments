#include <stdio.h>
#include <string.h>

void Dictionary_Sort(char [100][100] , int );

int main()
{
    char a[100][100];
    int n;
    printf("enter the number of words you want : ");
    scanf("%d",&n);

    printf("Enter the words ");
    for(int i = 0 ; i<n ; i++ )
    scanf("%s",a[i]);
    
    printf("Before Sorting : \n");    
    for(int i = 0 ; i<n ; i++ )
    printf("%s\n",a[i]);
        
    String_Compare(a, n);
            
    printf("After Sorting : \n");            
    for(int i = 0 ; i<n ; i++ )
    printf("%s\n",a[i]);   
        
    return 0;
}

void Dictionary_Sort(char s[100][100], int n) 
{
    char temp[100];

    for (int i = 0 ; i < n ; i++)
        for (int j = 0 ; j < n - 1 - i ; j++)
            if (strcmp(s[j],s[j+1]) > 0) 
            {                
                strcpy(temp, s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], temp);
            }
}

