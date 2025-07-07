#include <stdio.h>
int min(int,int,int,int);
int main()
{
    int n, i, j, top, bottom, left, right;
    printf("enter the elements want to print :");
    scanf("%d", &n);
    
    for(i = 0  ; i < 2*n -1 ; i++)
    {
        for( j = 0 ; j < 2*n -1  ; j++)
            {
                top = i;
                bottom = 2*n - 2 - i ;
                left = j;
                right = 2*n - 2 - j;
                printf("%d ",n - min(top,left,right,bottom) );
                
            }
            printf("\n");
    }
        
    return 0;
}

int min(int a, int b , int c, int d)
{
    int min =0;
    if(a<b && a<c && a<d)
    min = a;
    else if(b,c && b<d)
    min = b;
    else if(c<d)
    min = c;
    else
    min = d;
    
    return min;
}
