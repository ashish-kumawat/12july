#include<stdio.h>
int swap1(int a, int b);
int swap2(int a, int b);
int swap3(int a, int b);
int main()
{
	int a,b;
	
	printf("enter two number : ");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
		printf("the swap number of a is : %d\n",a);
		printf("the swap number od b is : %d",b);
	return 0;
}
