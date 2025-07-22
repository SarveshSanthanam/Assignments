#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows1,cols1,rows2,cols2 ;
    printf("Enter the number of rows and columns for matrix1 : ");
    scanf("%d%d",&rows1,&cols1);
    printf("Enter the number of rows and columns for matrix2 : ");
    scanf("%d%d",&rows2,&cols2);
    
    if ((cols1 != cols2) && (rows2 != rows1))
    {
        printf ("Matrix Addition not Possible\n");
        return 0;
    }
    else
        printf ("Matrix Addition Possible\n");
    
    int **a = (int**) calloc (rows1,sizeof(int*));
    
    for(int i = 0 ; i < rows1 ; i ++)
    a[i] = (int*) calloc(cols1,sizeof(int));
    
    int **b = (int**)calloc (rows2, sizeof(int*));
    
    for(int i = 0 ; i < rows2 ; i ++)
    b[i] = (int*) calloc(cols2 , sizeof(int));
    
    int** c = (int**) calloc (rows1 , sizeof(int*));
    
    for(int i = 0 ; i < rows1 ; i++) 
    c[i] = (int*) calloc (cols2 ,sizeof(int));
    
    printf("Enter the elements of matrix a : \n");
    for(int i = 0 ; i< rows1 ; i++)             
        for(int j = 0 ; j< cols1 ; j++)             
            scanf("%d",&a[i][j]);
    
    printf("Enter the elements of matrix b : \n");            
    for(int i = 0 ; i< rows2 ; i++)             
        for(int j = 0 ; j< cols2 ; j++)             
            scanf("%d",&b[i][j]);
    
    printf("Resultant matrix : \n");            
    for(int i = 0 ; i< rows1 ; i++)
        for(int j = 0 ; j < cols2 ; j++ )
            c[i][j] =  a[i][j] + b[i][j];
            
    for(int i = 0 ; i< rows1 ; i++)             
        {
        for(int j = 0 ; j< cols2 ; j++)             
            printf("%d ",c[i][j]);
            printf("\n");            
        }
    
    for (int i = 0; i < rows1; i++) free(a[i]);
    for (int i = 0; i < rows2; i++) free(b[i]);
    for (int i = 0; i < rows1; i++) free(c[i]);
    free(a);
    free(b);
    free(c);

    
    return 0;
}
