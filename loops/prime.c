#include<stdio.h>
int main() {
    int num ,flag = 1,i=3;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num < 2){
        flag = 0;
    }
    else if (num == 2) {
    flag = 1;
    }
    else if (num % 2 == 0){//for even number optimization
        flag = 0;
    }
    else{
        while (i*i<=num)
        {
            if(num%i==0){
                flag = 0;
                break;
            }
            i += 2;//skip even numbers for better performance:
        } 
    }
    if(flag){
        printf("The give number %d is a prime number",num);
    }else{
        printf("The give number %d is Not a prime number",num);
    }
}
