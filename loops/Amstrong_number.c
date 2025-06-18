#include<stdio.h>
#include<math.h>
int main()
{
	
	int val ,ref , sum =0 , num=0, a =0;
	scanf("%d",&a);
	val = a, ref = a;
	 
	num = log10(a)+1;
	//for(num=0; a ; a/=10,num++);
	
	for(int temp=0;val;val/=10)
	{
		temp = val%10;
		sum = sum + pow(temp,num);
	}

	ref==sum ? printf("%d given number is a amstrong",ref) : printf("%d is not a amstrong", ref);
}
