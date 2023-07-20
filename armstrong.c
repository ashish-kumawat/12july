#include<stdio.h>
int main ()
{
	int num=155,rem,sum=0;
	int temp;
	temp=num;
	
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem*rem*rem;
		num/=10;
		}
		
		if(temp == sum)
		{
			printf("this is number is aramstrong ");
		}

else{
		printf("this is number is not aramstrong ");
}			
	return 0;
}
