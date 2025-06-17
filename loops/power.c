#include<stdio.h>
int main(){
    int x,y,result = 1;
    printf("Enter the num and power: ");
    scanf("%d %d",&x,&y);
    while( y--)
        result *= x;
    printf("%d",result);
}
