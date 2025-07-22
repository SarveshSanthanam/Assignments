#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows,cols ;
    scanf("%d%d",&rows,&cols);
    int **a = (int**)malloc (rows*sizeof(int*));
    
    for(int i = 0 ; i < rows ; i ++)
    a[i] = (int*) malloc(cols*sizeof(int));
    
    int **b = (int**)malloc (rows*sizeof(int*));
    
    for(int i = 0 ; i < rows ; i ++)
    b[i] = (int*) malloc(cols*sizeof(int));
    
    int** c = (int**) malloc (rows*sizeof(int**));
    
    for(int i = 0 ; i < cols ; i++) 
    c[i] = (int*) malloc (cols*sizeof(int*));
    
    printf(" Enter the elements of array a : \n");
    for(int i = 0 ; i< rows ; i++)             
        for(int j = 0 ; j< cols ; j++)             
            scanf("%d",&a[i][j]);
    
    printf(" Enter the elements of array a : \n");            
    for(int i = 0 ; i< rows ; i++)             
        for(int j = 0 ; j< cols ; j++)             
            scanf("%d",&b[i][j]);
    
    printf("Resultant matrix : \n");            
    for(int i = 0 ; i< rows ; i++)
        for(int j = 0 ; j < rows ; j++ )
            for(int k = 0 ; k < cols ; k++)
                c[i][j] +=  a[i][k] * b[k][j];
            
    for(int i = 0 ; i< rows ; i++)             
        {
        for(int j = 0 ; j< cols ; j++)             
            printf("%d ",c[i][j]);
            printf("\n");            
        }

    return 0;
}
