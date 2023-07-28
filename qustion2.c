#include<stdio.h>
int main ()
{
	int num=12321,rem,sum=0;
	int temp;
	temp=num;
	
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num/=10;
		}
		
		if(temp == sum)
		{
			printf("this is number is pallindrome ");
		}

else{
		printf("this is number is not pallindrome ");
}			
	return 0;
}

